/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
universes u v w

namespace Std

inductive PersistentArrayNode (α : Type u) :=
  | node (cs : Array (PersistentArrayNode α)) : PersistentArrayNode α
  | leaf (vs : Array α)                       : PersistentArrayNode α

namespace PersistentArrayNode

instance {α : Type u} : Inhabited (PersistentArrayNode α) := ⟨leaf #[]⟩

def isNode {α} : PersistentArrayNode α → Bool
  | node _ => true
  | leaf _ => false

end PersistentArrayNode

abbrev PersistentArray.initShift : USize := 5
abbrev PersistentArray.branching : USize := USize.ofNat (2 ^ PersistentArray.initShift.toNat)

structure PersistentArray (α : Type u) :=
  /- Recall that we run out of memory if we have more than `usizeSz/8` elements.
     So, we can stop adding elements at `root` after `size > usizeSz`, and
     keep growing the `tail`. This modification allow us to use `USize` instead
     of `Nat` when traversing `root`. -/
  (root    : PersistentArrayNode α := PersistentArrayNode.node (Array.mkEmpty PersistentArray.branching.toNat))
  (tail    : Array α               := Array.mkEmpty PersistentArray.branching.toNat)
  (size    : Nat                   := 0)
  (shift   : USize                 := PersistentArray.initShift)
  (tailOff : Nat                   := 0)

abbrev PArray (α : Type u) := PersistentArray α

namespace PersistentArray
/- TODO: use proofs for showing that array accesses are not out of bounds.
   We can do it after we reimplement the tactic framework. -/
variables {α : Type u}
open Std.PersistentArrayNode

def empty : PersistentArray α := {}

def isEmpty (a : PersistentArray α) : Bool := a.size == 0

instance : Inhabited (PersistentArray α) := ⟨{}⟩

def mkEmptyArray : Array α := Array.mkEmpty branching.toNat

abbrev mul2Shift (i : USize) (shift : USize) : USize := i.shiftLeft shift
abbrev div2Shift (i : USize) (shift : USize) : USize := i.shiftRight shift
abbrev mod2Shift (i : USize) (shift : USize) : USize := USize.land i ((USize.shiftLeft 1 shift) - 1)

partial def getAux [Inhabited α] : PersistentArrayNode α → USize → USize → α
  | node cs, i, shift => getAux (cs.get! (div2Shift i shift).toNat) (mod2Shift i shift) (shift - initShift)
  | leaf cs, i, _     => cs.get! i.toNat

def get! [Inhabited α] (t : PersistentArray α) (i : Nat) : α :=
  if i >= t.tailOff then
    t.tail.get! (i - t.tailOff)
  else
    getAux t.root (USize.ofNat i) t.shift

def getOp [Inhabited α] (self : PersistentArray α) (idx : Nat) : α :=
  self.get! idx

partial def setAux : PersistentArrayNode α → USize → USize → α → PersistentArrayNode α
  | node cs, i, shift, a =>
    let j     := div2Shift i shift
    let i     := mod2Shift i shift
    let shift := shift - initShift
    node $ cs.modify j.toNat $ fun c => setAux c i shift a
  | leaf cs, i, _,     a => leaf (cs.set! i.toNat a)

def set (t : PersistentArray α) (i : Nat) (a : α) : PersistentArray α :=
  if i >= t.tailOff then
    { t with tail := t.tail.set! (i - t.tailOff) a }
  else
    { t with root := setAux t.root (USize.ofNat i) t.shift a }

@[specialize] partial def modifyAux [Inhabited α] (f : α → α) : PersistentArrayNode α → USize → USize → PersistentArrayNode α
  | node cs, i, shift =>
    let j     := div2Shift i shift
    let i     := mod2Shift i shift
    let shift := shift - initShift
    node $ cs.modify j.toNat $ fun c => modifyAux f c i shift
  | leaf cs, i, _     => leaf (cs.modify i.toNat f)

