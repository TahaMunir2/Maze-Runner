// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_maze_generator_10x10.h for the primary calling header

#include "Vtb_maze_generator_10x10__pch.h"
#include "Vtb_maze_generator_10x10___024root.h"

VL_ATTR_COLD void Vtb_maze_generator_10x10___024root___eval_static(Vtb_maze_generator_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_generator_10x10___024root___eval_static\n"); );
    Vtb_maze_generator_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_maze_generator_10x10__DOT__clk__0 
        = vlSelfRef.tb_maze_generator_10x10__DOT__clk;
}

VL_ATTR_COLD void Vtb_maze_generator_10x10___024root___eval_final(Vtb_maze_generator_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_generator_10x10___024root___eval_final\n"); );
    Vtb_maze_generator_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_maze_generator_10x10___024root___eval_settle(Vtb_maze_generator_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_generator_10x10___024root___eval_settle\n"); );
    Vtb_maze_generator_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_maze_generator_10x10___024root___dump_triggers__act(Vtb_maze_generator_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_generator_10x10___024root___dump_triggers__act\n"); );
    Vtb_maze_generator_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_maze_generator_10x10.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_maze_generator_10x10___024root___dump_triggers__nba(Vtb_maze_generator_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_generator_10x10___024root___dump_triggers__nba\n"); );
    Vtb_maze_generator_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_maze_generator_10x10.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_maze_generator_10x10___024root___ctor_var_reset(Vtb_maze_generator_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_generator_10x10___024root___ctor_var_reset\n"); );
    Vtb_maze_generator_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_maze_generator_10x10__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3557951399520193288ull);
    vlSelf->tb_maze_generator_10x10__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16654935327394720954ull);
    vlSelf->tb_maze_generator_10x10__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10866658541660678587ull);
    vlSelf->tb_maze_generator_10x10__DOT__seed = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1331397167786132654ull);
    vlSelf->tb_maze_generator_10x10__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4913321383537870819ull);
    vlSelf->tb_maze_generator_10x10__DOT__solve_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4131176310346711299ull);
    vlSelf->tb_maze_generator_10x10__DOT__solve_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17225147983790143018ull);
    vlSelf->tb_maze_generator_10x10__DOT__solve_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14016125014077067594ull);
    vlSelf->tb_maze_generator_10x10__DOT__solve_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2537396468795601036ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_gen__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6377945928446410439ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat, __VscopeHash, 13977428665463068689ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_gen__DOT__rng_value = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18091798319448120654ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_gen__DOT__rng_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9233389275994376616ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_gen__DOT__rng_load_seed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 907377200070803991ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_gen__DOT__row = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7329054575995730813ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_gen__DOT__col = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8550680588031526137ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_gen__DOT__fill_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14309689792968769344ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_gen__DOT__bit_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11157291630187169198ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_gen__DOT__u_rng__DOT__feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 810040934185417455ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1314360536896086598ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat, __VscopeHash, 6387815160592451812ull);
    VL_SCOPED_RAND_RESET_W(100, vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT__visited, __VscopeHash, 7478296472899385242ull);
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3212298890264294118ull);
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11874649840229263418ull);
    }
    vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT__head = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12636641014912702167ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT__tail = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4155232258103380126ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT__count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12029528038593434011ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT__init_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7579611080799570489ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT__current_cell = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3076595791154857248ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT__current_dist = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15579223864303157943ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT__current_row = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8738485514234384712ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT__current_col = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1089725501807190999ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17779332040656260654ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h4e490c8d__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16334483089844468906ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h71b13248__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12150795219981862538ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h9ae0a7b2__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9695659704544872437ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h3c39d761__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15293672487634259809ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h2907dd9b__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1129690680903061378ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h9ae0a7b2__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10521169153448951941ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h3c39d761__1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4036709015345272409ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h2907dd9b__1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10219324723341914466ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h9ae0a7b2__2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11752447208406661712ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h3c39d761__2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15543620106672612549ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h2907dd9b__2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15144105506863513929ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h9ae0a7b2__3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14199476053803017561ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h3c39d761__3 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7084204998558717071ull);
    vlSelf->tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h2907dd9b__3 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15683833083280615850ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_maze_generator_10x10__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11424058036739733349ull);
}
