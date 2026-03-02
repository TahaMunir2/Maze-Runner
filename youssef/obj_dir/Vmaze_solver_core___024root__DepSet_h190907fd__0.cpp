// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmaze_solver_core.h for the primary calling header

#include "Vmaze_solver_core__pch.h"
#include "Vmaze_solver_core__Syms.h"
#include "Vmaze_solver_core___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmaze_solver_core___024root___dump_triggers__act(Vmaze_solver_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vmaze_solver_core___024root___eval_triggers__act(Vmaze_solver_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_core___024root___eval_triggers__act\n"); );
    Vmaze_solver_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmaze_solver_core___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vmaze_solver_core___024root___nba_sequent__TOP__0(Vmaze_solver_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_core___024root___nba_sequent__TOP__0\n"); );
    Vmaze_solver_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_maze_solver_core__DOT__x_of__0__Vfuncout;
    __Vfunc_maze_solver_core__DOT__x_of__0__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_maze_solver_core__DOT__x_of__0__idx;
    __Vfunc_maze_solver_core__DOT__x_of__0__idx = 0;
    IData/*31:0*/ __Vfunc_maze_solver_core__DOT__y_of__1__Vfuncout;
    __Vfunc_maze_solver_core__DOT__y_of__1__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_maze_solver_core__DOT__y_of__1__idx;
    __Vfunc_maze_solver_core__DOT__y_of__1__idx = 0;
    IData/*31:0*/ __Vfunc_maze_solver_core__DOT__idx_of__2__Vfuncout;
    __Vfunc_maze_solver_core__DOT__idx_of__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_maze_solver_core__DOT__idx_of__2__x;
    __Vfunc_maze_solver_core__DOT__idx_of__2__x = 0;
    IData/*31:0*/ __Vfunc_maze_solver_core__DOT__idx_of__2__y;
    __Vfunc_maze_solver_core__DOT__idx_of__2__y = 0;
    IData/*31:0*/ __Vfunc_maze_solver_core__DOT__idx_of__3__Vfuncout;
    __Vfunc_maze_solver_core__DOT__idx_of__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_maze_solver_core__DOT__idx_of__3__x;
    __Vfunc_maze_solver_core__DOT__idx_of__3__x = 0;
    IData/*31:0*/ __Vfunc_maze_solver_core__DOT__idx_of__3__y;
    __Vfunc_maze_solver_core__DOT__idx_of__3__y = 0;
    IData/*31:0*/ __Vfunc_maze_solver_core__DOT__idx_of__4__Vfuncout;
    __Vfunc_maze_solver_core__DOT__idx_of__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_maze_solver_core__DOT__idx_of__4__x;
    __Vfunc_maze_solver_core__DOT__idx_of__4__x = 0;
    IData/*31:0*/ __Vfunc_maze_solver_core__DOT__idx_of__4__y;
    __Vfunc_maze_solver_core__DOT__idx_of__4__y = 0;
    IData/*31:0*/ __Vfunc_maze_solver_core__DOT__idx_of__5__Vfuncout;
    __Vfunc_maze_solver_core__DOT__idx_of__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_maze_solver_core__DOT__idx_of__5__x;
    __Vfunc_maze_solver_core__DOT__idx_of__5__x = 0;
    IData/*31:0*/ __Vfunc_maze_solver_core__DOT__idx_of__5__y;
    __Vfunc_maze_solver_core__DOT__idx_of__5__y = 0;
    IData/*31:0*/ __Vfunc_maze_solver_core__DOT__x_of__6__Vfuncout;
    __Vfunc_maze_solver_core__DOT__x_of__6__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_maze_solver_core__DOT__x_of__6__idx;
    __Vfunc_maze_solver_core__DOT__x_of__6__idx = 0;
    IData/*31:0*/ __Vfunc_maze_solver_core__DOT__y_of__7__Vfuncout;
    __Vfunc_maze_solver_core__DOT__y_of__7__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_maze_solver_core__DOT__y_of__7__idx;
    __Vfunc_maze_solver_core__DOT__y_of__7__idx = 0;
    IData/*31:0*/ __Vfunc_maze_solver_core__DOT__x_of__8__Vfuncout;
    __Vfunc_maze_solver_core__DOT__x_of__8__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_maze_solver_core__DOT__x_of__8__idx;
    __Vfunc_maze_solver_core__DOT__x_of__8__idx = 0;
    IData/*31:0*/ __Vfunc_maze_solver_core__DOT__y_of__9__Vfuncout;
    __Vfunc_maze_solver_core__DOT__y_of__9__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_maze_solver_core__DOT__y_of__9__idx;
    __Vfunc_maze_solver_core__DOT__y_of__9__idx = 0;
    IData/*31:0*/ __Vfunc_maze_solver_core__DOT__idx_of__10__Vfuncout;
    __Vfunc_maze_solver_core__DOT__idx_of__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_maze_solver_core__DOT__idx_of__10__x;
    __Vfunc_maze_solver_core__DOT__idx_of__10__x = 0;
    IData/*31:0*/ __Vfunc_maze_solver_core__DOT__idx_of__10__y;
    __Vfunc_maze_solver_core__DOT__idx_of__10__y = 0;
    CData/*0:0*/ __Vfunc_maze_solver_core__DOT__cell_free__11__Vfuncout;
    __Vfunc_maze_solver_core__DOT__cell_free__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_maze_solver_core__DOT__cell_free__11__x;
    __Vfunc_maze_solver_core__DOT__cell_free__11__x = 0;
    IData/*31:0*/ __Vfunc_maze_solver_core__DOT__cell_free__11__y;
    __Vfunc_maze_solver_core__DOT__cell_free__11__y = 0;
    IData/*31:0*/ __Vfunc_maze_solver_core__DOT__cell_free__11__idx;
    __Vfunc_maze_solver_core__DOT__cell_free__11__idx = 0;
    CData/*2:0*/ __Vdly__maze_solver_core__DOT__st;
    __Vdly__maze_solver_core__DOT__st = 0;
    CData/*7:0*/ __Vdly__maze_solver_core__DOT__path_len_reg;
    __Vdly__maze_solver_core__DOT__path_len_reg = 0;
    IData/*31:0*/ __Vdly__maze_solver_core__DOT__cur_x_reg;
    __Vdly__maze_solver_core__DOT__cur_x_reg = 0;
    IData/*31:0*/ __Vdly__maze_solver_core__DOT__cur_y_reg;
    __Vdly__maze_solver_core__DOT__cur_y_reg = 0;
    CData/*1:0*/ __Vdly__maze_solver_core__DOT__nb_i;
    __Vdly__maze_solver_core__DOT__nb_i = 0;
    CData/*6:0*/ __Vdly__maze_solver_core__DOT__q_head;
    __Vdly__maze_solver_core__DOT__q_head = 0;
    CData/*6:0*/ __Vdly__maze_solver_core__DOT__q_tail;
    __Vdly__maze_solver_core__DOT__q_tail = 0;
    CData/*6:0*/ __Vdly__maze_solver_core__DOT__q_count;
    __Vdly__maze_solver_core__DOT__q_count = 0;
    CData/*1:0*/ __VdlyVal__maze_solver_core__DOT__path_words__v14;
    __VdlyVal__maze_solver_core__DOT__path_words__v14 = 0;
    CData/*4:0*/ __VdlyLsb__maze_solver_core__DOT__path_words__v14;
    __VdlyLsb__maze_solver_core__DOT__path_words__v14 = 0;
    CData/*2:0*/ __VdlyDim0__maze_solver_core__DOT__path_words__v14;
    __VdlyDim0__maze_solver_core__DOT__path_words__v14 = 0;
    IData/*31:0*/ __VdlyMask__maze_solver_core__DOT__path_words__v14;
    __VdlyMask__maze_solver_core__DOT__path_words__v14 = 0;
    IData/*31:0*/ __VdlyElem__maze_solver_core__DOT__path_words__v14;
    __VdlyElem__maze_solver_core__DOT__path_words__v14 = 0;
    CData/*1:0*/ __VdlyVal__maze_solver_core__DOT__path_buf__v0;
    __VdlyVal__maze_solver_core__DOT__path_buf__v0 = 0;
    CData/*6:0*/ __VdlyDim0__maze_solver_core__DOT__path_buf__v0;
    __VdlyDim0__maze_solver_core__DOT__path_buf__v0 = 0;
    CData/*0:0*/ __VdlySet__maze_solver_core__DOT__path_buf__v0;
    __VdlySet__maze_solver_core__DOT__path_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__maze_solver_core__DOT__visited__v0;
    __VdlyVal__maze_solver_core__DOT__visited__v0 = 0;
    CData/*6:0*/ __VdlyDim0__maze_solver_core__DOT__visited__v0;
    __VdlyDim0__maze_solver_core__DOT__visited__v0 = 0;
    CData/*0:0*/ __VdlyVal__maze_solver_core__DOT__has_parent__v0;
    __VdlyVal__maze_solver_core__DOT__has_parent__v0 = 0;
    CData/*6:0*/ __VdlyDim0__maze_solver_core__DOT__has_parent__v0;
    __VdlyDim0__maze_solver_core__DOT__has_parent__v0 = 0;
    CData/*1:0*/ __VdlyVal__maze_solver_core__DOT__parent_dir__v0;
    __VdlyVal__maze_solver_core__DOT__parent_dir__v0 = 0;
    CData/*6:0*/ __VdlyDim0__maze_solver_core__DOT__parent_dir__v0;
    __VdlyDim0__maze_solver_core__DOT__parent_dir__v0 = 0;
    CData/*6:0*/ __VdlyVal__maze_solver_core__DOT__queue__v0;
    __VdlyVal__maze_solver_core__DOT__queue__v0 = 0;
    CData/*6:0*/ __VdlyDim0__maze_solver_core__DOT__queue__v0;
    __VdlyDim0__maze_solver_core__DOT__queue__v0 = 0;
    CData/*0:0*/ __VdlySet__maze_solver_core__DOT__queue__v0;
    __VdlySet__maze_solver_core__DOT__queue__v0 = 0;
    CData/*0:0*/ __VdlyVal__maze_solver_core__DOT__visited__v1;
    __VdlyVal__maze_solver_core__DOT__visited__v1 = 0;
    CData/*6:0*/ __VdlyDim0__maze_solver_core__DOT__visited__v1;
    __VdlyDim0__maze_solver_core__DOT__visited__v1 = 0;
    CData/*0:0*/ __VdlyVal__maze_solver_core__DOT__has_parent__v1;
    __VdlyVal__maze_solver_core__DOT__has_parent__v1 = 0;
    CData/*6:0*/ __VdlyDim0__maze_solver_core__DOT__has_parent__v1;
    __VdlyDim0__maze_solver_core__DOT__has_parent__v1 = 0;
    CData/*1:0*/ __VdlyVal__maze_solver_core__DOT__parent_dir__v1;
    __VdlyVal__maze_solver_core__DOT__parent_dir__v1 = 0;
    CData/*6:0*/ __VdlyDim0__maze_solver_core__DOT__parent_dir__v1;
    __VdlyDim0__maze_solver_core__DOT__parent_dir__v1 = 0;
    CData/*0:0*/ __VdlySet__maze_solver_core__DOT__queue__v1;
    __VdlySet__maze_solver_core__DOT__queue__v1 = 0;
    VlWide<4>/*127:0*/ __Vtemp_3;
    // Body
    __Vdly__maze_solver_core__DOT__st = vlSelfRef.maze_solver_core__DOT__st;
    __Vdly__maze_solver_core__DOT__cur_x_reg = vlSelfRef.maze_solver_core__DOT__cur_x_reg;
    __Vdly__maze_solver_core__DOT__cur_y_reg = vlSelfRef.maze_solver_core__DOT__cur_y_reg;
    __Vdly__maze_solver_core__DOT__nb_i = vlSelfRef.maze_solver_core__DOT__nb_i;
    __Vdly__maze_solver_core__DOT__q_head = vlSelfRef.maze_solver_core__DOT__q_head;
    __Vdly__maze_solver_core__DOT__q_tail = vlSelfRef.maze_solver_core__DOT__q_tail;
    __Vdly__maze_solver_core__DOT__q_count = vlSelfRef.maze_solver_core__DOT__q_count;
    __VdlySet__maze_solver_core__DOT__path_buf__v0 = 0U;
    __Vdly__maze_solver_core__DOT__path_len_reg = vlSelfRef.maze_solver_core__DOT__path_len_reg;
    __VdlySet__maze_solver_core__DOT__queue__v0 = 0U;
    __VdlySet__maze_solver_core__DOT__queue__v1 = 0U;
    if (vlSelfRef.rst) {
        vlSelfRef.maze_solver_core__DOT__i = 7U;
        __Vdly__maze_solver_core__DOT__st = 0U;
        vlSelfRef.done = 0U;
        vlSelfRef.valid = 0U;
        __Vdly__maze_solver_core__DOT__path_len_reg = 0U;
        vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__path_words.enqueue(0U, 0xffffffffU, 0U);
        __Vdly__maze_solver_core__DOT__cur_x_reg = 0U;
        __Vdly__maze_solver_core__DOT__cur_y_reg = 0U;
        __Vdly__maze_solver_core__DOT__nb_i = 0U;
        __Vdly__maze_solver_core__DOT__q_head = 0U;
        __Vdly__maze_solver_core__DOT__q_tail = 0U;
        __Vdly__maze_solver_core__DOT__q_count = 0U;
        vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__path_words.enqueue(0U, 0xffffffffU, 1U);
        vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__path_words.enqueue(0U, 0xffffffffU, 2U);
        vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__path_words.enqueue(0U, 0xffffffffU, 3U);
        vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__path_words.enqueue(0U, 0xffffffffU, 4U);
        vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__path_words.enqueue(0U, 0xffffffffU, 5U);
        vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__path_words.enqueue(0U, 0xffffffffU, 6U);
    } else if ((4U & (IData)(vlSelfRef.maze_solver_core__DOT__st))) {
        if ((2U & (IData)(vlSelfRef.maze_solver_core__DOT__st))) {
            __Vdly__maze_solver_core__DOT__st = 0U;
        } else if ((1U & (IData)(vlSelfRef.maze_solver_core__DOT__st))) {
            vlSelfRef.done = 1U;
            if ((1U & (~ (IData)(vlSelfRef.start)))) {
                __Vdly__maze_solver_core__DOT__st = 0U;
                vlSelfRef.done = 0U;
            }
        } else {
            vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__path_words.enqueue(0U, 0xffffffffU, 0U);
            __Vdly__maze_solver_core__DOT__st = 5U;
            vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__path_words.enqueue(0U, 0xffffffffU, 1U);
            vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__path_words.enqueue(0U, 0xffffffffU, 2U);
            vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__path_words.enqueue(0U, 0xffffffffU, 3U);
            vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__path_words.enqueue(0U, 0xffffffffU, 4U);
            vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__path_words.enqueue(0U, 0xffffffffU, 5U);
            vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__path_words.enqueue(0U, 0xffffffffU, 6U);
            vlSelfRef.maze_solver_core__DOT__i = 0U;
            while ((vlSelfRef.maze_solver_core__DOT__i 
                    < (IData)(vlSelfRef.maze_solver_core__DOT__path_len_reg))) {
                vlSelfRef.maze_solver_core__DOT__unnamedblk6__DOT__fwd_i 
                    = (((IData)(vlSelfRef.maze_solver_core__DOT__path_len_reg) 
                        - (IData)(1U)) - vlSelfRef.maze_solver_core__DOT__i);
                vlSelfRef.maze_solver_core__DOT__unnamedblk6__DOT__mv 
                    = ((0x63U >= (0x7fU & vlSelfRef.maze_solver_core__DOT__unnamedblk6__DOT__fwd_i))
                        ? vlSelfRef.maze_solver_core__DOT__path_buf
                       [(0x7fU & vlSelfRef.maze_solver_core__DOT__unnamedblk6__DOT__fwd_i)]
                        : 0U);
                vlSelfRef.maze_solver_core__DOT__unnamedblk6__DOT__word_i 
                    = VL_DIVS_III(32, vlSelfRef.maze_solver_core__DOT__i, (IData)(0x10U));
                vlSelfRef.maze_solver_core__DOT__unnamedblk6__DOT__bitpos 
                    = VL_MULS_III(32, (IData)(2U), 
                                  VL_MODDIVS_III(32, vlSelfRef.maze_solver_core__DOT__i, (IData)(0x10U)));
                vlSelfRef.maze_solver_core__DOT____Vlvbound_h95c5206c__0 
                    = vlSelfRef.maze_solver_core__DOT__unnamedblk6__DOT__mv;
                if (VL_LIKELY(((6U >= (7U & vlSelfRef.maze_solver_core__DOT__unnamedblk6__DOT__word_i))))) {
                    __VdlyVal__maze_solver_core__DOT__path_words__v14 
                        = vlSelfRef.maze_solver_core__DOT____Vlvbound_h95c5206c__0;
                    __VdlyLsb__maze_solver_core__DOT__path_words__v14 
                        = (0x1fU & vlSelfRef.maze_solver_core__DOT__unnamedblk6__DOT__bitpos);
                    __VdlyDim0__maze_solver_core__DOT__path_words__v14 
                        = (7U & vlSelfRef.maze_solver_core__DOT__unnamedblk6__DOT__word_i);
                    __VdlyMask__maze_solver_core__DOT__path_words__v14 = 0U;
                    __VdlyMask__maze_solver_core__DOT__path_words__v14 
                        = (__VdlyMask__maze_solver_core__DOT__path_words__v14 
                           | (0xffffffffULL & ((IData)(3U) 
                                               << (IData)(__VdlyLsb__maze_solver_core__DOT__path_words__v14))));
                    __VdlyElem__maze_solver_core__DOT__path_words__v14 = 0U;
                    __VdlyElem__maze_solver_core__DOT__path_words__v14 
                        = (((~ ((IData)(3U) << (IData)(__VdlyLsb__maze_solver_core__DOT__path_words__v14))) 
                            & __VdlyElem__maze_solver_core__DOT__path_words__v14) 
                           | (0xffffffffULL & ((IData)(__VdlyVal__maze_solver_core__DOT__path_words__v14) 
                                               << (IData)(__VdlyLsb__maze_solver_core__DOT__path_words__v14))));
                    vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__path_words.enqueue(__VdlyElem__maze_solver_core__DOT__path_words__v14, __VdlyMask__maze_solver_core__DOT__path_words__v14, (IData)(__VdlyDim0__maze_solver_core__DOT__path_words__v14));
                }
                vlSelfRef.maze_solver_core__DOT__i 
                    = ((IData)(1U) + vlSelfRef.maze_solver_core__DOT__i);
            }
        }
    } else if ((2U & (IData)(vlSelfRef.maze_solver_core__DOT__st))) {
        if ((1U & (IData)(vlSelfRef.maze_solver_core__DOT__st))) {
            __Vfunc_maze_solver_core__DOT__x_of__0__idx 
                = vlSelfRef.maze_solver_core__DOT__bt_idx;
            __Vfunc_maze_solver_core__DOT__x_of__0__Vfuncout 
                = VL_MODDIVS_III(32, (IData)(__Vfunc_maze_solver_core__DOT__x_of__0__idx), (IData)(0xaU));
            vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__bx 
                = __Vfunc_maze_solver_core__DOT__x_of__0__Vfuncout;
            __Vfunc_maze_solver_core__DOT__y_of__1__idx 
                = vlSelfRef.maze_solver_core__DOT__bt_idx;
            __Vfunc_maze_solver_core__DOT__y_of__1__Vfuncout 
                = VL_DIVS_III(32, (IData)(__Vfunc_maze_solver_core__DOT__y_of__1__idx), (IData)(0xaU));
            vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__by 
                = __Vfunc_maze_solver_core__DOT__y_of__1__Vfuncout;
            if (((0U == vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__bx) 
                 & (0U == vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__by))) {
                __Vdly__maze_solver_core__DOT__path_len_reg 
                    = vlSelfRef.maze_solver_core__DOT__bt_len;
                __Vdly__maze_solver_core__DOT__st = 4U;
            } else if (((0x63U >= (IData)(vlSelfRef.maze_solver_core__DOT__bt_idx)) 
                        && vlSelfRef.maze_solver_core__DOT__has_parent
                        [vlSelfRef.maze_solver_core__DOT__bt_idx])) {
                vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd 
                    = ((0x63U >= (IData)(vlSelfRef.maze_solver_core__DOT__bt_idx))
                        ? vlSelfRef.maze_solver_core__DOT__parent_dir
                       [vlSelfRef.maze_solver_core__DOT__bt_idx]
                        : 0U);
                vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_back 
                    = ((0U == (IData)(vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd))
                        ? 2U : ((1U == (IData)(vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd))
                                 ? 3U : ((2U == (IData)(vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd))
                                          ? 0U : 1U)));
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((2U 
                                                         == (IData)(vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == (IData)(vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)))))))))) {
                    if ((0U != (((2U == (IData)(vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)) 
                                 << 2U) | (((1U == (IData)(vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:315: Assertion failed in %Nmaze_solver_core.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         2,(IData)(vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd));
                            VL_STOP_MT("maze_solver_core.sv", 315, "");
                        }
                    }
                }
                vlSelfRef.maze_solver_core__DOT____Vlvbound_h73cb18d2__0 
                    = vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd;
                if (VL_LIKELY(((0x63U >= (0x7fU & (IData)(vlSelfRef.maze_solver_core__DOT__bt_len)))))) {
                    __VdlyVal__maze_solver_core__DOT__path_buf__v0 
                        = vlSelfRef.maze_solver_core__DOT____Vlvbound_h73cb18d2__0;
                    __VdlyDim0__maze_solver_core__DOT__path_buf__v0 
                        = (0x7fU & (IData)(vlSelfRef.maze_solver_core__DOT__bt_len));
                    __VdlySet__maze_solver_core__DOT__path_buf__v0 = 1U;
                }
                vlSelfRef.maze_solver_core__DOT__bt_len 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.maze_solver_core__DOT__bt_len)));
                vlSelfRef.maze_solver_core__DOT__bt_idx 
                    = (0x7fU & ((0U == (IData)(vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                 ? ([&]() {
                                __Vfunc_maze_solver_core__DOT__idx_of__2__y 
                                    = (vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__by 
                                       - (IData)(1U));
                                __Vfunc_maze_solver_core__DOT__idx_of__2__x 
                                    = vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__bx;
                                __Vfunc_maze_solver_core__DOT__idx_of__2__Vfuncout 
                                    = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_maze_solver_core__DOT__idx_of__2__y) 
                                       + __Vfunc_maze_solver_core__DOT__idx_of__2__x);
                            }(), __Vfunc_maze_solver_core__DOT__idx_of__2__Vfuncout)
                                 : ((1U == (IData)(vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                     ? ([&]() {
                                    __Vfunc_maze_solver_core__DOT__idx_of__3__y 
                                        = vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__by;
                                    __Vfunc_maze_solver_core__DOT__idx_of__3__x 
                                        = ((IData)(1U) 
                                           + vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__bx);
                                    __Vfunc_maze_solver_core__DOT__idx_of__3__Vfuncout 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_maze_solver_core__DOT__idx_of__3__y) 
                                           + __Vfunc_maze_solver_core__DOT__idx_of__3__x);
                                }(), __Vfunc_maze_solver_core__DOT__idx_of__3__Vfuncout)
                                     : ((2U == (IData)(vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_back))
                                         ? ([&]() {
                                        __Vfunc_maze_solver_core__DOT__idx_of__4__y 
                                            = ((IData)(1U) 
                                               + vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__by);
                                        __Vfunc_maze_solver_core__DOT__idx_of__4__x 
                                            = vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__bx;
                                        __Vfunc_maze_solver_core__DOT__idx_of__4__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_maze_solver_core__DOT__idx_of__4__y) 
                                               + __Vfunc_maze_solver_core__DOT__idx_of__4__x);
                                    }(), __Vfunc_maze_solver_core__DOT__idx_of__4__Vfuncout)
                                         : ([&]() {
                                        __Vfunc_maze_solver_core__DOT__idx_of__5__y 
                                            = vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__by;
                                        __Vfunc_maze_solver_core__DOT__idx_of__5__x 
                                            = (vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__bx 
                                               - (IData)(1U));
                                        __Vfunc_maze_solver_core__DOT__idx_of__5__Vfuncout 
                                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_maze_solver_core__DOT__idx_of__5__y) 
                                               + __Vfunc_maze_solver_core__DOT__idx_of__5__x);
                                    }(), __Vfunc_maze_solver_core__DOT__idx_of__5__Vfuncout)))));
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((2U 
                                                         == (IData)(vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == (IData)(vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)))))))))) {
                    if ((0U != (((2U == (IData)(vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)) 
                                 << 2U) | (((1U == (IData)(vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_back)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:328: Assertion failed in %Nmaze_solver_core.unnamedblk4.unnamedblk5: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         2,(IData)(vlSelfRef.maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_back));
                            VL_STOP_MT("maze_solver_core.sv", 328, "");
                        }
                    }
                }
            } else {
                vlSelfRef.valid = 0U;
                __Vdly__maze_solver_core__DOT__st = 5U;
            }
        } else {
            if ((0U == (IData)(vlSelfRef.maze_solver_core__DOT__nb_i))) {
                if ((0U == (IData)(vlSelfRef.maze_solver_core__DOT__q_count))) {
                    vlSelfRef.valid = 0U;
                    __Vdly__maze_solver_core__DOT__st = 5U;
                } else {
                    __Vdly__maze_solver_core__DOT__q_count 
                        = (0x7fU & ((IData)(vlSelfRef.maze_solver_core__DOT__q_count) 
                                    - (IData)(1U)));
                    vlSelfRef.maze_solver_core__DOT__unnamedblk1__DOT__popped_idx 
                        = ((0x63U >= (IData)(vlSelfRef.maze_solver_core__DOT__q_head))
                            ? vlSelfRef.maze_solver_core__DOT__queue
                           [vlSelfRef.maze_solver_core__DOT__q_head]
                            : 0U);
                    __Vfunc_maze_solver_core__DOT__x_of__6__idx 
                        = vlSelfRef.maze_solver_core__DOT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_maze_solver_core__DOT__x_of__6__Vfuncout 
                        = VL_MODDIVS_III(32, (IData)(__Vfunc_maze_solver_core__DOT__x_of__6__idx), (IData)(0xaU));
                    __Vdly__maze_solver_core__DOT__cur_x_reg 
                        = __Vfunc_maze_solver_core__DOT__x_of__6__Vfuncout;
                    __Vfunc_maze_solver_core__DOT__y_of__7__idx 
                        = vlSelfRef.maze_solver_core__DOT__unnamedblk1__DOT__popped_idx;
                    __Vfunc_maze_solver_core__DOT__y_of__7__Vfuncout 
                        = VL_DIVS_III(32, (IData)(__Vfunc_maze_solver_core__DOT__y_of__7__idx), (IData)(0xaU));
                    __Vdly__maze_solver_core__DOT__cur_y_reg 
                        = __Vfunc_maze_solver_core__DOT__y_of__7__Vfuncout;
                    __Vdly__maze_solver_core__DOT__q_head 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.maze_solver_core__DOT__q_head)));
                    if (((9U == ([&]() {
                                        __Vfunc_maze_solver_core__DOT__x_of__8__idx 
                                            = vlSelfRef.maze_solver_core__DOT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_maze_solver_core__DOT__x_of__8__Vfuncout 
                                            = VL_MODDIVS_III(32, (IData)(__Vfunc_maze_solver_core__DOT__x_of__8__idx), (IData)(0xaU));
                                    }(), __Vfunc_maze_solver_core__DOT__x_of__8__Vfuncout)) 
                         & (9U == ([&]() {
                                        __Vfunc_maze_solver_core__DOT__y_of__9__idx 
                                            = vlSelfRef.maze_solver_core__DOT__unnamedblk1__DOT__popped_idx;
                                        __Vfunc_maze_solver_core__DOT__y_of__9__Vfuncout 
                                            = VL_DIVS_III(32, (IData)(__Vfunc_maze_solver_core__DOT__y_of__9__idx), (IData)(0xaU));
                                    }(), __Vfunc_maze_solver_core__DOT__y_of__9__Vfuncout)))) {
                        vlSelfRef.valid = 1U;
                        vlSelfRef.maze_solver_core__DOT__bt_idx 
                            = vlSelfRef.maze_solver_core__DOT__unnamedblk1__DOT__popped_idx;
                        vlSelfRef.maze_solver_core__DOT__bt_len = 0U;
                        __Vdly__maze_solver_core__DOT__st = 3U;
                    } else {
                        __Vdly__maze_solver_core__DOT__nb_i = 0U;
                    }
                }
            }
            if ((2U == (IData)(vlSelfRef.maze_solver_core__DOT__st))) {
                if ((0U == (IData)(vlSelfRef.maze_solver_core__DOT__nb_i))) {
                    vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__nx 
                        = vlSelfRef.maze_solver_core__DOT__cur_x_reg;
                    vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__ny 
                        = (vlSelfRef.maze_solver_core__DOT__cur_y_reg 
                           - (IData)(1U));
                    vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__dir_to_neighbor = 0U;
                } else if ((1U == (IData)(vlSelfRef.maze_solver_core__DOT__nb_i))) {
                    vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__nx 
                        = ((IData)(1U) + vlSelfRef.maze_solver_core__DOT__cur_x_reg);
                    vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__ny 
                        = vlSelfRef.maze_solver_core__DOT__cur_y_reg;
                    vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__dir_to_neighbor = 1U;
                } else if ((2U == (IData)(vlSelfRef.maze_solver_core__DOT__nb_i))) {
                    vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__nx 
                        = vlSelfRef.maze_solver_core__DOT__cur_x_reg;
                    vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__ny 
                        = ((IData)(1U) + vlSelfRef.maze_solver_core__DOT__cur_y_reg);
                    vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__dir_to_neighbor = 2U;
                } else {
                    vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__nx 
                        = (vlSelfRef.maze_solver_core__DOT__cur_x_reg 
                           - (IData)(1U));
                    vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__ny 
                        = vlSelfRef.maze_solver_core__DOT__cur_y_reg;
                    vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__dir_to_neighbor = 3U;
                }
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((2U 
                                                         == (IData)(vlSelfRef.maze_solver_core__DOT__nb_i)) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == (IData)(vlSelfRef.maze_solver_core__DOT__nb_i)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.maze_solver_core__DOT__nb_i)))))))))) {
                    if ((0U != (((2U == (IData)(vlSelfRef.maze_solver_core__DOT__nb_i)) 
                                 << 2U) | (((1U == (IData)(vlSelfRef.maze_solver_core__DOT__nb_i)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.maze_solver_core__DOT__nb_i)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: maze_solver_core.sv:245: Assertion failed in %Nmaze_solver_core.unnamedblk2: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         2,(IData)(vlSelfRef.maze_solver_core__DOT__nb_i));
                            VL_STOP_MT("maze_solver_core.sv", 245, "");
                        }
                    }
                }
                if ((((VL_LTES_III(32, 0U, vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__nx) 
                       & VL_GTS_III(32, 0xaU, vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__nx)) 
                      & VL_LTES_III(32, 0U, vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__ny)) 
                     & VL_GTS_III(32, 0xaU, vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__ny))) {
                    __Vfunc_maze_solver_core__DOT__idx_of__10__y 
                        = vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__ny;
                    __Vfunc_maze_solver_core__DOT__idx_of__10__x 
                        = vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__nx;
                    __Vfunc_maze_solver_core__DOT__idx_of__10__Vfuncout 
                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_maze_solver_core__DOT__idx_of__10__y) 
                           + __Vfunc_maze_solver_core__DOT__idx_of__10__x);
                    vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__unnamedblk3__DOT__nidx 
                        = __Vfunc_maze_solver_core__DOT__idx_of__10__Vfuncout;
                    if ((([&]() {
                                    __Vfunc_maze_solver_core__DOT__cell_free__11__y 
                                        = vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__ny;
                                    __Vfunc_maze_solver_core__DOT__cell_free__11__x 
                                        = vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__nx;
                                    __Vfunc_maze_solver_core__DOT__cell_free__11__idx 
                                        = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_maze_solver_core__DOT__cell_free__11__y) 
                                           + __Vfunc_maze_solver_core__DOT__cell_free__11__x);
                                    __Vtemp_3[0U] = (IData)(
                                                            (((QData)((IData)(vlSelfRef.grid1)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelfRef.grid0))));
                                    __Vtemp_3[1U] = (IData)(
                                                            ((((QData)((IData)(vlSelfRef.grid1)) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(vlSelfRef.grid0))) 
                                                             >> 0x20U));
                                    __Vtemp_3[2U] = (IData)(
                                                            (((QData)((IData)(
                                                                              (0xfU 
                                                                               & vlSelfRef.grid3))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelfRef.grid2))));
                                    __Vtemp_3[3U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               (0xfU 
                                                                                & vlSelfRef.grid3))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(vlSelfRef.grid2))) 
                                                             >> 0x20U));
                                    __Vfunc_maze_solver_core__DOT__cell_free__11__Vfuncout 
                                        = ((VL_LTES_III(32, 0U, __Vfunc_maze_solver_core__DOT__cell_free__11__idx) 
                                            & VL_GTS_III(32, 0x64U, __Vfunc_maze_solver_core__DOT__cell_free__11__idx)) 
                                           && ((0x63U 
                                                >= 
                                                (0x7fU 
                                                 & __Vfunc_maze_solver_core__DOT__cell_free__11__idx)) 
                                               && (1U 
                                                   & (__Vtemp_3[
                                                      (3U 
                                                       & (__Vfunc_maze_solver_core__DOT__cell_free__11__idx 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & __Vfunc_maze_solver_core__DOT__cell_free__11__idx)))));
                                }(), (IData)(__Vfunc_maze_solver_core__DOT__cell_free__11__Vfuncout)) 
                         & (~ ((0x63U >= (0x7fU & vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__unnamedblk3__DOT__nidx)) 
                               && vlSelfRef.maze_solver_core__DOT__visited
                               [(0x7fU & vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__unnamedblk3__DOT__nidx)])))) {
                        vlSelfRef.maze_solver_core__DOT____Vlvbound_hffa0b24d__0 = 1U;
                        __Vdly__maze_solver_core__DOT__q_count 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.maze_solver_core__DOT__q_count)));
                        if (VL_LIKELY(((0x63U >= (0x7fU 
                                                  & vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__unnamedblk3__DOT__nidx))))) {
                            __VdlyVal__maze_solver_core__DOT__visited__v0 
                                = vlSelfRef.maze_solver_core__DOT____Vlvbound_hffa0b24d__0;
                            __VdlyDim0__maze_solver_core__DOT__visited__v0 
                                = (0x7fU & vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__unnamedblk3__DOT__nidx);
                            vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__visited.enqueue(__VdlyVal__maze_solver_core__DOT__visited__v0, (IData)(__VdlyDim0__maze_solver_core__DOT__visited__v0));
                        }
                        vlSelfRef.maze_solver_core__DOT____Vlvbound_h9b0fa813__0 = 1U;
                        if (VL_LIKELY(((0x63U >= (0x7fU 
                                                  & vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__unnamedblk3__DOT__nidx))))) {
                            __VdlyVal__maze_solver_core__DOT__has_parent__v0 
                                = vlSelfRef.maze_solver_core__DOT____Vlvbound_h9b0fa813__0;
                            __VdlyDim0__maze_solver_core__DOT__has_parent__v0 
                                = (0x7fU & vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__unnamedblk3__DOT__nidx);
                            vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__has_parent.enqueue(__VdlyVal__maze_solver_core__DOT__has_parent__v0, (IData)(__VdlyDim0__maze_solver_core__DOT__has_parent__v0));
                        }
                        vlSelfRef.maze_solver_core__DOT____Vlvbound_h3c9c8691__0 
                            = vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__dir_to_neighbor;
                        if (VL_LIKELY(((0x63U >= (0x7fU 
                                                  & vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__unnamedblk3__DOT__nidx))))) {
                            __VdlyVal__maze_solver_core__DOT__parent_dir__v0 
                                = vlSelfRef.maze_solver_core__DOT____Vlvbound_h3c9c8691__0;
                            __VdlyDim0__maze_solver_core__DOT__parent_dir__v0 
                                = (0x7fU & vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__unnamedblk3__DOT__nidx);
                            vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__parent_dir.enqueue(__VdlyVal__maze_solver_core__DOT__parent_dir__v0, (IData)(__VdlyDim0__maze_solver_core__DOT__parent_dir__v0));
                        }
                        vlSelfRef.maze_solver_core__DOT____Vlvbound_hdabc1705__1 
                            = (0x7fU & vlSelfRef.maze_solver_core__DOT__unnamedblk2__DOT__unnamedblk3__DOT__nidx);
                        if (VL_LIKELY(((0x63U >= (IData)(vlSelfRef.maze_solver_core__DOT__q_tail))))) {
                            __VdlyVal__maze_solver_core__DOT__queue__v0 
                                = vlSelfRef.maze_solver_core__DOT____Vlvbound_hdabc1705__1;
                            __VdlyDim0__maze_solver_core__DOT__queue__v0 
                                = vlSelfRef.maze_solver_core__DOT__q_tail;
                            __VdlySet__maze_solver_core__DOT__queue__v0 = 1U;
                        }
                        __Vdly__maze_solver_core__DOT__q_tail 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.maze_solver_core__DOT__q_tail)));
                    }
                }
                __Vdly__maze_solver_core__DOT__nb_i 
                    = ((3U == (IData)(vlSelfRef.maze_solver_core__DOT__nb_i))
                        ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.maze_solver_core__DOT__nb_i))));
            }
        }
    } else if ((1U & (IData)(vlSelfRef.maze_solver_core__DOT__st))) {
        vlSelfRef.maze_solver_core__DOT__i = 0U;
        while (VL_GTS_III(32, 0x64U, vlSelfRef.maze_solver_core__DOT__i)) {
            vlSelfRef.maze_solver_core__DOT____Vlvbound_h1e62cca8__0 = 0U;
            if (VL_LIKELY(((0x63U >= (0x7fU & vlSelfRef.maze_solver_core__DOT__i))))) {
                __VdlyVal__maze_solver_core__DOT__visited__v1 
                    = vlSelfRef.maze_solver_core__DOT____Vlvbound_h1e62cca8__0;
                __VdlyDim0__maze_solver_core__DOT__visited__v1 
                    = (0x7fU & vlSelfRef.maze_solver_core__DOT__i);
                vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__visited.enqueue(__VdlyVal__maze_solver_core__DOT__visited__v1, (IData)(__VdlyDim0__maze_solver_core__DOT__visited__v1));
            }
            vlSelfRef.maze_solver_core__DOT____Vlvbound_h7a4d3d60__0 = 0U;
            if (VL_LIKELY(((0x63U >= (0x7fU & vlSelfRef.maze_solver_core__DOT__i))))) {
                __VdlyVal__maze_solver_core__DOT__has_parent__v1 
                    = vlSelfRef.maze_solver_core__DOT____Vlvbound_h7a4d3d60__0;
                __VdlyDim0__maze_solver_core__DOT__has_parent__v1 
                    = (0x7fU & vlSelfRef.maze_solver_core__DOT__i);
                vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__has_parent.enqueue(__VdlyVal__maze_solver_core__DOT__has_parent__v1, (IData)(__VdlyDim0__maze_solver_core__DOT__has_parent__v1));
            }
            vlSelfRef.maze_solver_core__DOT____Vlvbound_h9d5f4d18__0 = 0U;
            if (VL_LIKELY(((0x63U >= (0x7fU & vlSelfRef.maze_solver_core__DOT__i))))) {
                __VdlyVal__maze_solver_core__DOT__parent_dir__v1 
                    = vlSelfRef.maze_solver_core__DOT____Vlvbound_h9d5f4d18__0;
                __VdlyDim0__maze_solver_core__DOT__parent_dir__v1 
                    = (0x7fU & vlSelfRef.maze_solver_core__DOT__i);
                vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__parent_dir.enqueue(__VdlyVal__maze_solver_core__DOT__parent_dir__v1, (IData)(__VdlyDim0__maze_solver_core__DOT__parent_dir__v1));
            }
            vlSelfRef.maze_solver_core__DOT__i = ((IData)(1U) 
                                                  + vlSelfRef.maze_solver_core__DOT__i);
        }
        __Vdly__maze_solver_core__DOT__q_head = 0U;
        __Vdly__maze_solver_core__DOT__q_tail = 1U;
        __Vdly__maze_solver_core__DOT__q_count = 1U;
        __VdlySet__maze_solver_core__DOT__queue__v1 = 1U;
        __Vdly__maze_solver_core__DOT__nb_i = 0U;
        __Vdly__maze_solver_core__DOT__st = 2U;
        vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__visited.enqueue(1U, 0U);
    } else {
        vlSelfRef.maze_solver_core__DOT__i = 7U;
        vlSelfRef.done = 0U;
        vlSelfRef.valid = 0U;
        __Vdly__maze_solver_core__DOT__path_len_reg = 0U;
        vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__path_words.enqueue(0U, 0xffffffffU, 0U);
        if (vlSelfRef.start) {
            __Vdly__maze_solver_core__DOT__st = 1U;
        }
        vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__path_words.enqueue(0U, 0xffffffffU, 1U);
        vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__path_words.enqueue(0U, 0xffffffffU, 2U);
        vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__path_words.enqueue(0U, 0xffffffffU, 3U);
        vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__path_words.enqueue(0U, 0xffffffffU, 4U);
        vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__path_words.enqueue(0U, 0xffffffffU, 5U);
        vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__path_words.enqueue(0U, 0xffffffffU, 6U);
    }
    vlSelfRef.maze_solver_core__DOT__st = __Vdly__maze_solver_core__DOT__st;
    vlSelfRef.maze_solver_core__DOT__cur_x_reg = __Vdly__maze_solver_core__DOT__cur_x_reg;
    vlSelfRef.maze_solver_core__DOT__cur_y_reg = __Vdly__maze_solver_core__DOT__cur_y_reg;
    vlSelfRef.maze_solver_core__DOT__nb_i = __Vdly__maze_solver_core__DOT__nb_i;
    vlSelfRef.maze_solver_core__DOT__q_head = __Vdly__maze_solver_core__DOT__q_head;
    vlSelfRef.maze_solver_core__DOT__q_tail = __Vdly__maze_solver_core__DOT__q_tail;
    vlSelfRef.maze_solver_core__DOT__q_count = __Vdly__maze_solver_core__DOT__q_count;
    vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__visited.commit(vlSelfRef.maze_solver_core__DOT__visited);
    vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__has_parent.commit(vlSelfRef.maze_solver_core__DOT__has_parent);
    vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__parent_dir.commit(vlSelfRef.maze_solver_core__DOT__parent_dir);
    if (__VdlySet__maze_solver_core__DOT__path_buf__v0) {
        vlSelfRef.maze_solver_core__DOT__path_buf[__VdlyDim0__maze_solver_core__DOT__path_buf__v0] 
            = __VdlyVal__maze_solver_core__DOT__path_buf__v0;
    }
    vlSelfRef.maze_solver_core__DOT__path_len_reg = __Vdly__maze_solver_core__DOT__path_len_reg;
    if (__VdlySet__maze_solver_core__DOT__queue__v0) {
        vlSelfRef.maze_solver_core__DOT__queue[__VdlyDim0__maze_solver_core__DOT__queue__v0] 
            = __VdlyVal__maze_solver_core__DOT__queue__v0;
    }
    if (__VdlySet__maze_solver_core__DOT__queue__v1) {
        vlSelfRef.maze_solver_core__DOT__queue[0U] = 0U;
    }
    vlSelfRef.__VdlyCommitQueuemaze_solver_core__DOT__path_words.commit(vlSelfRef.maze_solver_core__DOT__path_words);
    vlSelfRef.path_len = vlSelfRef.maze_solver_core__DOT__path_len_reg;
    vlSelfRef.path_word0 = vlSelfRef.maze_solver_core__DOT__path_words
        [0U];
    vlSelfRef.path_word1 = vlSelfRef.maze_solver_core__DOT__path_words
        [1U];
    vlSelfRef.path_word2 = vlSelfRef.maze_solver_core__DOT__path_words
        [2U];
    vlSelfRef.path_word3 = vlSelfRef.maze_solver_core__DOT__path_words
        [3U];
    vlSelfRef.path_word4 = vlSelfRef.maze_solver_core__DOT__path_words
        [4U];
    vlSelfRef.path_word5 = vlSelfRef.maze_solver_core__DOT__path_words
        [5U];
    vlSelfRef.path_word6 = vlSelfRef.maze_solver_core__DOT__path_words
        [6U];
}