@[specialize] def modify [Inhabited α] (t : PersistentArray α) (i : Nat) (f : α → α) : PersistentArray α :=
  if i >= t.tailOff then
    { t with tail := t.tail.modify (i - t.tailOff) f }
  else
    { t with root := modifyAux f t.root (USize.ofNat i) t.shift }

partial def mkNewPath (shift : USize) (a : Array α) : PersistentArrayNode α :=
  if shift == 0 then
    leaf a
  else
    node (mkEmptyArray.push (mkNewPath (shift - initShift) a))

partial def insertNewLeaf : PersistentArrayNode α → USize → USize → Array α → PersistentArrayNode α
  | node cs,   i, shift, a =>
    if i < branching then
      node (cs.push (leaf a))
    else
      let j     := div2Shift i shift
      let i     := mod2Shift i shift
      let shift := shift - initShift
      if j.toNat < cs.size then
         node $ cs.modify j.toNat fun c => insertNewLeaf c i shift a
      else
         node $ cs.push $ mkNewPath shift a
  | n, _, _, _ => n -- unreachable

def mkNewTail (t : PersistentArray α) : PersistentArray α :=
  if t.size <= (mul2Shift 1 (t.shift + initShift)).toNat then
    { t with
      tail    := mkEmptyArray, root := insertNewLeaf t.root (USize.ofNat (t.size - 1)) t.shift t.tail,
      tailOff := t.size }
  else
    { t with
      tail := #[],
      root := let n := mkEmptyArray.push t.root;
              node (n.push (mkNewPath t.shift t.tail)),
      shift   := t.shift + initShift,
      tailOff := t.size }

def tooBig : Nat := USize.size / 8

def push (t : PersistentArray α) (a : α) : PersistentArray α :=
  let r := { t with tail := t.tail.push a, size := t.size + 1 }
  if r.tail.size < branching.toNat || t.size >= tooBig then
    r
  else
    mkNewTail r

private def emptyArray {α : Type u} : Array (PersistentArrayNode α) :=
  Array.mkEmpty PersistentArray.branching.toNat

