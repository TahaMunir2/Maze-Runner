// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_maze_solver_full_10x10.h for the primary calling header

#include "Vtb_maze_solver_full_10x10__pch.h"
#include "Vtb_maze_solver_full_10x10___024root.h"

VL_ATTR_COLD void Vtb_maze_solver_full_10x10___024root___eval_static(Vtb_maze_solver_full_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_solver_full_10x10___024root___eval_static\n"); );
    Vtb_maze_solver_full_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_maze_solver_full_10x10__DOT__clk__0 
        = vlSelfRef.tb_maze_solver_full_10x10__DOT__clk;
}

VL_ATTR_COLD void Vtb_maze_solver_full_10x10___024root___eval_final(Vtb_maze_solver_full_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_solver_full_10x10___024root___eval_final\n"); );
    Vtb_maze_solver_full_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_maze_solver_full_10x10___024root___eval_settle(Vtb_maze_solver_full_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_solver_full_10x10___024root___eval_settle\n"); );
    Vtb_maze_solver_full_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_maze_solver_full_10x10___024root___dump_triggers__act(Vtb_maze_solver_full_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_solver_full_10x10___024root___dump_triggers__act\n"); );
    Vtb_maze_solver_full_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_maze_solver_full_10x10.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_maze_solver_full_10x10___024root___dump_triggers__nba(Vtb_maze_solver_full_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_solver_full_10x10___024root___dump_triggers__nba\n"); );
    Vtb_maze_solver_full_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_maze_solver_full_10x10.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_maze_solver_full_10x10___024root___ctor_var_reset(Vtb_maze_solver_full_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_solver_full_10x10___024root___ctor_var_reset\n"); );
    Vtb_maze_solver_full_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_maze_solver_full_10x10__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9467158131985182380ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4331273169238267505ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16191906081324393176ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__grid0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3894465046954701927ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__grid1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 165132190599174711ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__grid2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 567009101688965872ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__grid3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3094894840712246232ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16443870984463642787ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5698480521260994240ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__path_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10329688811121845127ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11464322685733447514ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT__grid_flat, __VscopeHash, 1487847399325128898ull);
    VL_SCOPED_RAND_RESET_W(100, vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT__visited, __VscopeHash, 14998300901389768509ull);
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT__dist_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6543582631853652622ull);
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT__parent_dir[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12969891219822121266ull);
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT__queue_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16818689668321147270ull);
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT__rev_steps[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2053926260056072370ull);
    }
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT__head = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14916319078442608037ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT__tail = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11508705327775643100ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT__count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10998286848242831094ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT__init_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12547873154905724868ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT__current_cell = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16964620644268149531ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT__current_dist = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17143132798040097115ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT__current_row = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14529597063251166311ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT__current_col = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3148714755825966981ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT__neighbor = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7689214085058383711ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT__recon_cell = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16543022029728109375ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT__recon_len = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3289988721209549966ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT__pack_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10194451376889162407ull);
    VL_SCOPED_RAND_RESET_W(224, vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT__path_bits, __VscopeHash, 2620961712883039181ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h4e490c8d__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5551381243540628496ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h71b13248__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6266530894168378294ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h2f430fd9__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17020799475963917174ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h9ae0a7b2__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12889060511894222002ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h3c39d761__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15253360625081986508ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h7c0ab4be__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17811525692735605379ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h2907dd9b__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3969795491971570804ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h9ae0a7b2__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16749130864372817292ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h3c39d761__1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5641109111018500815ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h7c0ab4be__1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10525534650983378189ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h2907dd9b__1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3367359187087561289ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h9ae0a7b2__2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 302077694813871963ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h3c39d761__2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5519586176348718234ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h7c0ab4be__2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11801266315580053672ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h2907dd9b__2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13759702197152468523ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h9ae0a7b2__3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16176919511482210042ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h3c39d761__3 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8737495178740491766ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h7c0ab4be__3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13251279742042383581ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h2907dd9b__3 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7874782434170059830ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_hfd5ac9ac__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 305927097840586081ull);
    vlSelf->tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h314fbb8b__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12339582099782395757ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_maze_solver_full_10x10__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 798267496709237075ull);
}
