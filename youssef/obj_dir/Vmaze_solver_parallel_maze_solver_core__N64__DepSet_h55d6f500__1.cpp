// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmaze_solver_parallel.h for the primary calling header

#include "Vmaze_solver_parallel__pch.h"
#include "Vmaze_solver_parallel__Syms.h"
#include "Vmaze_solver_parallel_maze_solver_core__N64.h"

VL_INLINE_OPT void Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__12__KET____DOT__solver_inst__0(Vmaze_solver_parallel_maze_solver_core__N64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__12__KET____DOT__solver_inst__0\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_x_of__180__Vfuncout;
    __Vfunc_x_of__180__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__180__idx;
    __Vfunc_x_of__180__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__181__Vfuncout;
    __Vfunc_y_of__181__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__181__idx;
    __Vfunc_y_of__181__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__182__Vfuncout;
    __Vfunc_idx_of__182__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__182__x;
    __Vfunc_idx_of__182__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__182__y;
    __Vfunc_idx_of__182__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__183__Vfuncout;
    __Vfunc_idx_of__183__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__183__x;
    __Vfunc_idx_of__183__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__183__y;
    __Vfunc_idx_of__183__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__184__Vfuncout;
    __Vfunc_idx_of__184__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__184__x;
    __Vfunc_idx_of__184__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__184__y;
    __Vfunc_idx_of__184__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__185__Vfuncout;
    __Vfunc_idx_of__185__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__185__x;
    __Vfunc_idx_of__185__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__185__y;
    __Vfunc_idx_of__185__y = 0;
    IData/*31:0*/ __Vfunc_x_of__186__Vfuncout;
    __Vfunc_x_of__186__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__186__idx;
    __Vfunc_x_of__186__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__187__Vfuncout;
    __Vfunc_y_of__187__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__187__idx;
    __Vfunc_y_of__187__idx = 0;
    IData/*31:0*/ __Vfunc_x_of__188__Vfuncout;
    __Vfunc_x_of__188__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__188__idx;
    __Vfunc_x_of__188__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__189__Vfuncout;
    __Vfunc_y_of__189__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__189__idx;
    __Vfunc_y_of__189__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__190__Vfuncout;
    __Vfunc_idx_of__190__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__190__x;
    __Vfunc_idx_of__190__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__190__y;
    __Vfunc_idx_of__190__y = 0;
    CData/*0:0*/ __Vfunc_cell_free__191__Vfuncout;
    __Vfunc_cell_free__191__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_cell_free__191__x;
    __Vfunc_cell_free__191__x = 0;
    IData/*31:0*/ __Vfunc_cell_free__191__y;
    __Vfunc_cell_free__191__y = 0;
    IData/*31:0*/ __Vfunc_cell_free__191__idx;
    __Vfunc_cell_free__191__idx = 0;
    CData/*2:0*/ __Vdly__st;
    __Vdly__st = 0;
    CData/*7:0*/ __Vdly__path_len_reg;
    __Vdly__path_len_reg = 0;
    IData/*31:0*/ __Vdly__cur_x_reg;
    __Vdly__cur_x_reg = 0;
    IData/*31:0*/ __Vdly__cur_y_reg;
    __Vdly__cur_y_reg = 0;
    CData/*1:0*/ __Vdly__nb_i;
    __Vdly__nb_i = 0;
    CData/*6:0*/ __Vdly__q_head;
    __Vdly__q_head = 0;
    CData/*6:0*/ __Vdly__q_tail;
    __Vdly__q_tail = 0;
    CData/*6:0*/ __Vdly__q_count;
    __Vdly__q_count = 0;
    CData/*1:0*/ __VdlyVal__path_words__v14;
    __VdlyVal__path_words__v14 = 0;
    CData/*4:0*/ __VdlyLsb__path_words__v14;
    __VdlyLsb__path_words__v14 = 0;
    CData/*2:0*/ __VdlyDim0__path_words__v14;
    __VdlyDim0__path_words__v14 = 0;
    IData/*31:0*/ __VdlyMask__path_words__v14;
    __VdlyMask__path_words__v14 = 0;
    IData/*31:0*/ __VdlyElem__path_words__v14;
    __VdlyElem__path_words__v14 = 0;
    CData/*1:0*/ __VdlyVal__path_buf__v0;
    __VdlyVal__path_buf__v0 = 0;
    CData/*6:0*/ __VdlyDim0__path_buf__v0;
    __VdlyDim0__path_buf__v0 = 0;
    CData/*0:0*/ __VdlySet__path_buf__v0;
    __VdlySet__path_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__visited__v0;
    __VdlyVal__visited__v0 = 0;
    CData/*6:0*/ __VdlyDim0__visited__v0;
    __VdlyDim0__visited__v0 = 0;
    CData/*0:0*/ __VdlyVal__has_parent__v0;
    __VdlyVal__has_parent__v0 = 0;
    CData/*6:0*/ __VdlyDim0__has_parent__v0;
    __VdlyDim0__has_parent__v0 = 0;
    CData/*1:0*/ __VdlyVal__parent_dir__v0;
    __VdlyVal__parent_dir__v0 = 0;
    CData/*6:0*/ __VdlyDim0__parent_dir__v0;
    __VdlyDim0__parent_dir__v0 = 0;
    CData/*6:0*/ __VdlyVal__queue__v0;
    __VdlyVal__queue__v0 = 0;
    CData/*6:0*/ __VdlyDim0__queue__v0;
    __VdlyDim0__queue__v0 = 0;
    CData/*0:0*/ __VdlySet__queue__v0;
    __VdlySet__queue__v0 = 0;
    CData/*0:0*/ __VdlyVal__visited__v1;
    __VdlyVal__visited__v1 = 0;
    CData/*6:0*/ __VdlyDim0__visited__v1;
    __VdlyDim0__visited__v1 = 0;
    CData/*0:0*/ __VdlyVal__has_parent__v1;
    __VdlyVal__has_parent__v1 = 0;
    CData/*6:0*/ __VdlyDim0__has_parent__v1;
    __VdlyDim0__has_parent__v1 = 0;
    CData/*1:0*/ __VdlyVal__parent_dir__v1;
    __VdlyVal__parent_dir__v1 = 0;
    CData/*6:0*/ __VdlyDim0__parent_dir__v1;
    __VdlyDim0__parent_dir__v1 = 0;
    CData/*0:0*/ __VdlySet__queue__v1;
    __VdlySet__queue__v1 = 0;
    VlWide<4>/*127:0*/ __Vtemp_3;
    // Body
    __Vdly__st = vlSelfRef.__PVT__st;
    __Vdly__cur_x_reg = vlSelfRef.__PVT__cur_x_reg;
    __Vdly__cur_y_reg = vlSelfRef.__PVT__cur_y_reg;
    __Vdly__nb_i = vlSelfRef.__PVT__nb_i;
    __Vdly__q_head = vlSelfRef.__PVT__q_head;
    __Vdly__q_tail = vlSelfRef.__PVT__q_tail;
    __Vdly__q_count = vlSelfRef.__PVT__q_count;
    __VdlySet__path_buf__v0 = 0U;
    __VdlySet__queue__v0 = 0U;
    __VdlySet__queue__v1 = 0U;
    __Vdly__path_len_reg = vlSelfRef.__PVT__path_len_reg;
    if (vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__0__KET____DOT__solver_inst.rst) {
        vlSelfRef.__PVT__i = 7U;
        __Vdly__st = 0U;
        vlSelfRef.done = 0U;
        vlSelfRef.valid = 0U;
        __Vdly__path_len_reg = 0U;
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 0U);
        __Vdly__cur_x_reg = 0U;
        __Vdly__cur_y_reg = 0U;
        __Vdly__nb_i = 0U;
        __Vdly__q_head = 0U;
        __Vdly__q_tail = 0U;
        __Vdly__q_count = 0U;
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 1U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 2U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 3U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 4U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 5U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 6U);
    } else if ((4U & (IData)(vlSelfRef.__PVT__st))) {
        if ((2U & (IData)(vlSelfRef.__PVT__st))) {
            __Vdly__st = 0U;
        } else if ((1U & (IData)(vlSelfRef.__PVT__st))) {
            vlSelfRef.done = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP.maze_solver_parallel__DOT__core_start) 
                          >> 0xcU)))) {
                __Vdly__st = 0U;
                vlSelfRef.done = 0U;
            }
        } else {
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 0U);
            __Vdly__st = 5U;
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 1U);
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 2U);
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 3U);
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 4U);
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 5U);
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 6U);
            vlSelfRef.__PVT__i = 0U;
            while ((vlSelfRef.__PVT__i < (IData)(vlSelfRef.__PVT__path_len_reg))) {
                vlSelfRef.__PVT__unnamedblk6__DOT__fwd_i 
                    = (((IData)(vlSelfRef.__PVT__path_len_reg) 
                        - (IData)(1U)) - vlSelfRef.__PVT__i);
                vlSelfRef.__PVT__unnamedblk6__DOT__mv 
                    = ((0x63U >= (0x7fU & vlSelfRef.__PVT__unnamedblk6__DOT__fwd_i))
                        ? vlSelfRef.__PVT__path_buf
                       [(0x7fU & vlSelfRef.__PVT__unnamedblk6__DOT__fwd_i)]
                        : 0U);
                vlSelfRef.__PVT__unnamedblk6__DOT__word_i 
                    = VL_DIVS_III(32, vlSelfRef.__PVT__i, (IData)(0x10U));
                vlSelfRef.__PVT__unnamedblk6__DOT__bitpos 
                    = VL_MULS_III(32, (IData)(2U), 
                                  VL_MODDIVS_III(32, vlSelfRef.__PVT__i, (IData)(0x10U)));
                vlSelfRef.__Vlvbound_h95c5206c__0 = vlSelfRef.__PVT__unnamedblk6__DOT__mv;
                if (VL_LIKELY(((6U >= (7U & vlSelfRef.__PVT__unnamedblk6__DOT__word_i))))) {
                    __VdlyVal__path_words__v14 = vlSelfRef.__Vlvbound_h95c5206c__0;
                    __VdlyLsb__path_words__v14 = (0x1fU 
                                                  & vlSelfRef.__PVT__unnamedblk6__DOT__bitpos);
                    __VdlyDim0__path_words__v14 = (7U 
                                                   & vlSelfRef.__PVT__unnamedblk6__DOT__word_i);
                    __VdlyMask__path_words__v14 = 0U;
                    __VdlyMask__path_words__v14 = (__VdlyMask__path_words__v14 
                                                   | (0xffffffffULL 
                                                      & ((IData)(3U) 
                                                         << (IData)(__VdlyLsb__path_words__v14))));
                    __VdlyElem__path_words__v14 = 0U;
                    __VdlyElem__path_words__v14 = (
                                                   ((~ 
                                                     ((IData)(3U) 
                                                      << (IData)(__VdlyLsb__path_words__v14))) 
                                                    & __VdlyElem__path_words__v14) 
                                                   | (0xffffffffULL 
                                                      & ((IData)(__VdlyVal__path_words__v14) 
                                                         << (IData)(__VdlyLsb__path_words__v14))));
                    vlSelfRef.__VdlyCommitQueuepath_words.enqueue(__VdlyElem__path_words__v14, __VdlyMask__path_words__v14, (IData)(__VdlyDim0__path_words__v14));
                }
                vlSelfRef.__PVT__i = ((IData)(1U) + vlSelfRef.__PVT__i);
            }
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__st))) {
        if ((1U & (IData)(vlSelfRef.__PVT__st))) {
            __Vfunc_x_of__180__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_x_of__180__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__180__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__bx = __Vfunc_x_of__180__Vfuncout;
            __Vfunc_y_of__181__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_y_of__181__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__181__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__by = __Vfunc_y_of__181__Vfuncout;
            if (((0U == vlSelfRef.__PVT__unnamedblk4__DOT__bx) 
                 & (0U == vlSelfRef.__PVT__unnamedblk4__DOT__by))) {
                __Vdly__path_len_reg = vlSelfRef.__PVT__bt_len;
                __Vdly__st = 4U;
            } else if (((0x63U >= (IData)(vlSelfRef.__PVT__bt_idx)) 
                        && vlSelfRef.__PVT__has_parent
                        [vlSelfRef.__PVT__bt_idx])) {
                vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd 
                    = ((0x63U >= (IData)(vlSelfRef.__PVT__bt_idx))
                        ? vlSelfRef.__PVT__parent_dir
                       [vlSelfRef.__PVT__bt_idx] : 0U);
                vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back 
                    = ((0U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd))
                        ? 2U : ((1U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd))
                                 ? 3U : ((2U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd))
                                          ? 0U : 1U)));
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((2U 
                                                         == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)))))))))) {
                    if ((0U != (((2U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)) 
                                 << 2U) | (((1U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:315: Assertion failed in %Nmaze_solver_parallel.gen_cores[12].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         2,(IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd));
                            VL_STOP_MT("maze_solver_core.sv", 315, "");
                        }
                    }
                }
                vlSelfRef.__Vlvbound_h73cb18d2__0 = vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd;
                if (VL_LIKELY(((0x63U >= (0x7fU & (IData)(vlSelfRef.__PVT__bt_len)))))) {
                    __VdlyVal__path_buf__v0 = vlSelfRef.__Vlvbound_h73cb18d2__0;
                    __VdlyDim0__path_buf__v0 = (0x7fU 
                                                & (IData)(vlSelfRef.__PVT__bt_len));
                    __VdlySet__path_buf__v0 = 1U;
                }
                vlSelfRef.__PVT__bt_len = (0xffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__bt_len)));
                vlSelfRef.__PVT__bt_idx = (0x7fU & 
                                           ((0U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                             ? ([&]() {
                                __Vfunc_idx_of__182__y 
                                    = (vlSelfRef.__PVT__unnamedblk4__DOT__by 
                                       - (IData)(1U));
                                __Vfunc_idx_of__182__x 
                                    = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                __Vfunc_idx_of__182__Vfuncout 
                                    = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__182__y) 
                                       + __Vfunc_idx_of__182__x);
                            }(), __Vfunc_idx_of__182__Vfuncout)
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                 ? 
                                                ([&]() {
                                    __Vfunc_idx_of__183__y 
                                        = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                    __Vfunc_idx_of__183__x 
                                        = ((IData)(1U) 
                                           + vlSelfRef.__PVT__unnamedblk4__DOT__bx);
                                    __Vfunc_idx_of__183__Vfuncout 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__183__y) 
                                           + __Vfunc_idx_of__183__x);
                                }(), __Vfunc_idx_of__183__Vfuncout)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                  ? 
                                                 ([&]() {
                                        __Vfunc_idx_of__184__y 
                                            = ((IData)(1U) 
                                               + vlSelfRef.__PVT__unnamedblk4__DOT__by);
                                        __Vfunc_idx_of__184__x 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                        __Vfunc_idx_of__184__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__184__y) 
                                               + __Vfunc_idx_of__184__x);
                                    }(), __Vfunc_idx_of__184__Vfuncout)
                                                  : 
                                                 ([&]() {
                                        __Vfunc_idx_of__185__y 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                        __Vfunc_idx_of__185__x 
                                            = (vlSelfRef.__PVT__unnamedblk4__DOT__bx 
                                               - (IData)(1U));
                                        __Vfunc_idx_of__185__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__185__y) 
                                               + __Vfunc_idx_of__185__x);
                                    }(), __Vfunc_idx_of__185__Vfuncout)))));
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((2U 
                                                         == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)))))))))) {
                    if ((0U != (((2U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)) 
                                 << 2U) | (((1U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:328: Assertion failed in %Nmaze_solver_parallel.gen_cores[12].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         2,(IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back));
                            VL_STOP_MT("maze_solver_core.sv", 328, "");
                        }
                    }
                }
            } else {
                vlSelfRef.valid = 0U;
                __Vdly__st = 5U;
            }
        } else {
            if ((0U == (IData)(vlSelfRef.__PVT__nb_i))) {
                if ((0U == (IData)(vlSelfRef.__PVT__q_count))) {
                    vlSelfRef.valid = 0U;
                    __Vdly__st = 5U;
                } else {
                    __Vdly__q_count = (0x7fU & ((IData)(vlSelfRef.__PVT__q_count) 
                                                - (IData)(1U)));
                    vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx 
                        = ((0x63U >= (IData)(vlSelfRef.__PVT__q_head))
                            ? vlSelfRef.__PVT__queue
                           [vlSelfRef.__PVT__q_head]
                            : 0U);
                    __Vfunc_x_of__186__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_x_of__186__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__186__idx), (IData)(0xaU));
                    __Vdly__cur_x_reg = __Vfunc_x_of__186__Vfuncout;
                    __Vfunc_y_of__187__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_y_of__187__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__187__idx), (IData)(0xaU));
                    __Vdly__cur_y_reg = __Vfunc_y_of__187__Vfuncout;
                    __Vdly__q_head = (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__q_head)));
                    if (((9U == ([&]() {
                                        __Vfunc_x_of__188__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_x_of__188__Vfuncout 
                                            = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__188__idx), (IData)(0xaU));
                                    }(), __Vfunc_x_of__188__Vfuncout)) 
                         & (9U == ([&]() {
                                        __Vfunc_y_of__189__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_y_of__189__Vfuncout 
                                            = VL_DIVS_III(32, (IData)(__Vfunc_y_of__189__idx), (IData)(0xaU));
                                    }(), __Vfunc_y_of__189__Vfuncout)))) {
                        vlSelfRef.valid = 1U;
                        vlSelfRef.__PVT__bt_idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                        vlSelfRef.__PVT__bt_len = 0U;
                        __Vdly__st = 3U;
                    } else {
                        __Vdly__nb_i = 0U;
                    }
                }
            }
            if ((2U == (IData)(vlSelfRef.__PVT__st))) {
                if ((0U == (IData)(vlSelfRef.__PVT__nb_i))) {
                    vlSelfRef.__PVT__unnamedblk2__DOT__nx 
                        = vlSelfRef.__PVT__cur_x_reg;
                    vlSelfRef.__PVT__unnamedblk2__DOT__ny 
                        = (vlSelfRef.__PVT__cur_y_reg 
                           - (IData)(1U));
                    vlSelfRef.__PVT__unnamedblk2__DOT__dir_to_neighbor = 0U;
                } else if ((1U == (IData)(vlSelfRef.__PVT__nb_i))) {
                    vlSelfRef.__PVT__unnamedblk2__DOT__nx 
                        = ((IData)(1U) + vlSelfRef.__PVT__cur_x_reg);
                    vlSelfRef.__PVT__unnamedblk2__DOT__ny 
                        = vlSelfRef.__PVT__cur_y_reg;
                    vlSelfRef.__PVT__unnamedblk2__DOT__dir_to_neighbor = 1U;
                } else if ((2U == (IData)(vlSelfRef.__PVT__nb_i))) {
                    vlSelfRef.__PVT__unnamedblk2__DOT__nx 
                        = vlSelfRef.__PVT__cur_x_reg;
                    vlSelfRef.__PVT__unnamedblk2__DOT__ny 
                        = ((IData)(1U) + vlSelfRef.__PVT__cur_y_reg);
                    vlSelfRef.__PVT__unnamedblk2__DOT__dir_to_neighbor = 2U;
                } else {
                    vlSelfRef.__PVT__unnamedblk2__DOT__nx 
                        = (vlSelfRef.__PVT__cur_x_reg 
                           - (IData)(1U));
                    vlSelfRef.__PVT__unnamedblk2__DOT__ny 
                        = vlSelfRef.__PVT__cur_y_reg;
                    vlSelfRef.__PVT__unnamedblk2__DOT__dir_to_neighbor = 3U;
                }
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((2U 
                                                         == (IData)(vlSelfRef.__PVT__nb_i)) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == (IData)(vlSelfRef.__PVT__nb_i)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.__PVT__nb_i)))))))))) {
                    if ((0U != (((2U == (IData)(vlSelfRef.__PVT__nb_i)) 
                                 << 2U) | (((1U == (IData)(vlSelfRef.__PVT__nb_i)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.__PVT__nb_i)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:245: Assertion failed in %Nmaze_solver_parallel.gen_cores[12].solver_inst.unnamedblk2: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         2,(IData)(vlSelfRef.__PVT__nb_i));
                            VL_STOP_MT("maze_solver_core.sv", 245, "");
                        }
                    }
                }
                if ((((VL_LTES_III(32, 0U, vlSelfRef.__PVT__unnamedblk2__DOT__nx) 
                       & VL_GTS_III(32, 0xaU, vlSelfRef.__PVT__unnamedblk2__DOT__nx)) 
                      & VL_LTES_III(32, 0U, vlSelfRef.__PVT__unnamedblk2__DOT__ny)) 
                     & VL_GTS_III(32, 0xaU, vlSelfRef.__PVT__unnamedblk2__DOT__ny))) {
                    __Vfunc_idx_of__190__y = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                    __Vfunc_idx_of__190__x = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                    __Vfunc_idx_of__190__Vfuncout = 
                        (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__190__y) 
                         + __Vfunc_idx_of__190__x);
                    vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx 
                        = __Vfunc_idx_of__190__Vfuncout;
                    if ((([&]() {
                                    __Vfunc_cell_free__191__y 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                                    __Vfunc_cell_free__191__x 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                                    __Vfunc_cell_free__191__idx 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_cell_free__191__y) 
                                           + __Vfunc_cell_free__191__x);
                                    __Vtemp_3[0U] = (IData)(
                                                            (((QData)((IData)(
                                                                              vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[0xcU])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[0xcU]))));
                                    __Vtemp_3[1U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[0xcU])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[0xcU]))) 
                                                             >> 0x20U));
                                    __Vtemp_3[2U] = (IData)(
                                                            (((QData)((IData)(
                                                                              (0xfU 
                                                                               & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[0xcU]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[0xcU]))));
                                    __Vtemp_3[3U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               (0xfU 
                                                                                & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[0xcU]))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[0xcU]))) 
                                                             >> 0x20U));
                                    __Vfunc_cell_free__191__Vfuncout 
                                        = ((VL_LTES_III(32, 0U, __Vfunc_cell_free__191__idx) 
                                            & VL_GTS_III(32, 0x64U, __Vfunc_cell_free__191__idx)) 
                                           && ((0x63U 
                                                >= 
                                                (0x7fU 
                                                 & __Vfunc_cell_free__191__idx)) 
                                               && (1U 
                                                   & (__Vtemp_3[
                                                      (3U 
                                                       & (__Vfunc_cell_free__191__idx 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & __Vfunc_cell_free__191__idx)))));
                                }(), (IData)(__Vfunc_cell_free__191__Vfuncout)) 
                         & (~ ((0x63U >= (0x7fU & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx)) 
                               && vlSelfRef.__PVT__visited
                               [(0x7fU & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx)])))) {
                        vlSelfRef.__Vlvbound_hffa0b24d__0 = 1U;
                        __Vdly__q_count = (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__q_count)));
                        if (VL_LIKELY(((0x63U >= (0x7fU 
                                                  & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx))))) {
                            __VdlyVal__visited__v0 
                                = vlSelfRef.__Vlvbound_hffa0b24d__0;
                            __VdlyDim0__visited__v0 
                                = (0x7fU & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx);
                            vlSelfRef.__VdlyCommitQueuevisited.enqueue(__VdlyVal__visited__v0, (IData)(__VdlyDim0__visited__v0));
                        }
                        vlSelfRef.__Vlvbound_h9b0fa813__0 = 1U;
                        if (VL_LIKELY(((0x63U >= (0x7fU 
                                                  & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx))))) {
                            __VdlyVal__has_parent__v0 
                                = vlSelfRef.__Vlvbound_h9b0fa813__0;
                            __VdlyDim0__has_parent__v0 
                                = (0x7fU & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx);
                            vlSelfRef.__VdlyCommitQueuehas_parent.enqueue(__VdlyVal__has_parent__v0, (IData)(__VdlyDim0__has_parent__v0));
                        }
                        vlSelfRef.__Vlvbound_h3c9c8691__0 
                            = vlSelfRef.__PVT__unnamedblk2__DOT__dir_to_neighbor;
                        if (VL_LIKELY(((0x63U >= (0x7fU 
                                                  & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx))))) {
                            __VdlyVal__parent_dir__v0 
                                = vlSelfRef.__Vlvbound_h3c9c8691__0;
                            __VdlyDim0__parent_dir__v0 
                                = (0x7fU & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx);
                            vlSelfRef.__VdlyCommitQueueparent_dir.enqueue(__VdlyVal__parent_dir__v0, (IData)(__VdlyDim0__parent_dir__v0));
                        }
                        vlSelfRef.__Vlvbound_hdabc1705__1 
                            = (0x7fU & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx);
                        if (VL_LIKELY(((0x63U >= (IData)(vlSelfRef.__PVT__q_tail))))) {
                            __VdlyVal__queue__v0 = vlSelfRef.__Vlvbound_hdabc1705__1;
                            __VdlyDim0__queue__v0 = vlSelfRef.__PVT__q_tail;
                            __VdlySet__queue__v0 = 1U;
                        }
                        __Vdly__q_tail = (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__q_tail)));
                    }
                }
                __Vdly__nb_i = ((3U == (IData)(vlSelfRef.__PVT__nb_i))
                                 ? 0U : (3U & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__nb_i))));
            }
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__st))) {
        vlSelfRef.__PVT__i = 0U;
        while (VL_GTS_III(32, 0x64U, vlSelfRef.__PVT__i)) {
            vlSelfRef.__Vlvbound_h1e62cca8__0 = 0U;
            if (VL_LIKELY(((0x63U >= (0x7fU & vlSelfRef.__PVT__i))))) {
                __VdlyVal__visited__v1 = vlSelfRef.__Vlvbound_h1e62cca8__0;
                __VdlyDim0__visited__v1 = (0x7fU & vlSelfRef.__PVT__i);
                vlSelfRef.__VdlyCommitQueuevisited.enqueue(__VdlyVal__visited__v1, (IData)(__VdlyDim0__visited__v1));
            }
            vlSelfRef.__Vlvbound_h7a4d3d60__0 = 0U;
            if (VL_LIKELY(((0x63U >= (0x7fU & vlSelfRef.__PVT__i))))) {
                __VdlyVal__has_parent__v1 = vlSelfRef.__Vlvbound_h7a4d3d60__0;
                __VdlyDim0__has_parent__v1 = (0x7fU 
                                              & vlSelfRef.__PVT__i);
                vlSelfRef.__VdlyCommitQueuehas_parent.enqueue(__VdlyVal__has_parent__v1, (IData)(__VdlyDim0__has_parent__v1));
            }
            vlSelfRef.__Vlvbound_h9d5f4d18__0 = 0U;
            if (VL_LIKELY(((0x63U >= (0x7fU & vlSelfRef.__PVT__i))))) {
                __VdlyVal__parent_dir__v1 = vlSelfRef.__Vlvbound_h9d5f4d18__0;
                __VdlyDim0__parent_dir__v1 = (0x7fU 
                                              & vlSelfRef.__PVT__i);
                vlSelfRef.__VdlyCommitQueueparent_dir.enqueue(__VdlyVal__parent_dir__v1, (IData)(__VdlyDim0__parent_dir__v1));
            }
            vlSelfRef.__PVT__i = ((IData)(1U) + vlSelfRef.__PVT__i);
        }
        __Vdly__q_head = 0U;
        __Vdly__q_tail = 1U;
        __Vdly__q_count = 1U;
        __VdlySet__queue__v1 = 1U;
        __Vdly__nb_i = 0U;
        __Vdly__st = 2U;
        vlSelfRef.__VdlyCommitQueuevisited.enqueue(1U, 0U);
    } else {
        vlSelfRef.__PVT__i = 7U;
        vlSelfRef.done = 0U;
        vlSelfRef.valid = 0U;
        __Vdly__path_len_reg = 0U;
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 0U);
        if ((0x1000U & (IData)(vlSymsp->TOP.maze_solver_parallel__DOT__core_start))) {
            __Vdly__st = 1U;
        }
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 1U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 2U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 3U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 4U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 5U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 6U);
    }
    vlSelfRef.__PVT__st = __Vdly__st;
    vlSelfRef.__PVT__cur_x_reg = __Vdly__cur_x_reg;
    vlSelfRef.__PVT__cur_y_reg = __Vdly__cur_y_reg;
    vlSelfRef.__PVT__nb_i = __Vdly__nb_i;
    vlSelfRef.__PVT__q_head = __Vdly__q_head;
    vlSelfRef.__PVT__q_tail = __Vdly__q_tail;
    vlSelfRef.__PVT__q_count = __Vdly__q_count;
    vlSelfRef.__VdlyCommitQueuevisited.commit(vlSelfRef.__PVT__visited);
    vlSelfRef.__VdlyCommitQueuehas_parent.commit(vlSelfRef.__PVT__has_parent);
    vlSelfRef.__VdlyCommitQueueparent_dir.commit(vlSelfRef.__PVT__parent_dir);
    if (__VdlySet__path_buf__v0) {
        vlSelfRef.__PVT__path_buf[__VdlyDim0__path_buf__v0] 
            = __VdlyVal__path_buf__v0;
    }
    if (__VdlySet__queue__v0) {
        vlSelfRef.__PVT__queue[__VdlyDim0__queue__v0] 
            = __VdlyVal__queue__v0;
    }
    if (__VdlySet__queue__v1) {
        vlSelfRef.__PVT__queue[0U] = 0U;
    }
    vlSelfRef.__PVT__path_len_reg = __Vdly__path_len_reg;
    vlSelfRef.__VdlyCommitQueuepath_words.commit(vlSelfRef.__PVT__path_words);
}

