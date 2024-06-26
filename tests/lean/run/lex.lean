import Init.Control.Except

inductive Tok where
  | lpar
  | rpar
  | plus
  | minus
  | times
  | divide
  | num : Nat → Tok
  deriving Repr

structure Token where
  text : String -- Let's avoid parentheses in structures. This is legacy from Lean 3.
  tok  : Tok
  deriving Repr

inductive LexErr where
  | unexpected : Char → LexErr
  | notDigit : Char → LexErr
  deriving Repr

def Char.digit? (char : Char) : Option Nat :=
  if char.isDigit then
    some (char.toNat - '0'.toNat)
  else
    none

mutual
  def lex [Monad m] [MonadExceptOf LexErr m] (it : String.Iterator) : m (List Token) := do
    if it.atEnd then
      return []
    else
      match it.curr with
      | '(' => return { text := "(", tok := Tok.lpar } :: (← lex it.next)
      | ')' => return { text := ")", tok := Tok.rpar } :: (← lex it.next)
      | '+' => return { text := "+", tok := Tok.plus } :: (← lex it.next)
      | other =>
        match other.digit? with
        | none   => throw <| LexErr.unexpected other
        | some d => lexnumber d [other] it.next

  def lexnumber [Monad m] [MonadExceptOf LexErr m] (soFar : Nat) (text : List Char) (it : String.Iterator) : m (List Token) :=
    if it.atEnd then
      return [{ text := text.reverse.asString, tok := Tok.num soFar }]
    else
      let c := it.curr
      match c.digit? with
      | none   => return { text := text.reverse.asString, tok := Tok.num soFar } :: (← lex it)
      | some d => lexnumber (soFar * 10 + d) (c :: text) it.next
end

/-- info: Except.ok [] -/
#guard_msgs in
#eval lex (m := Except LexErr) "".iter

/-- info: Except.ok [{ text := "123", tok := Tok.num 123 }] -/
#guard_msgs in
#eval lex (m := Except LexErr) "123".iter

/--
info: Except.ok [{ text := "1", tok := Tok.num 1 }, { text := "+", tok := Tok.plus }, { text := "23", tok := Tok.num 23 }]
-/
#guard_msgs in
#eval lex (m := Except LexErr) "1+23".iter

/--
info: Except.ok [{ text := "1", tok := Tok.num 1 },
 { text := "+", tok := Tok.plus },
 { text := "23", tok := Tok.num 23 },
 { text := "(", tok := Tok.lpar },
 { text := ")", tok := Tok.rpar }]
-/
#guard_msgs in
#eval lex (m := Except LexErr) "1+23()".iter

namespace NonMutual

def lex [Monad m] [MonadExceptOf LexErr m] (current? : Option (List Char × Nat)) (it : String.Iterator) : m (List Token) := do
  let currTok := fun
    | (cs, n) => { text := {data := cs.reverse}, tok := Tok.num n }
  if it.atEnd then
    return current?.toList.map currTok
  else
    let emit (tok : Token) (xs : List Token) : List Token :=
      match current? with
      | none => tok :: xs
      | some numInfo => currTok numInfo :: tok :: xs;
    match it.curr with
      | '(' => return emit { text := "(", tok := Tok.lpar } (← lex none it.next)
      | ')' => return emit { text := ")", tok := Tok.rpar } (← lex none it.next)
      | '+' => return emit { text := "+", tok := Tok.plus } (← lex none it.next)
      | other =>
        match other.digit? with
          | none => throw <| LexErr.unexpected other
          | some d => match current? with
            | none => lex (some ([other], d)) it.next
            | some (tokTxt, soFar) => lex (other :: tokTxt, soFar * 10 + d) it.next

/-- info: Except.ok [] -/
#guard_msgs in
#eval lex (m := Except LexErr) none "".iter

/-- info: Except.ok [{ text := "123", tok := Tok.num 123 }] -/
#guard_msgs in
#eval lex (m := Except LexErr) none "123".iter

/--
info: Except.ok [{ text := "1", tok := Tok.num 1 }, { text := "+", tok := Tok.plus }, { text := "23", tok := Tok.num 23 }]
-/
#guard_msgs in
#eval lex (m := Except LexErr) none "1+23".iter

/--
info: Except.ok [{ text := "1", tok := Tok.num 1 },
 { text := "+", tok := Tok.plus },
 { text := "23", tok := Tok.num 23 },
 { text := "(", tok := Tok.lpar },
 { text := ")", tok := Tok.rpar }]
-/
#guard_msgs in
#eval lex (m := Except LexErr) none "1+23()".iter
