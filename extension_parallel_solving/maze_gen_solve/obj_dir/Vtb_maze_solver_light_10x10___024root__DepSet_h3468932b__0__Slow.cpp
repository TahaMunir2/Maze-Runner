// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_maze_solver_light_10x10.h for the primary calling header

#include "Vtb_maze_solver_light_10x10__pch.h"
#include "Vtb_maze_solver_light_10x10___024root.h"

VL_ATTR_COLD void Vtb_maze_solver_light_10x10___024root___eval_static(Vtb_maze_solver_light_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_solver_light_10x10___024root___eval_static\n"); );
    Vtb_maze_solver_light_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_maze_solver_light_10x10__DOT__clk__0 
        = vlSelfRef.tb_maze_solver_light_10x10__DOT__clk;
}

VL_ATTR_COLD void Vtb_maze_solver_light_10x10___024root___eval_final(Vtb_maze_solver_light_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_solver_light_10x10___024root___eval_final\n"); );
    Vtb_maze_solver_light_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_maze_solver_light_10x10___024root___eval_settle(Vtb_maze_solver_light_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_solver_light_10x10___024root___eval_settle\n"); );
    Vtb_maze_solver_light_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_maze_solver_light_10x10___024root___dump_triggers__act(Vtb_maze_solver_light_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_solver_light_10x10___024root___dump_triggers__act\n"); );
    Vtb_maze_solver_light_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_maze_solver_light_10x10.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_maze_solver_light_10x10___024root___dump_triggers__nba(Vtb_maze_solver_light_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_solver_light_10x10___024root___dump_triggers__nba\n"); );
    Vtb_maze_solver_light_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_maze_solver_light_10x10.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_maze_solver_light_10x10___024root___ctor_var_reset(Vtb_maze_solver_light_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_solver_light_10x10___024root___ctor_var_reset\n"); );
    Vtb_maze_solver_light_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_maze_solver_light_10x10__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14400572744171537520ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13131823273304025745ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13227898647866655692ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__grid0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 308090801750702339ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__grid1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9855558351012966581ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__grid2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11024347558489034576ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__grid3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17298233331525366627ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12017915432901714740ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13023293791682497912ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__path_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18256774567436825648ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8452718510035311119ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT__grid_flat, __VscopeHash, 5274307038505395126ull);
    VL_SCOPED_RAND_RESET_W(100, vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT__visited, __VscopeHash, 13882352078772875256ull);
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT__dist_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4973939106220177530ull);
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT__queue_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2954554918253160008ull);
    }
    vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT__head = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1907742237454869169ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT__tail = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 764797155202527805ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT__count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2962191464506969711ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT__init_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1880528782687188936ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT__current_cell = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16551750276196987159ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT__current_dist = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10378820501063056926ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT__current_row = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9478678600914434514ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT__current_col = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5177475257241130992ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT__neighbor = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10880489350356493532ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT____Vlvbound_h4e490c8d__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4185670049185098905ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT____Vlvbound_h71b13248__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1098007365142098916ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT____Vlvbound_h9ae0a7b2__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2716833708646176345ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT____Vlvbound_h3c39d761__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5454824389935244529ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT____Vlvbound_h2907dd9b__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7365322228086429789ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT____Vlvbound_h9ae0a7b2__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15044164757045267085ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT____Vlvbound_h3c39d761__1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9106124067058465816ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT____Vlvbound_h2907dd9b__1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4390350631423797540ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT____Vlvbound_h9ae0a7b2__2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7423178529119707959ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT____Vlvbound_h3c39d761__2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17305516254754003049ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT____Vlvbound_h2907dd9b__2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4996369767059643854ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT____Vlvbound_h9ae0a7b2__3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1303765503809314623ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT____Vlvbound_h3c39d761__3 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12459918777069169184ull);
    vlSelf->tb_maze_solver_light_10x10__DOT__dut__DOT____Vlvbound_h2907dd9b__3 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15841631431949301043ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_maze_solver_light_10x10__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9543937253571902823ull);
}
