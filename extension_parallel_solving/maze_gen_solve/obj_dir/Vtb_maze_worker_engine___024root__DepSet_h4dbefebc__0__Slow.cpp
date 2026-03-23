// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_maze_worker_engine.h for the primary calling header

#include "Vtb_maze_worker_engine__pch.h"
#include "Vtb_maze_worker_engine___024root.h"

VL_ATTR_COLD void Vtb_maze_worker_engine___024root___eval_static(Vtb_maze_worker_engine___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_worker_engine___024root___eval_static\n"); );
    Vtb_maze_worker_engine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_maze_worker_engine__DOT__clk__0 
        = vlSelfRef.tb_maze_worker_engine__DOT__clk;
}

VL_ATTR_COLD void Vtb_maze_worker_engine___024root___eval_final(Vtb_maze_worker_engine___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_worker_engine___024root___eval_final\n"); );
    Vtb_maze_worker_engine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_maze_worker_engine___024root___eval_settle(Vtb_maze_worker_engine___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_worker_engine___024root___eval_settle\n"); );
    Vtb_maze_worker_engine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_maze_worker_engine___024root___dump_triggers__act(Vtb_maze_worker_engine___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_worker_engine___024root___dump_triggers__act\n"); );
    Vtb_maze_worker_engine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_maze_worker_engine.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_maze_worker_engine___024root___dump_triggers__nba(Vtb_maze_worker_engine___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_worker_engine___024root___dump_triggers__nba\n"); );
    Vtb_maze_worker_engine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_maze_worker_engine.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_maze_worker_engine___024root___ctor_var_reset(Vtb_maze_worker_engine___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_worker_engine___024root___ctor_var_reset\n"); );
    Vtb_maze_worker_engine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_maze_worker_engine__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 125286685127059803ull);
    vlSelf->tb_maze_worker_engine__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13272810261918116814ull);
    vlSelf->tb_maze_worker_engine__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10204167194826413360ull);
    vlSelf->tb_maze_worker_engine__DOT__maze_id = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12312285724546070286ull);
    vlSelf->tb_maze_worker_engine__DOT__target_id = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11277087175481685242ull);
    vlSelf->tb_maze_worker_engine__DOT__seed = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15084948956577638166ull);
    vlSelf->tb_maze_worker_engine__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12321009499314725213ull);
    vlSelf->tb_maze_worker_engine__DOT__done_maze_id = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5745852040085099266ull);
    vlSelf->tb_maze_worker_engine__DOT__solved = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4146907144293976532ull);
    vlSelf->tb_maze_worker_engine__DOT__solved_path_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1638855186682047370ull);
    vlSelf->tb_maze_worker_engine__DOT__target_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11061833538356603692ull);
    vlSelf->tb_maze_worker_engine__DOT__target_path_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3581443725288648049ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8481121612247370086ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__is_target = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8199197936689132516ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__light_seen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16649119882982222684ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__full_seen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3457973788950163152ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__gen_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3785801316608915668ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__gen_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9050248155082384396ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__light_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 66313282898241922ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__light_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3270970681888819607ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__light_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 550538983194044606ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__light_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13589226066908385895ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__full_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11942496751639877327ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__full_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1083430550816552092ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__full_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6684056639408290086ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__full_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18406567256179737854ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_gen__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10165560853289036992ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_gen__DOT__grid_flat, __VscopeHash, 10636233776977998096ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_gen__DOT__rng_value = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1345736986072705545ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_gen__DOT__rng_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11766674180189403907ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_gen__DOT__rng_load_seed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2853187269956894825ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_gen__DOT__row = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6493845433746195803ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_gen__DOT__col = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 564920471029427763ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_gen__DOT__fill_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6294260437601189424ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_gen__DOT__bit_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 57045248437041323ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_gen__DOT__u_rng__DOT__feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13039732007614352888ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2307822163365293681ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT__grid_flat, __VscopeHash, 4081907402922138490ull);
    VL_SCOPED_RAND_RESET_W(100, vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT__visited, __VscopeHash, 16868399884645568272ull);
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT__dist_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16817729459843347308ull);
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT__queue_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17036512328455128894ull);
    }
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT__head = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4385373642323990240ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT__tail = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15136406883814117934ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT__count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3743081322250754990ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT__init_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3291318245673450504ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT__current_cell = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2926238417333063223ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT__current_dist = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1365432786031747972ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT__current_row = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18181182141799348038ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT__current_col = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8891941396166319102ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT__neighbor = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11756716729059385205ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT____Vlvbound_h4e490c8d__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 757107475926504114ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT____Vlvbound_h71b13248__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17753867036829099719ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT____Vlvbound_h9ae0a7b2__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4274118142322590576ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT____Vlvbound_h3c39d761__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7942599463368504269ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT____Vlvbound_h2907dd9b__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13673523399673903458ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT____Vlvbound_h9ae0a7b2__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12136420982199300833ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT____Vlvbound_h3c39d761__1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9492629172166628267ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT____Vlvbound_h2907dd9b__1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6790580724718596732ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT____Vlvbound_h9ae0a7b2__2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4018935762765262472ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT____Vlvbound_h3c39d761__2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17799083840424628924ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT____Vlvbound_h2907dd9b__2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 22712500563560507ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT____Vlvbound_h9ae0a7b2__3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8810798222476097572ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT____Vlvbound_h3c39d761__3 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1283647816169898513ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_light__DOT____Vlvbound_h2907dd9b__3 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7124791200710983910ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT__state = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4598360329983563558ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT__grid_flat, __VscopeHash, 5454984947072572486ull);
    VL_SCOPED_RAND_RESET_W(100, vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT__visited, __VscopeHash, 1432349740889596338ull);
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT__dist_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15518342585829783825ull);
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT__parent_dir[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15078094815954462315ull);
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT__queue_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11281169016485553508ull);
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT__rev_steps[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15458067208784403913ull);
    }
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT__head = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12725197748825320714ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT__tail = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7445607490340440792ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT__count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2951719829594298563ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT__init_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13264478747049741990ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT__current_cell = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8814648744358568546ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT__current_dist = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12442941910331317362ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT__current_row = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9390770279049924638ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT__current_col = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4459741727702277680ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT__neighbor = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8911837205841526573ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT__recon_cell = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1097317740536169962ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT__recon_len = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3579971353697301162ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT__pack_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11213612746454215362ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT____Vlvbound_h4e490c8d__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6587040721104567398ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT____Vlvbound_h71b13248__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8374540966454034738ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT____Vlvbound_h2f430fd9__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11151514873727885705ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT____Vlvbound_h9ae0a7b2__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 368387994335972925ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT____Vlvbound_h3c39d761__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1780940444780029936ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT____Vlvbound_h7c0ab4be__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5143524721383150750ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT____Vlvbound_h2907dd9b__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5983021462521005075ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT____Vlvbound_h9ae0a7b2__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16029622357126723517ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT____Vlvbound_h3c39d761__1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8000221030334550851ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT____Vlvbound_h7c0ab4be__1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8977589613135775661ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT____Vlvbound_h2907dd9b__1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6461083304653863013ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT____Vlvbound_h9ae0a7b2__2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5050357333495408973ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT____Vlvbound_h3c39d761__2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11446248369393046633ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT____Vlvbound_h7c0ab4be__2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9559184546872014082ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT____Vlvbound_h2907dd9b__2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8803812946701922192ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT____Vlvbound_h9ae0a7b2__3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10078778710648925407ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT____Vlvbound_h3c39d761__3 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9870684185560960340ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT____Vlvbound_h7c0ab4be__3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13306077468471654472ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT____Vlvbound_h2907dd9b__3 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16328458002479144907ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT____Vlvbound_hfd5ac9ac__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11323614511342592842ull);
    vlSelf->tb_maze_worker_engine__DOT__dut__DOT__u_full__DOT____Vlvbound_h314fbb8b__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12012423602168771275ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_maze_worker_engine__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11064496055931014766ull);
}
