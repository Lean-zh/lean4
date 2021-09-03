// Lean compiler output
// Module: Init.Conv
// Imports: Init.Notation
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
static lean_object* l_Lean_Parser_Tactic_Conv_rewrite___closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__15;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__19;
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__13;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__18;
static lean_object* l_Lean_Parser_Tactic_Conv_convRw_____closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_convArgs___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedTactic___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq___closed__6;
lean_object* l_Lean_Parser_Tactic_Conv_convSeq;
static lean_object* l_Lean_Parser_Tactic_Conv_change___closed__5;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_object* l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__5;
lean_object* l_Lean_Syntax_getHeadInfo_x3f(lean_object*);
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__22;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__7;
static lean_object* l_Lean_Parser_Tactic_Conv_rewrite___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__24;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__6;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__16;
static lean_object* l_Lean_Parser_Tactic_Conv_arg___closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__8;
static lean_object* l_Lean_Parser_Tactic_Conv_trace___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_trace___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__18;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__15;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__9;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__9;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__9;
static lean_object* l_Lean_Parser_Tactic_Conv_funext___closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_change___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__10;
lean_object* l_Lean_Parser_Tactic_Conv_nestedConv;
static lean_object* l_Lean_Parser_Tactic_Conv_lhs___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_congr___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__8;
static lean_object* l_Lean_Parser_Tactic_Conv_lhs___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__32;
static lean_object* l_Lean_Parser_Tactic_Conv_funext___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__11;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_trace___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_funext___closed__8;
static lean_object* l_Lean_Parser_Tactic_Conv_change___closed__6;
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Tactic_Conv_convArgs___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_funext___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_paren___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_whnf___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__23;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__14;
static lean_object* l_Lean_Parser_Tactic_Conv_rewrite___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__19;
static lean_object* l_Lean_Parser_Tactic_Conv_rewrite___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedTactic___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_congr___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_funext___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__35;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__7;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__13;
static lean_object* l_Lean_Parser_Tactic_Conv_arg___closed__9;
lean_object* l_Lean_Parser_Tactic_Conv_simp;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__10;
static lean_object* l_Lean_Parser_Tactic_Conv_arg___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_convRw_____closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedTactic___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedTactic___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__12;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__24;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12;
static lean_object* l_Lean_Parser_Tactic_Conv_lhs___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_change___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_change___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_rhs___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__26;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__20;
lean_object* l_Lean_Parser_Tactic_Conv_convRight;
static lean_object* l_Lean_Parser_Tactic_Conv_arg___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_arg___closed__8;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__17;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__21;
static lean_object* l_Lean_Parser_Tactic_Conv_convRw_____closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__22;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__31;
lean_object* l_Lean_Parser_Tactic_Conv_paren;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__2;
lean_object* l_Lean_Parser_Tactic_Conv_convSeqBracketed;
extern lean_object* l_Lean_Parser_Tactic_simpStar;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedTactic___closed__7;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__7;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__14;
lean_object* l_Lean_Parser_Tactic_Conv_whnf;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__21;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_trace___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__23;
lean_object* l_Lean_Parser_Tactic_Conv_rewrite;
extern lean_object* l_Lean_Parser_Tactic_rwRuleSeq;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__13;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__11;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__16;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_convRw_____closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__23;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__34;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__13;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_skip___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_change___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_lhs___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__19;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__27;
static lean_object* l_Lean_Parser_Tactic_Conv_paren___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__11;
lean_object* l_Lean_Parser_Tactic_Conv_convArgs;
lean_object* l_Lean_Parser_Tactic_Conv_conv_quot;
static lean_object* l_Lean_Parser_Tactic_Conv_skip___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__8;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__22;
static lean_object* l_Lean_Parser_Tactic_Conv_whnf___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_rhs___closed__1;
lean_object* l_Lean_Parser_Tactic_Conv_convRw__;
lean_object* l_Lean_Parser_Tactic_Conv_conv;
static lean_object* l_Lean_Parser_Tactic_Conv_convRight___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__9;
static lean_object* l_Lean_Parser_Tactic_Conv_skip___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__7;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__17;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__8;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__7;
lean_object* l_Lean_Parser_Tactic_Conv_congr;
extern lean_object* l_Lean_Parser_Tactic_simpLemma;
lean_object* l_Lean_Parser_Tactic_Conv_convLeft;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__16;
lean_object* l_Lean_Parser_Tactic_Conv_skip;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__16;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__12;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__26;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__17;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__18;
lean_object* l_Lean_Parser_Tactic_Conv_conv_xb7_x2e__;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq___closed__5;
lean_object* l_Lean_Parser_Tactic_Conv_change;
static lean_object* l_Lean_Parser_Tactic_Conv_arg___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_paren___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_convArgs___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_convLeft___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_paren___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_rewrite___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__14;
static lean_object* l_Lean_Parser_Tactic_Conv_convArgs___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__24;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedTactic___closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__30;
static lean_object* l_Lean_Parser_Tactic_Conv_arg___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__28;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_congr___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__15;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__11;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_convRw_____closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__21;
static lean_object* l_Lean_Parser_Tactic_Conv_convLeft___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__12;
static lean_object* l_Lean_Parser_Tactic_Conv_convLeft___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_paren___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__23;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__8;
static lean_object* l_Lean_Parser_Tactic_Conv_funext___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_rhs___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_funext___closed__5;
lean_object* l_Lean_Parser_Tactic_Conv_lhs;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_convLeft___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_skip___closed__3;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__20;
static lean_object* l_Lean_Parser_Tactic_Conv_convRight___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_arg___closed__7;
lean_object* l_Lean_Parser_Tactic_Conv_nestedTactic;
extern lean_object* l_Lean_Parser_Tactic_simpErase;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__25;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__17;
static lean_object* l_Lean_Parser_Tactic_Conv_convArgs___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_convLeft___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_convRight___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__12;
static lean_object* l_Lean_Parser_Tactic_Conv_whnf___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__21;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__7;
static lean_object* l_Lean_Parser_Tactic_Conv_funext___closed__7;
static lean_object* l_Lean_Parser_Tactic_Conv_congr___closed__3;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__8;
lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__25;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__29;
static lean_object* l_Lean_Parser_Tactic_Conv_rhs___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__11;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__22;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__33;
static lean_object* l_Lean_Parser_Tactic_Conv_rewrite___closed__2;
lean_object* l_Lean_Parser_Tactic_Conv_rhs;
static lean_object* l_Lean_Parser_Tactic_Conv_whnf___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__9;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__10;
static lean_object* l_Lean_Parser_Tactic_Conv_convRw_____closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__20;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_paren___closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_arg___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedTactic___closed__9;
static lean_object* l_Lean_Parser_Tactic_Conv_convRight___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__20;
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357_(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_643_(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_570_(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_486_(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_716_(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Tactic_Conv_nestedTactic___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__10;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedConv___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__19;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedTactic___closed__8;
lean_object* l_Lean_Parser_Tactic_Conv_funext;
lean_object* l_Lean_Parser_Tactic_Conv_arg;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__7;
static lean_object* l_Lean_Parser_Tactic_Conv_skip___closed__5;
lean_object* l_Lean_Parser_Tactic_Conv_trace;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_convRight___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__14;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedConv___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__18;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__9;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__15;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedConv___closed__2;
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Parser");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__2;
x_2 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Term");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("quot");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__6;
x_2 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("andthen");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__9;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("`(conv|");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__11;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("incQuotDepth");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__13;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("conv");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__15;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__16;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__14;
x_2 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__17;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(")");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__19;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__18;
x_3 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__20;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__12;
x_3 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__21;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__8;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__22;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__23;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Tactic");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Conv");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__2;
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("convSeq1Indented");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("withPosition");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("many1");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__9;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("group");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__11;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("colGe");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__13;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__14;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__15;
x_3 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__17;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("optional");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__17;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(";");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__19;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__18;
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__20;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__16;
x_3 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__21;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12;
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__22;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__23;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__8;
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__24;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__5;
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__6;
x_3 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__25;
x_4 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__26;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("convSeqBracketed");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("{");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__3;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__17;
x_3 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__21;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12;
x_2 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__6;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__4;
x_3 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__7;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("}");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__9;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__8;
x_3 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__10;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__1;
x_2 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__2;
x_3 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__11;
x_4 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__12;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("convSeq");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_convSeq___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("orelse");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_convSeq___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented;
x_3 = l_Lean_Parser_Tactic_Conv_convSeqBracketed;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq___closed__1;
x_2 = l_Lean_Parser_Tactic_Conv_convSeq___closed__2;
x_3 = l_Lean_Parser_Tactic_Conv_convSeq___closed__5;
x_4 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq___closed__6;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__15;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("conv ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__3() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_conv___closed__2;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" at ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_conv___closed__4;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ident");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_conv___closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_conv___closed__7;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_conv___closed__5;
x_3 = l_Lean_Parser_Tactic_Conv_conv___closed__8;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__18;
x_2 = l_Lean_Parser_Tactic_Conv_conv___closed__9;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_conv___closed__3;
x_3 = l_Lean_Parser_Tactic_Conv_conv___closed__10;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" in ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_conv___closed__12;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("term");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_conv___closed__14;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_conv___closed__15;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_conv___closed__13;
x_3 = l_Lean_Parser_Tactic_Conv_conv___closed__16;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__18;
x_2 = l_Lean_Parser_Tactic_Conv_conv___closed__17;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_conv___closed__11;
x_3 = l_Lean_Parser_Tactic_Conv_conv___closed__18;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" => ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_conv___closed__20;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_conv___closed__19;
x_3 = l_Lean_Parser_Tactic_Conv_conv___closed__21;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_conv___closed__22;
x_3 = l_Lean_Parser_Tactic_Conv_convSeq;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv___closed__1;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_conv___closed__23;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_conv___closed__24;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_skip___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("skip");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_skip___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_skip___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_skip___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("skip ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_skip___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_skip___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_skip___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_skip___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_Conv_skip___closed__4;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_skip() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_skip___closed__5;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_lhs___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("lhs");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_lhs___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_lhs___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_lhs___closed__3() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_lhs___closed__1;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_lhs___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_lhs___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_Conv_lhs___closed__3;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_lhs() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_lhs___closed__4;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_rhs___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("rhs");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_rhs___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_rhs___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_rhs___closed__3() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_rhs___closed__1;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_rhs___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_rhs___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_Conv_rhs___closed__3;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_rhs() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_rhs___closed__4;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_whnf___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("whnf");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_whnf___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_whnf___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_whnf___closed__3() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_whnf___closed__1;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_whnf___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_whnf___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_Conv_whnf___closed__3;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_whnf() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_whnf___closed__4;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_congr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("congr");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_congr___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_congr___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_congr___closed__3() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_congr___closed__1;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_congr___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_congr___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_Conv_congr___closed__3;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_congr() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_congr___closed__4;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_arg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("arg");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_arg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_arg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_arg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("arg ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_arg___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_arg___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_arg___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("num");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_arg___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_arg___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_arg___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_arg___closed__6;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_arg___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_arg___closed__4;
x_3 = l_Lean_Parser_Tactic_Conv_arg___closed__7;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_arg___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_arg___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_arg___closed__8;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_arg() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_arg___closed__9;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_trace___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("trace");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_trace___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_trace___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_trace___closed__3() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_trace___closed__1;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_trace___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_trace___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_Conv_trace___closed__3;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_trace() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_trace___closed__4;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_funext___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("funext");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_funext___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_funext___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_funext___closed__3() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_funext___closed__1;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_funext___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("many");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_funext___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_funext___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_funext___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_funext___closed__5;
x_2 = l_Lean_Parser_Tactic_Conv_conv___closed__8;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_funext___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_funext___closed__3;
x_3 = l_Lean_Parser_Tactic_Conv_funext___closed__6;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_funext___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_funext___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_funext___closed__7;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_funext() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_funext___closed__8;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_change___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("change");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_change___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_change___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_change___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("change ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_change___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_change___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_change___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_change___closed__4;
x_3 = l_Lean_Parser_Tactic_Conv_conv___closed__16;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_change___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_change___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_change___closed__5;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_change() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_change___closed__6;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_rewrite___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("rewrite");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_rewrite___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_rewrite___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_rewrite___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("rewrite ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_rewrite___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_rewrite___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_rewrite___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_rewrite___closed__4;
x_3 = l_Lean_Parser_Tactic_rwRuleSeq;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_rewrite___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_rewrite___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_rewrite___closed__5;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_rewrite() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_rewrite___closed__6;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("simp");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("simp ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_simp___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("(");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_simp___closed__5;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("config");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__8() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_simp___closed__7;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__6;
x_3 = l_Lean_Parser_Tactic_Conv_simp___closed__8;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" := ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_simp___closed__10;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__9;
x_3 = l_Lean_Parser_Tactic_Conv_simp___closed__11;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__12;
x_3 = l_Lean_Parser_Tactic_Conv_conv___closed__16;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__13;
x_3 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__20;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__18;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__14;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__4;
x_3 = l_Lean_Parser_Tactic_Conv_simp___closed__15;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("only ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__18() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_simp___closed__17;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__18;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__18;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__16;
x_3 = l_Lean_Parser_Tactic_Conv_simp___closed__19;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("[");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_simp___closed__21;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq___closed__4;
x_2 = l_Lean_Parser_Tactic_simpErase;
x_3 = l_Lean_Parser_Tactic_simpLemma;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq___closed__4;
x_2 = l_Lean_Parser_Tactic_simpStar;
x_3 = l_Lean_Parser_Tactic_Conv_simp___closed__23;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__25() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(", ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_simp___closed__25;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__27() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(",");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_Tactic_Conv_simp___closed__24;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__27;
x_3 = l_Lean_Parser_Tactic_Conv_simp___closed__26;
x_4 = 0;
x_5 = lean_alloc_ctor(10, 3, 1);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set_uint8(x_5, sizeof(void*)*3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__22;
x_3 = l_Lean_Parser_Tactic_Conv_simp___closed__28;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__30() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("]");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_simp___closed__30;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__32() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__29;
x_3 = l_Lean_Parser_Tactic_Conv_simp___closed__31;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__33() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__18;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__32;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__34() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__20;
x_3 = l_Lean_Parser_Tactic_Conv_simp___closed__33;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__35() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_simp___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_simp___closed__34;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_simp___closed__35;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("nestedTactic");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_nestedTactic___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tactic ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_nestedTactic___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tacticSeq");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_nestedTactic___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_nestedTactic___closed__6;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_nestedTactic___closed__4;
x_3 = l_Lean_Parser_Tactic_Conv_nestedTactic___closed__7;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_nestedTactic___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_nestedTactic___closed__8;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTactic() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_nestedTactic___closed__9;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedConv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("nestedConv");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedConv___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_nestedConv___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedConv___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_nestedConv___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_convSeqBracketed;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedConv() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_nestedConv___closed__3;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_paren___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("paren");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_paren___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_paren___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_paren___closed__3() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_simp___closed__5;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_paren___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_paren___closed__3;
x_3 = l_Lean_Parser_Tactic_Conv_convSeq;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_paren___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_paren___closed__4;
x_3 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__20;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_paren___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_paren___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_Conv_paren___closed__5;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_paren() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_paren___closed__6;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("conv·._");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("·");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__3;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(".");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__5;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__4;
x_3 = l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__6;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__7;
x_3 = l_Lean_Parser_Tactic_Conv_convSeq;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__8;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e__() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__9;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("null");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__2;
x_2 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__4;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
lean_dec(x_1);
x_12 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = l_Lean_Syntax_getHeadInfo_x3f(x_9);
lean_dec(x_9);
x_16 = l_Lean_Parser_Tactic_Conv_simp___closed__5;
lean_inc(x_14);
x_17 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__19;
lean_inc(x_14);
x_19 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_19, 0, x_14);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__3;
x_21 = lean_array_push(x_20, x_17);
x_22 = lean_array_push(x_21, x_11);
x_23 = lean_array_push(x_22, x_19);
x_24 = l_Lean_Parser_Tactic_Conv_paren___closed__2;
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
x_26 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__6;
x_27 = lean_array_push(x_26, x_25);
x_28 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__5;
x_29 = lean_array_push(x_27, x_28);
x_30 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12;
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
x_32 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__7;
x_33 = lean_array_push(x_32, x_31);
x_34 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__2;
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__9;
lean_inc(x_14);
x_37 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_37, 0, x_14);
lean_ctor_set(x_37, 1, x_36);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_38 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__3;
x_39 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_39, 0, x_14);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_array_push(x_20, x_39);
x_41 = lean_array_push(x_40, x_35);
x_42 = lean_array_push(x_41, x_37);
x_43 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__2;
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
x_45 = lean_array_push(x_32, x_44);
x_46 = l_Lean_Parser_Tactic_Conv_nestedConv___closed__2;
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
lean_ctor_set(x_12, 0, x_47);
return x_12;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_14);
x_48 = lean_ctor_get(x_15, 0);
lean_inc(x_48);
lean_dec(x_15);
x_49 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__3;
x_50 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_array_push(x_20, x_50);
x_52 = lean_array_push(x_51, x_35);
x_53 = lean_array_push(x_52, x_37);
x_54 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__2;
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
x_56 = lean_array_push(x_32, x_55);
x_57 = l_Lean_Parser_Tactic_Conv_nestedConv___closed__2;
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
lean_ctor_set(x_12, 0, x_58);
return x_12;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_59 = lean_ctor_get(x_12, 0);
x_60 = lean_ctor_get(x_12, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_12);
x_61 = l_Lean_Syntax_getHeadInfo_x3f(x_9);
lean_dec(x_9);
x_62 = l_Lean_Parser_Tactic_Conv_simp___closed__5;
lean_inc(x_59);
x_63 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_63, 0, x_59);
lean_ctor_set(x_63, 1, x_62);
x_64 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__19;
lean_inc(x_59);
x_65 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_65, 0, x_59);
lean_ctor_set(x_65, 1, x_64);
x_66 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__3;
x_67 = lean_array_push(x_66, x_63);
x_68 = lean_array_push(x_67, x_11);
x_69 = lean_array_push(x_68, x_65);
x_70 = l_Lean_Parser_Tactic_Conv_paren___closed__2;
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_69);
x_72 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__6;
x_73 = lean_array_push(x_72, x_71);
x_74 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__5;
x_75 = lean_array_push(x_73, x_74);
x_76 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12;
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_75);
x_78 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__7;
x_79 = lean_array_push(x_78, x_77);
x_80 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__2;
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_79);
x_82 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__9;
lean_inc(x_59);
x_83 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_83, 0, x_59);
lean_ctor_set(x_83, 1, x_82);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_84 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__3;
x_85 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_85, 0, x_59);
lean_ctor_set(x_85, 1, x_84);
x_86 = lean_array_push(x_66, x_85);
x_87 = lean_array_push(x_86, x_81);
x_88 = lean_array_push(x_87, x_83);
x_89 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__2;
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_88);
x_91 = lean_array_push(x_78, x_90);
x_92 = l_Lean_Parser_Tactic_Conv_nestedConv___closed__2;
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_91);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_60);
return x_94;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
lean_dec(x_59);
x_95 = lean_ctor_get(x_61, 0);
lean_inc(x_95);
lean_dec(x_61);
x_96 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__3;
x_97 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
x_98 = lean_array_push(x_66, x_97);
x_99 = lean_array_push(x_98, x_81);
x_100 = lean_array_push(x_99, x_83);
x_101 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__2;
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_100);
x_103 = lean_array_push(x_78, x_102);
x_104 = l_Lean_Parser_Tactic_Conv_nestedConv___closed__2;
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_103);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_60);
return x_106;
}
}
}
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convRw_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("convRw_");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convRw_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_convRw_____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convRw_____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("rw ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convRw_____closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convRw_____closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convRw_____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_convRw_____closed__4;
x_3 = l_Lean_Parser_Tactic_rwRuleSeq;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convRw_____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convRw_____closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_convRw_____closed__5;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convRw__() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_convRw_____closed__6;
return x_1;
}
}
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_486_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Parser_Tactic_Conv_convRw_____closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
x_10 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = l_Lean_Parser_Tactic_Conv_rewrite___closed__1;
x_14 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__6;
x_16 = lean_array_push(x_15, x_14);
x_17 = lean_array_push(x_16, x_9);
x_18 = l_Lean_Parser_Tactic_Conv_rewrite___closed__2;
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
lean_ctor_set(x_10, 0, x_19);
return x_10;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_20 = lean_ctor_get(x_10, 0);
x_21 = lean_ctor_get(x_10, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_10);
x_22 = l_Lean_Parser_Tactic_Conv_rewrite___closed__1;
x_23 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_22);
x_24 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__6;
x_25 = lean_array_push(x_24, x_23);
x_26 = lean_array_push(x_25, x_9);
x_27 = l_Lean_Parser_Tactic_Conv_rewrite___closed__2;
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_21);
return x_29;
}
}
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convArgs___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("convArgs");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convArgs___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_convArgs___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convArgs___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("args");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convArgs___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convArgs___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convArgs___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convArgs___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_Conv_convArgs___closed__4;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convArgs() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_convArgs___closed__5;
return x_1;
}
}
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_570_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Parser_Tactic_Conv_convArgs___closed__2;
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = l_Lean_Parser_Tactic_Conv_congr___closed__1;
x_12 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__7;
x_14 = lean_array_push(x_13, x_12);
x_15 = l_Lean_Parser_Tactic_Conv_congr___closed__2;
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
lean_ctor_set(x_8, 0, x_16);
return x_8;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_17 = lean_ctor_get(x_8, 0);
x_18 = lean_ctor_get(x_8, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_8);
x_19 = l_Lean_Parser_Tactic_Conv_congr___closed__1;
x_20 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__7;
x_22 = lean_array_push(x_21, x_20);
x_23 = l_Lean_Parser_Tactic_Conv_congr___closed__2;
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_18);
return x_25;
}
}
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convLeft___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("convLeft");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convLeft___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_convLeft___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convLeft___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("left");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convLeft___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convLeft___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convLeft___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convLeft___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_Conv_convLeft___closed__4;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convLeft() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_convLeft___closed__5;
return x_1;
}
}
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_643_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Parser_Tactic_Conv_convLeft___closed__2;
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = l_Lean_Parser_Tactic_Conv_lhs___closed__1;
x_12 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__7;
x_14 = lean_array_push(x_13, x_12);
x_15 = l_Lean_Parser_Tactic_Conv_lhs___closed__2;
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
lean_ctor_set(x_8, 0, x_16);
return x_8;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_17 = lean_ctor_get(x_8, 0);
x_18 = lean_ctor_get(x_8, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_8);
x_19 = l_Lean_Parser_Tactic_Conv_lhs___closed__1;
x_20 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__7;
x_22 = lean_array_push(x_21, x_20);
x_23 = l_Lean_Parser_Tactic_Conv_lhs___closed__2;
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_18);
return x_25;
}
}
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convRight___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("convRight");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convRight___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_convRight___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convRight___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("right");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convRight___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convRight___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convRight___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convRight___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_Conv_convRight___closed__4;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convRight() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_convRight___closed__5;
return x_1;
}
}
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_716_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Parser_Tactic_Conv_convRight___closed__2;
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = l_Lean_Parser_Tactic_Conv_rhs___closed__1;
x_12 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__7;
x_14 = lean_array_push(x_13, x_12);
x_15 = l_Lean_Parser_Tactic_Conv_rhs___closed__2;
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
lean_ctor_set(x_8, 0, x_16);
return x_8;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_17 = lean_ctor_get(x_8, 0);
x_18 = lean_ctor_get(x_8, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_8);
x_19 = l_Lean_Parser_Tactic_Conv_rhs___closed__1;
x_20 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__7;
x_22 = lean_array_push(x_21, x_20);
x_23 = l_Lean_Parser_Tactic_Conv_rhs___closed__2;
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_18);
return x_25;
}
}
}
}
lean_object* initialize_Init_Notation(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Conv(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Notation(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__1 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__1);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__2 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__2);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__3 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__3);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__4 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__4);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__5 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__5);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__6 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__6);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__7 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__7);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__8 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__8);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__9 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__9();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__9);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__10 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__10();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__10);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__11 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__11();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__11);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__12 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__12();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__12);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__13 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__13();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__13);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__14 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__14();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__14);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__15 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__15();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__15);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__16 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__16();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__16);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__17 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__17();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__17);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__18 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__18();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__18);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__19 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__19();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__19);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__20 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__20();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__20);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__21 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__21();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__21);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__22 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__22();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__22);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__23 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__23();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__23);
l_Lean_Parser_Tactic_Conv_conv_quot = _init_l_Lean_Parser_Tactic_Conv_conv_quot();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__1 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__1);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__2 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__2);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__3 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__3);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__5 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__5);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__6 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__6);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__7 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__7);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__8 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__8);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__9 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__9();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__9);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__10 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__10();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__10);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__11 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__11();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__11);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__13 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__13();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__13);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__14 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__14();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__14);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__15 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__15();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__15);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__16 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__16();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__16);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__17 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__17();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__17);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__18 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__18();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__18);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__19 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__19();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__19);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__20 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__20();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__20);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__21 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__21();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__21);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__22 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__22();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__22);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__23 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__23();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__23);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__24 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__24();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__24);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__25 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__25();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__25);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__26 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__26();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__26);
l_Lean_Parser_Tactic_Conv_convSeq1Indented = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented);
l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__1 = _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__1);
l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__2 = _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__2);
l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__3 = _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__3);
l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__4 = _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__4);
l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__5 = _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__5);
l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__6 = _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__6);
l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__7 = _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__7);
l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__8 = _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__8);
l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__9 = _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__9();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__9);
l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__10 = _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__10();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__10);
l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__11 = _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__11();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__11);
l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__12 = _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__12();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__12);
l_Lean_Parser_Tactic_Conv_convSeqBracketed = _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeqBracketed);
l_Lean_Parser_Tactic_Conv_convSeq___closed__1 = _init_l_Lean_Parser_Tactic_Conv_convSeq___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq___closed__1);
l_Lean_Parser_Tactic_Conv_convSeq___closed__2 = _init_l_Lean_Parser_Tactic_Conv_convSeq___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq___closed__2);
l_Lean_Parser_Tactic_Conv_convSeq___closed__3 = _init_l_Lean_Parser_Tactic_Conv_convSeq___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq___closed__3);
l_Lean_Parser_Tactic_Conv_convSeq___closed__4 = _init_l_Lean_Parser_Tactic_Conv_convSeq___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq___closed__4);
l_Lean_Parser_Tactic_Conv_convSeq___closed__5 = _init_l_Lean_Parser_Tactic_Conv_convSeq___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq___closed__5);
l_Lean_Parser_Tactic_Conv_convSeq___closed__6 = _init_l_Lean_Parser_Tactic_Conv_convSeq___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq___closed__6);
l_Lean_Parser_Tactic_Conv_convSeq = _init_l_Lean_Parser_Tactic_Conv_convSeq();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq);
l_Lean_Parser_Tactic_Conv_conv___closed__1 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__1);
l_Lean_Parser_Tactic_Conv_conv___closed__2 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__2);
l_Lean_Parser_Tactic_Conv_conv___closed__3 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__3);
l_Lean_Parser_Tactic_Conv_conv___closed__4 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__4);
l_Lean_Parser_Tactic_Conv_conv___closed__5 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__5);
l_Lean_Parser_Tactic_Conv_conv___closed__6 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__6);
l_Lean_Parser_Tactic_Conv_conv___closed__7 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__7);
l_Lean_Parser_Tactic_Conv_conv___closed__8 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__8);
l_Lean_Parser_Tactic_Conv_conv___closed__9 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__9();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__9);
l_Lean_Parser_Tactic_Conv_conv___closed__10 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__10();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__10);
l_Lean_Parser_Tactic_Conv_conv___closed__11 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__11();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__11);
l_Lean_Parser_Tactic_Conv_conv___closed__12 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__12();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__12);
l_Lean_Parser_Tactic_Conv_conv___closed__13 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__13();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__13);
l_Lean_Parser_Tactic_Conv_conv___closed__14 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__14();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__14);
l_Lean_Parser_Tactic_Conv_conv___closed__15 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__15();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__15);
l_Lean_Parser_Tactic_Conv_conv___closed__16 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__16();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__16);
l_Lean_Parser_Tactic_Conv_conv___closed__17 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__17();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__17);
l_Lean_Parser_Tactic_Conv_conv___closed__18 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__18();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__18);
l_Lean_Parser_Tactic_Conv_conv___closed__19 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__19();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__19);
l_Lean_Parser_Tactic_Conv_conv___closed__20 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__20();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__20);
l_Lean_Parser_Tactic_Conv_conv___closed__21 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__21();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__21);
l_Lean_Parser_Tactic_Conv_conv___closed__22 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__22();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__22);
l_Lean_Parser_Tactic_Conv_conv___closed__23 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__23();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__23);
l_Lean_Parser_Tactic_Conv_conv___closed__24 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__24();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__24);
l_Lean_Parser_Tactic_Conv_conv = _init_l_Lean_Parser_Tactic_Conv_conv();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv);
l_Lean_Parser_Tactic_Conv_skip___closed__1 = _init_l_Lean_Parser_Tactic_Conv_skip___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_skip___closed__1);
l_Lean_Parser_Tactic_Conv_skip___closed__2 = _init_l_Lean_Parser_Tactic_Conv_skip___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_skip___closed__2);
l_Lean_Parser_Tactic_Conv_skip___closed__3 = _init_l_Lean_Parser_Tactic_Conv_skip___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_skip___closed__3);
l_Lean_Parser_Tactic_Conv_skip___closed__4 = _init_l_Lean_Parser_Tactic_Conv_skip___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_skip___closed__4);
l_Lean_Parser_Tactic_Conv_skip___closed__5 = _init_l_Lean_Parser_Tactic_Conv_skip___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_skip___closed__5);
l_Lean_Parser_Tactic_Conv_skip = _init_l_Lean_Parser_Tactic_Conv_skip();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_skip);
l_Lean_Parser_Tactic_Conv_lhs___closed__1 = _init_l_Lean_Parser_Tactic_Conv_lhs___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_lhs___closed__1);
l_Lean_Parser_Tactic_Conv_lhs___closed__2 = _init_l_Lean_Parser_Tactic_Conv_lhs___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_lhs___closed__2);
l_Lean_Parser_Tactic_Conv_lhs___closed__3 = _init_l_Lean_Parser_Tactic_Conv_lhs___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_lhs___closed__3);
l_Lean_Parser_Tactic_Conv_lhs___closed__4 = _init_l_Lean_Parser_Tactic_Conv_lhs___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_lhs___closed__4);
l_Lean_Parser_Tactic_Conv_lhs = _init_l_Lean_Parser_Tactic_Conv_lhs();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_lhs);
l_Lean_Parser_Tactic_Conv_rhs___closed__1 = _init_l_Lean_Parser_Tactic_Conv_rhs___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_rhs___closed__1);
l_Lean_Parser_Tactic_Conv_rhs___closed__2 = _init_l_Lean_Parser_Tactic_Conv_rhs___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_rhs___closed__2);
l_Lean_Parser_Tactic_Conv_rhs___closed__3 = _init_l_Lean_Parser_Tactic_Conv_rhs___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_rhs___closed__3);
l_Lean_Parser_Tactic_Conv_rhs___closed__4 = _init_l_Lean_Parser_Tactic_Conv_rhs___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_rhs___closed__4);
l_Lean_Parser_Tactic_Conv_rhs = _init_l_Lean_Parser_Tactic_Conv_rhs();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_rhs);
l_Lean_Parser_Tactic_Conv_whnf___closed__1 = _init_l_Lean_Parser_Tactic_Conv_whnf___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_whnf___closed__1);
l_Lean_Parser_Tactic_Conv_whnf___closed__2 = _init_l_Lean_Parser_Tactic_Conv_whnf___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_whnf___closed__2);
l_Lean_Parser_Tactic_Conv_whnf___closed__3 = _init_l_Lean_Parser_Tactic_Conv_whnf___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_whnf___closed__3);
l_Lean_Parser_Tactic_Conv_whnf___closed__4 = _init_l_Lean_Parser_Tactic_Conv_whnf___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_whnf___closed__4);
l_Lean_Parser_Tactic_Conv_whnf = _init_l_Lean_Parser_Tactic_Conv_whnf();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_whnf);
l_Lean_Parser_Tactic_Conv_congr___closed__1 = _init_l_Lean_Parser_Tactic_Conv_congr___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_congr___closed__1);
l_Lean_Parser_Tactic_Conv_congr___closed__2 = _init_l_Lean_Parser_Tactic_Conv_congr___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_congr___closed__2);
l_Lean_Parser_Tactic_Conv_congr___closed__3 = _init_l_Lean_Parser_Tactic_Conv_congr___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_congr___closed__3);
l_Lean_Parser_Tactic_Conv_congr___closed__4 = _init_l_Lean_Parser_Tactic_Conv_congr___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_congr___closed__4);
l_Lean_Parser_Tactic_Conv_congr = _init_l_Lean_Parser_Tactic_Conv_congr();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_congr);
l_Lean_Parser_Tactic_Conv_arg___closed__1 = _init_l_Lean_Parser_Tactic_Conv_arg___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_arg___closed__1);
l_Lean_Parser_Tactic_Conv_arg___closed__2 = _init_l_Lean_Parser_Tactic_Conv_arg___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_arg___closed__2);
l_Lean_Parser_Tactic_Conv_arg___closed__3 = _init_l_Lean_Parser_Tactic_Conv_arg___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_arg___closed__3);
l_Lean_Parser_Tactic_Conv_arg___closed__4 = _init_l_Lean_Parser_Tactic_Conv_arg___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_arg___closed__4);
l_Lean_Parser_Tactic_Conv_arg___closed__5 = _init_l_Lean_Parser_Tactic_Conv_arg___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_arg___closed__5);
l_Lean_Parser_Tactic_Conv_arg___closed__6 = _init_l_Lean_Parser_Tactic_Conv_arg___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_arg___closed__6);
l_Lean_Parser_Tactic_Conv_arg___closed__7 = _init_l_Lean_Parser_Tactic_Conv_arg___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_arg___closed__7);
l_Lean_Parser_Tactic_Conv_arg___closed__8 = _init_l_Lean_Parser_Tactic_Conv_arg___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_arg___closed__8);
l_Lean_Parser_Tactic_Conv_arg___closed__9 = _init_l_Lean_Parser_Tactic_Conv_arg___closed__9();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_arg___closed__9);
l_Lean_Parser_Tactic_Conv_arg = _init_l_Lean_Parser_Tactic_Conv_arg();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_arg);
l_Lean_Parser_Tactic_Conv_trace___closed__1 = _init_l_Lean_Parser_Tactic_Conv_trace___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_trace___closed__1);
l_Lean_Parser_Tactic_Conv_trace___closed__2 = _init_l_Lean_Parser_Tactic_Conv_trace___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_trace___closed__2);
l_Lean_Parser_Tactic_Conv_trace___closed__3 = _init_l_Lean_Parser_Tactic_Conv_trace___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_trace___closed__3);
l_Lean_Parser_Tactic_Conv_trace___closed__4 = _init_l_Lean_Parser_Tactic_Conv_trace___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_trace___closed__4);
l_Lean_Parser_Tactic_Conv_trace = _init_l_Lean_Parser_Tactic_Conv_trace();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_trace);
l_Lean_Parser_Tactic_Conv_funext___closed__1 = _init_l_Lean_Parser_Tactic_Conv_funext___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_funext___closed__1);
l_Lean_Parser_Tactic_Conv_funext___closed__2 = _init_l_Lean_Parser_Tactic_Conv_funext___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_funext___closed__2);
l_Lean_Parser_Tactic_Conv_funext___closed__3 = _init_l_Lean_Parser_Tactic_Conv_funext___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_funext___closed__3);
l_Lean_Parser_Tactic_Conv_funext___closed__4 = _init_l_Lean_Parser_Tactic_Conv_funext___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_funext___closed__4);
l_Lean_Parser_Tactic_Conv_funext___closed__5 = _init_l_Lean_Parser_Tactic_Conv_funext___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_funext___closed__5);
l_Lean_Parser_Tactic_Conv_funext___closed__6 = _init_l_Lean_Parser_Tactic_Conv_funext___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_funext___closed__6);
l_Lean_Parser_Tactic_Conv_funext___closed__7 = _init_l_Lean_Parser_Tactic_Conv_funext___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_funext___closed__7);
l_Lean_Parser_Tactic_Conv_funext___closed__8 = _init_l_Lean_Parser_Tactic_Conv_funext___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_funext___closed__8);
l_Lean_Parser_Tactic_Conv_funext = _init_l_Lean_Parser_Tactic_Conv_funext();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_funext);
l_Lean_Parser_Tactic_Conv_change___closed__1 = _init_l_Lean_Parser_Tactic_Conv_change___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_change___closed__1);
l_Lean_Parser_Tactic_Conv_change___closed__2 = _init_l_Lean_Parser_Tactic_Conv_change___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_change___closed__2);
l_Lean_Parser_Tactic_Conv_change___closed__3 = _init_l_Lean_Parser_Tactic_Conv_change___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_change___closed__3);
l_Lean_Parser_Tactic_Conv_change___closed__4 = _init_l_Lean_Parser_Tactic_Conv_change___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_change___closed__4);
l_Lean_Parser_Tactic_Conv_change___closed__5 = _init_l_Lean_Parser_Tactic_Conv_change___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_change___closed__5);
l_Lean_Parser_Tactic_Conv_change___closed__6 = _init_l_Lean_Parser_Tactic_Conv_change___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_change___closed__6);
l_Lean_Parser_Tactic_Conv_change = _init_l_Lean_Parser_Tactic_Conv_change();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_change);
l_Lean_Parser_Tactic_Conv_rewrite___closed__1 = _init_l_Lean_Parser_Tactic_Conv_rewrite___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_rewrite___closed__1);
l_Lean_Parser_Tactic_Conv_rewrite___closed__2 = _init_l_Lean_Parser_Tactic_Conv_rewrite___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_rewrite___closed__2);
l_Lean_Parser_Tactic_Conv_rewrite___closed__3 = _init_l_Lean_Parser_Tactic_Conv_rewrite___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_rewrite___closed__3);
l_Lean_Parser_Tactic_Conv_rewrite___closed__4 = _init_l_Lean_Parser_Tactic_Conv_rewrite___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_rewrite___closed__4);
l_Lean_Parser_Tactic_Conv_rewrite___closed__5 = _init_l_Lean_Parser_Tactic_Conv_rewrite___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_rewrite___closed__5);
l_Lean_Parser_Tactic_Conv_rewrite___closed__6 = _init_l_Lean_Parser_Tactic_Conv_rewrite___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_rewrite___closed__6);
l_Lean_Parser_Tactic_Conv_rewrite = _init_l_Lean_Parser_Tactic_Conv_rewrite();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_rewrite);
l_Lean_Parser_Tactic_Conv_simp___closed__1 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__1);
l_Lean_Parser_Tactic_Conv_simp___closed__2 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__2);
l_Lean_Parser_Tactic_Conv_simp___closed__3 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__3);
l_Lean_Parser_Tactic_Conv_simp___closed__4 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__4);
l_Lean_Parser_Tactic_Conv_simp___closed__5 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__5);
l_Lean_Parser_Tactic_Conv_simp___closed__6 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__6);
l_Lean_Parser_Tactic_Conv_simp___closed__7 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__7);
l_Lean_Parser_Tactic_Conv_simp___closed__8 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__8);
l_Lean_Parser_Tactic_Conv_simp___closed__9 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__9();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__9);
l_Lean_Parser_Tactic_Conv_simp___closed__10 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__10();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__10);
l_Lean_Parser_Tactic_Conv_simp___closed__11 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__11();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__11);
l_Lean_Parser_Tactic_Conv_simp___closed__12 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__12();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__12);
l_Lean_Parser_Tactic_Conv_simp___closed__13 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__13();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__13);
l_Lean_Parser_Tactic_Conv_simp___closed__14 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__14();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__14);
l_Lean_Parser_Tactic_Conv_simp___closed__15 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__15();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__15);
l_Lean_Parser_Tactic_Conv_simp___closed__16 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__16();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__16);
l_Lean_Parser_Tactic_Conv_simp___closed__17 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__17();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__17);
l_Lean_Parser_Tactic_Conv_simp___closed__18 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__18();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__18);
l_Lean_Parser_Tactic_Conv_simp___closed__19 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__19();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__19);
l_Lean_Parser_Tactic_Conv_simp___closed__20 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__20();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__20);
l_Lean_Parser_Tactic_Conv_simp___closed__21 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__21();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__21);
l_Lean_Parser_Tactic_Conv_simp___closed__22 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__22();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__22);
l_Lean_Parser_Tactic_Conv_simp___closed__23 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__23();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__23);
l_Lean_Parser_Tactic_Conv_simp___closed__24 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__24();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__24);
l_Lean_Parser_Tactic_Conv_simp___closed__25 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__25();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__25);
l_Lean_Parser_Tactic_Conv_simp___closed__26 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__26();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__26);
l_Lean_Parser_Tactic_Conv_simp___closed__27 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__27();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__27);
l_Lean_Parser_Tactic_Conv_simp___closed__28 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__28();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__28);
l_Lean_Parser_Tactic_Conv_simp___closed__29 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__29();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__29);
l_Lean_Parser_Tactic_Conv_simp___closed__30 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__30();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__30);
l_Lean_Parser_Tactic_Conv_simp___closed__31 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__31();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__31);
l_Lean_Parser_Tactic_Conv_simp___closed__32 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__32();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__32);
l_Lean_Parser_Tactic_Conv_simp___closed__33 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__33();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__33);
l_Lean_Parser_Tactic_Conv_simp___closed__34 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__34();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__34);
l_Lean_Parser_Tactic_Conv_simp___closed__35 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__35();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__35);
l_Lean_Parser_Tactic_Conv_simp = _init_l_Lean_Parser_Tactic_Conv_simp();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp);
l_Lean_Parser_Tactic_Conv_nestedTactic___closed__1 = _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTactic___closed__1);
l_Lean_Parser_Tactic_Conv_nestedTactic___closed__2 = _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTactic___closed__2);
l_Lean_Parser_Tactic_Conv_nestedTactic___closed__3 = _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTactic___closed__3);
l_Lean_Parser_Tactic_Conv_nestedTactic___closed__4 = _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTactic___closed__4);
l_Lean_Parser_Tactic_Conv_nestedTactic___closed__5 = _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTactic___closed__5);
l_Lean_Parser_Tactic_Conv_nestedTactic___closed__6 = _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTactic___closed__6);
l_Lean_Parser_Tactic_Conv_nestedTactic___closed__7 = _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTactic___closed__7);
l_Lean_Parser_Tactic_Conv_nestedTactic___closed__8 = _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTactic___closed__8);
l_Lean_Parser_Tactic_Conv_nestedTactic___closed__9 = _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__9();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTactic___closed__9);
l_Lean_Parser_Tactic_Conv_nestedTactic = _init_l_Lean_Parser_Tactic_Conv_nestedTactic();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTactic);
l_Lean_Parser_Tactic_Conv_nestedConv___closed__1 = _init_l_Lean_Parser_Tactic_Conv_nestedConv___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedConv___closed__1);
l_Lean_Parser_Tactic_Conv_nestedConv___closed__2 = _init_l_Lean_Parser_Tactic_Conv_nestedConv___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedConv___closed__2);
l_Lean_Parser_Tactic_Conv_nestedConv___closed__3 = _init_l_Lean_Parser_Tactic_Conv_nestedConv___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedConv___closed__3);
l_Lean_Parser_Tactic_Conv_nestedConv = _init_l_Lean_Parser_Tactic_Conv_nestedConv();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedConv);
l_Lean_Parser_Tactic_Conv_paren___closed__1 = _init_l_Lean_Parser_Tactic_Conv_paren___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_paren___closed__1);
l_Lean_Parser_Tactic_Conv_paren___closed__2 = _init_l_Lean_Parser_Tactic_Conv_paren___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_paren___closed__2);
l_Lean_Parser_Tactic_Conv_paren___closed__3 = _init_l_Lean_Parser_Tactic_Conv_paren___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_paren___closed__3);
l_Lean_Parser_Tactic_Conv_paren___closed__4 = _init_l_Lean_Parser_Tactic_Conv_paren___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_paren___closed__4);
l_Lean_Parser_Tactic_Conv_paren___closed__5 = _init_l_Lean_Parser_Tactic_Conv_paren___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_paren___closed__5);
l_Lean_Parser_Tactic_Conv_paren___closed__6 = _init_l_Lean_Parser_Tactic_Conv_paren___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_paren___closed__6);
l_Lean_Parser_Tactic_Conv_paren = _init_l_Lean_Parser_Tactic_Conv_paren();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_paren);
l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__1 = _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__1);
l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__2 = _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__2);
l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__3 = _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__3);
l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__4 = _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__4);
l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__5 = _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__5);
l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__6 = _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__6);
l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__7 = _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__7);
l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__8 = _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__8);
l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__9 = _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__9();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__9);
l_Lean_Parser_Tactic_Conv_conv_xb7_x2e__ = _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e__();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_xb7_x2e__);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__1 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__1);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__2 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__2);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__3 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__3);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__4 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__4);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__5 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__5);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__6 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__6);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__7 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_357____closed__7);
l_Lean_Parser_Tactic_Conv_convRw_____closed__1 = _init_l_Lean_Parser_Tactic_Conv_convRw_____closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convRw_____closed__1);
l_Lean_Parser_Tactic_Conv_convRw_____closed__2 = _init_l_Lean_Parser_Tactic_Conv_convRw_____closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convRw_____closed__2);
l_Lean_Parser_Tactic_Conv_convRw_____closed__3 = _init_l_Lean_Parser_Tactic_Conv_convRw_____closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convRw_____closed__3);
l_Lean_Parser_Tactic_Conv_convRw_____closed__4 = _init_l_Lean_Parser_Tactic_Conv_convRw_____closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convRw_____closed__4);
l_Lean_Parser_Tactic_Conv_convRw_____closed__5 = _init_l_Lean_Parser_Tactic_Conv_convRw_____closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convRw_____closed__5);
l_Lean_Parser_Tactic_Conv_convRw_____closed__6 = _init_l_Lean_Parser_Tactic_Conv_convRw_____closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convRw_____closed__6);
l_Lean_Parser_Tactic_Conv_convRw__ = _init_l_Lean_Parser_Tactic_Conv_convRw__();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convRw__);
l_Lean_Parser_Tactic_Conv_convArgs___closed__1 = _init_l_Lean_Parser_Tactic_Conv_convArgs___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convArgs___closed__1);
l_Lean_Parser_Tactic_Conv_convArgs___closed__2 = _init_l_Lean_Parser_Tactic_Conv_convArgs___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convArgs___closed__2);
l_Lean_Parser_Tactic_Conv_convArgs___closed__3 = _init_l_Lean_Parser_Tactic_Conv_convArgs___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convArgs___closed__3);
l_Lean_Parser_Tactic_Conv_convArgs___closed__4 = _init_l_Lean_Parser_Tactic_Conv_convArgs___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convArgs___closed__4);
l_Lean_Parser_Tactic_Conv_convArgs___closed__5 = _init_l_Lean_Parser_Tactic_Conv_convArgs___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convArgs___closed__5);
l_Lean_Parser_Tactic_Conv_convArgs = _init_l_Lean_Parser_Tactic_Conv_convArgs();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convArgs);
l_Lean_Parser_Tactic_Conv_convLeft___closed__1 = _init_l_Lean_Parser_Tactic_Conv_convLeft___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convLeft___closed__1);
l_Lean_Parser_Tactic_Conv_convLeft___closed__2 = _init_l_Lean_Parser_Tactic_Conv_convLeft___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convLeft___closed__2);
l_Lean_Parser_Tactic_Conv_convLeft___closed__3 = _init_l_Lean_Parser_Tactic_Conv_convLeft___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convLeft___closed__3);
l_Lean_Parser_Tactic_Conv_convLeft___closed__4 = _init_l_Lean_Parser_Tactic_Conv_convLeft___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convLeft___closed__4);
l_Lean_Parser_Tactic_Conv_convLeft___closed__5 = _init_l_Lean_Parser_Tactic_Conv_convLeft___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convLeft___closed__5);
l_Lean_Parser_Tactic_Conv_convLeft = _init_l_Lean_Parser_Tactic_Conv_convLeft();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convLeft);
l_Lean_Parser_Tactic_Conv_convRight___closed__1 = _init_l_Lean_Parser_Tactic_Conv_convRight___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convRight___closed__1);
l_Lean_Parser_Tactic_Conv_convRight___closed__2 = _init_l_Lean_Parser_Tactic_Conv_convRight___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convRight___closed__2);
l_Lean_Parser_Tactic_Conv_convRight___closed__3 = _init_l_Lean_Parser_Tactic_Conv_convRight___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convRight___closed__3);
l_Lean_Parser_Tactic_Conv_convRight___closed__4 = _init_l_Lean_Parser_Tactic_Conv_convRight___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convRight___closed__4);
l_Lean_Parser_Tactic_Conv_convRight___closed__5 = _init_l_Lean_Parser_Tactic_Conv_convRight___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convRight___closed__5);
l_Lean_Parser_Tactic_Conv_convRight = _init_l_Lean_Parser_Tactic_Conv_convRight();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convRight);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