VL_INLINE_OPT void Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__13__KET____DOT__solver_inst__0(Vmaze_solver_parallel_maze_solver_core__N64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__13__KET____DOT__solver_inst__0\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_x_of__195__Vfuncout;
    __Vfunc_x_of__195__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__195__idx;
    __Vfunc_x_of__195__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__196__Vfuncout;
    __Vfunc_y_of__196__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__196__idx;
    __Vfunc_y_of__196__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__197__Vfuncout;
    __Vfunc_idx_of__197__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__197__x;
    __Vfunc_idx_of__197__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__197__y;
    __Vfunc_idx_of__197__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__198__Vfuncout;
    __Vfunc_idx_of__198__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__198__x;
    __Vfunc_idx_of__198__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__198__y;
    __Vfunc_idx_of__198__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__199__Vfuncout;
    __Vfunc_idx_of__199__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__199__x;
    __Vfunc_idx_of__199__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__199__y;
    __Vfunc_idx_of__199__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__200__Vfuncout;
    __Vfunc_idx_of__200__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__200__x;
    __Vfunc_idx_of__200__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__200__y;
    __Vfunc_idx_of__200__y = 0;
    IData/*31:0*/ __Vfunc_x_of__201__Vfuncout;
    __Vfunc_x_of__201__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__201__idx;
    __Vfunc_x_of__201__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__202__Vfuncout;
    __Vfunc_y_of__202__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__202__idx;
    __Vfunc_y_of__202__idx = 0;
    IData/*31:0*/ __Vfunc_x_of__203__Vfuncout;
    __Vfunc_x_of__203__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__203__idx;
    __Vfunc_x_of__203__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__204__Vfuncout;
    __Vfunc_y_of__204__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__204__idx;
    __Vfunc_y_of__204__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__205__Vfuncout;
    __Vfunc_idx_of__205__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__205__x;
    __Vfunc_idx_of__205__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__205__y;
    __Vfunc_idx_of__205__y = 0;
    CData/*0:0*/ __Vfunc_cell_free__206__Vfuncout;
    __Vfunc_cell_free__206__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_cell_free__206__x;
    __Vfunc_cell_free__206__x = 0;
    IData/*31:0*/ __Vfunc_cell_free__206__y;
    __Vfunc_cell_free__206__y = 0;
    IData/*31:0*/ __Vfunc_cell_free__206__idx;
    __Vfunc_cell_free__206__idx = 0;
    CData/*2:0*/ __Vdly__st;
    __Vdly__st = 0;
    CData/*7:0*/ __Vdly__path_len_reg;
    __Vdly__path_len_reg = 0;
    IData/*31:0*/ __Vdly__cur_x_reg;
    __Vdly__cur_x_reg = 0;
    IData/*31:0*/ __Vdly__cur_y_reg;
    __Vdly__cur_y_reg = 0;
    CData/*1:0*/ __Vdly__nb_i;
    __Vdly__nb_i = 0;
    CData/*6:0*/ __Vdly__q_head;
    __Vdly__q_head = 0;
    CData/*6:0*/ __Vdly__q_tail;
    __Vdly__q_tail = 0;
    CData/*6:0*/ __Vdly__q_count;
    __Vdly__q_count = 0;
    CData/*1:0*/ __VdlyVal__path_words__v14;
    __VdlyVal__path_words__v14 = 0;
    CData/*4:0*/ __VdlyLsb__path_words__v14;
    __VdlyLsb__path_words__v14 = 0;
    CData/*2:0*/ __VdlyDim0__path_words__v14;
    __VdlyDim0__path_words__v14 = 0;
    IData/*31:0*/ __VdlyMask__path_words__v14;
    __VdlyMask__path_words__v14 = 0;
    IData/*31:0*/ __VdlyElem__path_words__v14;
    __VdlyElem__path_words__v14 = 0;
    CData/*1:0*/ __VdlyVal__path_buf__v0;
    __VdlyVal__path_buf__v0 = 0;
    CData/*6:0*/ __VdlyDim0__path_buf__v0;
    __VdlyDim0__path_buf__v0 = 0;
    CData/*0:0*/ __VdlySet__path_buf__v0;
    __VdlySet__path_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__visited__v0;
    __VdlyVal__visited__v0 = 0;
    CData/*6:0*/ __VdlyDim0__visited__v0;
    __VdlyDim0__visited__v0 = 0;
    CData/*0:0*/ __VdlyVal__has_parent__v0;
    __VdlyVal__has_parent__v0 = 0;
    CData/*6:0*/ __VdlyDim0__has_parent__v0;
    __VdlyDim0__has_parent__v0 = 0;
    CData/*1:0*/ __VdlyVal__parent_dir__v0;
    __VdlyVal__parent_dir__v0 = 0;
    CData/*6:0*/ __VdlyDim0__parent_dir__v0;
    __VdlyDim0__parent_dir__v0 = 0;
    CData/*6:0*/ __VdlyVal__queue__v0;
    __VdlyVal__queue__v0 = 0;
    CData/*6:0*/ __VdlyDim0__queue__v0;
    __VdlyDim0__queue__v0 = 0;
    CData/*0:0*/ __VdlySet__queue__v0;
    __VdlySet__queue__v0 = 0;
    CData/*0:0*/ __VdlyVal__visited__v1;
    __VdlyVal__visited__v1 = 0;
    CData/*6:0*/ __VdlyDim0__visited__v1;
    __VdlyDim0__visited__v1 = 0;
    CData/*0:0*/ __VdlyVal__has_parent__v1;
    __VdlyVal__has_parent__v1 = 0;
    CData/*6:0*/ __VdlyDim0__has_parent__v1;
    __VdlyDim0__has_parent__v1 = 0;
    CData/*1:0*/ __VdlyVal__parent_dir__v1;
    __VdlyVal__parent_dir__v1 = 0;
    CData/*6:0*/ __VdlyDim0__parent_dir__v1;
    __VdlyDim0__parent_dir__v1 = 0;
    CData/*0:0*/ __VdlySet__queue__v1;
    __VdlySet__queue__v1 = 0;
    VlWide<4>/*127:0*/ __Vtemp_3;
    // Body
    __Vdly__st = vlSelfRef.__PVT__st;
    __Vdly__cur_x_reg = vlSelfRef.__PVT__cur_x_reg;
    __Vdly__cur_y_reg = vlSelfRef.__PVT__cur_y_reg;
    __Vdly__nb_i = vlSelfRef.__PVT__nb_i;
    __Vdly__q_head = vlSelfRef.__PVT__q_head;
    __Vdly__q_tail = vlSelfRef.__PVT__q_tail;
    __Vdly__q_count = vlSelfRef.__PVT__q_count;
    __VdlySet__path_buf__v0 = 0U;
    __VdlySet__queue__v0 = 0U;
    __VdlySet__queue__v1 = 0U;
    __Vdly__path_len_reg = vlSelfRef.__PVT__path_len_reg;
    if (vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__0__KET____DOT__solver_inst.rst) {
        vlSelfRef.__PVT__i = 7U;
        __Vdly__st = 0U;
        vlSelfRef.done = 0U;
        vlSelfRef.valid = 0U;
        __Vdly__path_len_reg = 0U;
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 0U);
        __Vdly__cur_x_reg = 0U;
        __Vdly__cur_y_reg = 0U;
        __Vdly__nb_i = 0U;
        __Vdly__q_head = 0U;
        __Vdly__q_tail = 0U;
        __Vdly__q_count = 0U;
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 1U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 2U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 3U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 4U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 5U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 6U);
    } else if ((4U & (IData)(vlSelfRef.__PVT__st))) {
        if ((2U & (IData)(vlSelfRef.__PVT__st))) {
            __Vdly__st = 0U;
        } else if ((1U & (IData)(vlSelfRef.__PVT__st))) {
            vlSelfRef.done = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP.maze_solver_parallel__DOT__core_start) 
                          >> 0xdU)))) {
                __Vdly__st = 0U;
                vlSelfRef.done = 0U;
            }
        } else {
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 0U);
            __Vdly__st = 5U;
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 1U);
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 2U);
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 3U);
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 4U);
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 5U);
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 6U);
            vlSelfRef.__PVT__i = 0U;
            while ((vlSelfRef.__PVT__i < (IData)(vlSelfRef.__PVT__path_len_reg))) {
                vlSelfRef.__PVT__unnamedblk6__DOT__fwd_i 
                    = (((IData)(vlSelfRef.__PVT__path_len_reg) 
                        - (IData)(1U)) - vlSelfRef.__PVT__i);
                vlSelfRef.__PVT__unnamedblk6__DOT__mv 
                    = ((0x63U >= (0x7fU & vlSelfRef.__PVT__unnamedblk6__DOT__fwd_i))
                        ? vlSelfRef.__PVT__path_buf
                       [(0x7fU & vlSelfRef.__PVT__unnamedblk6__DOT__fwd_i)]
                        : 0U);
                vlSelfRef.__PVT__unnamedblk6__DOT__word_i 
                    = VL_DIVS_III(32, vlSelfRef.__PVT__i, (IData)(0x10U));
                vlSelfRef.__PVT__unnamedblk6__DOT__bitpos 
                    = VL_MULS_III(32, (IData)(2U), 
                                  VL_MODDIVS_III(32, vlSelfRef.__PVT__i, (IData)(0x10U)));
                vlSelfRef.__Vlvbound_h95c5206c__0 = vlSelfRef.__PVT__unnamedblk6__DOT__mv;
                if (VL_LIKELY(((6U >= (7U & vlSelfRef.__PVT__unnamedblk6__DOT__word_i))))) {
                    __VdlyVal__path_words__v14 = vlSelfRef.__Vlvbound_h95c5206c__0;
                    __VdlyLsb__path_words__v14 = (0x1fU 
                                                  & vlSelfRef.__PVT__unnamedblk6__DOT__bitpos);
                    __VdlyDim0__path_words__v14 = (7U 
                                                   & vlSelfRef.__PVT__unnamedblk6__DOT__word_i);
                    __VdlyMask__path_words__v14 = 0U;
                    __VdlyMask__path_words__v14 = (__VdlyMask__path_words__v14 
                                                   | (0xffffffffULL 
                                                      & ((IData)(3U) 
                                                         << (IData)(__VdlyLsb__path_words__v14))));
                    __VdlyElem__path_words__v14 = 0U;
                    __VdlyElem__path_words__v14 = (
                                                   ((~ 
                                                     ((IData)(3U) 
                                                      << (IData)(__VdlyLsb__path_words__v14))) 
                                                    & __VdlyElem__path_words__v14) 
                                                   | (0xffffffffULL 
                                                      & ((IData)(__VdlyVal__path_words__v14) 
                                                         << (IData)(__VdlyLsb__path_words__v14))));
                    vlSelfRef.__VdlyCommitQueuepath_words.enqueue(__VdlyElem__path_words__v14, __VdlyMask__path_words__v14, (IData)(__VdlyDim0__path_words__v14));
                }
                vlSelfRef.__PVT__i = ((IData)(1U) + vlSelfRef.__PVT__i);
            }
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__st))) {
        if ((1U & (IData)(vlSelfRef.__PVT__st))) {
            __Vfunc_x_of__195__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_x_of__195__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__195__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__bx = __Vfunc_x_of__195__Vfuncout;
            __Vfunc_y_of__196__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_y_of__196__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__196__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__by = __Vfunc_y_of__196__Vfuncout;
            if (((0U == vlSelfRef.__PVT__unnamedblk4__DOT__bx) 
                 & (0U == vlSelfRef.__PVT__unnamedblk4__DOT__by))) {
                __Vdly__path_len_reg = vlSelfRef.__PVT__bt_len;
                __Vdly__st = 4U;
            } else if (((0x63U >= (IData)(vlSelfRef.__PVT__bt_idx)) 
                        && vlSelfRef.__PVT__has_parent
                        [vlSelfRef.__PVT__bt_idx])) {
                vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd 
                    = ((0x63U >= (IData)(vlSelfRef.__PVT__bt_idx))
                        ? vlSelfRef.__PVT__parent_dir
                       [vlSelfRef.__PVT__bt_idx] : 0U);
                vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back 
                    = ((0U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd))
                        ? 2U : ((1U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd))
                                 ? 3U : ((2U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd))
                                          ? 0U : 1U)));
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((2U 
                                                         == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)))))))))) {
                    if ((0U != (((2U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)) 
                                 << 2U) | (((1U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:315: Assertion failed in %Nmaze_solver_parallel.gen_cores[13].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         2,(IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd));
                            VL_STOP_MT("maze_solver_core.sv", 315, "");
                        }
                    }
                }
                vlSelfRef.__Vlvbound_h73cb18d2__0 = vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd;
                if (VL_LIKELY(((0x63U >= (0x7fU & (IData)(vlSelfRef.__PVT__bt_len)))))) {
                    __VdlyVal__path_buf__v0 = vlSelfRef.__Vlvbound_h73cb18d2__0;
                    __VdlyDim0__path_buf__v0 = (0x7fU 
                                                & (IData)(vlSelfRef.__PVT__bt_len));
                    __VdlySet__path_buf__v0 = 1U;
                }
                vlSelfRef.__PVT__bt_len = (0xffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__bt_len)));
                vlSelfRef.__PVT__bt_idx = (0x7fU & 
                                           ((0U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                             ? ([&]() {
                                __Vfunc_idx_of__197__y 
                                    = (vlSelfRef.__PVT__unnamedblk4__DOT__by 
                                       - (IData)(1U));
                                __Vfunc_idx_of__197__x 
                                    = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                __Vfunc_idx_of__197__Vfuncout 
                                    = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__197__y) 
                                       + __Vfunc_idx_of__197__x);
                            }(), __Vfunc_idx_of__197__Vfuncout)
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                 ? 
                                                ([&]() {
                                    __Vfunc_idx_of__198__y 
                                        = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                    __Vfunc_idx_of__198__x 
                                        = ((IData)(1U) 
                                           + vlSelfRef.__PVT__unnamedblk4__DOT__bx);
                                    __Vfunc_idx_of__198__Vfuncout 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__198__y) 
                                           + __Vfunc_idx_of__198__x);
                                }(), __Vfunc_idx_of__198__Vfuncout)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                  ? 
                                                 ([&]() {
                                        __Vfunc_idx_of__199__y 
                                            = ((IData)(1U) 
                                               + vlSelfRef.__PVT__unnamedblk4__DOT__by);
                                        __Vfunc_idx_of__199__x 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                        __Vfunc_idx_of__199__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__199__y) 
                                               + __Vfunc_idx_of__199__x);
                                    }(), __Vfunc_idx_of__199__Vfuncout)
                                                  : 
                                                 ([&]() {
                                        __Vfunc_idx_of__200__y 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                        __Vfunc_idx_of__200__x 
                                            = (vlSelfRef.__PVT__unnamedblk4__DOT__bx 
                                               - (IData)(1U));
                                        __Vfunc_idx_of__200__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__200__y) 
                                               + __Vfunc_idx_of__200__x);
                                    }(), __Vfunc_idx_of__200__Vfuncout)))));
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((2U 
                                                         == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)))))))))) {
                    if ((0U != (((2U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)) 
                                 << 2U) | (((1U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:328: Assertion failed in %Nmaze_solver_parallel.gen_cores[13].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         2,(IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back));
                            VL_STOP_MT("maze_solver_core.sv", 328, "");
                        }
                    }
                }
            } else {
                vlSelfRef.valid = 0U;
                __Vdly__st = 5U;
            }
        } else {
            if ((0U == (IData)(vlSelfRef.__PVT__nb_i))) {
                if ((0U == (IData)(vlSelfRef.__PVT__q_count))) {
                    vlSelfRef.valid = 0U;
                    __Vdly__st = 5U;
                } else {
                    __Vdly__q_count = (0x7fU & ((IData)(vlSelfRef.__PVT__q_count) 
                                                - (IData)(1U)));
                    vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx 
                        = ((0x63U >= (IData)(vlSelfRef.__PVT__q_head))
                            ? vlSelfRef.__PVT__queue
                           [vlSelfRef.__PVT__q_head]
                            : 0U);
                    __Vfunc_x_of__201__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_x_of__201__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__201__idx), (IData)(0xaU));
                    __Vdly__cur_x_reg = __Vfunc_x_of__201__Vfuncout;
                    __Vfunc_y_of__202__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_y_of__202__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__202__idx), (IData)(0xaU));
                    __Vdly__cur_y_reg = __Vfunc_y_of__202__Vfuncout;
                    __Vdly__q_head = (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__q_head)));
                    if (((9U == ([&]() {
                                        __Vfunc_x_of__203__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_x_of__203__Vfuncout 
                                            = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__203__idx), (IData)(0xaU));
                                    }(), __Vfunc_x_of__203__Vfuncout)) 
                         & (9U == ([&]() {
                                        __Vfunc_y_of__204__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_y_of__204__Vfuncout 
                                            = VL_DIVS_III(32, (IData)(__Vfunc_y_of__204__idx), (IData)(0xaU));
                                    }(), __Vfunc_y_of__204__Vfuncout)))) {
                        vlSelfRef.valid = 1U;
                        vlSelfRef.__PVT__bt_idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                        vlSelfRef.__PVT__bt_len = 0U;
                        __Vdly__st = 3U;
                    } else {
                        __Vdly__nb_i = 0U;
                    }
                }
            }
            if ((2U == (IData)(vlSelfRef.__PVT__st))) {
                if ((0U == (IData)(vlSelfRef.__PVT__nb_i))) {
                    vlSelfRef.__PVT__unnamedblk2__DOT__nx 
                        = vlSelfRef.__PVT__cur_x_reg;
                    vlSelfRef.__PVT__unnamedblk2__DOT__ny 
                        = (vlSelfRef.__PVT__cur_y_reg 
                           - (IData)(1U));
                    vlSelfRef.__PVT__unnamedblk2__DOT__dir_to_neighbor = 0U;
                } else if ((1U == (IData)(vlSelfRef.__PVT__nb_i))) {
                    vlSelfRef.__PVT__unnamedblk2__DOT__nx 
                        = ((IData)(1U) + vlSelfRef.__PVT__cur_x_reg);
                    vlSelfRef.__PVT__unnamedblk2__DOT__ny 
                        = vlSelfRef.__PVT__cur_y_reg;
                    vlSelfRef.__PVT__unnamedblk2__DOT__dir_to_neighbor = 1U;
                } else if ((2U == (IData)(vlSelfRef.__PVT__nb_i))) {
                    vlSelfRef.__PVT__unnamedblk2__DOT__nx 
                        = vlSelfRef.__PVT__cur_x_reg;
                    vlSelfRef.__PVT__unnamedblk2__DOT__ny 
                        = ((IData)(1U) + vlSelfRef.__PVT__cur_y_reg);
                    vlSelfRef.__PVT__unnamedblk2__DOT__dir_to_neighbor = 2U;
                } else {
                    vlSelfRef.__PVT__unnamedblk2__DOT__nx 
                        = (vlSelfRef.__PVT__cur_x_reg 
                           - (IData)(1U));
                    vlSelfRef.__PVT__unnamedblk2__DOT__ny 
                        = vlSelfRef.__PVT__cur_y_reg;
                    vlSelfRef.__PVT__unnamedblk2__DOT__dir_to_neighbor = 3U;
                }
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((2U 
                                                         == (IData)(vlSelfRef.__PVT__nb_i)) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == (IData)(vlSelfRef.__PVT__nb_i)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.__PVT__nb_i)))))))))) {
                    if ((0U != (((2U == (IData)(vlSelfRef.__PVT__nb_i)) 
                                 << 2U) | (((1U == (IData)(vlSelfRef.__PVT__nb_i)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.__PVT__nb_i)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:245: Assertion failed in %Nmaze_solver_parallel.gen_cores[13].solver_inst.unnamedblk2: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         2,(IData)(vlSelfRef.__PVT__nb_i));
                            VL_STOP_MT("maze_solver_core.sv", 245, "");
                        }
                    }
                }
                if ((((VL_LTES_III(32, 0U, vlSelfRef.__PVT__unnamedblk2__DOT__nx) 
                       & VL_GTS_III(32, 0xaU, vlSelfRef.__PVT__unnamedblk2__DOT__nx)) 
                      & VL_LTES_III(32, 0U, vlSelfRef.__PVT__unnamedblk2__DOT__ny)) 
                     & VL_GTS_III(32, 0xaU, vlSelfRef.__PVT__unnamedblk2__DOT__ny))) {
                    __Vfunc_idx_of__205__y = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                    __Vfunc_idx_of__205__x = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                    __Vfunc_idx_of__205__Vfuncout = 
                        (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__205__y) 
                         + __Vfunc_idx_of__205__x);
                    vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx 
                        = __Vfunc_idx_of__205__Vfuncout;
                    if ((([&]() {
                                    __Vfunc_cell_free__206__y 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                                    __Vfunc_cell_free__206__x 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                                    __Vfunc_cell_free__206__idx 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_cell_free__206__y) 
                                           + __Vfunc_cell_free__206__x);
                                    __Vtemp_3[0U] = (IData)(
                                                            (((QData)((IData)(
                                                                              vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[0xdU])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[0xdU]))));
                                    __Vtemp_3[1U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[0xdU])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[0xdU]))) 
                                                             >> 0x20U));
                                    __Vtemp_3[2U] = (IData)(
                                                            (((QData)((IData)(
                                                                              (0xfU 
                                                                               & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[0xdU]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[0xdU]))));
                                    __Vtemp_3[3U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               (0xfU 
                                                                                & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[0xdU]))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[0xdU]))) 
                                                             >> 0x20U));
                                    __Vfunc_cell_free__206__Vfuncout 
                                        = ((VL_LTES_III(32, 0U, __Vfunc_cell_free__206__idx) 
                                            & VL_GTS_III(32, 0x64U, __Vfunc_cell_free__206__idx)) 
                                           && ((0x63U 
                                                >= 
                                                (0x7fU 
                                                 & __Vfunc_cell_free__206__idx)) 
                                               && (1U 
                                                   & (__Vtemp_3[
                                                      (3U 
                                                       & (__Vfunc_cell_free__206__idx 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & __Vfunc_cell_free__206__idx)))));
                                }(), (IData)(__Vfunc_cell_free__206__Vfuncout)) 
                         & (~ ((0x63U >= (0x7fU & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx)) 
                               && vlSelfRef.__PVT__visited
                               [(0x7fU & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx)])))) {
                        vlSelfRef.__Vlvbound_hffa0b24d__0 = 1U;
                        __Vdly__q_count = (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__q_count)));
                        if (VL_LIKELY(((0x63U >= (0x7fU 
                                                  & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx))))) {
                            __VdlyVal__visited__v0 
                                = vlSelfRef.__Vlvbound_hffa0b24d__0;
                            __VdlyDim0__visited__v0 
                                = (0x7fU & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx);
                            vlSelfRef.__VdlyCommitQueuevisited.enqueue(__VdlyVal__visited__v0, (IData)(__VdlyDim0__visited__v0));
                        }
                        vlSelfRef.__Vlvbound_h9b0fa813__0 = 1U;
                        if (VL_LIKELY(((0x63U >= (0x7fU 
                                                  & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx))))) {
                            __VdlyVal__has_parent__v0 
                                = vlSelfRef.__Vlvbound_h9b0fa813__0;
                            __VdlyDim0__has_parent__v0 
                                = (0x7fU & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx);
                            vlSelfRef.__VdlyCommitQueuehas_parent.enqueue(__VdlyVal__has_parent__v0, (IData)(__VdlyDim0__has_parent__v0));
                        }
                        vlSelfRef.__Vlvbound_h3c9c8691__0 
                            = vlSelfRef.__PVT__unnamedblk2__DOT__dir_to_neighbor;
                        if (VL_LIKELY(((0x63U >= (0x7fU 
                                                  & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx))))) {
                            __VdlyVal__parent_dir__v0 
                                = vlSelfRef.__Vlvbound_h3c9c8691__0;
                            __VdlyDim0__parent_dir__v0 
                                = (0x7fU & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx);
                            vlSelfRef.__VdlyCommitQueueparent_dir.enqueue(__VdlyVal__parent_dir__v0, (IData)(__VdlyDim0__parent_dir__v0));
                        }
                        vlSelfRef.__Vlvbound_hdabc1705__1 
                            = (0x7fU & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx);
                        if (VL_LIKELY(((0x63U >= (IData)(vlSelfRef.__PVT__q_tail))))) {
                            __VdlyVal__queue__v0 = vlSelfRef.__Vlvbound_hdabc1705__1;
                            __VdlyDim0__queue__v0 = vlSelfRef.__PVT__q_tail;
                            __VdlySet__queue__v0 = 1U;
                        }
                        __Vdly__q_tail = (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__q_tail)));
                    }
                }
                __Vdly__nb_i = ((3U == (IData)(vlSelfRef.__PVT__nb_i))
                                 ? 0U : (3U & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__nb_i))));
            }
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__st))) {
        vlSelfRef.__PVT__i = 0U;
        while (VL_GTS_III(32, 0x64U, vlSelfRef.__PVT__i)) {
            vlSelfRef.__Vlvbound_h1e62cca8__0 = 0U;
            if (VL_LIKELY(((0x63U >= (0x7fU & vlSelfRef.__PVT__i))))) {
                __VdlyVal__visited__v1 = vlSelfRef.__Vlvbound_h1e62cca8__0;
                __VdlyDim0__visited__v1 = (0x7fU & vlSelfRef.__PVT__i);
                vlSelfRef.__VdlyCommitQueuevisited.enqueue(__VdlyVal__visited__v1, (IData)(__VdlyDim0__visited__v1));
            }
            vlSelfRef.__Vlvbound_h7a4d3d60__0 = 0U;
            if (VL_LIKELY(((0x63U >= (0x7fU & vlSelfRef.__PVT__i))))) {
                __VdlyVal__has_parent__v1 = vlSelfRef.__Vlvbound_h7a4d3d60__0;
                __VdlyDim0__has_parent__v1 = (0x7fU 
                                              & vlSelfRef.__PVT__i);
                vlSelfRef.__VdlyCommitQueuehas_parent.enqueue(__VdlyVal__has_parent__v1, (IData)(__VdlyDim0__has_parent__v1));
            }
            vlSelfRef.__Vlvbound_h9d5f4d18__0 = 0U;
            if (VL_LIKELY(((0x63U >= (0x7fU & vlSelfRef.__PVT__i))))) {
                __VdlyVal__parent_dir__v1 = vlSelfRef.__Vlvbound_h9d5f4d18__0;
                __VdlyDim0__parent_dir__v1 = (0x7fU 
                                              & vlSelfRef.__PVT__i);
                vlSelfRef.__VdlyCommitQueueparent_dir.enqueue(__VdlyVal__parent_dir__v1, (IData)(__VdlyDim0__parent_dir__v1));
            }
            vlSelfRef.__PVT__i = ((IData)(1U) + vlSelfRef.__PVT__i);
        }
        __Vdly__q_head = 0U;
        __Vdly__q_tail = 1U;
        __Vdly__q_count = 1U;
        __VdlySet__queue__v1 = 1U;
        __Vdly__nb_i = 0U;
        __Vdly__st = 2U;
        vlSelfRef.__VdlyCommitQueuevisited.enqueue(1U, 0U);
    } else {
        vlSelfRef.__PVT__i = 7U;
        vlSelfRef.done = 0U;
        vlSelfRef.valid = 0U;
        __Vdly__path_len_reg = 0U;
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 0U);
        if ((0x2000U & (IData)(vlSymsp->TOP.maze_solver_parallel__DOT__core_start))) {
            __Vdly__st = 1U;
        }
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 1U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 2U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 3U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 4U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 5U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 6U);
    }
    vlSelfRef.__PVT__st = __Vdly__st;
    vlSelfRef.__PVT__cur_x_reg = __Vdly__cur_x_reg;
    vlSelfRef.__PVT__cur_y_reg = __Vdly__cur_y_reg;
    vlSelfRef.__PVT__nb_i = __Vdly__nb_i;
    vlSelfRef.__PVT__q_head = __Vdly__q_head;
    vlSelfRef.__PVT__q_tail = __Vdly__q_tail;
    vlSelfRef.__PVT__q_count = __Vdly__q_count;
    vlSelfRef.__VdlyCommitQueuevisited.commit(vlSelfRef.__PVT__visited);
    vlSelfRef.__VdlyCommitQueuehas_parent.commit(vlSelfRef.__PVT__has_parent);
    vlSelfRef.__VdlyCommitQueueparent_dir.commit(vlSelfRef.__PVT__parent_dir);
    if (__VdlySet__path_buf__v0) {
        vlSelfRef.__PVT__path_buf[__VdlyDim0__path_buf__v0] 
            = __VdlyVal__path_buf__v0;
    }
    if (__VdlySet__queue__v0) {
        vlSelfRef.__PVT__queue[__VdlyDim0__queue__v0] 
            = __VdlyVal__queue__v0;
    }
    if (__VdlySet__queue__v1) {
        vlSelfRef.__PVT__queue[0U] = 0U;
    }
    vlSelfRef.__PVT__path_len_reg = __Vdly__path_len_reg;
    vlSelfRef.__VdlyCommitQueuepath_words.commit(vlSelfRef.__PVT__path_words);
}

