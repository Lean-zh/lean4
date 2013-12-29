/*
Copyright (c) 2013 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include "kernel/expr.h"

namespace lean {
/** \brief Return (Type m)  m >= bottom + Offset */
extern expr const TypeM;

/** \brief Return (Type u)  u >= m + Offset */
extern expr const TypeU;

/** \brief Return the Lean Boolean type. */
expr mk_bool_type();
extern expr const Bool;
bool is_bool(expr const & e);

/** \brief Create a Lean Boolean value (true/false) */
expr mk_bool_value(bool v);
extern expr const True;
extern expr const False;
/** \brief Return true iff \c e is a Lean Boolean value. */
bool is_bool_value(expr const & e);
/**
    \brief Convert a Lean Boolean value into a C++ Boolean value.
    \pre is_bool_value(e)
*/
bool to_bool(expr const & e);
/** \brief Return true iff \c e is the Lean true value. */
bool is_true(expr const & e);
/** \brief Return true iff \c e is the Lean false value. */
bool is_false(expr const & e);

/** \brief Return the Lean If-Then-Else operator. It has type: pi (A : Type), bool -> A -> A -> A */
expr mk_if_fn();
bool is_if_fn(expr const & e);
inline bool is_if(expr const & e) { return is_app(e) && is_if_fn(arg(e, 0)); }
/** \brief Return the term (if A c t e) */
inline expr mk_if(expr const & A, expr const & c, expr const & t, expr const & e) { return mk_app(mk_if_fn(), A, c, t, e); }
inline expr If(expr const & A, expr const & c, expr const & t, expr const & e) { return mk_if(A, c, t, e); }
/** \brief Return the term (if bool c t e) */
inline expr mk_bool_if(expr const & c, expr const & t, expr const & e) { return mk_if(mk_bool_type(), c, t, e); }
inline expr bIf(expr const & c, expr const & t, expr const & e) { return mk_bool_if(c, t, e); }

/** \brief Return the Lean Implies operator */
expr mk_implies_fn();
bool is_implies_fn(expr const & e);
inline bool is_implies(expr const & e) { return is_app(e) && is_implies_fn(arg(e, 0)); }
/** \brief Return the term (e1 => e2) */
inline expr mk_implies(expr const & e1, expr const & e2) { return mk_app(mk_implies_fn(), e1, e2); }
inline expr Implies(expr const & e1, expr const & e2) { return mk_implies(e1, e2); }

/** \brief Return the Lean Iff operator */
expr mk_iff_fn();
bool is_iff_fn(expr const & e);
inline bool is_iff(expr const & e) { return is_app(e) && is_iff_fn(arg(e, 0)); }
/** \brief Return (e1 iff e2) */
inline expr mk_iff(expr const & e1, expr const & e2) { return mk_app(mk_iff_fn(), e1, e2); }
inline expr Iff(expr const & e1, expr const & e2) { return mk_iff(e1, e2); }

/** \brief Return the Lean And operator */
expr mk_and_fn();
bool is_and_fn(expr const & e);
inline bool is_and(expr const & e) { return is_app(e) && is_and_fn(arg(e, 0)); }
/** \brief Return (e1 and e2) */
inline expr mk_and(expr const & e1, expr const & e2) { return mk_app(mk_and_fn(), e1, e2); }
inline expr And(expr const & e1, expr const & e2) { return mk_and(e1, e2); }

/** \brief Return the Lean Or operator */
expr mk_or_fn();
bool is_or_fn(expr const & e);
inline bool is_or(expr const & e) { return is_app(e) && is_or_fn(arg(e, 0)); }
/** \brief Return (e1 Or e2) */
inline expr mk_or(expr const & e1, expr const & e2) { return mk_app(mk_or_fn(), e1, e2); }
inline expr Or(expr const & e1, expr const & e2) { return mk_or(e1, e2); }

/** \brief Return the Lean not operator */
expr mk_not_fn();
bool is_not_fn(expr const & e);
inline bool is_not(expr const & e) { return is_app(e) && is_not_fn(arg(e, 0)); }
/** \brief Return (Not e) */
inline expr mk_not(expr const & e) { return mk_app(mk_not_fn(), e); }
inline expr Not(expr const & e) { return mk_not(e); }

/** \brief Return the Lean forall operator. It has type: <tt>Pi (A : Type), (A -> bool) -> Bool</tt> */
expr mk_forall_fn();
bool is_forall_fn(expr const & e);
inline bool is_forall(expr const & e) { return is_app(e) && is_forall_fn(arg(e, 0)); }
/** \brief Return the term (Forall A P), where A is a type and P : A -> bool */
inline expr mk_forall(expr const & A, expr const & P) { return mk_app(mk_forall_fn(), A, P); }
inline expr Forall(expr const & A, expr const & P) { return mk_forall(A, P); }

/** \brief Return the Lean exists operator. It has type: <tt>Pi (A : Type), (A -> Bool) -> Bool</tt> */
expr mk_exists_fn();
bool is_exists_fn(expr const & e);
inline bool is_exists(expr const & e) { return is_app(e) && is_exists_fn(arg(e, 0)); }
/** \brief Return the term (exists A P), where A is a type and P : A -> bool */
inline expr mk_exists(expr const & A, expr const & P) { return mk_app(mk_exists_fn(), A, P); }
inline expr Exists(expr const & A, expr const & P) { return mk_exists(A, P); }

