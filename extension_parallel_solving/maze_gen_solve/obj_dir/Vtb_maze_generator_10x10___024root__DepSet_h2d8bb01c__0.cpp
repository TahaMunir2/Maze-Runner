// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_maze_generator_10x10.h for the primary calling header

#include "Vtb_maze_generator_10x10__pch.h"
#include "Vtb_maze_generator_10x10___024root.h"

VlCoroutine Vtb_maze_generator_10x10___024root___eval_initial__TOP__Vtiming__0(Vtb_maze_generator_10x10___024root* vlSelf);
VlCoroutine Vtb_maze_generator_10x10___024root___eval_initial__TOP__Vtiming__1(Vtb_maze_generator_10x10___024root* vlSelf);

void Vtb_maze_generator_10x10___024root___eval_initial(Vtb_maze_generator_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_generator_10x10___024root___eval_initial\n"); );
    Vtb_maze_generator_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_maze_generator_10x10___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_maze_generator_10x10___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_maze_generator_10x10___024root___eval_act(Vtb_maze_generator_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_generator_10x10___024root___eval_act\n"); );
    Vtb_maze_generator_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_maze_generator_10x10___024root___nba_sequent__TOP__0(Vtb_maze_generator_10x10___024root* vlSelf);

void Vtb_maze_generator_10x10___024root___eval_nba(Vtb_maze_generator_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_generator_10x10___024root___eval_nba\n"); );
    Vtb_maze_generator_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_maze_generator_10x10___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_maze_generator_10x10___024root___nba_sequent__TOP__0(Vtb_maze_generator_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_generator_10x10___024root___nba_sequent__TOP__0\n"); );
    Vtb_maze_generator_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__state;
    __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__state = 0;
    VlWide<4>/*127:0*/ __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat;
    VL_ZERO_W(128, __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat);
    CData/*3:0*/ __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__row;
    __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__row = 0;
    CData/*3:0*/ __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__col;
    __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__col = 0;
    CData/*6:0*/ __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__fill_idx;
    __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__fill_idx = 0;
    SData/*15:0*/ __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__rng_value;
    __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__rng_value = 0;
    CData/*3:0*/ __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__state;
    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__state = 0;
    VlWide<4>/*99:0*/ __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited;
    VL_ZERO_W(100, __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited);
    CData/*6:0*/ __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__head;
    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__head = 0;
    CData/*6:0*/ __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__tail;
    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__tail = 0;
    CData/*6:0*/ __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__count;
    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__count = 0;
    CData/*6:0*/ __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__init_idx;
    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__init_idx = 0;
    CData/*6:0*/ __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__current_cell;
    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__current_cell = 0;
    CData/*6:0*/ __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__current_dist;
    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__current_dist = 0;
    VlWide<4>/*127:0*/ __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat;
    VL_ZERO_W(128, __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat);
    CData/*6:0*/ __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v0;
    __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v0 = 0;
    CData/*6:0*/ __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v0;
    __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v0;
    __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v0 = 0;
    CData/*6:0*/ __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v0;
    __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v0 = 0;
    CData/*6:0*/ __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v0;
    __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v0;
    __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v0 = 0;
    CData/*6:0*/ __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v1;
    __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v1 = 0;
    CData/*6:0*/ __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v1;
    __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v1;
    __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v1 = 0;
    CData/*6:0*/ __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v1;
    __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v1 = 0;
    CData/*6:0*/ __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v1;
    __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v1;
    __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v1 = 0;
    CData/*6:0*/ __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v2;
    __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v2 = 0;
    CData/*6:0*/ __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v2;
    __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v2;
    __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v2 = 0;
    CData/*6:0*/ __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v2;
    __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v2 = 0;
    CData/*6:0*/ __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v2;
    __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v2;
    __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v2 = 0;
    CData/*6:0*/ __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v3;
    __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v3 = 0;
    CData/*6:0*/ __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v3;
    __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v3;
    __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v3 = 0;
    CData/*6:0*/ __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v3;
    __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v3 = 0;
    CData/*6:0*/ __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v3;
    __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v3;
    __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v4;
    __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v4 = 0;
    CData/*6:0*/ __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v5;
    __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v5 = 0;
    CData/*6:0*/ __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v5;
    __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v5;
    __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v5 = 0;
    // Body
    __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__state 
        = vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__state;
    __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[0U] 
        = vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[0U];
    __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[1U] 
        = vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[1U];
    __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[2U] 
        = vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[2U];
    __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[3U] 
        = vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[3U];
    __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__row 
        = vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__row;
    __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__col 
        = vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__col;
    __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__fill_idx 
        = vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__fill_idx;
    __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__rng_value 
        = vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__rng_value;
    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__state 
        = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__state;
    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[0U] 
        = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__visited[0U];
    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[1U] 
        = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__visited[1U];
    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[2U] 
        = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__visited[2U];
    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[3U] 
        = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__visited[3U];
    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__head 
        = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__head;
    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__tail 
        = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__tail;
    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__count 
        = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__count;
    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__init_idx 
        = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__init_idx;
    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__current_cell 
        = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__current_cell;
    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__current_dist 
        = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__current_dist;
    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[0U] 
        = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[0U];
    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[1U] 
        = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[1U];
    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[2U] 
        = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[2U];
    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[3U] 
        = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[3U];
    __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v0 = 0U;
    __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v1 = 0U;
    __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v2 = 0U;
    __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v3 = 0U;
    __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v0 = 0U;
    __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v1 = 0U;
    __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v2 = 0U;
    __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v3 = 0U;
    __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v5 = 0U;
    __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v4 = 0U;
    if (vlSelfRef.tb_maze_generator_10x10__DOT__rst) {
        __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__rng_value = 0xace1U;
        __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__state = 0U;
        vlSelfRef.tb_maze_generator_10x10__DOT__solve_done = 0U;
        vlSelfRef.tb_maze_generator_10x10__DOT__solve_valid = 0U;
        vlSelfRef.tb_maze_generator_10x10__DOT__solve_len = 0U;
        __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[0U] = 0U;
        __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[1U] = 0U;
        __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[2U] = 0U;
        __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[3U] = 0U;
        __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__head = 0U;
        __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__tail = 0U;
        __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__count = 0U;
        __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__init_idx = 0U;
        __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__current_cell = 0U;
        __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__current_dist = 0U;
        __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[0U] = 0U;
        __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[1U] = 0U;
        __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[2U] = 0U;
        __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[3U] = 0U;
        __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__state = 0U;
        vlSelfRef.tb_maze_generator_10x10__DOT__done = 0U;
        __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[0U] = 0U;
        __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[1U] = 0U;
        __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[2U] = 0U;
        __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[3U] = 0U;
        __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__row = 0U;
        __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__col = 0U;
        __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__fill_idx = 0U;
        vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__rng_enable = 0U;
        vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__rng_load_seed = 0U;
    } else {
        if (vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__rng_load_seed) {
            __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__rng_value 
                = ((0U == (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__seed))
                    ? 0xace1U : (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__seed));
        } else if (vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__rng_enable) {
            vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__u_rng__DOT__feedback 
                = (1U & VL_REDXOR_16((0xb400U & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__rng_value))));
            __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__rng_value 
                = ((0xfffeU & ((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__rng_value) 
                               << 1U)) | (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__u_rng__DOT__feedback));
        }
        vlSelfRef.tb_maze_generator_10x10__DOT__solve_done = 0U;
        if ((8U & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__state))) {
                __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__state = 0U;
            } else if ((2U & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__state))) {
                __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__state))) {
                __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__state = 0U;
            } else {
                vlSelfRef.tb_maze_generator_10x10__DOT__solve_done = 1U;
                __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__state = 0U;
            }
        } else if ((4U & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__state))) {
                    if ((9U > (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__current_col))) {
                        vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__current_cell)));
                        if ((1U & ((vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[
                                    ((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor) 
                                     >> 5U)] >> (0x1fU 
                                                 & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor))) 
                                   & (~ ((0x63U >= (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor)) 
                                         && (1U & (
                                                   vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__visited[
                                                   ((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor) 
                                                    >> 5U)] 
                                                   >> 
                                                   (0x1fU 
                                                    & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor))))))))) {
                            vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h9ae0a7b2__3 = 1U;
                            __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__count 
                                = (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__count)));
                            vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h3c39d761__3 
                                = (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__current_dist)));
                            if ((0x63U >= (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor))) {
                                __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor) 
                                                                                >> 5U)] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor)))) 
                                        & __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[
                                        ((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor) 
                                         >> 5U)]) | 
                                       ((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h9ae0a7b2__3) 
                                        << (0x1fU & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor))));
                                __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v0 
                                    = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h3c39d761__3;
                                __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v0 
                                    = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor;
                                __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v0 = 1U;
                            }
                            vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h2907dd9b__3 
                                = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor;
                            if ((0x63U >= (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__tail))) {
                                __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v0 
                                    = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h2907dd9b__3;
                                __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v0 
                                    = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__tail;
                                __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v0 = 1U;
                            }
                            __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__tail 
                                = (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__tail)));
                        }
                    }
                    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__state = 3U;
                } else {
                    if ((0U < (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__current_col))) {
                        vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor 
                            = (0x7fU & ((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__current_cell) 
                                        - (IData)(1U)));
                        if ((1U & ((vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[
                                    ((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor) 
                                     >> 5U)] >> (0x1fU 
                                                 & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor))) 
                                   & (~ ((0x63U >= (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor)) 
                                         && (1U & (
                                                   vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__visited[
                                                   ((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor) 
                                                    >> 5U)] 
                                                   >> 
                                                   (0x1fU 
                                                    & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor))))))))) {
                            vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h9ae0a7b2__2 = 1U;
                            __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__count 
                                = (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__count)));
                            vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h3c39d761__2 
                                = (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__current_dist)));
                            if ((0x63U >= (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor))) {
                                __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor) 
                                                                                >> 5U)] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor)))) 
                                        & __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[
                                        ((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor) 
                                         >> 5U)]) | 
                                       ((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h9ae0a7b2__2) 
                                        << (0x1fU & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor))));
                                __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v1 
                                    = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h3c39d761__2;
                                __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v1 
                                    = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor;
                                __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v1 = 1U;
                            }
                            vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h2907dd9b__2 
                                = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor;
                            if ((0x63U >= (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__tail))) {
                                __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v1 
                                    = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h2907dd9b__2;
                                __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v1 
                                    = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__tail;
                                __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v1 = 1U;
                            }
                            __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__tail 
                                = (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__tail)));
                        }
                    }
                    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__state = 7U;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__state))) {
                if ((9U > (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__current_row))) {
                    vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor 
                        = (0x7fU & ((IData)(0xaU) + (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__current_cell)));
                    if ((1U & ((vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[
                                ((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor) 
                                 >> 5U)] >> (0x1fU 
                                             & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor))) 
                               & (~ ((0x63U >= (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor)) 
                                     && (1U & (vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__visited[
                                               ((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor))))))))) {
                        vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h9ae0a7b2__1 = 1U;
                        __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__count 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__count)));
                        vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h3c39d761__1 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__current_dist)));
                        if ((0x63U >= (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor))) {
                            __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor) 
                                                                                >> 5U)] 
                                = (((~ ((IData)(1U) 
                                        << (0x1fU & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor)))) 
                                    & __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[
                                    ((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor) 
                                     >> 5U)]) | ((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h9ae0a7b2__1) 
                                                 << 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor))));
                            __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v2 
                                = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h3c39d761__1;
                            __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v2 
                                = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor;
                            __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v2 = 1U;
                        }
                        vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h2907dd9b__1 
                            = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor;
                        if ((0x63U >= (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__tail))) {
                            __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v2 
                                = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h2907dd9b__1;
                            __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v2 
                                = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__tail;
                            __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v2 = 1U;
                        }
                        __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__tail 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__tail)));
                    }
                }
                __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__state = 6U;
            } else {
                if ((0U < (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__current_row))) {
                    vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor 
                        = (0x7fU & ((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__current_cell) 
                                    - (IData)(0xaU)));
                    if ((1U & ((vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[
                                ((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor) 
                                 >> 5U)] >> (0x1fU 
                                             & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor))) 
                               & (~ ((0x63U >= (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor)) 
                                     && (1U & (vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__visited[
                                               ((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor))))))))) {
                        vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h9ae0a7b2__0 = 1U;
                        __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__count 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__count)));
                        vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h3c39d761__0 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__current_dist)));
                        if ((0x63U >= (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor))) {
                            __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor) 
                                                                                >> 5U)] 
                                = (((~ ((IData)(1U) 
                                        << (0x1fU & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor)))) 
                                    & __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[
                                    ((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor) 
                                     >> 5U)]) | ((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h9ae0a7b2__0) 
                                                 << 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor))));
                            __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v3 
                                = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h3c39d761__0;
                            __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v3 
                                = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor;
                            __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v3 = 1U;
                        }
                        vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h2907dd9b__0 
                            = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor;
                        if ((0x63U >= (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__tail))) {
                            __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v3 
                                = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h2907dd9b__0;
                            __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v3 
                                = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__tail;
                            __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v3 = 1U;
                        }
                        __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__tail 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__tail)));
                    }
                }
                __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__state = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__state))) {
                if ((0U == (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__count))) {
                    vlSelfRef.tb_maze_generator_10x10__DOT__solve_valid = 0U;
                    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__state = 8U;
                } else {
                    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__count 
                        = (0x7fU & ((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__count) 
                                    - (IData)(1U)));
                    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__current_cell 
                        = ((0x63U >= (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__head))
                            ? vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem
                           [vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__head]
                            : 0U);
                    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__current_dist 
                        = ((0x63U >= ((0x63U >= (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__head))
                                       ? vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem
                                      [vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__head]
                                       : 0U)) ? vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem
                           [((0x63U >= (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__head))
                              ? vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem
                             [vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__head]
                              : 0U)] : 0U);
                    vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__current_row 
                        = (0x7fU & VL_DIV_III(7, ((0x63U 
                                                   >= (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__head))
                                                   ? 
                                                  vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem
                                                  [vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__head]
                                                   : 0U), (IData)(0xaU)));
                    vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__current_col 
                        = (0x7fU & VL_MODDIV_III(7, 
                                                 ((0x63U 
                                                   >= (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__head))
                                                   ? 
                                                  vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem
                                                  [vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__head]
                                                   : 0U), (IData)(0xaU)));
                    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__head 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__head)));
                    if ((0x63U == ((0x63U >= (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__head))
                                    ? vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem
                                   [vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__head]
                                    : 0U))) {
                        vlSelfRef.tb_maze_generator_10x10__DOT__solve_valid = 1U;
                        vlSelfRef.tb_maze_generator_10x10__DOT__solve_len 
                            = ((0x63U >= ((0x63U >= (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__head))
                                           ? vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem
                                          [vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__head]
                                           : 0U)) ? 
                               vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem
                               [((0x63U >= (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__head))
                                  ? vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem
                                 [vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__head]
                                  : 0U)] : 0U);
                        __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__state = 8U;
                    } else {
                        __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__state = 4U;
                    }
                }
            } else {
                if ((1U & vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[0U])) {
                    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[0U] 
                        = (1U | __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[0U]);
                    __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v4 = 1U;
                    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__head = 0U;
                    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__tail = 1U;
                    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__count = 1U;
                }
                __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__state))) {
            if ((0x64U > (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__init_idx))) {
                vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h4e490c8d__0 = 0U;
                vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h71b13248__0 = 0U;
                if ((0x63U >= (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__init_idx))) {
                    __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__init_idx) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__init_idx)))) 
                            & __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[
                            ((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__init_idx) 
                             >> 5U)]) | ((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h4e490c8d__0) 
                                         << (0x1fU 
                                             & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__init_idx))));
                    __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v5 
                        = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h71b13248__0;
                    __VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v5 
                        = vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__init_idx;
                    __VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v5 = 1U;
                }
                __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__init_idx 
                    = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__init_idx)));
            } else {
                __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__state = 2U;
            }
        } else if (vlSelfRef.tb_maze_generator_10x10__DOT__solve_start) {
            __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[0U] 
                = vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[0U];
            __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[1U] 
                = vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[1U];
            __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[2U] 
                = vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[2U];
            __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[3U] 
                = vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[3U];
            __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[0U] = 0U;
            __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[1U] = 0U;
            __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[2U] = 0U;
            __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[3U] = 0U;
            __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__head = 0U;
            __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__tail = 0U;
            __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__count = 0U;
            __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__init_idx = 0U;
            vlSelfRef.tb_maze_generator_10x10__DOT__solve_valid = 0U;
            vlSelfRef.tb_maze_generator_10x10__DOT__solve_len = 0U;
            __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__state = 1U;
        }
        vlSelfRef.tb_maze_generator_10x10__DOT__done = 0U;
        vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__rng_enable = 0U;
        vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__rng_load_seed = 0U;
        if ((4U & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__state))) {
                __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__state))) {
                vlSelfRef.tb_maze_generator_10x10__DOT__done = 1U;
                __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__state = 0U;
            } else {
                vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__rng_enable = 1U;
                if ((0x64U > (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__fill_idx))) {
                    if ((1U & (~ (vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[
                                  ((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__fill_idx) 
                                   >> 5U)] >> (0x1fU 
                                               & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__fill_idx)))))) {
                        if ((5U > (0xfU & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__rng_value)))) {
                            __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__fill_idx) 
                                                                                >> 5U)] 
                                = (__Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[
                                   ((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__fill_idx) 
                                    >> 5U)] | ((IData)(1U) 
                                               << (0x1fU 
                                                   & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__fill_idx))));
                        }
                    }
                    __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__fill_idx 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__fill_idx)));
                } else {
                    __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[0U] 
                        = (1U | __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[0U]);
                    __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__state = 5U;
                    __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[3U] 
                        = (8U | __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[3U]);
                }
            }
        } else if ((2U & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__state))) {
                vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__rng_enable = 1U;
                if (((9U == (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__row)) 
                     & (9U == (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__col)))) {
                    __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__fill_idx = 0U;
                    __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__state = 4U;
                } else if ((9U == (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__row))) {
                    __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__col 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__col)));
                    __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__state = 2U;
                } else if ((9U == (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__col))) {
                    __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__row 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__row)));
                    __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__state = 2U;
                } else {
                    if ((1U & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__rng_value))) {
                        __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__row 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__row)));
                    } else {
                        __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__col 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__col)));
                    }
                    __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__state = 2U;
                }
            } else {
                vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__bit_idx 
                    = (0x7fU & (((IData)(0xaU) * (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__row)) 
                                + (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__col)));
                __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__bit_idx) 
                                                                             >> 5U)] 
                    = (__Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[
                       ((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__bit_idx) 
                        >> 5U)] | ((IData)(1U) << (0x1fU 
                                                   & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__bit_idx))));
                __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__state))) {
            __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[0U] = 0U;
            __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[1U] = 0U;
            __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[2U] = 0U;
            __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[3U] = 0U;
            __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__row = 0U;
            __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__col = 0U;
            __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__state = 2U;
        } else if (vlSelfRef.tb_maze_generator_10x10__DOT__start) {
            __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[0U] = 0U;
            __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[1U] = 0U;
            __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[2U] = 0U;
            __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[3U] = 0U;
            __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__row = 0U;
            __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__col = 0U;
            __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__fill_idx = 0U;
            vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__rng_load_seed = 1U;
            __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__state = 1U;
        }
    }
    vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__state 
        = __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__state;
    vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__visited[0U] 
        = __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[0U];
    vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__visited[1U] 
        = __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[1U];
    vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__visited[2U] 
        = __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[2U];
    vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__visited[3U] 
        = __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__visited[3U];
    vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__head 
        = __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__head;
    vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__tail 
        = __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__tail;
    vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__count 
        = __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__count;
    vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__init_idx 
        = __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__init_idx;
    vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__current_cell 
        = __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__current_cell;
    vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__current_dist 
        = __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__current_dist;
    vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[0U] 
        = __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[0U];
    vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[1U] 
        = __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[1U];
    vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[2U] 
        = __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[2U];
    vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[3U] 
        = __Vdly__tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat[3U];
    if (__VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v0) {
        vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem[__VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v0] 
            = __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v0;
    }
    if (__VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v1) {
        vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem[__VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v1] 
            = __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v1;
    }
    if (__VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v2) {
        vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem[__VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v2] 
            = __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v2;
    }
    if (__VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v3) {
        vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem[__VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v3] 
            = __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem__v3;
    }
    if (__VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v0) {
        vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem[__VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v0] 
            = __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v0;
    }
    if (__VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v1) {
        vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem[__VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v1] 
            = __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v1;
    }
    if (__VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v2) {
        vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem[__VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v2] 
            = __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v2;
    }
    if (__VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v3) {
        vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem[__VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v3] 
            = __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v3;
    }
    if (__VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v4) {
        vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem[0U] = 0U;
        vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem[0U] = 0U;
    }
    if (__VdlySet__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v5) {
        vlSelfRef.tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem[__VdlyDim0__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v5] 
            = __VdlyVal__tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem__v5;
    }
    vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__state 
        = __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__state;
    vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__row 
        = __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__row;
    vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__col 
        = __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__col;
    vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__fill_idx 
        = __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__fill_idx;
    vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[0U] 
        = __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[0U];
    vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[1U] 
        = __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[1U];
    vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[2U] 
        = __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[2U];
    vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[3U] 
        = __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[3U];
    vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__rng_value 
        = __Vdly__tb_maze_generator_10x10__DOT__u_gen__DOT__rng_value;
}