VL_INLINE_OPT void Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__14__KET____DOT__solver_inst__0(Vmaze_solver_parallel_maze_solver_core__N64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__14__KET____DOT__solver_inst__0\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_x_of__210__Vfuncout;
    __Vfunc_x_of__210__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__210__idx;
    __Vfunc_x_of__210__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__211__Vfuncout;
    __Vfunc_y_of__211__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__211__idx;
    __Vfunc_y_of__211__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__212__Vfuncout;
    __Vfunc_idx_of__212__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__212__x;
    __Vfunc_idx_of__212__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__212__y;
    __Vfunc_idx_of__212__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__213__Vfuncout;
    __Vfunc_idx_of__213__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__213__x;
    __Vfunc_idx_of__213__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__213__y;
    __Vfunc_idx_of__213__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__214__Vfuncout;
    __Vfunc_idx_of__214__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__214__x;
    __Vfunc_idx_of__214__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__214__y;
    __Vfunc_idx_of__214__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__215__Vfuncout;
    __Vfunc_idx_of__215__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__215__x;
    __Vfunc_idx_of__215__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__215__y;
    __Vfunc_idx_of__215__y = 0;
    IData/*31:0*/ __Vfunc_x_of__216__Vfuncout;
    __Vfunc_x_of__216__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__216__idx;
    __Vfunc_x_of__216__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__217__Vfuncout;
    __Vfunc_y_of__217__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__217__idx;
    __Vfunc_y_of__217__idx = 0;
    IData/*31:0*/ __Vfunc_x_of__218__Vfuncout;
    __Vfunc_x_of__218__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__218__idx;
    __Vfunc_x_of__218__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__219__Vfuncout;
    __Vfunc_y_of__219__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__219__idx;
    __Vfunc_y_of__219__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__220__Vfuncout;
    __Vfunc_idx_of__220__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__220__x;
    __Vfunc_idx_of__220__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__220__y;
    __Vfunc_idx_of__220__y = 0;
    CData/*0:0*/ __Vfunc_cell_free__221__Vfuncout;
    __Vfunc_cell_free__221__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_cell_free__221__x;
    __Vfunc_cell_free__221__x = 0;
    IData/*31:0*/ __Vfunc_cell_free__221__y;
    __Vfunc_cell_free__221__y = 0;
    IData/*31:0*/ __Vfunc_cell_free__221__idx;
    __Vfunc_cell_free__221__idx = 0;
    CData/*2:0*/ __Vdly__st;
    __Vdly__st = 0;
    CData/*7:0*/ __Vdly__path_len_reg;
    __Vdly__path_len_reg = 0;
    IData/*31:0*/ __Vdly__cur_x_reg;
    __Vdly__cur_x_reg = 0;
    IData/*31:0*/ __Vdly__cur_y_reg;
    __Vdly__cur_y_reg = 0;
    CData/*1:0*/ __Vdly__nb_i;
    __Vdly__nb_i = 0;
    CData/*6:0*/ __Vdly__q_head;
    __Vdly__q_head = 0;
    CData/*6:0*/ __Vdly__q_tail;
    __Vdly__q_tail = 0;
    CData/*6:0*/ __Vdly__q_count;
    __Vdly__q_count = 0;
    CData/*1:0*/ __VdlyVal__path_words__v14;
    __VdlyVal__path_words__v14 = 0;
    CData/*4:0*/ __VdlyLsb__path_words__v14;
    __VdlyLsb__path_words__v14 = 0;
    CData/*2:0*/ __VdlyDim0__path_words__v14;
    __VdlyDim0__path_words__v14 = 0;
    IData/*31:0*/ __VdlyMask__path_words__v14;
    __VdlyMask__path_words__v14 = 0;
    IData/*31:0*/ __VdlyElem__path_words__v14;
    __VdlyElem__path_words__v14 = 0;
    CData/*1:0*/ __VdlyVal__path_buf__v0;
    __VdlyVal__path_buf__v0 = 0;
    CData/*6:0*/ __VdlyDim0__path_buf__v0;
    __VdlyDim0__path_buf__v0 = 0;
    CData/*0:0*/ __VdlySet__path_buf__v0;
    __VdlySet__path_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__visited__v0;
    __VdlyVal__visited__v0 = 0;
    CData/*6:0*/ __VdlyDim0__visited__v0;
    __VdlyDim0__visited__v0 = 0;
    CData/*0:0*/ __VdlyVal__has_parent__v0;
    __VdlyVal__has_parent__v0 = 0;
    CData/*6:0*/ __VdlyDim0__has_parent__v0;
    __VdlyDim0__has_parent__v0 = 0;
    CData/*1:0*/ __VdlyVal__parent_dir__v0;
    __VdlyVal__parent_dir__v0 = 0;
    CData/*6:0*/ __VdlyDim0__parent_dir__v0;
    __VdlyDim0__parent_dir__v0 = 0;
    CData/*6:0*/ __VdlyVal__queue__v0;
    __VdlyVal__queue__v0 = 0;
    CData/*6:0*/ __VdlyDim0__queue__v0;
    __VdlyDim0__queue__v0 = 0;
    CData/*0:0*/ __VdlySet__queue__v0;
    __VdlySet__queue__v0 = 0;
    CData/*0:0*/ __VdlyVal__visited__v1;
    __VdlyVal__visited__v1 = 0;
    CData/*6:0*/ __VdlyDim0__visited__v1;
    __VdlyDim0__visited__v1 = 0;
    CData/*0:0*/ __VdlyVal__has_parent__v1;
    __VdlyVal__has_parent__v1 = 0;
    CData/*6:0*/ __VdlyDim0__has_parent__v1;
    __VdlyDim0__has_parent__v1 = 0;
    CData/*1:0*/ __VdlyVal__parent_dir__v1;
    __VdlyVal__parent_dir__v1 = 0;
    CData/*6:0*/ __VdlyDim0__parent_dir__v1;
    __VdlyDim0__parent_dir__v1 = 0;
    CData/*0:0*/ __VdlySet__queue__v1;
    __VdlySet__queue__v1 = 0;
    VlWide<4>/*127:0*/ __Vtemp_3;
    // Body
    __Vdly__st = vlSelfRef.__PVT__st;
    __Vdly__cur_x_reg = vlSelfRef.__PVT__cur_x_reg;
    __Vdly__cur_y_reg = vlSelfRef.__PVT__cur_y_reg;
    __Vdly__nb_i = vlSelfRef.__PVT__nb_i;
    __Vdly__q_head = vlSelfRef.__PVT__q_head;
    __Vdly__q_tail = vlSelfRef.__PVT__q_tail;
    __Vdly__q_count = vlSelfRef.__PVT__q_count;
    __VdlySet__path_buf__v0 = 0U;
    __VdlySet__queue__v0 = 0U;
    __VdlySet__queue__v1 = 0U;
    __Vdly__path_len_reg = vlSelfRef.__PVT__path_len_reg;
    if (vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__0__KET____DOT__solver_inst.rst) {
        vlSelfRef.__PVT__i = 7U;
        __Vdly__st = 0U;
        vlSelfRef.done = 0U;
        vlSelfRef.valid = 0U;
        __Vdly__path_len_reg = 0U;
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 0U);
        __Vdly__cur_x_reg = 0U;
        __Vdly__cur_y_reg = 0U;
        __Vdly__nb_i = 0U;
        __Vdly__q_head = 0U;
        __Vdly__q_tail = 0U;
        __Vdly__q_count = 0U;
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 1U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 2U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 3U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 4U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 5U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 6U);
    } else if ((4U & (IData)(vlSelfRef.__PVT__st))) {
        if ((2U & (IData)(vlSelfRef.__PVT__st))) {
            __Vdly__st = 0U;
        } else if ((1U & (IData)(vlSelfRef.__PVT__st))) {
            vlSelfRef.done = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP.maze_solver_parallel__DOT__core_start) 
                          >> 0xeU)))) {
                __Vdly__st = 0U;
                vlSelfRef.done = 0U;
            }
        } else {
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 0U);
            __Vdly__st = 5U;
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 1U);
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 2U);
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 3U);
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 4U);
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 5U);
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 6U);
            vlSelfRef.__PVT__i = 0U;
            while ((vlSelfRef.__PVT__i < (IData)(vlSelfRef.__PVT__path_len_reg))) {
                vlSelfRef.__PVT__unnamedblk6__DOT__fwd_i 
                    = (((IData)(vlSelfRef.__PVT__path_len_reg) 
                        - (IData)(1U)) - vlSelfRef.__PVT__i);
                vlSelfRef.__PVT__unnamedblk6__DOT__mv 
                    = ((0x63U >= (0x7fU & vlSelfRef.__PVT__unnamedblk6__DOT__fwd_i))
                        ? vlSelfRef.__PVT__path_buf
                       [(0x7fU & vlSelfRef.__PVT__unnamedblk6__DOT__fwd_i)]
                        : 0U);
                vlSelfRef.__PVT__unnamedblk6__DOT__word_i 
                    = VL_DIVS_III(32, vlSelfRef.__PVT__i, (IData)(0x10U));
                vlSelfRef.__PVT__unnamedblk6__DOT__bitpos 
                    = VL_MULS_III(32, (IData)(2U), 
                                  VL_MODDIVS_III(32, vlSelfRef.__PVT__i, (IData)(0x10U)));
                vlSelfRef.__Vlvbound_h95c5206c__0 = vlSelfRef.__PVT__unnamedblk6__DOT__mv;
                if (VL_LIKELY(((6U >= (7U & vlSelfRef.__PVT__unnamedblk6__DOT__word_i))))) {
                    __VdlyVal__path_words__v14 = vlSelfRef.__Vlvbound_h95c5206c__0;
                    __VdlyLsb__path_words__v14 = (0x1fU 
                                                  & vlSelfRef.__PVT__unnamedblk6__DOT__bitpos);
                    __VdlyDim0__path_words__v14 = (7U 
                                                   & vlSelfRef.__PVT__unnamedblk6__DOT__word_i);
                    __VdlyMask__path_words__v14 = 0U;
                    __VdlyMask__path_words__v14 = (__VdlyMask__path_words__v14 
                                                   | (0xffffffffULL 
                                                      & ((IData)(3U) 
                                                         << (IData)(__VdlyLsb__path_words__v14))));
                    __VdlyElem__path_words__v14 = 0U;
                    __VdlyElem__path_words__v14 = (
                                                   ((~ 
                                                     ((IData)(3U) 
                                                      << (IData)(__VdlyLsb__path_words__v14))) 
                                                    & __VdlyElem__path_words__v14) 
                                                   | (0xffffffffULL 
                                                      & ((IData)(__VdlyVal__path_words__v14) 
                                                         << (IData)(__VdlyLsb__path_words__v14))));
                    vlSelfRef.__VdlyCommitQueuepath_words.enqueue(__VdlyElem__path_words__v14, __VdlyMask__path_words__v14, (IData)(__VdlyDim0__path_words__v14));
                }
                vlSelfRef.__PVT__i = ((IData)(1U) + vlSelfRef.__PVT__i);
            }
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__st))) {
        if ((1U & (IData)(vlSelfRef.__PVT__st))) {
            __Vfunc_x_of__210__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_x_of__210__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__210__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__bx = __Vfunc_x_of__210__Vfuncout;
            __Vfunc_y_of__211__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_y_of__211__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__211__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__by = __Vfunc_y_of__211__Vfuncout;
            if (((0U == vlSelfRef.__PVT__unnamedblk4__DOT__bx) 
                 & (0U == vlSelfRef.__PVT__unnamedblk4__DOT__by))) {
                __Vdly__path_len_reg = vlSelfRef.__PVT__bt_len;
                __Vdly__st = 4U;
            } else if (((0x63U >= (IData)(vlSelfRef.__PVT__bt_idx)) 
                        && vlSelfRef.__PVT__has_parent
                        [vlSelfRef.__PVT__bt_idx])) {
                vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd 
                    = ((0x63U >= (IData)(vlSelfRef.__PVT__bt_idx))
                        ? vlSelfRef.__PVT__parent_dir
                       [vlSelfRef.__PVT__bt_idx] : 0U);
                vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back 
                    = ((0U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd))
                        ? 2U : ((1U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd))
                                 ? 3U : ((2U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd))
                                          ? 0U : 1U)));
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((2U 
                                                         == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)))))))))) {
                    if ((0U != (((2U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)) 
                                 << 2U) | (((1U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:315: Assertion failed in %Nmaze_solver_parallel.gen_cores[14].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         2,(IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd));
                            VL_STOP_MT("maze_solver_core.sv", 315, "");
                        }
                    }
                }
                vlSelfRef.__Vlvbound_h73cb18d2__0 = vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd;
                if (VL_LIKELY(((0x63U >= (0x7fU & (IData)(vlSelfRef.__PVT__bt_len)))))) {
                    __VdlyVal__path_buf__v0 = vlSelfRef.__Vlvbound_h73cb18d2__0;
                    __VdlyDim0__path_buf__v0 = (0x7fU 
                                                & (IData)(vlSelfRef.__PVT__bt_len));
                    __VdlySet__path_buf__v0 = 1U;
                }
                vlSelfRef.__PVT__bt_len = (0xffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__bt_len)));
                vlSelfRef.__PVT__bt_idx = (0x7fU & 
                                           ((0U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                             ? ([&]() {
                                __Vfunc_idx_of__212__y 
                                    = (vlSelfRef.__PVT__unnamedblk4__DOT__by 
                                       - (IData)(1U));
                                __Vfunc_idx_of__212__x 
                                    = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                __Vfunc_idx_of__212__Vfuncout 
                                    = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__212__y) 
                                       + __Vfunc_idx_of__212__x);
                            }(), __Vfunc_idx_of__212__Vfuncout)
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                 ? 
                                                ([&]() {
                                    __Vfunc_idx_of__213__y 
                                        = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                    __Vfunc_idx_of__213__x 
                                        = ((IData)(1U) 
                                           + vlSelfRef.__PVT__unnamedblk4__DOT__bx);
                                    __Vfunc_idx_of__213__Vfuncout 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__213__y) 
                                           + __Vfunc_idx_of__213__x);
                                }(), __Vfunc_idx_of__213__Vfuncout)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                  ? 
                                                 ([&]() {
                                        __Vfunc_idx_of__214__y 
                                            = ((IData)(1U) 
                                               + vlSelfRef.__PVT__unnamedblk4__DOT__by);
                                        __Vfunc_idx_of__214__x 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                        __Vfunc_idx_of__214__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__214__y) 
                                               + __Vfunc_idx_of__214__x);
                                    }(), __Vfunc_idx_of__214__Vfuncout)
                                                  : 
                                                 ([&]() {
                                        __Vfunc_idx_of__215__y 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                        __Vfunc_idx_of__215__x 
                                            = (vlSelfRef.__PVT__unnamedblk4__DOT__bx 
                                               - (IData)(1U));
                                        __Vfunc_idx_of__215__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__215__y) 
                                               + __Vfunc_idx_of__215__x);
                                    }(), __Vfunc_idx_of__215__Vfuncout)))));
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((2U 
                                                         == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)))))))))) {
                    if ((0U != (((2U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)) 
                                 << 2U) | (((1U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:328: Assertion failed in %Nmaze_solver_parallel.gen_cores[14].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         2,(IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back));
                            VL_STOP_MT("maze_solver_core.sv", 328, "");
                        }
                    }
                }
            } else {
                vlSelfRef.valid = 0U;
                __Vdly__st = 5U;
            }
        } else {
            if ((0U == (IData)(vlSelfRef.__PVT__nb_i))) {
                if ((0U == (IData)(vlSelfRef.__PVT__q_count))) {
                    vlSelfRef.valid = 0U;
                    __Vdly__st = 5U;
                } else {
                    __Vdly__q_count = (0x7fU & ((IData)(vlSelfRef.__PVT__q_count) 
                                                - (IData)(1U)));
                    vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx 
                        = ((0x63U >= (IData)(vlSelfRef.__PVT__q_head))
                            ? vlSelfRef.__PVT__queue
                           [vlSelfRef.__PVT__q_head]
                            : 0U);
                    __Vfunc_x_of__216__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_x_of__216__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__216__idx), (IData)(0xaU));
                    __Vdly__cur_x_reg = __Vfunc_x_of__216__Vfuncout;
                    __Vfunc_y_of__217__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_y_of__217__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__217__idx), (IData)(0xaU));
                    __Vdly__cur_y_reg = __Vfunc_y_of__217__Vfuncout;
                    __Vdly__q_head = (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__q_head)));
                    if (((9U == ([&]() {
                                        __Vfunc_x_of__218__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_x_of__218__Vfuncout 
                                            = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__218__idx), (IData)(0xaU));
                                    }(), __Vfunc_x_of__218__Vfuncout)) 
                         & (9U == ([&]() {
                                        __Vfunc_y_of__219__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_y_of__219__Vfuncout 
                                            = VL_DIVS_III(32, (IData)(__Vfunc_y_of__219__idx), (IData)(0xaU));
                                    }(), __Vfunc_y_of__219__Vfuncout)))) {
                        vlSelfRef.valid = 1U;
                        vlSelfRef.__PVT__bt_idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                        vlSelfRef.__PVT__bt_len = 0U;
                        __Vdly__st = 3U;
                    } else {
                        __Vdly__nb_i = 0U;
                    }
                }
            }
            if ((2U == (IData)(vlSelfRef.__PVT__st))) {
                if ((0U == (IData)(vlSelfRef.__PVT__nb_i))) {
                    vlSelfRef.__PVT__unnamedblk2__DOT__nx 
                        = vlSelfRef.__PVT__cur_x_reg;
                    vlSelfRef.__PVT__unnamedblk2__DOT__ny 
                        = (vlSelfRef.__PVT__cur_y_reg 
                           - (IData)(1U));
                    vlSelfRef.__PVT__unnamedblk2__DOT__dir_to_neighbor = 0U;
                } else if ((1U == (IData)(vlSelfRef.__PVT__nb_i))) {
                    vlSelfRef.__PVT__unnamedblk2__DOT__nx 
                        = ((IData)(1U) + vlSelfRef.__PVT__cur_x_reg);
                    vlSelfRef.__PVT__unnamedblk2__DOT__ny 
                        = vlSelfRef.__PVT__cur_y_reg;
                    vlSelfRef.__PVT__unnamedblk2__DOT__dir_to_neighbor = 1U;
                } else if ((2U == (IData)(vlSelfRef.__PVT__nb_i))) {
                    vlSelfRef.__PVT__unnamedblk2__DOT__nx 
                        = vlSelfRef.__PVT__cur_x_reg;
                    vlSelfRef.__PVT__unnamedblk2__DOT__ny 
                        = ((IData)(1U) + vlSelfRef.__PVT__cur_y_reg);
                    vlSelfRef.__PVT__unnamedblk2__DOT__dir_to_neighbor = 2U;
                } else {
                    vlSelfRef.__PVT__unnamedblk2__DOT__nx 
                        = (vlSelfRef.__PVT__cur_x_reg 
                           - (IData)(1U));
                    vlSelfRef.__PVT__unnamedblk2__DOT__ny 
                        = vlSelfRef.__PVT__cur_y_reg;
                    vlSelfRef.__PVT__unnamedblk2__DOT__dir_to_neighbor = 3U;
                }
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((2U 
                                                         == (IData)(vlSelfRef.__PVT__nb_i)) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == (IData)(vlSelfRef.__PVT__nb_i)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.__PVT__nb_i)))))))))) {
                    if ((0U != (((2U == (IData)(vlSelfRef.__PVT__nb_i)) 
                                 << 2U) | (((1U == (IData)(vlSelfRef.__PVT__nb_i)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.__PVT__nb_i)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:245: Assertion failed in %Nmaze_solver_parallel.gen_cores[14].solver_inst.unnamedblk2: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         2,(IData)(vlSelfRef.__PVT__nb_i));
                            VL_STOP_MT("maze_solver_core.sv", 245, "");
                        }
                    }
                }
                if ((((VL_LTES_III(32, 0U, vlSelfRef.__PVT__unnamedblk2__DOT__nx) 
                       & VL_GTS_III(32, 0xaU, vlSelfRef.__PVT__unnamedblk2__DOT__nx)) 
                      & VL_LTES_III(32, 0U, vlSelfRef.__PVT__unnamedblk2__DOT__ny)) 
                     & VL_GTS_III(32, 0xaU, vlSelfRef.__PVT__unnamedblk2__DOT__ny))) {
                    __Vfunc_idx_of__220__y = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                    __Vfunc_idx_of__220__x = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                    __Vfunc_idx_of__220__Vfuncout = 
                        (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__220__y) 
                         + __Vfunc_idx_of__220__x);
                    vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx 
                        = __Vfunc_idx_of__220__Vfuncout;
                    if ((([&]() {
                                    __Vfunc_cell_free__221__y 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                                    __Vfunc_cell_free__221__x 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                                    __Vfunc_cell_free__221__idx 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_cell_free__221__y) 
                                           + __Vfunc_cell_free__221__x);
                                    __Vtemp_3[0U] = (IData)(
                                                            (((QData)((IData)(
                                                                              vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[0xeU])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[0xeU]))));
                                    __Vtemp_3[1U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[0xeU])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[0xeU]))) 
                                                             >> 0x20U));
                                    __Vtemp_3[2U] = (IData)(
                                                            (((QData)((IData)(
                                                                              (0xfU 
                                                                               & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[0xeU]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[0xeU]))));
                                    __Vtemp_3[3U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               (0xfU 
                                                                                & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[0xeU]))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[0xeU]))) 
                                                             >> 0x20U));
                                    __Vfunc_cell_free__221__Vfuncout 
                                        = ((VL_LTES_III(32, 0U, __Vfunc_cell_free__221__idx) 
                                            & VL_GTS_III(32, 0x64U, __Vfunc_cell_free__221__idx)) 
                                           && ((0x63U 
                                                >= 
                                                (0x7fU 
                                                 & __Vfunc_cell_free__221__idx)) 
                                               && (1U 
                                                   & (__Vtemp_3[
                                                      (3U 
                                                       & (__Vfunc_cell_free__221__idx 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & __Vfunc_cell_free__221__idx)))));
                                }(), (IData)(__Vfunc_cell_free__221__Vfuncout)) 
                         & (~ ((0x63U >= (0x7fU & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx)) 
                               && vlSelfRef.__PVT__visited
                               [(0x7fU & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx)])))) {
                        vlSelfRef.__Vlvbound_hffa0b24d__0 = 1U;
                        __Vdly__q_count = (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__q_count)));
                        if (VL_LIKELY(((0x63U >= (0x7fU 
                                                  & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx))))) {
                            __VdlyVal__visited__v0 
                                = vlSelfRef.__Vlvbound_hffa0b24d__0;
                            __VdlyDim0__visited__v0 
                                = (0x7fU & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx);
                            vlSelfRef.__VdlyCommitQueuevisited.enqueue(__VdlyVal__visited__v0, (IData)(__VdlyDim0__visited__v0));
                        }
                        vlSelfRef.__Vlvbound_h9b0fa813__0 = 1U;
                        if (VL_LIKELY(((0x63U >= (0x7fU 
                                                  & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx))))) {
                            __VdlyVal__has_parent__v0 
                                = vlSelfRef.__Vlvbound_h9b0fa813__0;
                            __VdlyDim0__has_parent__v0 
                                = (0x7fU & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx);
                            vlSelfRef.__VdlyCommitQueuehas_parent.enqueue(__VdlyVal__has_parent__v0, (IData)(__VdlyDim0__has_parent__v0));
                        }
                        vlSelfRef.__Vlvbound_h3c9c8691__0 
                            = vlSelfRef.__PVT__unnamedblk2__DOT__dir_to_neighbor;
                        if (VL_LIKELY(((0x63U >= (0x7fU 
                                                  & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx))))) {
                            __VdlyVal__parent_dir__v0 
                                = vlSelfRef.__Vlvbound_h3c9c8691__0;
                            __VdlyDim0__parent_dir__v0 
                                = (0x7fU & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx);
                            vlSelfRef.__VdlyCommitQueueparent_dir.enqueue(__VdlyVal__parent_dir__v0, (IData)(__VdlyDim0__parent_dir__v0));
                        }
                        vlSelfRef.__Vlvbound_hdabc1705__1 
                            = (0x7fU & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx);
                        if (VL_LIKELY(((0x63U >= (IData)(vlSelfRef.__PVT__q_tail))))) {
                            __VdlyVal__queue__v0 = vlSelfRef.__Vlvbound_hdabc1705__1;
                            __VdlyDim0__queue__v0 = vlSelfRef.__PVT__q_tail;
                            __VdlySet__queue__v0 = 1U;
                        }
                        __Vdly__q_tail = (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__q_tail)));
                    }
                }
                __Vdly__nb_i = ((3U == (IData)(vlSelfRef.__PVT__nb_i))
                                 ? 0U : (3U & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__nb_i))));
            }
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__st))) {
        vlSelfRef.__PVT__i = 0U;
        while (VL_GTS_III(32, 0x64U, vlSelfRef.__PVT__i)) {
            vlSelfRef.__Vlvbound_h1e62cca8__0 = 0U;
            if (VL_LIKELY(((0x63U >= (0x7fU & vlSelfRef.__PVT__i))))) {
                __VdlyVal__visited__v1 = vlSelfRef.__Vlvbound_h1e62cca8__0;
                __VdlyDim0__visited__v1 = (0x7fU & vlSelfRef.__PVT__i);
                vlSelfRef.__VdlyCommitQueuevisited.enqueue(__VdlyVal__visited__v1, (IData)(__VdlyDim0__visited__v1));
            }
            vlSelfRef.__Vlvbound_h7a4d3d60__0 = 0U;
            if (VL_LIKELY(((0x63U >= (0x7fU & vlSelfRef.__PVT__i))))) {
                __VdlyVal__has_parent__v1 = vlSelfRef.__Vlvbound_h7a4d3d60__0;
                __VdlyDim0__has_parent__v1 = (0x7fU 
                                              & vlSelfRef.__PVT__i);
                vlSelfRef.__VdlyCommitQueuehas_parent.enqueue(__VdlyVal__has_parent__v1, (IData)(__VdlyDim0__has_parent__v1));
            }
            vlSelfRef.__Vlvbound_h9d5f4d18__0 = 0U;
            if (VL_LIKELY(((0x63U >= (0x7fU & vlSelfRef.__PVT__i))))) {
                __VdlyVal__parent_dir__v1 = vlSelfRef.__Vlvbound_h9d5f4d18__0;
                __VdlyDim0__parent_dir__v1 = (0x7fU 
                                              & vlSelfRef.__PVT__i);
                vlSelfRef.__VdlyCommitQueueparent_dir.enqueue(__VdlyVal__parent_dir__v1, (IData)(__VdlyDim0__parent_dir__v1));
            }
            vlSelfRef.__PVT__i = ((IData)(1U) + vlSelfRef.__PVT__i);
        }
        __Vdly__q_head = 0U;
        __Vdly__q_tail = 1U;
        __Vdly__q_count = 1U;
        __VdlySet__queue__v1 = 1U;
        __Vdly__nb_i = 0U;
        __Vdly__st = 2U;
        vlSelfRef.__VdlyCommitQueuevisited.enqueue(1U, 0U);
    } else {
        vlSelfRef.__PVT__i = 7U;
        vlSelfRef.done = 0U;
        vlSelfRef.valid = 0U;
        __Vdly__path_len_reg = 0U;
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 0U);
        if ((0x4000U & (IData)(vlSymsp->TOP.maze_solver_parallel__DOT__core_start))) {
            __Vdly__st = 1U;
        }
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 1U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 2U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 3U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 4U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 5U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 6U);
    }
    vlSelfRef.__PVT__st = __Vdly__st;
    vlSelfRef.__PVT__cur_x_reg = __Vdly__cur_x_reg;
    vlSelfRef.__PVT__cur_y_reg = __Vdly__cur_y_reg;
    vlSelfRef.__PVT__nb_i = __Vdly__nb_i;
    vlSelfRef.__PVT__q_head = __Vdly__q_head;
    vlSelfRef.__PVT__q_tail = __Vdly__q_tail;
    vlSelfRef.__PVT__q_count = __Vdly__q_count;
    vlSelfRef.__VdlyCommitQueuevisited.commit(vlSelfRef.__PVT__visited);
    vlSelfRef.__VdlyCommitQueuehas_parent.commit(vlSelfRef.__PVT__has_parent);
    vlSelfRef.__VdlyCommitQueueparent_dir.commit(vlSelfRef.__PVT__parent_dir);
    if (__VdlySet__path_buf__v0) {
        vlSelfRef.__PVT__path_buf[__VdlyDim0__path_buf__v0] 
            = __VdlyVal__path_buf__v0;
    }
    if (__VdlySet__queue__v0) {
        vlSelfRef.__PVT__queue[__VdlyDim0__queue__v0] 
            = __VdlyVal__queue__v0;
    }
    if (__VdlySet__queue__v1) {
        vlSelfRef.__PVT__queue[0U] = 0U;
    }
    vlSelfRef.__PVT__path_len_reg = __Vdly__path_len_reg;
    vlSelfRef.__VdlyCommitQueuepath_words.commit(vlSelfRef.__PVT__path_words);
}