/** \brief Homogeneous equality. It has type: <tt>Pi (A : Type), A -> A -> Bool</tt> */
expr mk_homo_eq_fn();
bool is_homo_eq_fn(expr const & e);
inline bool is_homo_eq(expr const & e) { return is_app(e) && is_homo_eq_fn(arg(e, 0)); }
/** \brief Return the term (homo_eq A l r) */
inline expr mk_homo_eq(expr const & A, expr const & l, expr const & r) { return mk_app(mk_homo_eq_fn(), A, l, r); }
inline expr hEq(expr const & A, expr const & l, expr const & r) { return mk_homo_eq(A, l, r); }

/** \brief Modus Ponens axiom */
expr mk_mp_fn();
/** \brief (Axiom) {a : Bool}, {b : Bool}, H1 : a => b, H2 : a |- MP(a, b, H1, H2) : b */
inline expr MP(expr const & a, expr const & b, expr const & H1, expr const & H2) { return mk_app(mk_mp_fn(), a, b, H1, H2); }

/** \brief Discharge axiom */
expr mk_discharge_fn();
/** \brief (Axiom) {a : Bool}, {b : Bool}, H : a -> b |- Discharge(a, b, H) : a => b */
inline expr Discharge(expr const & a, expr const & b, expr const & H) { return mk_app(mk_discharge_fn(), a, b, H); }

/** \brief Case analysis axiom */
expr mk_case_fn();
/** \brief (Axiom) P : Bool -> Bool, H1 : P True, H2 : P False, a : Bool |- Case(P, H1, H2, a) : P a */
inline expr Case(expr const & P, expr const & H1, expr const & H2, expr const & a) { return mk_app(mk_case_fn(), P, H1, H2, a); }

/** \brief Reflexivity axiom */
expr mk_refl_fn();
/** \brief (Axiom) {A : Type u}, a : A |- Refl(A, a) : a = a */
inline expr Refl(expr const & A, expr const & a) { return mk_app(mk_refl_fn(), A, a); }

/** \brief Substitution axiom */
expr mk_subst_fn();
/** \brief (Axiom) {A : Type u}, {a b : A}, P : A -> Bool, H1 : P a, H2 : a = b |- Subst(A, a, b, P, H1, H2) : P b */
inline expr Subst(expr const & A, expr const & a, expr const & b, expr const & P, expr const & H1, expr const & H2) { return mk_app({mk_subst_fn(), A, a, b, P, H1, H2}); }

/** \brief Eta conversion axiom */
expr mk_eta_fn();
/** \brief (Axiom) {A : Type u}, {B : A -> Type u}, f : (Pi x : A, B x) |- Eta(A, B, f) : ((Fun x : A => f x) = f) */
inline expr Eta(expr const & A, expr const & B, expr const & f) { return mk_app(mk_eta_fn(), A, B, f); }

/** \brief Implies Anti-symmetry */
expr mk_imp_antisym_fn();
/** \brief (Axiom) {a : Bool}, {b : Bool}, H1 : a => b, H2 : b => a |- ImpAntisym(a, b, H1, H2) : a = b */
inline expr ImpAntisym(expr const & a, expr const & b, expr const & H1, expr const & H2) { return mk_app(mk_imp_antisym_fn(), a, b, H1, H2); }

/** \brief Abstraction axiom */
expr mk_abst_fn();
/** \brief (Axiom) {A : Type u} {B : A -> Type u}, f g : {Pi x : A, B x}, H : (Pi x : A, (f x) = (g x)) |- Abst(A, B, f, g, H) : f = g */
inline expr Abst(expr const & A, expr const & B, expr const & f, expr const & g, expr const & H) { return mk_app({mk_abst_fn(), A, B, f, g, H}); }

/** \brief Heterogeneous symmetry axiom */
expr mk_hsymm_fn();
/** \brief (Axiom) {A : Type u}, {B : Type u}, {a : A}, {b : B}, H1 : a = b |- HSymm(A, B, a, b, H1) : b = a */
inline expr HSymm(expr const & A, expr const & B, expr const & a, expr const & b, expr const & H1) {
    return mk_app({mk_hsymm_fn(), A, B, a, b, H1});
}

/** \brief Heterogeneous Transitivity axiom */
expr mk_htrans_fn();
/** \brief (Axiom) {A : Type u}, {B : Type u}, {C : Type u}, {a : A}, {b : B} {c : C}, H1 : a = b, H2 : b = c |- TransExt(A, B, a, b, c, H1, H2) : a = c */
inline expr HTrans(expr const & A, expr const & B, expr const & C, expr const & a, expr const & b, expr const & c, expr const & H1, expr const & H2) {
    return mk_app({mk_htrans_fn(), A, B, C, a, b, c, H1, H2});
}

class environment;
/** \brief Initialize the environment with basic builtin declarations and axioms */
void import_kernel(environment const & env);

/**
   \brief Helper macro for defining constants such as bool_type, int_type, int_add, etc.
*/
#define MK_BUILTIN(Name, ClassName)                                     \
expr mk_##Name() {                                                      \
    static LEAN_THREAD_LOCAL expr r = mk_value(*(new ClassName()));     \
    return r;                                                           \
}

/**
   \brief Helper macro for generating "defined" constants.
*/
#define MK_CONSTANT(Name, NameObj)                                      \
static name Name ## _name = NameObj;                                    \
expr mk_##Name() {                                                      \
    static LEAN_THREAD_LOCAL expr r = mk_constant(Name ## _name);       \
    return r ;                                                          \
}                                                                       \
bool is_ ## Name(expr const & e) {                                      \
    return is_constant(e) && const_name(e) == Name ## _name;            \
}

#define MK_IS_BUILTIN(Name, Builtin)                                    \
bool Name(expr const & e) {                                             \
    expr const & v = Builtin;                                           \
    return e == v || (is_constant(e) && const_name(e) == to_value(v).get_name()); \
}
}
