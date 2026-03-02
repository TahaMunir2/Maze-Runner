// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmaze_solver_parallel.h for the primary calling header

#include "Vmaze_solver_parallel__pch.h"
#include "Vmaze_solver_parallel__Syms.h"
#include "Vmaze_solver_parallel_maze_solver_core__N64.h"

VL_INLINE_OPT void Vmaze_solver_parallel_maze_solver_core__N64___ico_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__0__KET____DOT__solver_inst__0(Vmaze_solver_parallel_maze_solver_core__N64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmaze_solver_parallel_maze_solver_core__N64___ico_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__0__KET____DOT__solver_inst__0\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst = (1U & ((IData)(vlSymsp->TOP.rst) 
                           | vlSymsp->TOP.maze_solver_parallel__DOT__control_reg));
}

VL_INLINE_OPT void Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__0__KET____DOT__solver_inst__0(Vmaze_solver_parallel_maze_solver_core__N64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__0__KET____DOT__solver_inst__0\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_x_of__0__Vfuncout;
    __Vfunc_x_of__0__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__0__idx;
    __Vfunc_x_of__0__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__1__Vfuncout;
    __Vfunc_y_of__1__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__1__idx;
    __Vfunc_y_of__1__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__2__Vfuncout;
    __Vfunc_idx_of__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__2__x;
    __Vfunc_idx_of__2__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__2__y;
    __Vfunc_idx_of__2__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__3__Vfuncout;
    __Vfunc_idx_of__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__3__x;
    __Vfunc_idx_of__3__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__3__y;
    __Vfunc_idx_of__3__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__4__Vfuncout;
    __Vfunc_idx_of__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__4__x;
    __Vfunc_idx_of__4__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__4__y;
    __Vfunc_idx_of__4__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__5__Vfuncout;
    __Vfunc_idx_of__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__5__x;
    __Vfunc_idx_of__5__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__5__y;
    __Vfunc_idx_of__5__y = 0;
    IData/*31:0*/ __Vfunc_x_of__6__Vfuncout;
    __Vfunc_x_of__6__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__6__idx;
    __Vfunc_x_of__6__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__7__Vfuncout;
    __Vfunc_y_of__7__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__7__idx;
    __Vfunc_y_of__7__idx = 0;
    IData/*31:0*/ __Vfunc_x_of__8__Vfuncout;
    __Vfunc_x_of__8__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__8__idx;
    __Vfunc_x_of__8__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__9__Vfuncout;
    __Vfunc_y_of__9__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__9__idx;
    __Vfunc_y_of__9__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__10__Vfuncout;
    __Vfunc_idx_of__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__10__x;
    __Vfunc_idx_of__10__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__10__y;
    __Vfunc_idx_of__10__y = 0;
    CData/*0:0*/ __Vfunc_cell_free__11__Vfuncout;
    __Vfunc_cell_free__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_cell_free__11__x;
    __Vfunc_cell_free__11__x = 0;
    IData/*31:0*/ __Vfunc_cell_free__11__y;
    __Vfunc_cell_free__11__y = 0;
    IData/*31:0*/ __Vfunc_cell_free__11__idx;
    __Vfunc_cell_free__11__idx = 0;
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
    if (vlSelfRef.rst) {
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
            if ((1U & (~ (IData)(vlSymsp->TOP.maze_solver_parallel__DOT__core_start)))) {
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
            __Vfunc_x_of__0__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_x_of__0__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__0__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__bx = __Vfunc_x_of__0__Vfuncout;
            __Vfunc_y_of__1__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_y_of__1__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__1__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__by = __Vfunc_y_of__1__Vfuncout;
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:315: Assertion failed in %Nmaze_solver_parallel.gen_cores[0].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
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
                                __Vfunc_idx_of__2__y 
                                    = (vlSelfRef.__PVT__unnamedblk4__DOT__by 
                                       - (IData)(1U));
                                __Vfunc_idx_of__2__x 
                                    = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                __Vfunc_idx_of__2__Vfuncout 
                                    = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__2__y) 
                                       + __Vfunc_idx_of__2__x);
                            }(), __Vfunc_idx_of__2__Vfuncout)
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                 ? 
                                                ([&]() {
                                    __Vfunc_idx_of__3__y 
                                        = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                    __Vfunc_idx_of__3__x 
                                        = ((IData)(1U) 
                                           + vlSelfRef.__PVT__unnamedblk4__DOT__bx);
                                    __Vfunc_idx_of__3__Vfuncout 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__3__y) 
                                           + __Vfunc_idx_of__3__x);
                                }(), __Vfunc_idx_of__3__Vfuncout)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                  ? 
                                                 ([&]() {
                                        __Vfunc_idx_of__4__y 
                                            = ((IData)(1U) 
                                               + vlSelfRef.__PVT__unnamedblk4__DOT__by);
                                        __Vfunc_idx_of__4__x 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                        __Vfunc_idx_of__4__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__4__y) 
                                               + __Vfunc_idx_of__4__x);
                                    }(), __Vfunc_idx_of__4__Vfuncout)
                                                  : 
                                                 ([&]() {
                                        __Vfunc_idx_of__5__y 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                        __Vfunc_idx_of__5__x 
                                            = (vlSelfRef.__PVT__unnamedblk4__DOT__bx 
                                               - (IData)(1U));
                                        __Vfunc_idx_of__5__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__5__y) 
                                               + __Vfunc_idx_of__5__x);
                                    }(), __Vfunc_idx_of__5__Vfuncout)))));
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:328: Assertion failed in %Nmaze_solver_parallel.gen_cores[0].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
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
                    __Vfunc_x_of__6__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_x_of__6__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__6__idx), (IData)(0xaU));
                    __Vdly__cur_x_reg = __Vfunc_x_of__6__Vfuncout;
                    __Vfunc_y_of__7__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_y_of__7__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__7__idx), (IData)(0xaU));
                    __Vdly__cur_y_reg = __Vfunc_y_of__7__Vfuncout;
                    __Vdly__q_head = (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__q_head)));
                    if (((9U == ([&]() {
                                        __Vfunc_x_of__8__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_x_of__8__Vfuncout 
                                            = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__8__idx), (IData)(0xaU));
                                    }(), __Vfunc_x_of__8__Vfuncout)) 
                         & (9U == ([&]() {
                                        __Vfunc_y_of__9__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_y_of__9__Vfuncout 
                                            = VL_DIVS_III(32, (IData)(__Vfunc_y_of__9__idx), (IData)(0xaU));
                                    }(), __Vfunc_y_of__9__Vfuncout)))) {
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:245: Assertion failed in %Nmaze_solver_parallel.gen_cores[0].solver_inst.unnamedblk2: unique case, but multiple matches found for '2'h%x'\n",0,
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
                    __Vfunc_idx_of__10__y = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                    __Vfunc_idx_of__10__x = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                    __Vfunc_idx_of__10__Vfuncout = 
                        (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__10__y) 
                         + __Vfunc_idx_of__10__x);
                    vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx 
                        = __Vfunc_idx_of__10__Vfuncout;
                    if ((([&]() {
                                    __Vfunc_cell_free__11__y 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                                    __Vfunc_cell_free__11__x 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                                    __Vfunc_cell_free__11__idx 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_cell_free__11__y) 
                                           + __Vfunc_cell_free__11__x);
                                    __Vtemp_3[0U] = (IData)(
                                                            (((QData)((IData)(
                                                                              vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[0U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[0U]))));
                                    __Vtemp_3[1U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[0U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[0U]))) 
                                                             >> 0x20U));
                                    __Vtemp_3[2U] = (IData)(
                                                            (((QData)((IData)(
                                                                              (0xfU 
                                                                               & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[0U]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[0U]))));
                                    __Vtemp_3[3U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               (0xfU 
                                                                                & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[0U]))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[0U]))) 
                                                             >> 0x20U));
                                    __Vfunc_cell_free__11__Vfuncout 
                                        = ((VL_LTES_III(32, 0U, __Vfunc_cell_free__11__idx) 
                                            & VL_GTS_III(32, 0x64U, __Vfunc_cell_free__11__idx)) 
                                           && ((0x63U 
                                                >= 
                                                (0x7fU 
                                                 & __Vfunc_cell_free__11__idx)) 
                                               && (1U 
                                                   & (__Vtemp_3[
                                                      (3U 
                                                       & (__Vfunc_cell_free__11__idx 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & __Vfunc_cell_free__11__idx)))));
                                }(), (IData)(__Vfunc_cell_free__11__Vfuncout)) 
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
        if ((1U & (IData)(vlSymsp->TOP.maze_solver_parallel__DOT__core_start))) {
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

VL_INLINE_OPT void Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__1__KET____DOT__solver_inst__0(Vmaze_solver_parallel_maze_solver_core__N64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__1__KET____DOT__solver_inst__0\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_x_of__15__Vfuncout;
    __Vfunc_x_of__15__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__15__idx;
    __Vfunc_x_of__15__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__16__Vfuncout;
    __Vfunc_y_of__16__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__16__idx;
    __Vfunc_y_of__16__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__17__Vfuncout;
    __Vfunc_idx_of__17__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__17__x;
    __Vfunc_idx_of__17__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__17__y;
    __Vfunc_idx_of__17__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__18__Vfuncout;
    __Vfunc_idx_of__18__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__18__x;
    __Vfunc_idx_of__18__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__18__y;
    __Vfunc_idx_of__18__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__19__Vfuncout;
    __Vfunc_idx_of__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__19__x;
    __Vfunc_idx_of__19__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__19__y;
    __Vfunc_idx_of__19__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__20__Vfuncout;
    __Vfunc_idx_of__20__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__20__x;
    __Vfunc_idx_of__20__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__20__y;
    __Vfunc_idx_of__20__y = 0;
    IData/*31:0*/ __Vfunc_x_of__21__Vfuncout;
    __Vfunc_x_of__21__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__21__idx;
    __Vfunc_x_of__21__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__22__Vfuncout;
    __Vfunc_y_of__22__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__22__idx;
    __Vfunc_y_of__22__idx = 0;
    IData/*31:0*/ __Vfunc_x_of__23__Vfuncout;
    __Vfunc_x_of__23__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__23__idx;
    __Vfunc_x_of__23__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__24__Vfuncout;
    __Vfunc_y_of__24__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__24__idx;
    __Vfunc_y_of__24__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__25__Vfuncout;
    __Vfunc_idx_of__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__25__x;
    __Vfunc_idx_of__25__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__25__y;
    __Vfunc_idx_of__25__y = 0;
    CData/*0:0*/ __Vfunc_cell_free__26__Vfuncout;
    __Vfunc_cell_free__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_cell_free__26__x;
    __Vfunc_cell_free__26__x = 0;
    IData/*31:0*/ __Vfunc_cell_free__26__y;
    __Vfunc_cell_free__26__y = 0;
    IData/*31:0*/ __Vfunc_cell_free__26__idx;
    __Vfunc_cell_free__26__idx = 0;
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
                          >> 1U)))) {
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
            __Vfunc_x_of__15__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_x_of__15__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__15__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__bx = __Vfunc_x_of__15__Vfuncout;
            __Vfunc_y_of__16__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_y_of__16__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__16__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__by = __Vfunc_y_of__16__Vfuncout;
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:315: Assertion failed in %Nmaze_solver_parallel.gen_cores[1].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
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
                                __Vfunc_idx_of__17__y 
                                    = (vlSelfRef.__PVT__unnamedblk4__DOT__by 
                                       - (IData)(1U));
                                __Vfunc_idx_of__17__x 
                                    = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                __Vfunc_idx_of__17__Vfuncout 
                                    = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__17__y) 
                                       + __Vfunc_idx_of__17__x);
                            }(), __Vfunc_idx_of__17__Vfuncout)
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                 ? 
                                                ([&]() {
                                    __Vfunc_idx_of__18__y 
                                        = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                    __Vfunc_idx_of__18__x 
                                        = ((IData)(1U) 
                                           + vlSelfRef.__PVT__unnamedblk4__DOT__bx);
                                    __Vfunc_idx_of__18__Vfuncout 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__18__y) 
                                           + __Vfunc_idx_of__18__x);
                                }(), __Vfunc_idx_of__18__Vfuncout)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                  ? 
                                                 ([&]() {
                                        __Vfunc_idx_of__19__y 
                                            = ((IData)(1U) 
                                               + vlSelfRef.__PVT__unnamedblk4__DOT__by);
                                        __Vfunc_idx_of__19__x 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                        __Vfunc_idx_of__19__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__19__y) 
                                               + __Vfunc_idx_of__19__x);
                                    }(), __Vfunc_idx_of__19__Vfuncout)
                                                  : 
                                                 ([&]() {
                                        __Vfunc_idx_of__20__y 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                        __Vfunc_idx_of__20__x 
                                            = (vlSelfRef.__PVT__unnamedblk4__DOT__bx 
                                               - (IData)(1U));
                                        __Vfunc_idx_of__20__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__20__y) 
                                               + __Vfunc_idx_of__20__x);
                                    }(), __Vfunc_idx_of__20__Vfuncout)))));
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:328: Assertion failed in %Nmaze_solver_parallel.gen_cores[1].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
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
                    __Vfunc_x_of__21__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_x_of__21__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__21__idx), (IData)(0xaU));
                    __Vdly__cur_x_reg = __Vfunc_x_of__21__Vfuncout;
                    __Vfunc_y_of__22__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_y_of__22__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__22__idx), (IData)(0xaU));
                    __Vdly__cur_y_reg = __Vfunc_y_of__22__Vfuncout;
                    __Vdly__q_head = (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__q_head)));
                    if (((9U == ([&]() {
                                        __Vfunc_x_of__23__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_x_of__23__Vfuncout 
                                            = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__23__idx), (IData)(0xaU));
                                    }(), __Vfunc_x_of__23__Vfuncout)) 
                         & (9U == ([&]() {
                                        __Vfunc_y_of__24__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_y_of__24__Vfuncout 
                                            = VL_DIVS_III(32, (IData)(__Vfunc_y_of__24__idx), (IData)(0xaU));
                                    }(), __Vfunc_y_of__24__Vfuncout)))) {
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:245: Assertion failed in %Nmaze_solver_parallel.gen_cores[1].solver_inst.unnamedblk2: unique case, but multiple matches found for '2'h%x'\n",0,
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
                    __Vfunc_idx_of__25__y = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                    __Vfunc_idx_of__25__x = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                    __Vfunc_idx_of__25__Vfuncout = 
                        (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__25__y) 
                         + __Vfunc_idx_of__25__x);
                    vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx 
                        = __Vfunc_idx_of__25__Vfuncout;
                    if ((([&]() {
                                    __Vfunc_cell_free__26__y 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                                    __Vfunc_cell_free__26__x 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                                    __Vfunc_cell_free__26__idx 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_cell_free__26__y) 
                                           + __Vfunc_cell_free__26__x);
                                    __Vtemp_3[0U] = (IData)(
                                                            (((QData)((IData)(
                                                                              vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[1U]))));
                                    __Vtemp_3[1U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[1U]))) 
                                                             >> 0x20U));
                                    __Vtemp_3[2U] = (IData)(
                                                            (((QData)((IData)(
                                                                              (0xfU 
                                                                               & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[1U]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[1U]))));
                                    __Vtemp_3[3U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               (0xfU 
                                                                                & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[1U]))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[1U]))) 
                                                             >> 0x20U));
                                    __Vfunc_cell_free__26__Vfuncout 
                                        = ((VL_LTES_III(32, 0U, __Vfunc_cell_free__26__idx) 
                                            & VL_GTS_III(32, 0x64U, __Vfunc_cell_free__26__idx)) 
                                           && ((0x63U 
                                                >= 
                                                (0x7fU 
                                                 & __Vfunc_cell_free__26__idx)) 
                                               && (1U 
                                                   & (__Vtemp_3[
                                                      (3U 
                                                       & (__Vfunc_cell_free__26__idx 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & __Vfunc_cell_free__26__idx)))));
                                }(), (IData)(__Vfunc_cell_free__26__Vfuncout)) 
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
        if ((2U & (IData)(vlSymsp->TOP.maze_solver_parallel__DOT__core_start))) {
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

VL_INLINE_OPT void Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__2__KET____DOT__solver_inst__0(Vmaze_solver_parallel_maze_solver_core__N64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__2__KET____DOT__solver_inst__0\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_x_of__30__Vfuncout;
    __Vfunc_x_of__30__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__30__idx;
    __Vfunc_x_of__30__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__31__Vfuncout;
    __Vfunc_y_of__31__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__31__idx;
    __Vfunc_y_of__31__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__32__Vfuncout;
    __Vfunc_idx_of__32__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__32__x;
    __Vfunc_idx_of__32__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__32__y;
    __Vfunc_idx_of__32__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__33__Vfuncout;
    __Vfunc_idx_of__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__33__x;
    __Vfunc_idx_of__33__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__33__y;
    __Vfunc_idx_of__33__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__34__Vfuncout;
    __Vfunc_idx_of__34__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__34__x;
    __Vfunc_idx_of__34__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__34__y;
    __Vfunc_idx_of__34__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__35__Vfuncout;
    __Vfunc_idx_of__35__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__35__x;
    __Vfunc_idx_of__35__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__35__y;
    __Vfunc_idx_of__35__y = 0;
    IData/*31:0*/ __Vfunc_x_of__36__Vfuncout;
    __Vfunc_x_of__36__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__36__idx;
    __Vfunc_x_of__36__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__37__Vfuncout;
    __Vfunc_y_of__37__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__37__idx;
    __Vfunc_y_of__37__idx = 0;
    IData/*31:0*/ __Vfunc_x_of__38__Vfuncout;
    __Vfunc_x_of__38__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__38__idx;
    __Vfunc_x_of__38__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__39__Vfuncout;
    __Vfunc_y_of__39__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__39__idx;
    __Vfunc_y_of__39__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__40__Vfuncout;
    __Vfunc_idx_of__40__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__40__x;
    __Vfunc_idx_of__40__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__40__y;
    __Vfunc_idx_of__40__y = 0;
    CData/*0:0*/ __Vfunc_cell_free__41__Vfuncout;
    __Vfunc_cell_free__41__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_cell_free__41__x;
    __Vfunc_cell_free__41__x = 0;
    IData/*31:0*/ __Vfunc_cell_free__41__y;
    __Vfunc_cell_free__41__y = 0;
    IData/*31:0*/ __Vfunc_cell_free__41__idx;
    __Vfunc_cell_free__41__idx = 0;
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
                          >> 2U)))) {
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
            __Vfunc_x_of__30__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_x_of__30__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__30__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__bx = __Vfunc_x_of__30__Vfuncout;
            __Vfunc_y_of__31__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_y_of__31__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__31__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__by = __Vfunc_y_of__31__Vfuncout;
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:315: Assertion failed in %Nmaze_solver_parallel.gen_cores[2].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
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
                                __Vfunc_idx_of__32__y 
                                    = (vlSelfRef.__PVT__unnamedblk4__DOT__by 
                                       - (IData)(1U));
                                __Vfunc_idx_of__32__x 
                                    = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                __Vfunc_idx_of__32__Vfuncout 
                                    = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__32__y) 
                                       + __Vfunc_idx_of__32__x);
                            }(), __Vfunc_idx_of__32__Vfuncout)
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                 ? 
                                                ([&]() {
                                    __Vfunc_idx_of__33__y 
                                        = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                    __Vfunc_idx_of__33__x 
                                        = ((IData)(1U) 
                                           + vlSelfRef.__PVT__unnamedblk4__DOT__bx);
                                    __Vfunc_idx_of__33__Vfuncout 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__33__y) 
                                           + __Vfunc_idx_of__33__x);
                                }(), __Vfunc_idx_of__33__Vfuncout)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                  ? 
                                                 ([&]() {
                                        __Vfunc_idx_of__34__y 
                                            = ((IData)(1U) 
                                               + vlSelfRef.__PVT__unnamedblk4__DOT__by);
                                        __Vfunc_idx_of__34__x 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                        __Vfunc_idx_of__34__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__34__y) 
                                               + __Vfunc_idx_of__34__x);
                                    }(), __Vfunc_idx_of__34__Vfuncout)
                                                  : 
                                                 ([&]() {
                                        __Vfunc_idx_of__35__y 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                        __Vfunc_idx_of__35__x 
                                            = (vlSelfRef.__PVT__unnamedblk4__DOT__bx 
                                               - (IData)(1U));
                                        __Vfunc_idx_of__35__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__35__y) 
                                               + __Vfunc_idx_of__35__x);
                                    }(), __Vfunc_idx_of__35__Vfuncout)))));
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:328: Assertion failed in %Nmaze_solver_parallel.gen_cores[2].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
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
                    __Vfunc_x_of__36__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_x_of__36__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__36__idx), (IData)(0xaU));
                    __Vdly__cur_x_reg = __Vfunc_x_of__36__Vfuncout;
                    __Vfunc_y_of__37__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_y_of__37__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__37__idx), (IData)(0xaU));
                    __Vdly__cur_y_reg = __Vfunc_y_of__37__Vfuncout;
                    __Vdly__q_head = (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__q_head)));
                    if (((9U == ([&]() {
                                        __Vfunc_x_of__38__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_x_of__38__Vfuncout 
                                            = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__38__idx), (IData)(0xaU));
                                    }(), __Vfunc_x_of__38__Vfuncout)) 
                         & (9U == ([&]() {
                                        __Vfunc_y_of__39__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_y_of__39__Vfuncout 
                                            = VL_DIVS_III(32, (IData)(__Vfunc_y_of__39__idx), (IData)(0xaU));
                                    }(), __Vfunc_y_of__39__Vfuncout)))) {
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:245: Assertion failed in %Nmaze_solver_parallel.gen_cores[2].solver_inst.unnamedblk2: unique case, but multiple matches found for '2'h%x'\n",0,
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
                    __Vfunc_idx_of__40__y = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                    __Vfunc_idx_of__40__x = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                    __Vfunc_idx_of__40__Vfuncout = 
                        (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__40__y) 
                         + __Vfunc_idx_of__40__x);
                    vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx 
                        = __Vfunc_idx_of__40__Vfuncout;
                    if ((([&]() {
                                    __Vfunc_cell_free__41__y 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                                    __Vfunc_cell_free__41__x 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                                    __Vfunc_cell_free__41__idx 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_cell_free__41__y) 
                                           + __Vfunc_cell_free__41__x);
                                    __Vtemp_3[0U] = (IData)(
                                                            (((QData)((IData)(
                                                                              vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[2U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[2U]))));
                                    __Vtemp_3[1U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[2U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[2U]))) 
                                                             >> 0x20U));
                                    __Vtemp_3[2U] = (IData)(
                                                            (((QData)((IData)(
                                                                              (0xfU 
                                                                               & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[2U]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[2U]))));
                                    __Vtemp_3[3U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               (0xfU 
                                                                                & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[2U]))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[2U]))) 
                                                             >> 0x20U));
                                    __Vfunc_cell_free__41__Vfuncout 
                                        = ((VL_LTES_III(32, 0U, __Vfunc_cell_free__41__idx) 
                                            & VL_GTS_III(32, 0x64U, __Vfunc_cell_free__41__idx)) 
                                           && ((0x63U 
                                                >= 
                                                (0x7fU 
                                                 & __Vfunc_cell_free__41__idx)) 
                                               && (1U 
                                                   & (__Vtemp_3[
                                                      (3U 
                                                       & (__Vfunc_cell_free__41__idx 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & __Vfunc_cell_free__41__idx)))));
                                }(), (IData)(__Vfunc_cell_free__41__Vfuncout)) 
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
        if ((4U & (IData)(vlSymsp->TOP.maze_solver_parallel__DOT__core_start))) {
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

VL_INLINE_OPT void Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__3__KET____DOT__solver_inst__0(Vmaze_solver_parallel_maze_solver_core__N64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__3__KET____DOT__solver_inst__0\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_x_of__45__Vfuncout;
    __Vfunc_x_of__45__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__45__idx;
    __Vfunc_x_of__45__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__46__Vfuncout;
    __Vfunc_y_of__46__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__46__idx;
    __Vfunc_y_of__46__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__47__Vfuncout;
    __Vfunc_idx_of__47__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__47__x;
    __Vfunc_idx_of__47__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__47__y;
    __Vfunc_idx_of__47__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__48__Vfuncout;
    __Vfunc_idx_of__48__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__48__x;
    __Vfunc_idx_of__48__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__48__y;
    __Vfunc_idx_of__48__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__49__Vfuncout;
    __Vfunc_idx_of__49__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__49__x;
    __Vfunc_idx_of__49__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__49__y;
    __Vfunc_idx_of__49__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__50__Vfuncout;
    __Vfunc_idx_of__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__50__x;
    __Vfunc_idx_of__50__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__50__y;
    __Vfunc_idx_of__50__y = 0;
    IData/*31:0*/ __Vfunc_x_of__51__Vfuncout;
    __Vfunc_x_of__51__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__51__idx;
    __Vfunc_x_of__51__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__52__Vfuncout;
    __Vfunc_y_of__52__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__52__idx;
    __Vfunc_y_of__52__idx = 0;
    IData/*31:0*/ __Vfunc_x_of__53__Vfuncout;
    __Vfunc_x_of__53__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__53__idx;
    __Vfunc_x_of__53__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__54__Vfuncout;
    __Vfunc_y_of__54__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__54__idx;
    __Vfunc_y_of__54__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__55__Vfuncout;
    __Vfunc_idx_of__55__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__55__x;
    __Vfunc_idx_of__55__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__55__y;
    __Vfunc_idx_of__55__y = 0;
    CData/*0:0*/ __Vfunc_cell_free__56__Vfuncout;
    __Vfunc_cell_free__56__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_cell_free__56__x;
    __Vfunc_cell_free__56__x = 0;
    IData/*31:0*/ __Vfunc_cell_free__56__y;
    __Vfunc_cell_free__56__y = 0;
    IData/*31:0*/ __Vfunc_cell_free__56__idx;
    __Vfunc_cell_free__56__idx = 0;
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
                          >> 3U)))) {
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
            __Vfunc_x_of__45__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_x_of__45__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__45__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__bx = __Vfunc_x_of__45__Vfuncout;
            __Vfunc_y_of__46__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_y_of__46__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__46__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__by = __Vfunc_y_of__46__Vfuncout;
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:315: Assertion failed in %Nmaze_solver_parallel.gen_cores[3].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
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
                                __Vfunc_idx_of__47__y 
                                    = (vlSelfRef.__PVT__unnamedblk4__DOT__by 
                                       - (IData)(1U));
                                __Vfunc_idx_of__47__x 
                                    = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                __Vfunc_idx_of__47__Vfuncout 
                                    = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__47__y) 
                                       + __Vfunc_idx_of__47__x);
                            }(), __Vfunc_idx_of__47__Vfuncout)
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                 ? 
                                                ([&]() {
                                    __Vfunc_idx_of__48__y 
                                        = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                    __Vfunc_idx_of__48__x 
                                        = ((IData)(1U) 
                                           + vlSelfRef.__PVT__unnamedblk4__DOT__bx);
                                    __Vfunc_idx_of__48__Vfuncout 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__48__y) 
                                           + __Vfunc_idx_of__48__x);
                                }(), __Vfunc_idx_of__48__Vfuncout)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                  ? 
                                                 ([&]() {
                                        __Vfunc_idx_of__49__y 
                                            = ((IData)(1U) 
                                               + vlSelfRef.__PVT__unnamedblk4__DOT__by);
                                        __Vfunc_idx_of__49__x 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                        __Vfunc_idx_of__49__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__49__y) 
                                               + __Vfunc_idx_of__49__x);
                                    }(), __Vfunc_idx_of__49__Vfuncout)
                                                  : 
                                                 ([&]() {
                                        __Vfunc_idx_of__50__y 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                        __Vfunc_idx_of__50__x 
                                            = (vlSelfRef.__PVT__unnamedblk4__DOT__bx 
                                               - (IData)(1U));
                                        __Vfunc_idx_of__50__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__50__y) 
                                               + __Vfunc_idx_of__50__x);
                                    }(), __Vfunc_idx_of__50__Vfuncout)))));
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:328: Assertion failed in %Nmaze_solver_parallel.gen_cores[3].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
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
                    __Vfunc_x_of__51__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_x_of__51__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__51__idx), (IData)(0xaU));
                    __Vdly__cur_x_reg = __Vfunc_x_of__51__Vfuncout;
                    __Vfunc_y_of__52__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_y_of__52__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__52__idx), (IData)(0xaU));
                    __Vdly__cur_y_reg = __Vfunc_y_of__52__Vfuncout;
                    __Vdly__q_head = (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__q_head)));
                    if (((9U == ([&]() {
                                        __Vfunc_x_of__53__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_x_of__53__Vfuncout 
                                            = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__53__idx), (IData)(0xaU));
                                    }(), __Vfunc_x_of__53__Vfuncout)) 
                         & (9U == ([&]() {
                                        __Vfunc_y_of__54__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_y_of__54__Vfuncout 
                                            = VL_DIVS_III(32, (IData)(__Vfunc_y_of__54__idx), (IData)(0xaU));
                                    }(), __Vfunc_y_of__54__Vfuncout)))) {
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:245: Assertion failed in %Nmaze_solver_parallel.gen_cores[3].solver_inst.unnamedblk2: unique case, but multiple matches found for '2'h%x'\n",0,
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
                    __Vfunc_idx_of__55__y = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                    __Vfunc_idx_of__55__x = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                    __Vfunc_idx_of__55__Vfuncout = 
                        (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__55__y) 
                         + __Vfunc_idx_of__55__x);
                    vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx 
                        = __Vfunc_idx_of__55__Vfuncout;
                    if ((([&]() {
                                    __Vfunc_cell_free__56__y 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                                    __Vfunc_cell_free__56__x 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                                    __Vfunc_cell_free__56__idx 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_cell_free__56__y) 
                                           + __Vfunc_cell_free__56__x);
                                    __Vtemp_3[0U] = (IData)(
                                                            (((QData)((IData)(
                                                                              vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[3U]))));
                                    __Vtemp_3[1U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[3U]))) 
                                                             >> 0x20U));
                                    __Vtemp_3[2U] = (IData)(
                                                            (((QData)((IData)(
                                                                              (0xfU 
                                                                               & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[3U]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[3U]))));
                                    __Vtemp_3[3U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               (0xfU 
                                                                                & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[3U]))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[3U]))) 
                                                             >> 0x20U));
                                    __Vfunc_cell_free__56__Vfuncout 
                                        = ((VL_LTES_III(32, 0U, __Vfunc_cell_free__56__idx) 
                                            & VL_GTS_III(32, 0x64U, __Vfunc_cell_free__56__idx)) 
                                           && ((0x63U 
                                                >= 
                                                (0x7fU 
                                                 & __Vfunc_cell_free__56__idx)) 
                                               && (1U 
                                                   & (__Vtemp_3[
                                                      (3U 
                                                       & (__Vfunc_cell_free__56__idx 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & __Vfunc_cell_free__56__idx)))));
                                }(), (IData)(__Vfunc_cell_free__56__Vfuncout)) 
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
        if ((8U & (IData)(vlSymsp->TOP.maze_solver_parallel__DOT__core_start))) {
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

VL_INLINE_OPT void Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__4__KET____DOT__solver_inst__0(Vmaze_solver_parallel_maze_solver_core__N64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__4__KET____DOT__solver_inst__0\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_x_of__60__Vfuncout;
    __Vfunc_x_of__60__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__60__idx;
    __Vfunc_x_of__60__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__61__Vfuncout;
    __Vfunc_y_of__61__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__61__idx;
    __Vfunc_y_of__61__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__62__Vfuncout;
    __Vfunc_idx_of__62__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__62__x;
    __Vfunc_idx_of__62__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__62__y;
    __Vfunc_idx_of__62__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__63__Vfuncout;
    __Vfunc_idx_of__63__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__63__x;
    __Vfunc_idx_of__63__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__63__y;
    __Vfunc_idx_of__63__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__64__Vfuncout;
    __Vfunc_idx_of__64__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__64__x;
    __Vfunc_idx_of__64__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__64__y;
    __Vfunc_idx_of__64__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__65__Vfuncout;
    __Vfunc_idx_of__65__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__65__x;
    __Vfunc_idx_of__65__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__65__y;
    __Vfunc_idx_of__65__y = 0;
    IData/*31:0*/ __Vfunc_x_of__66__Vfuncout;
    __Vfunc_x_of__66__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__66__idx;
    __Vfunc_x_of__66__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__67__Vfuncout;
    __Vfunc_y_of__67__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__67__idx;
    __Vfunc_y_of__67__idx = 0;
    IData/*31:0*/ __Vfunc_x_of__68__Vfuncout;
    __Vfunc_x_of__68__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__68__idx;
    __Vfunc_x_of__68__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__69__Vfuncout;
    __Vfunc_y_of__69__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__69__idx;
    __Vfunc_y_of__69__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__70__Vfuncout;
    __Vfunc_idx_of__70__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__70__x;
    __Vfunc_idx_of__70__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__70__y;
    __Vfunc_idx_of__70__y = 0;
    CData/*0:0*/ __Vfunc_cell_free__71__Vfuncout;
    __Vfunc_cell_free__71__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_cell_free__71__x;
    __Vfunc_cell_free__71__x = 0;
    IData/*31:0*/ __Vfunc_cell_free__71__y;
    __Vfunc_cell_free__71__y = 0;
    IData/*31:0*/ __Vfunc_cell_free__71__idx;
    __Vfunc_cell_free__71__idx = 0;
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
                          >> 4U)))) {
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
            __Vfunc_x_of__60__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_x_of__60__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__60__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__bx = __Vfunc_x_of__60__Vfuncout;
            __Vfunc_y_of__61__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_y_of__61__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__61__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__by = __Vfunc_y_of__61__Vfuncout;
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:315: Assertion failed in %Nmaze_solver_parallel.gen_cores[4].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
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
                                __Vfunc_idx_of__62__y 
                                    = (vlSelfRef.__PVT__unnamedblk4__DOT__by 
                                       - (IData)(1U));
                                __Vfunc_idx_of__62__x 
                                    = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                __Vfunc_idx_of__62__Vfuncout 
                                    = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__62__y) 
                                       + __Vfunc_idx_of__62__x);
                            }(), __Vfunc_idx_of__62__Vfuncout)
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                 ? 
                                                ([&]() {
                                    __Vfunc_idx_of__63__y 
                                        = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                    __Vfunc_idx_of__63__x 
                                        = ((IData)(1U) 
                                           + vlSelfRef.__PVT__unnamedblk4__DOT__bx);
                                    __Vfunc_idx_of__63__Vfuncout 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__63__y) 
                                           + __Vfunc_idx_of__63__x);
                                }(), __Vfunc_idx_of__63__Vfuncout)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                  ? 
                                                 ([&]() {
                                        __Vfunc_idx_of__64__y 
                                            = ((IData)(1U) 
                                               + vlSelfRef.__PVT__unnamedblk4__DOT__by);
                                        __Vfunc_idx_of__64__x 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                        __Vfunc_idx_of__64__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__64__y) 
                                               + __Vfunc_idx_of__64__x);
                                    }(), __Vfunc_idx_of__64__Vfuncout)
                                                  : 
                                                 ([&]() {
                                        __Vfunc_idx_of__65__y 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                        __Vfunc_idx_of__65__x 
                                            = (vlSelfRef.__PVT__unnamedblk4__DOT__bx 
                                               - (IData)(1U));
                                        __Vfunc_idx_of__65__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__65__y) 
                                               + __Vfunc_idx_of__65__x);
                                    }(), __Vfunc_idx_of__65__Vfuncout)))));
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:328: Assertion failed in %Nmaze_solver_parallel.gen_cores[4].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
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
                    __Vfunc_x_of__66__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_x_of__66__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__66__idx), (IData)(0xaU));
                    __Vdly__cur_x_reg = __Vfunc_x_of__66__Vfuncout;
                    __Vfunc_y_of__67__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_y_of__67__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__67__idx), (IData)(0xaU));
                    __Vdly__cur_y_reg = __Vfunc_y_of__67__Vfuncout;
                    __Vdly__q_head = (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__q_head)));
                    if (((9U == ([&]() {
                                        __Vfunc_x_of__68__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_x_of__68__Vfuncout 
                                            = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__68__idx), (IData)(0xaU));
                                    }(), __Vfunc_x_of__68__Vfuncout)) 
                         & (9U == ([&]() {
                                        __Vfunc_y_of__69__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_y_of__69__Vfuncout 
                                            = VL_DIVS_III(32, (IData)(__Vfunc_y_of__69__idx), (IData)(0xaU));
                                    }(), __Vfunc_y_of__69__Vfuncout)))) {
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:245: Assertion failed in %Nmaze_solver_parallel.gen_cores[4].solver_inst.unnamedblk2: unique case, but multiple matches found for '2'h%x'\n",0,
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
                    __Vfunc_idx_of__70__y = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                    __Vfunc_idx_of__70__x = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                    __Vfunc_idx_of__70__Vfuncout = 
                        (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__70__y) 
                         + __Vfunc_idx_of__70__x);
                    vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx 
                        = __Vfunc_idx_of__70__Vfuncout;
                    if ((([&]() {
                                    __Vfunc_cell_free__71__y 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                                    __Vfunc_cell_free__71__x 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                                    __Vfunc_cell_free__71__idx 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_cell_free__71__y) 
                                           + __Vfunc_cell_free__71__x);
                                    __Vtemp_3[0U] = (IData)(
                                                            (((QData)((IData)(
                                                                              vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[4U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[4U]))));
                                    __Vtemp_3[1U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[4U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[4U]))) 
                                                             >> 0x20U));
                                    __Vtemp_3[2U] = (IData)(
                                                            (((QData)((IData)(
                                                                              (0xfU 
                                                                               & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[4U]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[4U]))));
                                    __Vtemp_3[3U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               (0xfU 
                                                                                & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[4U]))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[4U]))) 
                                                             >> 0x20U));
                                    __Vfunc_cell_free__71__Vfuncout 
                                        = ((VL_LTES_III(32, 0U, __Vfunc_cell_free__71__idx) 
                                            & VL_GTS_III(32, 0x64U, __Vfunc_cell_free__71__idx)) 
                                           && ((0x63U 
                                                >= 
                                                (0x7fU 
                                                 & __Vfunc_cell_free__71__idx)) 
                                               && (1U 
                                                   & (__Vtemp_3[
                                                      (3U 
                                                       & (__Vfunc_cell_free__71__idx 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & __Vfunc_cell_free__71__idx)))));
                                }(), (IData)(__Vfunc_cell_free__71__Vfuncout)) 
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
        if ((0x10U & (IData)(vlSymsp->TOP.maze_solver_parallel__DOT__core_start))) {
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

VL_INLINE_OPT void Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__5__KET____DOT__solver_inst__0(Vmaze_solver_parallel_maze_solver_core__N64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__5__KET____DOT__solver_inst__0\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_x_of__75__Vfuncout;
    __Vfunc_x_of__75__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__75__idx;
    __Vfunc_x_of__75__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__76__Vfuncout;
    __Vfunc_y_of__76__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__76__idx;
    __Vfunc_y_of__76__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__77__Vfuncout;
    __Vfunc_idx_of__77__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__77__x;
    __Vfunc_idx_of__77__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__77__y;
    __Vfunc_idx_of__77__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__78__Vfuncout;
    __Vfunc_idx_of__78__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__78__x;
    __Vfunc_idx_of__78__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__78__y;
    __Vfunc_idx_of__78__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__79__Vfuncout;
    __Vfunc_idx_of__79__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__79__x;
    __Vfunc_idx_of__79__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__79__y;
    __Vfunc_idx_of__79__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__80__Vfuncout;
    __Vfunc_idx_of__80__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__80__x;
    __Vfunc_idx_of__80__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__80__y;
    __Vfunc_idx_of__80__y = 0;
    IData/*31:0*/ __Vfunc_x_of__81__Vfuncout;
    __Vfunc_x_of__81__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__81__idx;
    __Vfunc_x_of__81__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__82__Vfuncout;
    __Vfunc_y_of__82__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__82__idx;
    __Vfunc_y_of__82__idx = 0;
    IData/*31:0*/ __Vfunc_x_of__83__Vfuncout;
    __Vfunc_x_of__83__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__83__idx;
    __Vfunc_x_of__83__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__84__Vfuncout;
    __Vfunc_y_of__84__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__84__idx;
    __Vfunc_y_of__84__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__85__Vfuncout;
    __Vfunc_idx_of__85__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__85__x;
    __Vfunc_idx_of__85__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__85__y;
    __Vfunc_idx_of__85__y = 0;
    CData/*0:0*/ __Vfunc_cell_free__86__Vfuncout;
    __Vfunc_cell_free__86__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_cell_free__86__x;
    __Vfunc_cell_free__86__x = 0;
    IData/*31:0*/ __Vfunc_cell_free__86__y;
    __Vfunc_cell_free__86__y = 0;
    IData/*31:0*/ __Vfunc_cell_free__86__idx;
    __Vfunc_cell_free__86__idx = 0;
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
                          >> 5U)))) {
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
            __Vfunc_x_of__75__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_x_of__75__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__75__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__bx = __Vfunc_x_of__75__Vfuncout;
            __Vfunc_y_of__76__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_y_of__76__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__76__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__by = __Vfunc_y_of__76__Vfuncout;
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:315: Assertion failed in %Nmaze_solver_parallel.gen_cores[5].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
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
                                __Vfunc_idx_of__77__y 
                                    = (vlSelfRef.__PVT__unnamedblk4__DOT__by 
                                       - (IData)(1U));
                                __Vfunc_idx_of__77__x 
                                    = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                __Vfunc_idx_of__77__Vfuncout 
                                    = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__77__y) 
                                       + __Vfunc_idx_of__77__x);
                            }(), __Vfunc_idx_of__77__Vfuncout)
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                 ? 
                                                ([&]() {
                                    __Vfunc_idx_of__78__y 
                                        = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                    __Vfunc_idx_of__78__x 
                                        = ((IData)(1U) 
                                           + vlSelfRef.__PVT__unnamedblk4__DOT__bx);
                                    __Vfunc_idx_of__78__Vfuncout 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__78__y) 
                                           + __Vfunc_idx_of__78__x);
                                }(), __Vfunc_idx_of__78__Vfuncout)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                  ? 
                                                 ([&]() {
                                        __Vfunc_idx_of__79__y 
                                            = ((IData)(1U) 
                                               + vlSelfRef.__PVT__unnamedblk4__DOT__by);
                                        __Vfunc_idx_of__79__x 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                        __Vfunc_idx_of__79__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__79__y) 
                                               + __Vfunc_idx_of__79__x);
                                    }(), __Vfunc_idx_of__79__Vfuncout)
                                                  : 
                                                 ([&]() {
                                        __Vfunc_idx_of__80__y 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                        __Vfunc_idx_of__80__x 
                                            = (vlSelfRef.__PVT__unnamedblk4__DOT__bx 
                                               - (IData)(1U));
                                        __Vfunc_idx_of__80__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__80__y) 
                                               + __Vfunc_idx_of__80__x);
                                    }(), __Vfunc_idx_of__80__Vfuncout)))));
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:328: Assertion failed in %Nmaze_solver_parallel.gen_cores[5].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
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
                    __Vfunc_x_of__81__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_x_of__81__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__81__idx), (IData)(0xaU));
                    __Vdly__cur_x_reg = __Vfunc_x_of__81__Vfuncout;
                    __Vfunc_y_of__82__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_y_of__82__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__82__idx), (IData)(0xaU));
                    __Vdly__cur_y_reg = __Vfunc_y_of__82__Vfuncout;
                    __Vdly__q_head = (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__q_head)));
                    if (((9U == ([&]() {
                                        __Vfunc_x_of__83__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_x_of__83__Vfuncout 
                                            = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__83__idx), (IData)(0xaU));
                                    }(), __Vfunc_x_of__83__Vfuncout)) 
                         & (9U == ([&]() {
                                        __Vfunc_y_of__84__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_y_of__84__Vfuncout 
                                            = VL_DIVS_III(32, (IData)(__Vfunc_y_of__84__idx), (IData)(0xaU));
                                    }(), __Vfunc_y_of__84__Vfuncout)))) {
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:245: Assertion failed in %Nmaze_solver_parallel.gen_cores[5].solver_inst.unnamedblk2: unique case, but multiple matches found for '2'h%x'\n",0,
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
                    __Vfunc_idx_of__85__y = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                    __Vfunc_idx_of__85__x = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                    __Vfunc_idx_of__85__Vfuncout = 
                        (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__85__y) 
                         + __Vfunc_idx_of__85__x);
                    vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx 
                        = __Vfunc_idx_of__85__Vfuncout;
                    if ((([&]() {
                                    __Vfunc_cell_free__86__y 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                                    __Vfunc_cell_free__86__x 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                                    __Vfunc_cell_free__86__idx 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_cell_free__86__y) 
                                           + __Vfunc_cell_free__86__x);
                                    __Vtemp_3[0U] = (IData)(
                                                            (((QData)((IData)(
                                                                              vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[5U]))));
                                    __Vtemp_3[1U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[5U]))) 
                                                             >> 0x20U));
                                    __Vtemp_3[2U] = (IData)(
                                                            (((QData)((IData)(
                                                                              (0xfU 
                                                                               & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[5U]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[5U]))));
                                    __Vtemp_3[3U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               (0xfU 
                                                                                & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[5U]))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[5U]))) 
                                                             >> 0x20U));
                                    __Vfunc_cell_free__86__Vfuncout 
                                        = ((VL_LTES_III(32, 0U, __Vfunc_cell_free__86__idx) 
                                            & VL_GTS_III(32, 0x64U, __Vfunc_cell_free__86__idx)) 
                                           && ((0x63U 
                                                >= 
                                                (0x7fU 
                                                 & __Vfunc_cell_free__86__idx)) 
                                               && (1U 
                                                   & (__Vtemp_3[
                                                      (3U 
                                                       & (__Vfunc_cell_free__86__idx 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & __Vfunc_cell_free__86__idx)))));
                                }(), (IData)(__Vfunc_cell_free__86__Vfuncout)) 
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
        if ((0x20U & (IData)(vlSymsp->TOP.maze_solver_parallel__DOT__core_start))) {
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

VL_INLINE_OPT void Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__6__KET____DOT__solver_inst__0(Vmaze_solver_parallel_maze_solver_core__N64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__6__KET____DOT__solver_inst__0\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_x_of__90__Vfuncout;
    __Vfunc_x_of__90__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__90__idx;
    __Vfunc_x_of__90__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__91__Vfuncout;
    __Vfunc_y_of__91__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__91__idx;
    __Vfunc_y_of__91__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__92__Vfuncout;
    __Vfunc_idx_of__92__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__92__x;
    __Vfunc_idx_of__92__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__92__y;
    __Vfunc_idx_of__92__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__93__Vfuncout;
    __Vfunc_idx_of__93__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__93__x;
    __Vfunc_idx_of__93__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__93__y;
    __Vfunc_idx_of__93__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__94__Vfuncout;
    __Vfunc_idx_of__94__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__94__x;
    __Vfunc_idx_of__94__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__94__y;
    __Vfunc_idx_of__94__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__95__Vfuncout;
    __Vfunc_idx_of__95__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__95__x;
    __Vfunc_idx_of__95__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__95__y;
    __Vfunc_idx_of__95__y = 0;
    IData/*31:0*/ __Vfunc_x_of__96__Vfuncout;
    __Vfunc_x_of__96__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__96__idx;
    __Vfunc_x_of__96__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__97__Vfuncout;
    __Vfunc_y_of__97__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__97__idx;
    __Vfunc_y_of__97__idx = 0;
    IData/*31:0*/ __Vfunc_x_of__98__Vfuncout;
    __Vfunc_x_of__98__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__98__idx;
    __Vfunc_x_of__98__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__99__Vfuncout;
    __Vfunc_y_of__99__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__99__idx;
    __Vfunc_y_of__99__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__100__Vfuncout;
    __Vfunc_idx_of__100__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__100__x;
    __Vfunc_idx_of__100__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__100__y;
    __Vfunc_idx_of__100__y = 0;
    CData/*0:0*/ __Vfunc_cell_free__101__Vfuncout;
    __Vfunc_cell_free__101__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_cell_free__101__x;
    __Vfunc_cell_free__101__x = 0;
    IData/*31:0*/ __Vfunc_cell_free__101__y;
    __Vfunc_cell_free__101__y = 0;
    IData/*31:0*/ __Vfunc_cell_free__101__idx;
    __Vfunc_cell_free__101__idx = 0;
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
                          >> 6U)))) {
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
            __Vfunc_x_of__90__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_x_of__90__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__90__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__bx = __Vfunc_x_of__90__Vfuncout;
            __Vfunc_y_of__91__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_y_of__91__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__91__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__by = __Vfunc_y_of__91__Vfuncout;
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:315: Assertion failed in %Nmaze_solver_parallel.gen_cores[6].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
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
                                __Vfunc_idx_of__92__y 
                                    = (vlSelfRef.__PVT__unnamedblk4__DOT__by 
                                       - (IData)(1U));
                                __Vfunc_idx_of__92__x 
                                    = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                __Vfunc_idx_of__92__Vfuncout 
                                    = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__92__y) 
                                       + __Vfunc_idx_of__92__x);
                            }(), __Vfunc_idx_of__92__Vfuncout)
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                 ? 
                                                ([&]() {
                                    __Vfunc_idx_of__93__y 
                                        = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                    __Vfunc_idx_of__93__x 
                                        = ((IData)(1U) 
                                           + vlSelfRef.__PVT__unnamedblk4__DOT__bx);
                                    __Vfunc_idx_of__93__Vfuncout 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__93__y) 
                                           + __Vfunc_idx_of__93__x);
                                }(), __Vfunc_idx_of__93__Vfuncout)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                  ? 
                                                 ([&]() {
                                        __Vfunc_idx_of__94__y 
                                            = ((IData)(1U) 
                                               + vlSelfRef.__PVT__unnamedblk4__DOT__by);
                                        __Vfunc_idx_of__94__x 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                        __Vfunc_idx_of__94__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__94__y) 
                                               + __Vfunc_idx_of__94__x);
                                    }(), __Vfunc_idx_of__94__Vfuncout)
                                                  : 
                                                 ([&]() {
                                        __Vfunc_idx_of__95__y 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                        __Vfunc_idx_of__95__x 
                                            = (vlSelfRef.__PVT__unnamedblk4__DOT__bx 
                                               - (IData)(1U));
                                        __Vfunc_idx_of__95__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__95__y) 
                                               + __Vfunc_idx_of__95__x);
                                    }(), __Vfunc_idx_of__95__Vfuncout)))));
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:328: Assertion failed in %Nmaze_solver_parallel.gen_cores[6].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
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
                    __Vfunc_x_of__96__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_x_of__96__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__96__idx), (IData)(0xaU));
                    __Vdly__cur_x_reg = __Vfunc_x_of__96__Vfuncout;
                    __Vfunc_y_of__97__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_y_of__97__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__97__idx), (IData)(0xaU));
                    __Vdly__cur_y_reg = __Vfunc_y_of__97__Vfuncout;
                    __Vdly__q_head = (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__q_head)));
                    if (((9U == ([&]() {
                                        __Vfunc_x_of__98__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_x_of__98__Vfuncout 
                                            = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__98__idx), (IData)(0xaU));
                                    }(), __Vfunc_x_of__98__Vfuncout)) 
                         & (9U == ([&]() {
                                        __Vfunc_y_of__99__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_y_of__99__Vfuncout 
                                            = VL_DIVS_III(32, (IData)(__Vfunc_y_of__99__idx), (IData)(0xaU));
                                    }(), __Vfunc_y_of__99__Vfuncout)))) {
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:245: Assertion failed in %Nmaze_solver_parallel.gen_cores[6].solver_inst.unnamedblk2: unique case, but multiple matches found for '2'h%x'\n",0,
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
                    __Vfunc_idx_of__100__y = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                    __Vfunc_idx_of__100__x = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                    __Vfunc_idx_of__100__Vfuncout = 
                        (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__100__y) 
                         + __Vfunc_idx_of__100__x);
                    vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx 
                        = __Vfunc_idx_of__100__Vfuncout;
                    if ((([&]() {
                                    __Vfunc_cell_free__101__y 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                                    __Vfunc_cell_free__101__x 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                                    __Vfunc_cell_free__101__idx 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_cell_free__101__y) 
                                           + __Vfunc_cell_free__101__x);
                                    __Vtemp_3[0U] = (IData)(
                                                            (((QData)((IData)(
                                                                              vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[6U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[6U]))));
                                    __Vtemp_3[1U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[6U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[6U]))) 
                                                             >> 0x20U));
                                    __Vtemp_3[2U] = (IData)(
                                                            (((QData)((IData)(
                                                                              (0xfU 
                                                                               & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[6U]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[6U]))));
                                    __Vtemp_3[3U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               (0xfU 
                                                                                & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[6U]))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[6U]))) 
                                                             >> 0x20U));
                                    __Vfunc_cell_free__101__Vfuncout 
                                        = ((VL_LTES_III(32, 0U, __Vfunc_cell_free__101__idx) 
                                            & VL_GTS_III(32, 0x64U, __Vfunc_cell_free__101__idx)) 
                                           && ((0x63U 
                                                >= 
                                                (0x7fU 
                                                 & __Vfunc_cell_free__101__idx)) 
                                               && (1U 
                                                   & (__Vtemp_3[
                                                      (3U 
                                                       & (__Vfunc_cell_free__101__idx 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & __Vfunc_cell_free__101__idx)))));
                                }(), (IData)(__Vfunc_cell_free__101__Vfuncout)) 
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
        if ((0x40U & (IData)(vlSymsp->TOP.maze_solver_parallel__DOT__core_start))) {
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

VL_INLINE_OPT void Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__7__KET____DOT__solver_inst__0(Vmaze_solver_parallel_maze_solver_core__N64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__7__KET____DOT__solver_inst__0\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_x_of__105__Vfuncout;
    __Vfunc_x_of__105__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__105__idx;
    __Vfunc_x_of__105__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__106__Vfuncout;
    __Vfunc_y_of__106__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__106__idx;
    __Vfunc_y_of__106__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__107__Vfuncout;
    __Vfunc_idx_of__107__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__107__x;
    __Vfunc_idx_of__107__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__107__y;
    __Vfunc_idx_of__107__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__108__Vfuncout;
    __Vfunc_idx_of__108__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__108__x;
    __Vfunc_idx_of__108__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__108__y;
    __Vfunc_idx_of__108__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__109__Vfuncout;
    __Vfunc_idx_of__109__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__109__x;
    __Vfunc_idx_of__109__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__109__y;
    __Vfunc_idx_of__109__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__110__Vfuncout;
    __Vfunc_idx_of__110__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__110__x;
    __Vfunc_idx_of__110__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__110__y;
    __Vfunc_idx_of__110__y = 0;
    IData/*31:0*/ __Vfunc_x_of__111__Vfuncout;
    __Vfunc_x_of__111__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__111__idx;
    __Vfunc_x_of__111__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__112__Vfuncout;
    __Vfunc_y_of__112__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__112__idx;
    __Vfunc_y_of__112__idx = 0;
    IData/*31:0*/ __Vfunc_x_of__113__Vfuncout;
    __Vfunc_x_of__113__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__113__idx;
    __Vfunc_x_of__113__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__114__Vfuncout;
    __Vfunc_y_of__114__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__114__idx;
    __Vfunc_y_of__114__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__115__Vfuncout;
    __Vfunc_idx_of__115__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__115__x;
    __Vfunc_idx_of__115__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__115__y;
    __Vfunc_idx_of__115__y = 0;
    CData/*0:0*/ __Vfunc_cell_free__116__Vfuncout;
    __Vfunc_cell_free__116__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_cell_free__116__x;
    __Vfunc_cell_free__116__x = 0;
    IData/*31:0*/ __Vfunc_cell_free__116__y;
    __Vfunc_cell_free__116__y = 0;
    IData/*31:0*/ __Vfunc_cell_free__116__idx;
    __Vfunc_cell_free__116__idx = 0;
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
                          >> 7U)))) {
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
            __Vfunc_x_of__105__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_x_of__105__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__105__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__bx = __Vfunc_x_of__105__Vfuncout;
            __Vfunc_y_of__106__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_y_of__106__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__106__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__by = __Vfunc_y_of__106__Vfuncout;
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:315: Assertion failed in %Nmaze_solver_parallel.gen_cores[7].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
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
                                __Vfunc_idx_of__107__y 
                                    = (vlSelfRef.__PVT__unnamedblk4__DOT__by 
                                       - (IData)(1U));
                                __Vfunc_idx_of__107__x 
                                    = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                __Vfunc_idx_of__107__Vfuncout 
                                    = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__107__y) 
                                       + __Vfunc_idx_of__107__x);
                            }(), __Vfunc_idx_of__107__Vfuncout)
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                 ? 
                                                ([&]() {
                                    __Vfunc_idx_of__108__y 
                                        = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                    __Vfunc_idx_of__108__x 
                                        = ((IData)(1U) 
                                           + vlSelfRef.__PVT__unnamedblk4__DOT__bx);
                                    __Vfunc_idx_of__108__Vfuncout 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__108__y) 
                                           + __Vfunc_idx_of__108__x);
                                }(), __Vfunc_idx_of__108__Vfuncout)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                  ? 
                                                 ([&]() {
                                        __Vfunc_idx_of__109__y 
                                            = ((IData)(1U) 
                                               + vlSelfRef.__PVT__unnamedblk4__DOT__by);
                                        __Vfunc_idx_of__109__x 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                        __Vfunc_idx_of__109__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__109__y) 
                                               + __Vfunc_idx_of__109__x);
                                    }(), __Vfunc_idx_of__109__Vfuncout)
                                                  : 
                                                 ([&]() {
                                        __Vfunc_idx_of__110__y 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                        __Vfunc_idx_of__110__x 
                                            = (vlSelfRef.__PVT__unnamedblk4__DOT__bx 
                                               - (IData)(1U));
                                        __Vfunc_idx_of__110__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__110__y) 
                                               + __Vfunc_idx_of__110__x);
                                    }(), __Vfunc_idx_of__110__Vfuncout)))));
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:328: Assertion failed in %Nmaze_solver_parallel.gen_cores[7].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
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
                    __Vfunc_x_of__111__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_x_of__111__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__111__idx), (IData)(0xaU));
                    __Vdly__cur_x_reg = __Vfunc_x_of__111__Vfuncout;
                    __Vfunc_y_of__112__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_y_of__112__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__112__idx), (IData)(0xaU));
                    __Vdly__cur_y_reg = __Vfunc_y_of__112__Vfuncout;
                    __Vdly__q_head = (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__q_head)));
                    if (((9U == ([&]() {
                                        __Vfunc_x_of__113__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_x_of__113__Vfuncout 
                                            = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__113__idx), (IData)(0xaU));
                                    }(), __Vfunc_x_of__113__Vfuncout)) 
                         & (9U == ([&]() {
                                        __Vfunc_y_of__114__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_y_of__114__Vfuncout 
                                            = VL_DIVS_III(32, (IData)(__Vfunc_y_of__114__idx), (IData)(0xaU));
                                    }(), __Vfunc_y_of__114__Vfuncout)))) {
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:245: Assertion failed in %Nmaze_solver_parallel.gen_cores[7].solver_inst.unnamedblk2: unique case, but multiple matches found for '2'h%x'\n",0,
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
                    __Vfunc_idx_of__115__y = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                    __Vfunc_idx_of__115__x = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                    __Vfunc_idx_of__115__Vfuncout = 
                        (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__115__y) 
                         + __Vfunc_idx_of__115__x);
                    vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx 
                        = __Vfunc_idx_of__115__Vfuncout;
                    if ((([&]() {
                                    __Vfunc_cell_free__116__y 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                                    __Vfunc_cell_free__116__x 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                                    __Vfunc_cell_free__116__idx 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_cell_free__116__y) 
                                           + __Vfunc_cell_free__116__x);
                                    __Vtemp_3[0U] = (IData)(
                                                            (((QData)((IData)(
                                                                              vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[7U]))));
                                    __Vtemp_3[1U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[7U]))) 
                                                             >> 0x20U));
                                    __Vtemp_3[2U] = (IData)(
                                                            (((QData)((IData)(
                                                                              (0xfU 
                                                                               & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[7U]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[7U]))));
                                    __Vtemp_3[3U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               (0xfU 
                                                                                & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[7U]))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[7U]))) 
                                                             >> 0x20U));
                                    __Vfunc_cell_free__116__Vfuncout 
                                        = ((VL_LTES_III(32, 0U, __Vfunc_cell_free__116__idx) 
                                            & VL_GTS_III(32, 0x64U, __Vfunc_cell_free__116__idx)) 
                                           && ((0x63U 
                                                >= 
                                                (0x7fU 
                                                 & __Vfunc_cell_free__116__idx)) 
                                               && (1U 
                                                   & (__Vtemp_3[
                                                      (3U 
                                                       & (__Vfunc_cell_free__116__idx 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & __Vfunc_cell_free__116__idx)))));
                                }(), (IData)(__Vfunc_cell_free__116__Vfuncout)) 
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
        if ((0x80U & (IData)(vlSymsp->TOP.maze_solver_parallel__DOT__core_start))) {
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

VL_INLINE_OPT void Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__8__KET____DOT__solver_inst__0(Vmaze_solver_parallel_maze_solver_core__N64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__8__KET____DOT__solver_inst__0\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_x_of__120__Vfuncout;
    __Vfunc_x_of__120__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__120__idx;
    __Vfunc_x_of__120__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__121__Vfuncout;
    __Vfunc_y_of__121__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__121__idx;
    __Vfunc_y_of__121__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__122__Vfuncout;
    __Vfunc_idx_of__122__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__122__x;
    __Vfunc_idx_of__122__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__122__y;
    __Vfunc_idx_of__122__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__123__Vfuncout;
    __Vfunc_idx_of__123__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__123__x;
    __Vfunc_idx_of__123__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__123__y;
    __Vfunc_idx_of__123__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__124__Vfuncout;
    __Vfunc_idx_of__124__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__124__x;
    __Vfunc_idx_of__124__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__124__y;
    __Vfunc_idx_of__124__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__125__Vfuncout;
    __Vfunc_idx_of__125__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__125__x;
    __Vfunc_idx_of__125__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__125__y;
    __Vfunc_idx_of__125__y = 0;
    IData/*31:0*/ __Vfunc_x_of__126__Vfuncout;
    __Vfunc_x_of__126__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__126__idx;
    __Vfunc_x_of__126__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__127__Vfuncout;
    __Vfunc_y_of__127__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__127__idx;
    __Vfunc_y_of__127__idx = 0;
    IData/*31:0*/ __Vfunc_x_of__128__Vfuncout;
    __Vfunc_x_of__128__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__128__idx;
    __Vfunc_x_of__128__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__129__Vfuncout;
    __Vfunc_y_of__129__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__129__idx;
    __Vfunc_y_of__129__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__130__Vfuncout;
    __Vfunc_idx_of__130__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__130__x;
    __Vfunc_idx_of__130__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__130__y;
    __Vfunc_idx_of__130__y = 0;
    CData/*0:0*/ __Vfunc_cell_free__131__Vfuncout;
    __Vfunc_cell_free__131__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_cell_free__131__x;
    __Vfunc_cell_free__131__x = 0;
    IData/*31:0*/ __Vfunc_cell_free__131__y;
    __Vfunc_cell_free__131__y = 0;
    IData/*31:0*/ __Vfunc_cell_free__131__idx;
    __Vfunc_cell_free__131__idx = 0;
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
                          >> 8U)))) {
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
            __Vfunc_x_of__120__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_x_of__120__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__120__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__bx = __Vfunc_x_of__120__Vfuncout;
            __Vfunc_y_of__121__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_y_of__121__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__121__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__by = __Vfunc_y_of__121__Vfuncout;
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:315: Assertion failed in %Nmaze_solver_parallel.gen_cores[8].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
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
                                __Vfunc_idx_of__122__y 
                                    = (vlSelfRef.__PVT__unnamedblk4__DOT__by 
                                       - (IData)(1U));
                                __Vfunc_idx_of__122__x 
                                    = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                __Vfunc_idx_of__122__Vfuncout 
                                    = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__122__y) 
                                       + __Vfunc_idx_of__122__x);
                            }(), __Vfunc_idx_of__122__Vfuncout)
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                 ? 
                                                ([&]() {
                                    __Vfunc_idx_of__123__y 
                                        = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                    __Vfunc_idx_of__123__x 
                                        = ((IData)(1U) 
                                           + vlSelfRef.__PVT__unnamedblk4__DOT__bx);
                                    __Vfunc_idx_of__123__Vfuncout 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__123__y) 
                                           + __Vfunc_idx_of__123__x);
                                }(), __Vfunc_idx_of__123__Vfuncout)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                  ? 
                                                 ([&]() {
                                        __Vfunc_idx_of__124__y 
                                            = ((IData)(1U) 
                                               + vlSelfRef.__PVT__unnamedblk4__DOT__by);
                                        __Vfunc_idx_of__124__x 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                        __Vfunc_idx_of__124__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__124__y) 
                                               + __Vfunc_idx_of__124__x);
                                    }(), __Vfunc_idx_of__124__Vfuncout)
                                                  : 
                                                 ([&]() {
                                        __Vfunc_idx_of__125__y 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                        __Vfunc_idx_of__125__x 
                                            = (vlSelfRef.__PVT__unnamedblk4__DOT__bx 
                                               - (IData)(1U));
                                        __Vfunc_idx_of__125__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__125__y) 
                                               + __Vfunc_idx_of__125__x);
                                    }(), __Vfunc_idx_of__125__Vfuncout)))));
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:328: Assertion failed in %Nmaze_solver_parallel.gen_cores[8].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
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
                    __Vfunc_x_of__126__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_x_of__126__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__126__idx), (IData)(0xaU));
                    __Vdly__cur_x_reg = __Vfunc_x_of__126__Vfuncout;
                    __Vfunc_y_of__127__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_y_of__127__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__127__idx), (IData)(0xaU));
                    __Vdly__cur_y_reg = __Vfunc_y_of__127__Vfuncout;
                    __Vdly__q_head = (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__q_head)));
                    if (((9U == ([&]() {
                                        __Vfunc_x_of__128__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_x_of__128__Vfuncout 
                                            = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__128__idx), (IData)(0xaU));
                                    }(), __Vfunc_x_of__128__Vfuncout)) 
                         & (9U == ([&]() {
                                        __Vfunc_y_of__129__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_y_of__129__Vfuncout 
                                            = VL_DIVS_III(32, (IData)(__Vfunc_y_of__129__idx), (IData)(0xaU));
                                    }(), __Vfunc_y_of__129__Vfuncout)))) {
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:245: Assertion failed in %Nmaze_solver_parallel.gen_cores[8].solver_inst.unnamedblk2: unique case, but multiple matches found for '2'h%x'\n",0,
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
                    __Vfunc_idx_of__130__y = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                    __Vfunc_idx_of__130__x = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                    __Vfunc_idx_of__130__Vfuncout = 
                        (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__130__y) 
                         + __Vfunc_idx_of__130__x);
                    vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx 
                        = __Vfunc_idx_of__130__Vfuncout;
                    if ((([&]() {
                                    __Vfunc_cell_free__131__y 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                                    __Vfunc_cell_free__131__x 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                                    __Vfunc_cell_free__131__idx 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_cell_free__131__y) 
                                           + __Vfunc_cell_free__131__x);
                                    __Vtemp_3[0U] = (IData)(
                                                            (((QData)((IData)(
                                                                              vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[8U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[8U]))));
                                    __Vtemp_3[1U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[8U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[8U]))) 
                                                             >> 0x20U));
                                    __Vtemp_3[2U] = (IData)(
                                                            (((QData)((IData)(
                                                                              (0xfU 
                                                                               & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[8U]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[8U]))));
                                    __Vtemp_3[3U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               (0xfU 
                                                                                & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[8U]))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[8U]))) 
                                                             >> 0x20U));
                                    __Vfunc_cell_free__131__Vfuncout 
                                        = ((VL_LTES_III(32, 0U, __Vfunc_cell_free__131__idx) 
                                            & VL_GTS_III(32, 0x64U, __Vfunc_cell_free__131__idx)) 
                                           && ((0x63U 
                                                >= 
                                                (0x7fU 
                                                 & __Vfunc_cell_free__131__idx)) 
                                               && (1U 
                                                   & (__Vtemp_3[
                                                      (3U 
                                                       & (__Vfunc_cell_free__131__idx 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & __Vfunc_cell_free__131__idx)))));
                                }(), (IData)(__Vfunc_cell_free__131__Vfuncout)) 
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
        if ((0x100U & (IData)(vlSymsp->TOP.maze_solver_parallel__DOT__core_start))) {
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

VL_INLINE_OPT void Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__9__KET____DOT__solver_inst__0(Vmaze_solver_parallel_maze_solver_core__N64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__9__KET____DOT__solver_inst__0\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_x_of__135__Vfuncout;
    __Vfunc_x_of__135__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__135__idx;
    __Vfunc_x_of__135__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__136__Vfuncout;
    __Vfunc_y_of__136__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__136__idx;
    __Vfunc_y_of__136__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__137__Vfuncout;
    __Vfunc_idx_of__137__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__137__x;
    __Vfunc_idx_of__137__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__137__y;
    __Vfunc_idx_of__137__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__138__Vfuncout;
    __Vfunc_idx_of__138__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__138__x;
    __Vfunc_idx_of__138__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__138__y;
    __Vfunc_idx_of__138__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__139__Vfuncout;
    __Vfunc_idx_of__139__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__139__x;
    __Vfunc_idx_of__139__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__139__y;
    __Vfunc_idx_of__139__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__140__Vfuncout;
    __Vfunc_idx_of__140__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__140__x;
    __Vfunc_idx_of__140__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__140__y;
    __Vfunc_idx_of__140__y = 0;
    IData/*31:0*/ __Vfunc_x_of__141__Vfuncout;
    __Vfunc_x_of__141__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__141__idx;
    __Vfunc_x_of__141__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__142__Vfuncout;
    __Vfunc_y_of__142__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__142__idx;
    __Vfunc_y_of__142__idx = 0;
    IData/*31:0*/ __Vfunc_x_of__143__Vfuncout;
    __Vfunc_x_of__143__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__143__idx;
    __Vfunc_x_of__143__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__144__Vfuncout;
    __Vfunc_y_of__144__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__144__idx;
    __Vfunc_y_of__144__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__145__Vfuncout;
    __Vfunc_idx_of__145__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__145__x;
    __Vfunc_idx_of__145__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__145__y;
    __Vfunc_idx_of__145__y = 0;
    CData/*0:0*/ __Vfunc_cell_free__146__Vfuncout;
    __Vfunc_cell_free__146__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_cell_free__146__x;
    __Vfunc_cell_free__146__x = 0;
    IData/*31:0*/ __Vfunc_cell_free__146__y;
    __Vfunc_cell_free__146__y = 0;
    IData/*31:0*/ __Vfunc_cell_free__146__idx;
    __Vfunc_cell_free__146__idx = 0;
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
                          >> 9U)))) {
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
            __Vfunc_x_of__135__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_x_of__135__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__135__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__bx = __Vfunc_x_of__135__Vfuncout;
            __Vfunc_y_of__136__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_y_of__136__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__136__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__by = __Vfunc_y_of__136__Vfuncout;
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:315: Assertion failed in %Nmaze_solver_parallel.gen_cores[9].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
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
                                __Vfunc_idx_of__137__y 
                                    = (vlSelfRef.__PVT__unnamedblk4__DOT__by 
                                       - (IData)(1U));
                                __Vfunc_idx_of__137__x 
                                    = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                __Vfunc_idx_of__137__Vfuncout 
                                    = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__137__y) 
                                       + __Vfunc_idx_of__137__x);
                            }(), __Vfunc_idx_of__137__Vfuncout)
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                 ? 
                                                ([&]() {
                                    __Vfunc_idx_of__138__y 
                                        = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                    __Vfunc_idx_of__138__x 
                                        = ((IData)(1U) 
                                           + vlSelfRef.__PVT__unnamedblk4__DOT__bx);
                                    __Vfunc_idx_of__138__Vfuncout 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__138__y) 
                                           + __Vfunc_idx_of__138__x);
                                }(), __Vfunc_idx_of__138__Vfuncout)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                  ? 
                                                 ([&]() {
                                        __Vfunc_idx_of__139__y 
                                            = ((IData)(1U) 
                                               + vlSelfRef.__PVT__unnamedblk4__DOT__by);
                                        __Vfunc_idx_of__139__x 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                        __Vfunc_idx_of__139__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__139__y) 
                                               + __Vfunc_idx_of__139__x);
                                    }(), __Vfunc_idx_of__139__Vfuncout)
                                                  : 
                                                 ([&]() {
                                        __Vfunc_idx_of__140__y 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                        __Vfunc_idx_of__140__x 
                                            = (vlSelfRef.__PVT__unnamedblk4__DOT__bx 
                                               - (IData)(1U));
                                        __Vfunc_idx_of__140__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__140__y) 
                                               + __Vfunc_idx_of__140__x);
                                    }(), __Vfunc_idx_of__140__Vfuncout)))));
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:328: Assertion failed in %Nmaze_solver_parallel.gen_cores[9].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
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
                    __Vfunc_x_of__141__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_x_of__141__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__141__idx), (IData)(0xaU));
                    __Vdly__cur_x_reg = __Vfunc_x_of__141__Vfuncout;
                    __Vfunc_y_of__142__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_y_of__142__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__142__idx), (IData)(0xaU));
                    __Vdly__cur_y_reg = __Vfunc_y_of__142__Vfuncout;
                    __Vdly__q_head = (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__q_head)));
                    if (((9U == ([&]() {
                                        __Vfunc_x_of__143__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_x_of__143__Vfuncout 
                                            = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__143__idx), (IData)(0xaU));
                                    }(), __Vfunc_x_of__143__Vfuncout)) 
                         & (9U == ([&]() {
                                        __Vfunc_y_of__144__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_y_of__144__Vfuncout 
                                            = VL_DIVS_III(32, (IData)(__Vfunc_y_of__144__idx), (IData)(0xaU));
                                    }(), __Vfunc_y_of__144__Vfuncout)))) {
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:245: Assertion failed in %Nmaze_solver_parallel.gen_cores[9].solver_inst.unnamedblk2: unique case, but multiple matches found for '2'h%x'\n",0,
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
                    __Vfunc_idx_of__145__y = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                    __Vfunc_idx_of__145__x = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                    __Vfunc_idx_of__145__Vfuncout = 
                        (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__145__y) 
                         + __Vfunc_idx_of__145__x);
                    vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx 
                        = __Vfunc_idx_of__145__Vfuncout;
                    if ((([&]() {
                                    __Vfunc_cell_free__146__y 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                                    __Vfunc_cell_free__146__x 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                                    __Vfunc_cell_free__146__idx 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_cell_free__146__y) 
                                           + __Vfunc_cell_free__146__x);
                                    __Vtemp_3[0U] = (IData)(
                                                            (((QData)((IData)(
                                                                              vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[9U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[9U]))));
                                    __Vtemp_3[1U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[9U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[9U]))) 
                                                             >> 0x20U));
                                    __Vtemp_3[2U] = (IData)(
                                                            (((QData)((IData)(
                                                                              (0xfU 
                                                                               & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[9U]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[9U]))));
                                    __Vtemp_3[3U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               (0xfU 
                                                                                & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[9U]))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[9U]))) 
                                                             >> 0x20U));
                                    __Vfunc_cell_free__146__Vfuncout 
                                        = ((VL_LTES_III(32, 0U, __Vfunc_cell_free__146__idx) 
                                            & VL_GTS_III(32, 0x64U, __Vfunc_cell_free__146__idx)) 
                                           && ((0x63U 
                                                >= 
                                                (0x7fU 
                                                 & __Vfunc_cell_free__146__idx)) 
                                               && (1U 
                                                   & (__Vtemp_3[
                                                      (3U 
                                                       & (__Vfunc_cell_free__146__idx 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & __Vfunc_cell_free__146__idx)))));
                                }(), (IData)(__Vfunc_cell_free__146__Vfuncout)) 
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
        if ((0x200U & (IData)(vlSymsp->TOP.maze_solver_parallel__DOT__core_start))) {
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

VL_INLINE_OPT void Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__10__KET____DOT__solver_inst__0(Vmaze_solver_parallel_maze_solver_core__N64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__10__KET____DOT__solver_inst__0\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_x_of__150__Vfuncout;
    __Vfunc_x_of__150__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__150__idx;
    __Vfunc_x_of__150__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__151__Vfuncout;
    __Vfunc_y_of__151__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__151__idx;
    __Vfunc_y_of__151__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__152__Vfuncout;
    __Vfunc_idx_of__152__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__152__x;
    __Vfunc_idx_of__152__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__152__y;
    __Vfunc_idx_of__152__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__153__Vfuncout;
    __Vfunc_idx_of__153__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__153__x;
    __Vfunc_idx_of__153__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__153__y;
    __Vfunc_idx_of__153__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__154__Vfuncout;
    __Vfunc_idx_of__154__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__154__x;
    __Vfunc_idx_of__154__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__154__y;
    __Vfunc_idx_of__154__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__155__Vfuncout;
    __Vfunc_idx_of__155__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__155__x;
    __Vfunc_idx_of__155__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__155__y;
    __Vfunc_idx_of__155__y = 0;
    IData/*31:0*/ __Vfunc_x_of__156__Vfuncout;
    __Vfunc_x_of__156__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__156__idx;
    __Vfunc_x_of__156__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__157__Vfuncout;
    __Vfunc_y_of__157__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__157__idx;
    __Vfunc_y_of__157__idx = 0;
    IData/*31:0*/ __Vfunc_x_of__158__Vfuncout;
    __Vfunc_x_of__158__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__158__idx;
    __Vfunc_x_of__158__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__159__Vfuncout;
    __Vfunc_y_of__159__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__159__idx;
    __Vfunc_y_of__159__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__160__Vfuncout;
    __Vfunc_idx_of__160__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__160__x;
    __Vfunc_idx_of__160__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__160__y;
    __Vfunc_idx_of__160__y = 0;
    CData/*0:0*/ __Vfunc_cell_free__161__Vfuncout;
    __Vfunc_cell_free__161__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_cell_free__161__x;
    __Vfunc_cell_free__161__x = 0;
    IData/*31:0*/ __Vfunc_cell_free__161__y;
    __Vfunc_cell_free__161__y = 0;
    IData/*31:0*/ __Vfunc_cell_free__161__idx;
    __Vfunc_cell_free__161__idx = 0;
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
                          >> 0xaU)))) {
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
            __Vfunc_x_of__150__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_x_of__150__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__150__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__bx = __Vfunc_x_of__150__Vfuncout;
            __Vfunc_y_of__151__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_y_of__151__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__151__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__by = __Vfunc_y_of__151__Vfuncout;
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:315: Assertion failed in %Nmaze_solver_parallel.gen_cores[10].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
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
                                __Vfunc_idx_of__152__y 
                                    = (vlSelfRef.__PVT__unnamedblk4__DOT__by 
                                       - (IData)(1U));
                                __Vfunc_idx_of__152__x 
                                    = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                __Vfunc_idx_of__152__Vfuncout 
                                    = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__152__y) 
                                       + __Vfunc_idx_of__152__x);
                            }(), __Vfunc_idx_of__152__Vfuncout)
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                 ? 
                                                ([&]() {
                                    __Vfunc_idx_of__153__y 
                                        = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                    __Vfunc_idx_of__153__x 
                                        = ((IData)(1U) 
                                           + vlSelfRef.__PVT__unnamedblk4__DOT__bx);
                                    __Vfunc_idx_of__153__Vfuncout 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__153__y) 
                                           + __Vfunc_idx_of__153__x);
                                }(), __Vfunc_idx_of__153__Vfuncout)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                  ? 
                                                 ([&]() {
                                        __Vfunc_idx_of__154__y 
                                            = ((IData)(1U) 
                                               + vlSelfRef.__PVT__unnamedblk4__DOT__by);
                                        __Vfunc_idx_of__154__x 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                        __Vfunc_idx_of__154__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__154__y) 
                                               + __Vfunc_idx_of__154__x);
                                    }(), __Vfunc_idx_of__154__Vfuncout)
                                                  : 
                                                 ([&]() {
                                        __Vfunc_idx_of__155__y 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                        __Vfunc_idx_of__155__x 
                                            = (vlSelfRef.__PVT__unnamedblk4__DOT__bx 
                                               - (IData)(1U));
                                        __Vfunc_idx_of__155__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__155__y) 
                                               + __Vfunc_idx_of__155__x);
                                    }(), __Vfunc_idx_of__155__Vfuncout)))));
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:328: Assertion failed in %Nmaze_solver_parallel.gen_cores[10].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
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
                    __Vfunc_x_of__156__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_x_of__156__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__156__idx), (IData)(0xaU));
                    __Vdly__cur_x_reg = __Vfunc_x_of__156__Vfuncout;
                    __Vfunc_y_of__157__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_y_of__157__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__157__idx), (IData)(0xaU));
                    __Vdly__cur_y_reg = __Vfunc_y_of__157__Vfuncout;
                    __Vdly__q_head = (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__q_head)));
                    if (((9U == ([&]() {
                                        __Vfunc_x_of__158__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_x_of__158__Vfuncout 
                                            = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__158__idx), (IData)(0xaU));
                                    }(), __Vfunc_x_of__158__Vfuncout)) 
                         & (9U == ([&]() {
                                        __Vfunc_y_of__159__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_y_of__159__Vfuncout 
                                            = VL_DIVS_III(32, (IData)(__Vfunc_y_of__159__idx), (IData)(0xaU));
                                    }(), __Vfunc_y_of__159__Vfuncout)))) {
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:245: Assertion failed in %Nmaze_solver_parallel.gen_cores[10].solver_inst.unnamedblk2: unique case, but multiple matches found for '2'h%x'\n",0,
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
                    __Vfunc_idx_of__160__y = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                    __Vfunc_idx_of__160__x = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                    __Vfunc_idx_of__160__Vfuncout = 
                        (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__160__y) 
                         + __Vfunc_idx_of__160__x);
                    vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx 
                        = __Vfunc_idx_of__160__Vfuncout;
                    if ((([&]() {
                                    __Vfunc_cell_free__161__y 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                                    __Vfunc_cell_free__161__x 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                                    __Vfunc_cell_free__161__idx 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_cell_free__161__y) 
                                           + __Vfunc_cell_free__161__x);
                                    __Vtemp_3[0U] = (IData)(
                                                            (((QData)((IData)(
                                                                              vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[0xaU])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[0xaU]))));
                                    __Vtemp_3[1U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[0xaU])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[0xaU]))) 
                                                             >> 0x20U));
                                    __Vtemp_3[2U] = (IData)(
                                                            (((QData)((IData)(
                                                                              (0xfU 
                                                                               & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[0xaU]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[0xaU]))));
                                    __Vtemp_3[3U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               (0xfU 
                                                                                & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[0xaU]))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[0xaU]))) 
                                                             >> 0x20U));
                                    __Vfunc_cell_free__161__Vfuncout 
                                        = ((VL_LTES_III(32, 0U, __Vfunc_cell_free__161__idx) 
                                            & VL_GTS_III(32, 0x64U, __Vfunc_cell_free__161__idx)) 
                                           && ((0x63U 
                                                >= 
                                                (0x7fU 
                                                 & __Vfunc_cell_free__161__idx)) 
                                               && (1U 
                                                   & (__Vtemp_3[
                                                      (3U 
                                                       & (__Vfunc_cell_free__161__idx 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & __Vfunc_cell_free__161__idx)))));
                                }(), (IData)(__Vfunc_cell_free__161__Vfuncout)) 
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
        if ((0x400U & (IData)(vlSymsp->TOP.maze_solver_parallel__DOT__core_start))) {
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

VL_INLINE_OPT void Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__11__KET____DOT__solver_inst__0(Vmaze_solver_parallel_maze_solver_core__N64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmaze_solver_parallel_maze_solver_core__N64___nba_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__11__KET____DOT__solver_inst__0\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_x_of__165__Vfuncout;
    __Vfunc_x_of__165__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__165__idx;
    __Vfunc_x_of__165__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__166__Vfuncout;
    __Vfunc_y_of__166__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__166__idx;
    __Vfunc_y_of__166__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__167__Vfuncout;
    __Vfunc_idx_of__167__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__167__x;
    __Vfunc_idx_of__167__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__167__y;
    __Vfunc_idx_of__167__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__168__Vfuncout;
    __Vfunc_idx_of__168__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__168__x;
    __Vfunc_idx_of__168__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__168__y;
    __Vfunc_idx_of__168__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__169__Vfuncout;
    __Vfunc_idx_of__169__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__169__x;
    __Vfunc_idx_of__169__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__169__y;
    __Vfunc_idx_of__169__y = 0;
    IData/*31:0*/ __Vfunc_idx_of__170__Vfuncout;
    __Vfunc_idx_of__170__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__170__x;
    __Vfunc_idx_of__170__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__170__y;
    __Vfunc_idx_of__170__y = 0;
    IData/*31:0*/ __Vfunc_x_of__171__Vfuncout;
    __Vfunc_x_of__171__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__171__idx;
    __Vfunc_x_of__171__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__172__Vfuncout;
    __Vfunc_y_of__172__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__172__idx;
    __Vfunc_y_of__172__idx = 0;
    IData/*31:0*/ __Vfunc_x_of__173__Vfuncout;
    __Vfunc_x_of__173__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_x_of__173__idx;
    __Vfunc_x_of__173__idx = 0;
    IData/*31:0*/ __Vfunc_y_of__174__Vfuncout;
    __Vfunc_y_of__174__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_y_of__174__idx;
    __Vfunc_y_of__174__idx = 0;
    IData/*31:0*/ __Vfunc_idx_of__175__Vfuncout;
    __Vfunc_idx_of__175__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_idx_of__175__x;
    __Vfunc_idx_of__175__x = 0;
    IData/*31:0*/ __Vfunc_idx_of__175__y;
    __Vfunc_idx_of__175__y = 0;
    CData/*0:0*/ __Vfunc_cell_free__176__Vfuncout;
    __Vfunc_cell_free__176__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_cell_free__176__x;
    __Vfunc_cell_free__176__x = 0;
    IData/*31:0*/ __Vfunc_cell_free__176__y;
    __Vfunc_cell_free__176__y = 0;
    IData/*31:0*/ __Vfunc_cell_free__176__idx;
    __Vfunc_cell_free__176__idx = 0;
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
                          >> 0xbU)))) {
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
            __Vfunc_x_of__165__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_x_of__165__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__165__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__bx = __Vfunc_x_of__165__Vfuncout;
            __Vfunc_y_of__166__idx = vlSelfRef.__PVT__bt_idx;
            __Vfunc_y_of__166__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__166__idx), (IData)(0xaU));
            vlSelfRef.__PVT__unnamedblk4__DOT__by = __Vfunc_y_of__166__Vfuncout;
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:315: Assertion failed in %Nmaze_solver_parallel.gen_cores[11].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
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
                                __Vfunc_idx_of__167__y 
                                    = (vlSelfRef.__PVT__unnamedblk4__DOT__by 
                                       - (IData)(1U));
                                __Vfunc_idx_of__167__x 
                                    = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                __Vfunc_idx_of__167__Vfuncout 
                                    = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__167__y) 
                                       + __Vfunc_idx_of__167__x);
                            }(), __Vfunc_idx_of__167__Vfuncout)
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                 ? 
                                                ([&]() {
                                    __Vfunc_idx_of__168__y 
                                        = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                    __Vfunc_idx_of__168__x 
                                        = ((IData)(1U) 
                                           + vlSelfRef.__PVT__unnamedblk4__DOT__bx);
                                    __Vfunc_idx_of__168__Vfuncout 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__168__y) 
                                           + __Vfunc_idx_of__168__x);
                                }(), __Vfunc_idx_of__168__Vfuncout)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                                  ? 
                                                 ([&]() {
                                        __Vfunc_idx_of__169__y 
                                            = ((IData)(1U) 
                                               + vlSelfRef.__PVT__unnamedblk4__DOT__by);
                                        __Vfunc_idx_of__169__x 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__bx;
                                        __Vfunc_idx_of__169__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__169__y) 
                                               + __Vfunc_idx_of__169__x);
                                    }(), __Vfunc_idx_of__169__Vfuncout)
                                                  : 
                                                 ([&]() {
                                        __Vfunc_idx_of__170__y 
                                            = vlSelfRef.__PVT__unnamedblk4__DOT__by;
                                        __Vfunc_idx_of__170__x 
                                            = (vlSelfRef.__PVT__unnamedblk4__DOT__bx 
                                               - (IData)(1U));
                                        __Vfunc_idx_of__170__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__170__y) 
                                               + __Vfunc_idx_of__170__x);
                                    }(), __Vfunc_idx_of__170__Vfuncout)))));
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:328: Assertion failed in %Nmaze_solver_parallel.gen_cores[11].solver_inst.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
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
                    __Vfunc_x_of__171__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_x_of__171__Vfuncout = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__171__idx), (IData)(0xaU));
                    __Vdly__cur_x_reg = __Vfunc_x_of__171__Vfuncout;
                    __Vfunc_y_of__172__idx = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_y_of__172__Vfuncout = VL_DIVS_III(32, (IData)(__Vfunc_y_of__172__idx), (IData)(0xaU));
                    __Vdly__cur_y_reg = __Vfunc_y_of__172__Vfuncout;
                    __Vdly__q_head = (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__q_head)));
                    if (((9U == ([&]() {
                                        __Vfunc_x_of__173__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_x_of__173__Vfuncout 
                                            = VL_MODDIVS_III(32, (IData)(__Vfunc_x_of__173__idx), (IData)(0xaU));
                                    }(), __Vfunc_x_of__173__Vfuncout)) 
                         & (9U == ([&]() {
                                        __Vfunc_y_of__174__idx 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_y_of__174__Vfuncout 
                                            = VL_DIVS_III(32, (IData)(__Vfunc_y_of__174__idx), (IData)(0xaU));
                                    }(), __Vfunc_y_of__174__Vfuncout)))) {
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
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:245: Assertion failed in %Nmaze_solver_parallel.gen_cores[11].solver_inst.unnamedblk2: unique case, but multiple matches found for '2'h%x'\n",0,
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
                    __Vfunc_idx_of__175__y = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                    __Vfunc_idx_of__175__x = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                    __Vfunc_idx_of__175__Vfuncout = 
                        (VL_MULS_III(32, (IData)(0xaU), __Vfunc_idx_of__175__y) 
                         + __Vfunc_idx_of__175__x);
                    vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx 
                        = __Vfunc_idx_of__175__Vfuncout;
                    if ((([&]() {
                                    __Vfunc_cell_free__176__y 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__ny;
                                    __Vfunc_cell_free__176__x 
                                        = vlSelfRef.__PVT__unnamedblk2__DOT__nx;
                                    __Vfunc_cell_free__176__idx 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_cell_free__176__y) 
                                           + __Vfunc_cell_free__176__x);
                                    __Vtemp_3[0U] = (IData)(
                                                            (((QData)((IData)(
                                                                              vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[0xbU])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[0xbU]))));
                                    __Vtemp_3[1U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid1[0xbU])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid0[0xbU]))) 
                                                             >> 0x20U));
                                    __Vtemp_3[2U] = (IData)(
                                                            (((QData)((IData)(
                                                                              (0xfU 
                                                                               & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[0xbU]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[0xbU]))));
                                    __Vtemp_3[3U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               (0xfU 
                                                                                & vlSymsp->TOP.maze_solver_parallel__DOT__core_grid3[0xbU]))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP.maze_solver_parallel__DOT__core_grid2[0xbU]))) 
                                                             >> 0x20U));
                                    __Vfunc_cell_free__176__Vfuncout 
                                        = ((VL_LTES_III(32, 0U, __Vfunc_cell_free__176__idx) 
                                            & VL_GTS_III(32, 0x64U, __Vfunc_cell_free__176__idx)) 
                                           && ((0x63U 
                                                >= 
                                                (0x7fU 
                                                 & __Vfunc_cell_free__176__idx)) 
                                               && (1U 
                                                   & (__Vtemp_3[
                                                      (3U 
                                                       & (__Vfunc_cell_free__176__idx 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & __Vfunc_cell_free__176__idx)))));
                                }(), (IData)(__Vfunc_cell_free__176__Vfuncout)) 
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
        if ((0x800U & (IData)(vlSymsp->TOP.maze_solver_parallel__DOT__core_start))) {
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