void Vtb_maze_generator_10x10___024root___timing_commit(Vtb_maze_generator_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_generator_10x10___024root___timing_commit\n"); );
    Vtb_maze_generator_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h45c9f161__0.commit(
                                                   "@(posedge tb_maze_generator_10x10.clk)");
    }
}

void Vtb_maze_generator_10x10___024root___timing_resume(Vtb_maze_generator_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_generator_10x10___024root___timing_resume\n"); );
    Vtb_maze_generator_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h45c9f161__0.resume(
                                                   "@(posedge tb_maze_generator_10x10.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_maze_generator_10x10___024root___eval_triggers__act(Vtb_maze_generator_10x10___024root* vlSelf);

bool Vtb_maze_generator_10x10___024root___eval_phase__act(Vtb_maze_generator_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_generator_10x10___024root___eval_phase__act\n"); );
    Vtb_maze_generator_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_maze_generator_10x10___024root___eval_triggers__act(vlSelf);
    Vtb_maze_generator_10x10___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_maze_generator_10x10___024root___timing_resume(vlSelf);
        Vtb_maze_generator_10x10___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_maze_generator_10x10___024root___eval_phase__nba(Vtb_maze_generator_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_generator_10x10___024root___eval_phase__nba\n"); );
    Vtb_maze_generator_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_maze_generator_10x10___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_maze_generator_10x10___024root___dump_triggers__nba(Vtb_maze_generator_10x10___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_maze_generator_10x10___024root___dump_triggers__act(Vtb_maze_generator_10x10___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_maze_generator_10x10___024root___eval(Vtb_maze_generator_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_generator_10x10___024root___eval\n"); );
    Vtb_maze_generator_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_maze_generator_10x10___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_maze_generator_10x10.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_maze_generator_10x10___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_maze_generator_10x10.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_maze_generator_10x10___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_maze_generator_10x10___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_maze_generator_10x10___024root___eval_debug_assertions(Vtb_maze_generator_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_generator_10x10___024root___eval_debug_assertions\n"); );
    Vtb_maze_generator_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