VL_INLINE_OPT void Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__15__KET____DOT__solver_inst__0(Vmaze_solver_parallel_maze_solver_core__N64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__15__KET____DOT__solver_inst__0\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_x_of__225__Vfuncout;
    __Vfunc_x_of__225__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__225__idx;
    __Vfunc_x_of__225__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__226__Vfuncout;
    __Vfunc_y_of__226__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__226__idx;
    __Vfunc_y_of__226__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__227__Vfuncout;
    __Vfunc_idx_of__227__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__227__x;
    __Vfunc_idx_of__227__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__227__y;
    __Vfunc_idx_of__227__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__228__Vfuncout;
    __Vfunc_idx_of__228__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__228__x;
    __Vfunc_idx_of__228__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__228__y;
    __Vfunc_idx_of__228__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__229__Vfuncout;
    __Vfunc_idx_of__229__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__229__x;
    __Vfunc_idx_of__229__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__229__y;
    __Vfunc_idx_of__229__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__230__Vfuncout;
    __Vfunc_idx_of__230__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__230__x;
    __Vfunc_idx_of__230__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__230__y;
    __Vfunc_idx_of__230__y = 0;
    IData/*31:0*/ __Vfunc_x_of__231__Vfuncout;
    __Vfunc_x_of__231__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__231__idx;
    __Vfunc_x_of__231__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__232__Vfuncout;
    __Vfunc_y_of__232__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__232__idx;
    __Vfunc_y_of__232__idx = 0;
    IData/*31:0*/ __Vfunc_x_of__233__Vfuncout;
    __Vfunc_x_of__233__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__233__idx;
    __Vfunc_x_of__233__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__234__Vfuncout;
    __Vfunc_y_of__234__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__234__idx;
    __Vfunc_y_of__234__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__235__Vfuncout;
    __Vfunc_idx_of__235__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__235__x;
    __Vfunc_idx_of__235__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__235__y;
    __Vfunc_idx_of__235__y = 0;
    CData/*0:0*/ __Vfunc_cell_free__236__Vfuncout;
    __Vfunc_cell_free__236__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_cell_free__236__x;
    __Vfunc_cell_free__236__x = 0;
    IData/*31:0*/ __Vfunc_cell_free__236__y;
    __Vfunc_cell_free__236__y = 0;
    IData/*31:0*/ __Vfunc_cell_free__236__idx;
    __Vfunc_cell_free__236__idx = 0;
    CData/*2:0*/ __Vdly__st;
    __Vdly__st = 0;
    CData/*7:0*/ __Vdly__path_len_reg;
    __Vdly__path_len_reg = 0;
    IData/*31:0*/ __Vdly__cur_x_reg;
    __Vdly__cur_x_reg = 0;
    IData/*31:0*/ __Vdly__cur_y_reg;
    __Vdly__cur_y_reg = 0;
    CData/*1:0*/ __Vdly__nb_i;
    __Vdly__nb_i = 0;
    CData/*6:0*/ __Vdly__q_head;
    __Vdly__q_head = 0;
    CData/*6:0*/ __Vdly__q_tail;
    __Vdly__q_tail = 0;
    CData/*6:0*/ __Vdly__q_count;
    __Vdly__q_count = 0;
    CData/*1:0*/ __VdlyVal__path_words__v14;
    __VdlyVal__path_words__v14 = 0;
    CData/*4:0*/ __VdlyLsb__path_words__v14;
    __VdlyLsb__path_words__v14 = 0;
    CData/*2:0*/ __VdlyDim0__path_words__v14;
    __VdlyDim0__path_words__v14 = 0;
    IData/*31:0*/ __VdlyMask__path_words__v14;
    __VdlyMask__path_words__v14 = 0;
    IData/*31:0*/ __VdlyElem__path_words__v14;
    __VdlyElem__path_words__v14 = 0;
    CData/*1:0*/ __VdlyVal__path_buf__v0;
    __VdlyVal__path_buf__v0 = 0;
    CData/*6:0*/ __VdlyDim0__path_buf__v0;
    __VdlyDim0__path_buf__v0 = 0;
    CData/*0:0*/ __VdlySet__path_buf__v0;
    __VdlySet__path_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__visited__v0;
    __VdlyVal__visited__v0 = 0;
    CData/*6:0*/ __VdlyDim0__visited__v0;
    __VdlyDim0__visited__v0 = 0;
    CData/*0:0*/ __VdlyVal__has_parent__v0;
    __VdlyVal__has_parent__v0 = 0;
    CData/*6:0*/ __VdlyDim0__has_parent__v0;
    __VdlyDim0__has_parent__v0 = 0;
    CData/*1:0*/ __VdlyVal__parent_dir__v0;
    __VdlyVal__parent_dir__v0 = 0;
    CData/*6:0*/ __VdlyDim0__parent_dir__v0;
    __VdlyDim0__parent_dir__v0 = 0;
    CData/*6:0*/ __VdlyVal__queue__v0;
    __VdlyVal__queue__v0 = 0;
    CData/*6:0*/ __VdlyDim0__queue__v0;
    __VdlyDim0__queue__v0 = 0;
    CData/*0:0*/ __VdlySet__queue__v0;
    __VdlySet__queue__v0 = 0;
    CData/*0:0*/ __VdlyVal__visited__v1;
    __VdlyVal__visited__v1 = 0;
    CData/*6:0*/ __VdlyDim0__visited__v1;
    __VdlyDim0__visited__v1 = 0;
    CData/*0:0*/ __VdlyVal__has_parent__v1;
    __VdlyVal__has_parent__v1 = 0;
    CData/*6:0*/ __VdlyDim0__has_parent__v1;
    __VdlyDim0__has_parent__v1 = 0;
    CData/*1:0*/ __VdlyVal__parent_dir__v1;
    __VdlyVal__parent_dir__v1 = 0;
    CData/*6:0*/ __VdlyDim0__parent_dir__v1;
    __VdlyDim0__parent_dir__v1 = 0;
    CData/*0:0*/ __VdlySet__queue__v1;
    __VdlySet__queue__v1 = 0;
    VlWide<4>/*127:0*/ __Vtemp_3;
    // Body
    __Vdly__st = vlSelfRef.__PVT__st;
    __Vdly__cur_x_reg = vlSelfRef.__PVT__cur_x_reg;
    __Vdly__cur_y_reg = vlSelfRef.__PVT__cur_y_reg;
    __Vdly__nb_i = vlSelfRef.__PVT__nb_i;
    __Vdly__q_head = vlSelfRef.__PVT__q_head;
    __Vdly__q_tail = vlSelfRef.__PVT__q_tail;
    __Vdly__q_count = vlSelfRef.__PVT__q_count;
    __VdlySet__path_buf__v0 = 0U;
    __VdlySet__queue__v0 = 0U;
    __VdlySet__queue__v1 = 0U;
    __Vdly__path_len_reg = vlSelfRef.__PVT__path_len_reg;
    if (vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__0__KET____DOT__solver_inst.rst) {
        vlSelfRef.__PVT__i = 7U;
        __Vdly__st = 0U;
        vlSelfRef.done = 0U;
        vlSelfRef.valid = 0U;
        __Vdly__path_len_reg = 0U;
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 0U);
        __Vdly__cur_x_reg = 0U;
        __Vdly__cur_y_reg = 0U;
        __Vdly__nb_i = 0U;
        __Vdly__q_head = 0U;
        __Vdly__q_tail = 0U;
        __Vdly__q_count = 0U;
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 1U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 2U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 3U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 4U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 5U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 6U);
    } else if ((4U & (IData)(vlSelfRef.__PVT__st))) {
        if ((2U & (IData)(vlSelfRef.__PVT__st))) {
            __Vdly__st = 0U;
        } else if ((1U & (IData)(vlSelfRef.__PVT__st))) {
            vlSelfRef.done = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP.maze_solver_parallel__DOT__core_start) 
                          >> 0xfU)))) {
                __Vdly__st = 0U;
                vlSelfRef.done = 0U;
            }
        } else {
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 0U);
            __Vdly__st = 5U;
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 1U);
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 2U);
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 3U);
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 4U);
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 5U);
            vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 6U);
            vlSelfRef.__PVT__i = 0U;
            while ((vlSelfRef.__PVT__i < (IData)(vlSelfRef.__PVT__path_len_reg))) {
                vlSelfRef.__PVT__unnamedblk6__DOT__fwd_i 
                    = (((IData)(vlSelfRef.__PVT__path_len_reg) 
                        - (IData)(1U)) - vlSelfRef.__PVT__i);
                vlSelfRef.__PVT__unnamedblk6__DOT__mv 
                    = ((0x63U >= (0x7fU & vlSelfRef.__PVT__unnamedblk6__DOT__fwd_i))
                        ? vlSelfRef.__PVT__path_buf
                       [(0x7fU & vlSelfRef.__PVT__unnamedblk6__DOT__fwd_i)]
                        : 0U);
                vlSelfRef.__PVT__unnamedblk6__DOT__word_i 
                    = VL_DIVS_III(32, vlSelfRef.__PVT__i, (IData)(0x10U));
                vlSelfRef.__PVT__unnamedblk6__DOT__bitpos 
                    = VL_MULS_III(32, (IData)(2U), 
                                  VL_MODDIVS_III(32, vlSelfRef.__PVT__i, (IData)(0x10U)));
                vlSelfRef.__Vlvbound_h95c5206c__0 = vlSelfRef.__PVT__unnamedblk6__DOT__mv;
                if (VL_LIKELY(((6U >= (7U & vlSelfRef.__PVT__unnamedblk6__DOT__word_i))))) {
                    __VdlyVal__path_words__v14 = vlSelfRef.__Vlvbound_h95c5206c__0;
                    __VdlyLsb__path_words__v14 = (0x1fU 
                                                  & vlSelfRef.__PVT__unnamedblk6__DOT__bitpos);
                    __VdlyDim0__path_words__v14 = (7U 
                                                   & vlSelfRef.__PVT__unnamedblk6__DOT__word_i);
                    __VdlyMask__path_words__v14 = 0U;
                    __VdlyMask__path_words__v14 = (__VdlyMask__path_words__v14 
                                                   | (0xffffffffULL 
                                                      & ((IData)(3U) 
                                                         << (IData)(__VdlyLsb__path_words__v14))));
                    __VdlyElem__path_words__v14 = 0U;
                    __VdlyElem__path_words__v14 = (
                                                   ((~ 
                                                     ((IData)(3U) 
                                                      << (IData)(__VdlyLsb__path_words__v14))) 
                                                    & __VdlyElem__path_words__v14) 
                                                   | (0xffffffffULL 
                                                      & ((IData)(__VdlyVal__path_words__v14) 
                                                         << (IData)(__VdlyLsb__path_words__v14))));
                    vlSelfRef.__VdlyCommitQueuepath_words.enqueue(__VdlyElem__path_words__v14, __VdlyMask__path_words__v14, (IData)(__VdlyDim0__path_words__v14));
                }
                vlSelfRef.__PVT__i = ((IData)(1U) + vlSelfRef.__PVT__i);
            }
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__st))) {
        if ((1U & (IData)(vlSelfRef.__PVT__st))) {
            __Vfunc_x_of__225__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_x_of__225__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__225__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__bx = __Vfunc_x_of__225__Vfuncout;
            __Vfunc_y_of__226__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_y_of__226__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__226__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__by = __Vfunc_y_of__226__Vfuncout;
            if (((0U == vlSelfRef.__PVT__unnamedblk4__DOT__bx) 
                 & (0U == vlSelfRef.__PVT__unnamedblk4__DOT__by))) {
                __Vdly__path_len_reg = vlSelfRef.__PVT__bt_len;
                __Vdly__st = 4U;
            } else if (((0x63U >= (IData)(vlSelfRef.__PVT__bt_idx)) 
                        && vlSelfRef.__PVT__has_parent
                        [vlSelfRef.__PVT__bt_idx])) {
                vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd 
                    = ((0x63U >= (IData)(vlSelfRef.__PVT__bt_idx))
                        ? vlSelfRef.__PVT__parent_dir
                       [vlSelfRef.__PVT__bt_idx] : 0U);
                vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back 
                    = ((0U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd))
                        ? 2U : ((1U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd))
                                 ? 3U : ((2U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd))
                                          ? 0U : 1U)));
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((2U 
                                                         == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)))))))))) {
                    if ((0U != (((2U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)) 
                                 << 2U) | (((1U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:315: Assertion failed in %Nmaze_solver_parallel.gen_cores[15].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         2,(IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd));
                            VL_STOP_MT("maze_solver_core.sv", 315, "");
                        }
                    }
                }
                vlSelfRef.__Vlvbound_h73cb18d2__0 = vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd;
                if (VL_LIKELY(((0x63U >= (0x7fU & (IData)(vlSelfRef.__PVT__bt_len)))))) {
                    __VdlyVal__path_buf__v0 = vlSelfRef.__Vlvbound_h73cb18d2__0;
                    __VdlyDim0__path_buf__v0 = (0x7fU 
                                                & (IData)(vlSelfRef.__PVT__bt_len));
                    __VdlySet__path_buf__v0 = 1U;
                }
                vlSelfRef.__PVT__bt_len = (0xffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__bt_len)));
                vlSelfRef.__PVT__bt_idx = (0x7fU & 
                                           ((0U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                             ? ([&]() {
                                __Vfunc_idx_of__227__y 
                                    = (vlSelfRef.__PVT__unnamedblk4__DOT__by 
                                       - (IData)(1U));
                                __Vfunc_idx_of__227__x 
                                    = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                __Vfunc_idx_of__227__Vfuncout 
                                    = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__227__y) 
                                       + __Vfunc_idx_of__227__x);
                            }(), __Vfunc_idx_of__227__Vfuncout)
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                 ? 
                                                ([&]() {
                                    __Vfunc_idx_of__228__y 
                                        = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                    __Vfunc_idx_of__228__x 
                                        = ((IData)(1U) 
                                           + vlSelfRef.__PVT__unnamedblk4__DOT__bx);
                                    __Vfunc_idx_of__228__Vfuncout 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__228__y) 
                                           + __Vfunc_idx_of__228__x);
                                }(), __Vfunc_idx_of__228__Vfuncout)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                  ? 
                                                 ([&]() {
                                        __Vfunc_idx_of__229__y 
                                            = ((IData)(1U) 
                                               + vlSelfRef.__PVT__unnamedblk4__DOT__by);
                                        __Vfunc_idx_of__229__x 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                        __Vfunc_idx_of__229__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__229__y) 
                                               + __Vfunc_idx_of__229__x);
                                    }(), __Vfunc_idx_of__229__Vfuncout)
                                                  : 
                                                 ([&]() {
                                        __Vfunc_idx_of__230__y 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                        __Vfunc_idx_of__230__x 
                                            = (vlSelfRef.__PVT__unnamedblk4__DOT__bx 
                                               - (IData)(1U));
                                        __Vfunc_idx_of__230__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__230__y) 
                                               + __Vfunc_idx_of__230__x);
                                    }(), __Vfunc_idx_of__230__Vfuncout)))));
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((2U 
                                                         == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)))))))))) {
                    if ((0U != (((2U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)) 
                                 << 2U) | (((1U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:328: Assertion failed in %Nmaze_solver_parallel.gen_cores[15].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         2,(IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back));
                            VL_STOP_MT("maze_solver_core.sv", 328, "");
                        }
                    }
                }
            } else {
                vlSelfRef.valid = 0U;
                __Vdly__st = 5U;
            }
        } else {
            if ((0U == (IData)(vlSelfRef.__PVT__nb_i))) {
                if ((0U == (IData)(vlSelfRef.__PVT__q_count))) {
                    vlSelfRef.valid = 0U;
                    __Vdly__st = 5U;
                } else {
                    __Vdly__q_count = (0x7fU & ((IData)(vlSelfRef.__PVT__q_count) 
                                                - (IData)(1U)));
                    vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx 
                        = ((0x63U >= (IData)(vlSelfRef.__PVT__q_head))
                            ? vlSelfRef.__PVT__queue
                           [vlSelfRef.__PVT__q_head]
                            : 0U);
                    __Vfunc_x_of__231__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_x_of__231__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__231__idx), (IData)(0xaU));
                    __Vdly__cur_x_reg = __Vfunc_x_of__231__Vfuncout;
                    __Vfunc_y_of__232__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_y_of__232__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__232__idx), (IData)(0xaU));
                    __Vdly__cur_y_reg = __Vfunc_y_of__232__Vfuncout;
                    __Vdly__q_head = (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__q_head)));
                    if (((9U == ([&]() {
                                        __Vfunc_x_of__233__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_x_of__233__Vfuncout 
                                            = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__233__idx), (IData)(0xaU));
                                    }(), __Vfunc_x_of__233__Vfuncout)) 
                         & (9U == ([&]() {
                                        __Vfunc_y_of__234__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_y_of__234__Vfuncout 
                                            = VL_DIVS_III(32, (IData)(__Vfunc_y_of__234__idx), (IData)(0xaU));
                                    }(), __Vfunc_y_of__234__Vfuncout)))) {
                        vlSelfRef.valid = 1U;
                        vlSelfRef.__PVT__bt_idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                        vlSelfRef.__PVT__bt_len = 0U;
                        __Vdly__st = 3U;
                    } else {
                        __Vdly__nb_i = 0U;
                    }
                }
            }
            if ((2U == (IData)(vlSelfRef.__PVT__st))) {
                if ((0U == (IData)(vlSelfRef.__PVT__nb_i))) {
                    vlSelfRef.__PVT__unnamedblk2__DOT__nx 
                        = vlSelfRef.__PVT__cur_x_reg;
                    vlSelfRef.__PVT__unnamedblk2__DOT__ny 
                        = (vlSelfRef.__PVT__cur_y_reg 
                           - (IData)(1U));
                    vlSelfRef.__PVT__unnamedblk2__DOT__dir_to_neighbor = 0U;
                } else if ((1U == (IData)(vlSelfRef.__PVT__nb_i))) {
                    vlSelfRef.__PVT__unnamedblk2__DOT__nx 
                        = ((IData)(1U) + vlSelfRef.__PVT__cur_x_reg);
                    vlSelfRef.__PVT__unnamedblk2__DOT__ny 
                        = vlSelfRef.__PVT__cur_y_reg;
                    vlSelfRef.__PVT__unnamedblk2__DOT__dir_to_neighbor = 1U;
                } else if ((2U == (IData)(vlSelfRef.__PVT__nb_i))) {
                    vlSelfRef.__PVT__unnamedblk2__DOT__nx 
                        = vlSelfRef.__PVT__cur_x_reg;
                    vlSelfRef.__PVT__unnamedblk2__DOT__ny 
                        = ((IData)(1U) + vlSelfRef.__PVT__cur_y_reg);
                    vlSelfRef.__PVT__unnamedblk2__DOT__dir_to_neighbor = 2U;
                } else {
                    vlSelfRef.__PVT__unnamedblk2__DOT__nx 
                        = (vlSelfRef.__PVT__cur_x_reg 
                           - (IData)(1U));
                    vlSelfRef.__PVT__unnamedblk2__DOT__ny 
                        = vlSelfRef.__PVT__cur_y_reg;
                    vlSelfRef.__PVT__unnamedblk2__DOT__dir_to_neighbor = 3U;
                }
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((2U 
                                                         == (IData)(vlSelfRef.__PVT__nb_i)) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == (IData)(vlSelfRef.__PVT__nb_i)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.__PVT__nb_i)))))))))) {
                    if ((0U != (((2U == (IData)(vlSelfRef.__PVT__nb_i)) 
                                 << 2U) | (((1U == (IData)(vlSelfRef.__PVT__nb_i)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.__PVT__nb_i)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:245: Assertion failed in %Nmaze_solver_parallel.gen_cores[15].solver_inst.unnamedblk2: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         2,(IData)(vlSelfRef.__PVT__nb_i));
                            VL_STOP_MT("maze_solver_core.sv", 245, "");
                        }
                    }
                }
                if ((((VL_LTES_III(32, 0U, vlSelfRef.__PVT__unnamedblk2__DOT__nx) 
                       & VL_GTS_III(32, 0xaU, vlSelfRef.__PVT__unnamedblk2__DOT__nx)) 
                      & VL_LTES_III(32, 0U, vlSelfRef.__PVT__unnamedblk2__DOT__ny)) 
                     & VL_GTS_III(32, 0xaU, vlSelfRef.__PVT__unnamedblk2__DOT__ny))) {
                    __Vfunc_idx_of__235__y = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                    __Vfunc_idx_of__235__x = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                    __Vfunc_idx_of__235__Vfuncout = 
                        (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__235__y) 
                         + __Vfunc_idx_of__235__x);
                    vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx 
                        = __Vfunc_idx_of__235__Vfuncout;
                    if ((([&]() {
                                    __Vfunc_cell_free__236__y 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                                    __Vfunc_cell_free__236__x 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                                    __Vfunc_cell_free__236__idx 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_cell_free__236__y) 
                                           + __Vfunc_cell_free__236__x);
                                    __Vtemp_3[0U] = (IData)(
                                                            (((QData)((IData)(
                                                                              vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[0xfU])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[0xfU]))));
                                    __Vtemp_3[1U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[0xfU])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[0xfU]))) 
                                                             >> 0x20U));
                                    __Vtemp_3[2U] = (IData)(
                                                            (((QData)((IData)(
                                                                              (0xfU 
                                                                               & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[0xfU]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[0xfU]))));
                                    __Vtemp_3[3U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               (0xfU 
                                                                                & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[0xfU]))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[0xfU]))) 
                                                             >> 0x20U));
                                    __Vfunc_cell_free__236__Vfuncout 
                                        = ((VL_LTES_III(32, 0U, __Vfunc_cell_free__236__idx) 
                                            & VL_GTS_III(32, 0x64U, __Vfunc_cell_free__236__idx)) 
                                           && ((0x63U 
                                                >= 
                                                (0x7fU 
                                                 & __Vfunc_cell_free__236__idx)) 
                                               && (1U 
                                                   & (__Vtemp_3[
                                                      (3U 
                                                       & (__Vfunc_cell_free__236__idx 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & __Vfunc_cell_free__236__idx)))));
                                }(), (IData)(__Vfunc_cell_free__236__Vfuncout)) 
                         & (~ ((0x63U >= (0x7fU & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx)) 
                               && vlSelfRef.__PVT__visited
                               [(0x7fU & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx)])))) {
                        vlSelfRef.__Vlvbound_hffa0b24d__0 = 1U;
                        __Vdly__q_count = (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__q_count)));
                        if (VL_LIKELY(((0x63U >= (0x7fU 
                                                  & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx))))) {
                            __VdlyVal__visited__v0 
                                = vlSelfRef.__Vlvbound_hffa0b24d__0;
                            __VdlyDim0__visited__v0 
                                = (0x7fU & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx);
                            vlSelfRef.__VdlyCommitQueuevisited.enqueue(__VdlyVal__visited__v0, (IData)(__VdlyDim0__visited__v0));
                        }
                        vlSelfRef.__Vlvbound_h9b0fa813__0 = 1U;
                        if (VL_LIKELY(((0x63U >= (0x7fU 
                                                  & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx))))) {
                            __VdlyVal__has_parent__v0 
                                = vlSelfRef.__Vlvbound_h9b0fa813__0;
                            __VdlyDim0__has_parent__v0 
                                = (0x7fU & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx);
                            vlSelfRef.__VdlyCommitQueuehas_parent.enqueue(__VdlyVal__has_parent__v0, (IData)(__VdlyDim0__has_parent__v0));
                        }
                        vlSelfRef.__Vlvbound_h3c9c8691__0 
                            = vlSelfRef.__PVT__unnamedblk2__DOT__dir_to_neighbor;
                        if (VL_LIKELY(((0x63U >= (0x7fU 
                                                  & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx))))) {
                            __VdlyVal__parent_dir__v0 
                                = vlSelfRef.__Vlvbound_h3c9c8691__0;
                            __VdlyDim0__parent_dir__v0 
                                = (0x7fU & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx);
                            vlSelfRef.__VdlyCommitQueueparent_dir.enqueue(__VdlyVal__parent_dir__v0, (IData)(__VdlyDim0__parent_dir__v0));
                        }
                        vlSelfRef.__Vlvbound_hdabc1705__1 
                            = (0x7fU & vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx);
                        if (VL_LIKELY(((0x63U >= (IData)(vlSelfRef.__PVT__q_tail))))) {
                            __VdlyVal__queue__v0 = vlSelfRef.__Vlvbound_hdabc1705__1;
                            __VdlyDim0__queue__v0 = vlSelfRef.__PVT__q_tail;
                            __VdlySet__queue__v0 = 1U;
                        }
                        __Vdly__q_tail = (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__q_tail)));
                    }
                }
                __Vdly__nb_i = ((3U == (IData)(vlSelfRef.__PVT__nb_i))
                                 ? 0U : (3U & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__nb_i))));
            }
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__st))) {
        vlSelfRef.__PVT__i = 0U;
        while (VL_GTS_III(32, 0x64U, vlSelfRef.__PVT__i)) {
            vlSelfRef.__Vlvbound_h1e62cca8__0 = 0U;
            if (VL_LIKELY(((0x63U >= (0x7fU & vlSelfRef.__PVT__i))))) {
                __VdlyVal__visited__v1 = vlSelfRef.__Vlvbound_h1e62cca8__0;
                __VdlyDim0__visited__v1 = (0x7fU & vlSelfRef.__PVT__i);
                vlSelfRef.__VdlyCommitQueuevisited.enqueue(__VdlyVal__visited__v1, (IData)(__VdlyDim0__visited__v1));
            }
            vlSelfRef.__Vlvbound_h7a4d3d60__0 = 0U;
            if (VL_LIKELY(((0x63U >= (0x7fU & vlSelfRef.__PVT__i))))) {
                __VdlyVal__has_parent__v1 = vlSelfRef.__Vlvbound_h7a4d3d60__0;
                __VdlyDim0__has_parent__v1 = (0x7fU 
                                              & vlSelfRef.__PVT__i);
                vlSelfRef.__VdlyCommitQueuehas_parent.enqueue(__VdlyVal__has_parent__v1, (IData)(__VdlyDim0__has_parent__v1));
            }
            vlSelfRef.__Vlvbound_h9d5f4d18__0 = 0U;
            if (VL_LIKELY(((0x63U >= (0x7fU & vlSelfRef.__PVT__i))))) {
                __VdlyVal__parent_dir__v1 = vlSelfRef.__Vlvbound_h9d5f4d18__0;
                __VdlyDim0__parent_dir__v1 = (0x7fU 
                                              & vlSelfRef.__PVT__i);
                vlSelfRef.__VdlyCommitQueueparent_dir.enqueue(__VdlyVal__parent_dir__v1, (IData)(__VdlyDim0__parent_dir__v1));
            }
            vlSelfRef.__PVT__i = ((IData)(1U) + vlSelfRef.__PVT__i);
        }
        __Vdly__q_head = 0U;
        __Vdly__q_tail = 1U;
        __Vdly__q_count = 1U;
        __VdlySet__queue__v1 = 1U;
        __Vdly__nb_i = 0U;
        __Vdly__st = 2U;
        vlSelfRef.__VdlyCommitQueuevisited.enqueue(1U, 0U);
    } else {
        vlSelfRef.__PVT__i = 7U;
        vlSelfRef.done = 0U;
        vlSelfRef.valid = 0U;
        __Vdly__path_len_reg = 0U;
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 0U);
        if ((0x8000U & (IData)(vlSymsp->TOP.maze_solver_parallel__DOT__core_start))) {
            __Vdly__st = 1U;
        }
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 1U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 2U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 3U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 4U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 5U);
        vlSelfRef.__VdlyCommitQueuepath_words.enqueue(0U, 0xffffffffU, 6U);
    }
    vlSelfRef.__PVT__st = __Vdly__st;
    vlSelfRef.__PVT__cur_x_reg = __Vdly__cur_x_reg;
    vlSelfRef.__PVT__cur_y_reg = __Vdly__cur_y_reg;
    vlSelfRef.__PVT__nb_i = __Vdly__nb_i;
    vlSelfRef.__PVT__q_head = __Vdly__q_head;
    vlSelfRef.__PVT__q_tail = __Vdly__q_tail;
    vlSelfRef.__PVT__q_count = __Vdly__q_count;
    vlSelfRef.__VdlyCommitQueuevisited.commit(vlSelfRef.__PVT__visited);
    vlSelfRef.__VdlyCommitQueuehas_parent.commit(vlSelfRef.__PVT__has_parent);
    vlSelfRef.__VdlyCommitQueueparent_dir.commit(vlSelfRef.__PVT__parent_dir);
    if (__VdlySet__path_buf__v0) {
        vlSelfRef.__PVT__path_buf[__VdlyDim0__path_buf__v0] 
            = __VdlyVal__path_buf__v0;
    }
    if (__VdlySet__queue__v0) {
        vlSelfRef.__PVT__queue[__VdlyDim0__queue__v0] 
            = __VdlyVal__queue__v0;
    }
    if (__VdlySet__queue__v1) {
        vlSelfRef.__PVT__queue[0U] = 0U;
    }
    vlSelfRef.__PVT__path_len_reg = __Vdly__path_len_reg;
    vlSelfRef.__VdlyCommitQueuepath_words.commit(vlSelfRef.__PVT__path_words);
}