partial def popLeaf : PersistentArrayNode α → Option (Array α) × Array (PersistentArrayNode α)
  | n@(node cs) =>
    if h : cs.size ≠ 0 then
      let idx : Fin cs.size := ⟨cs.size - 1, Nat.predLt h⟩
      let last := cs.get idx
      let cs'  := cs.set idx (arbitrary _)
      match popLeaf last with
      | (none,   _)       => (none, emptyArray)
      | (some l, newLast) =>
        if newLast.size == 0 then
          let cs' := cs'.pop
          if cs'.isEmpty then (some l, emptyArray) else (some l, cs')
        else
          (some l, cs'.set (Array.sizeSetEq cs idx _ ▸ idx) (node newLast))
    else
      (none, emptyArray)
  | leaf vs   => (some vs, emptyArray)

def pop (t : PersistentArray α) : PersistentArray α :=
  if t.tail.size > 0 then
    { t with tail := t.tail.pop, size := t.size - 1 }
  else
    match popLeaf t.root with
    | (none, _) => t
    | (some last, newRoots) =>
      let last       := last.pop
      let newSize    := t.size - 1
      let newTailOff := newSize - last.size
      if newRoots.size == 1 && (newRoots.get! 0).isNode then
        { root    := newRoots.get! 0,
          shift   := t.shift - initShift,
          size    := newSize,
          tail    := last,
          tailOff := newTailOff }
      else
        { t with
          root    := node newRoots,
          size    := newSize,
          tail    := last,
          tailOff := newTailOff }

section
variables {m : Type v → Type w} [Monad m]
variable {β : Type v}

@[specialize] private partial def foldlMAux (f : β → α → m β) : PersistentArrayNode α → β → m β
  | node cs, b => cs.foldlM (fun b c => foldlMAux f c b) b
  | leaf vs, b => vs.foldlM f b

@[specialize] private partial def foldlFromMAux (f : β → α → m β) : PersistentArrayNode α → USize → USize → β → m β
  | node cs, i, shift, b => do
    let j    := (div2Shift i shift).toNat
    let b ← foldlFromMAux f (cs.get! j) (mod2Shift i shift) (shift - initShift) b
    cs.foldlM (init := b) (start := j+1) fun b c => foldlMAux f c b
  | leaf vs, i, _, b => vs.foldlM (init := b) (start := i.toNat) f

@[specialize] def foldlM (t : PersistentArray α) (f : β → α → m β) (init : β) (start : Nat := 0) : m β := do
  if start == 0 then
    let b ← foldlMAux f t.root init
    t.tail.foldlM f b
  else if start >= t.tailOff then
    t.tail.foldlM (init := init) (start := start - t.tailOff) f
  else do
    let b ← foldlFromMAux f t.root (USize.ofNat start) t.shift init;
    t.tail.foldlM f b

@[specialize]
partial def forInAux {α : Type u} {β : Type v} {m : Type v → Type w} [Monad m] [inh : Inhabited β]
    (f : α → β → m (ForInStep β)) (n : PersistentArrayNode α) (b : β) : m (ForInStep β) := do
  let mut b := b
  match n with
  | leaf vs =>
    for v in vs do
      match (← f v b) with
      | r@(ForInStep.done b) => return r
      | ForInStep.yield bNew => b := bNew
    return ForInStep.yield b
  | node cs =>
    for c in cs do
      match (← forInAux f c b) with
      | r@(ForInStep.done b) => return r
      | ForInStep.yield bNew => b := bNew
    return ForInStep.yield b

@[specialize] def forIn (t : PersistentArray α) (init : β) (f : α → β → m (ForInStep β)) : m β := do
  match (← forInAux (inh := ⟨init⟩) f t.root init) with
  | ForInStep.done b  => pure b
  | ForInStep.yield b =>
    let mut b := b
    for v in t.tail do
      match (← f v b) with
      | ForInStep.done b => return b
      | ForInStep.yield bNew => b := bNew
    return b

@[specialize] partial def findSomeMAux (f : α → m (Option β)) : PersistentArrayNode α → m (Option β)
  | node cs => cs.findSomeM? (fun c => findSomeMAux f c)
  | leaf vs => vs.findSomeM? f

@[specialize] def findSomeM? (t : PersistentArray α) (f : α → m (Option β)) : m (Option β) := do
  match (← findSomeMAux f t.root) with
  | none   => t.tail.findSomeM? f
  | some b => pure (some b)

@[specialize] partial def findSomeRevMAux (f : α → m (Option β)) : PersistentArrayNode α → m (Option β)
  | node cs => cs.findSomeRevM? (fun c => findSomeRevMAux f c)
  | leaf vs => vs.findSomeRevM? f

@[specialize] def findSomeRevM? (t : PersistentArray α) (f : α → m (Option β)) : m (Option β) := do
  match (← t.tail.findSomeRevM? f) with
  | none   => findSomeRevMAux f t.root
  | some b => pure (some b)

@[specialize] partial def forMAux (f : α → m PUnit) : PersistentArrayNode α → m PUnit
  | node cs => cs.forM (fun c => forMAux f c)
  | leaf vs => vs.forM f

@[specialize] def forM (t : PersistentArray α) (f : α → m PUnit) : m PUnit :=
  forMAux f t.root *> t.tail.forM f

end

@[inline] def foldl {β} (t : PersistentArray α) (f : β → α → β) (init : β) (start : Nat := 0) : β :=
  Id.run $ t.foldlM f init start

@[inline] def filter (as : PersistentArray α) (p : α → Bool) : PersistentArray α :=
  as.foldl (init := {}) fun asNew a => if p a then asNew.push a else asNew

def toArray (t : PersistentArray α) : Array α :=
  t.foldl Array.push #[]

def append (t₁ t₂ : PersistentArray α) : PersistentArray α :=
  if t₁.isEmpty then
    t₂
  else
    t₂.foldl PersistentArray.push t₁

instance : Append (PersistentArray α) := ⟨append⟩

@[inline] def findSome? {β} (t : PersistentArray α) (f : α → (Option β)) : Option β :=
  Id.run $ t.findSomeM? f

@[inline] def findSomeRev? {β} (t : PersistentArray α) (f : α → (Option β)) : Option β :=
  Id.run $ t.findSomeRevM? f

def toList (t : PersistentArray α) : List α :=
  (t.foldl (init := []) fun xs x => x :: xs).reverse

section
variables {m : Type → Type w} [Monad m]
@[specialize] partial def anyMAux (p : α → m Bool) : PersistentArrayNode α → m Bool
  | node cs => cs.anyM fun c => anyMAux p c
  | leaf vs => vs.anyM p

@[specialize] def anyM (t : PersistentArray α) (p : α → m Bool) : m Bool :=
  anyMAux p t.root <||> t.tail.anyM p

@[inline] def allM (a : PersistentArray α) (p : α → m Bool) : m Bool := do
  let b ← anyM a (fun v => do let b ← p v; pure (not b))
  pure (not b)

end

@[inline] def any (a : PersistentArray α) (p : α → Bool) : Bool :=
  Id.run $ anyM a p

@[inline] def all (a : PersistentArray α) (p : α → Bool) : Bool :=
  !any a fun v => !p v

section
variables {m : Type u → Type v} [Monad m]
variable {β : Type u}

@[specialize] partial def mapMAux (f : α → m β) : PersistentArrayNode α → m (PersistentArrayNode β)
  | node cs => node <$> cs.mapM (fun c => mapMAux f c)
  | leaf vs => leaf <$> vs.mapM f

@[specialize] def mapM (f : α → m β) (t : PersistentArray α) : m (PersistentArray β) := do
  let root ← mapMAux f t.root
  let tail ← t.tail.mapM f
  pure { t with tail := tail, root := root }

end

@[inline] def map {β} (f : α → β) (t : PersistentArray α) : PersistentArray β :=
  Id.run $ t.mapM f

structure Stats :=
  (numNodes : Nat)
  (depth : Nat)
  (tailSize : Nat)

partial def collectStats : PersistentArrayNode α → Stats → Nat → Stats
  | node cs, s, d =>
    cs.foldl (fun s c => collectStats c s (d+1))
      { s with numNodes := s.numNodes + 1,
        depth    := Nat.max d s.depth }
  | leaf vs, s, d => { s with numNodes := s.numNodes + 1, depth := Nat.max d s.depth }

def stats (r : PersistentArray α) : Stats :=
  collectStats r.root { numNodes := 0, depth := 0, tailSize := r.tail.size } 0

def Stats.toString (s : Stats) : String :=
  s!"\{nodes := {s.numNodes}, depth := {s.depth}, tail size := {s.tailSize}}"

instance : ToString Stats := ⟨Stats.toString⟩

end PersistentArray

def mkPersistentArray {α : Type u} (n : Nat) (v : α) : PArray α :=
  n.fold (init := PersistentArray.empty) fun i p => p.push v

@[inline] def mkPArray {α : Type u} (n : Nat) (v : α) : PArray α :=
  mkPersistentArray n v

end Std

open Std (PersistentArray PersistentArray.empty)

def List.toPersistentArrayAux {α : Type u} : List α → PersistentArray α → PersistentArray α
  | [],    t => t
  | x::xs, t => toPersistentArrayAux xs (t.push x)

def List.toPersistentArray {α : Type u} (xs : List α) : PersistentArray α :=
  xs.toPersistentArrayAux {}

def Array.toPersistentArray {α : Type u} (xs : Array α) : PersistentArray α :=
  xs.foldl (init := PersistentArray.empty) fun p x => p.push x

@[inline] def Array.toPArray {α : Type u} (xs : Array α) : PersistentArray α :=
  xs.toPersistentArray
