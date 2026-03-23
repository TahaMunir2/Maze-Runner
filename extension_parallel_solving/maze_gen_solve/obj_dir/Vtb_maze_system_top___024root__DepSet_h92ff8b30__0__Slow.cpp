// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_maze_system_top.h for the primary calling header

#include "Vtb_maze_system_top__pch.h"
#include "Vtb_maze_system_top___024root.h"

VL_ATTR_COLD void Vtb_maze_system_top___024root___eval_static(Vtb_maze_system_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_system_top___024root___eval_static\n"); );
    Vtb_maze_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_maze_system_top__DOT__clk__0 
        = vlSelfRef.tb_maze_system_top__DOT__clk;
}

VL_ATTR_COLD void Vtb_maze_system_top___024root___eval_final(Vtb_maze_system_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_system_top___024root___eval_final\n"); );
    Vtb_maze_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_maze_system_top___024root___dump_triggers__stl(Vtb_maze_system_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_maze_system_top___024root___eval_phase__stl(Vtb_maze_system_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_maze_system_top___024root___eval_settle(Vtb_maze_system_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_system_top___024root___eval_settle\n"); );
    Vtb_maze_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_maze_system_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_maze_system_top.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_maze_system_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_maze_system_top___024root___dump_triggers__stl(Vtb_maze_system_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_system_top___024root___dump_triggers__stl\n"); );
    Vtb_maze_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_maze_system_top___024root___stl_sequent__TOP__0(Vtb_maze_system_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_maze_system_top___024root___eval_stl(Vtb_maze_system_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_system_top___024root___eval_stl\n"); );
    Vtb_maze_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_maze_system_top___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_maze_system_top___024root___stl_sequent__TOP__0(Vtb_maze_system_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_system_top___024root___stl_sequent__TOP__0\n"); );
    Vtb_maze_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_busy[0U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__busy;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_busy[1U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__busy;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_done[0U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__done;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_done[1U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__done;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_done_id[0U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__done_maze_id;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_done_id[1U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__done_maze_id;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_solved[0U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__solved;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_solved[1U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__solved;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_len[0U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__solved_path_len;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_len[1U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__solved_path_len;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_tvalid[0U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__target_valid;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_tvalid[1U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__target_valid;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_tlen[0U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__target_path_len;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_tlen[1U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__target_path_len;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_tword0[0U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__target_path_word0;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_tword0[1U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__target_path_word0;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_tword1[0U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__target_path_word1;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_tword1[1U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__target_path_word1;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_tword2[0U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__target_path_word2;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_tword2[1U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__target_path_word2;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_tword3[0U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__target_path_word3;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_tword3[1U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__target_path_word3;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_tword4[0U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__target_path_word4;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_tword4[1U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__target_path_word4;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_tword5[0U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__target_path_word5;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_tword5[1U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__target_path_word5;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_tword6[0U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__target_path_word6;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_tword6[1U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__target_path_word6;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_tgrid0[0U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__target_grid0;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_tgrid0[1U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__target_grid0;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_tgrid1[0U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__target_grid1;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_tgrid1[1U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__target_grid1;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_tgrid2[0U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__target_grid2;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_tgrid2[1U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__target_grid2;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_tgrid3[0U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__target_grid3;
    vlSelfRef.tb_maze_system_top__DOT__dut__DOT__engine_tgrid3[1U] 
        = vlSelfRef.tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__target_grid3;
}

VL_ATTR_COLD void Vtb_maze_system_top___024root___eval_triggers__stl(Vtb_maze_system_top___024root* vlSelf);

VL_ATTR_COLD bool Vtb_maze_system_top___024root___eval_phase__stl(Vtb_maze_system_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_system_top___024root___eval_phase__stl\n"); );
    Vtb_maze_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_maze_system_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_maze_system_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_maze_system_top___024root___dump_triggers__act(Vtb_maze_system_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_system_top___024root___dump_triggers__act\n"); );
    Vtb_maze_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_maze_system_top.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_maze_system_top___024root___dump_triggers__nba(Vtb_maze_system_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_system_top___024root___dump_triggers__nba\n"); );
    Vtb_maze_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_maze_system_top.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_maze_system_top___024root___ctor_var_reset(Vtb_maze_system_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_system_top___024root___ctor_var_reset\n"); );
    Vtb_maze_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_maze_system_top__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10071940193890530489ull);
    vlSelf->tb_maze_system_top__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 340497829659195066ull);
    vlSelf->tb_maze_system_top__DOT__start_run = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9520500319690940395ull);
    vlSelf->tb_maze_system_top__DOT__seed = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12668728221996994506ull);
    vlSelf->tb_maze_system_top__DOT__run_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10093427624670624438ull);
    vlSelf->tb_maze_system_top__DOT__target_id = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 356671714267111486ull);
    vlSelf->tb_maze_system_top__DOT__target_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1455797525081979589ull);
    vlSelf->tb_maze_system_top__DOT__target_path_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 418294987348107683ull);
    vlSelf->tb_maze_system_top__DOT__target_path_word0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11276056077167332832ull);
    vlSelf->tb_maze_system_top__DOT__target_path_word1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2086592691716244486ull);
    vlSelf->tb_maze_system_top__DOT__target_path_word2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6049549570053129314ull);
    vlSelf->tb_maze_system_top__DOT__target_path_word3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14538407346630572340ull);
    vlSelf->tb_maze_system_top__DOT__target_path_word4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12876726788134228485ull);
    vlSelf->tb_maze_system_top__DOT__target_path_word5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3242727427996785611ull);
    vlSelf->tb_maze_system_top__DOT__target_path_word6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4967030522336457736ull);
    vlSelf->tb_maze_system_top__DOT__target_grid0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14126240890434262364ull);
    vlSelf->tb_maze_system_top__DOT__target_grid1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14113920572540205419ull);
    vlSelf->tb_maze_system_top__DOT__target_grid2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10677057652833716813ull);
    vlSelf->tb_maze_system_top__DOT__target_grid3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1092811439678712230ull);
    vlSelf->tb_maze_system_top__DOT__print_path__Vstatic__move_bits = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14565222136627559465ull);
    vlSelf->tb_maze_system_top__DOT__print_maze_with_path__Vstatic__move_bits = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5273636993180142700ull);
    vlSelf->tb_maze_system_top__DOT____Vlvbound_hdf2cfce8__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1693860768982824629ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4969015146122567726ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__next_maze_id = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5021247185324501383ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__completed_count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4182033964062264156ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__engine_maze_id[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6020175505604373870ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__engine_seed[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8389637501000157443ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__engine_start[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8990042636548908430ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__engine_busy[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13703139219536030212ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__engine_done[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6849168444088673335ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__engine_done_id[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6277990898652249223ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__engine_solved[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14590634813842212609ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__engine_len[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3680714889193315513ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__engine_tvalid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14935377614663357910ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__engine_tlen[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5745773511881655764ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__engine_tword0[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18282833534371980857ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__engine_tword1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1258134294091982636ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__engine_tword2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15115457504117725587ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__engine_tword3[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6246311001661078620ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__engine_tword4[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10932882729115029351ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__engine_tword5[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16822021968377449498ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__engine_tword6[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6866221587326614979ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__engine_tgrid0[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 382286747040093927ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__engine_tgrid1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2302160493157222833ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__engine_tgrid2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5588366929831260055ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__engine_tgrid3[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14118218566167417698ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__engine_active[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10522775459356283789ull);
    }
    vlSelf->tb_maze_system_top__DOT__dut__DOT__rng_value = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13246726054409913658ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__rng_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17519603138152726908ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__rng_load_seed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13117576963154775480ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__done_inc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13581601827028414819ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__dispatched = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2568554464305696818ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__target_grid3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6357577325391318853ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__target_grid2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16477428092825504993ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__target_grid1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5959281911823442582ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__target_grid0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1881322100601769201ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__target_path_word6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7678367111033891425ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__target_path_word5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5431376566419396683ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__target_path_word4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7335014748733511937ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__target_path_word3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10124014251375278705ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__target_path_word2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7877023706760801083ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__target_path_word1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3848355006122934774ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__target_path_word0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 722682046064450364ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__target_path_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15978120231334026621ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__target_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6374175464637033168ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__solved_path_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13781058916946620535ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__solved = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1787068562615085341ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__done_maze_id = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5494112877790845219ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1388048094530541636ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__0__KET____DOT__u_engine__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14966161612366914581ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__target_grid3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2905178602070016162ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__target_grid2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12607266346671470622ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__target_grid1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6962009187554628094ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__target_grid0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10755446999949216449ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__target_path_word6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6878043211090189266ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__target_path_word5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8453865281553976461ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__target_path_word4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10469028559739731471ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__target_path_word3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12734315606931708078ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__target_path_word2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15188820092839559235ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__target_path_word1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1441913193918559297ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__target_path_word0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3017735264382340858ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__target_path_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12173616508696175605ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__target_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8755206595510882288ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__solved_path_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3563253851715022031ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__solved = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13541241811041167590ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__done_maze_id = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3272004026577897645ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4894404528065097637ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT____Vcellout__GEN_ENGINES__BRA__1__KET____DOT__u_engine__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2079092298707970156ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__u_top_rng__DOT__feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3931565881207424936ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17984404480704034891ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__is_target = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1375432468389905602ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__light_seen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17806020331919921312ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__full_seen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10338884932059444098ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__gen_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2849226648492974090ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__gen_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17639450424872265794ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__light_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5571452142583579487ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__light_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16364637548701993787ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__light_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8728391239763554203ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__light_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2848381818847585480ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__full_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11082578390185510065ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__full_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3907823951284231306ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__full_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2618938945287987545ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__full_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3187462502739168609ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_gen__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6327634685698473505ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_gen__DOT__grid_flat, __VscopeHash, 3033408478581793923ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_gen__DOT__rng_value = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8021621104243842266ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_gen__DOT__rng_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12121574976250157716ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_gen__DOT__rng_load_seed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10196346143785344947ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_gen__DOT__row = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9929681995261482980ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_gen__DOT__col = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14480243365933694414ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_gen__DOT__fill_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3896681279585439770ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_gen__DOT__bit_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11477855627046290584ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_gen__DOT__u_rng__DOT__feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11139356262872145475ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1392500567126797794ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT__grid_flat, __VscopeHash, 17895451799794613476ull);
    VL_SCOPED_RAND_RESET_W(100, vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT__visited, __VscopeHash, 10787111779050461901ull);
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT__dist_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 113879275027570527ull);
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT__queue_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17025129947798077422ull);
    }
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT__head = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1512608419717878435ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT__tail = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9877532039113873170ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT__count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12240745083830718284ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT__init_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15379696356183653498ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT__current_cell = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4569619687751832350ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT__current_dist = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15431987013786086993ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT__current_row = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14125687537172515842ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT__current_col = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14174544241224944399ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT__neighbor = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14728094947995006146ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h4e490c8d__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12277652291499067842ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h71b13248__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12259470138127427302ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h9ae0a7b2__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13703242380416515438ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h3c39d761__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17214338572744374307ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h2907dd9b__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9203463011700064926ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h9ae0a7b2__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4179043504334642551ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h3c39d761__1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7780114087215218408ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h2907dd9b__1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6322494586009651457ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h9ae0a7b2__2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18052194771787567392ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h3c39d761__2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6298204440206392401ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h2907dd9b__2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14207225274216045758ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h9ae0a7b2__3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18339382416402012792ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h3c39d761__3 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7596738989411591957ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h2907dd9b__3 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5512973654233393951ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT__state = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9530388233041682069ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT__grid_flat, __VscopeHash, 15735304099557060658ull);
    VL_SCOPED_RAND_RESET_W(100, vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT__visited, __VscopeHash, 10463410898225887081ull);
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT__dist_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 726729599315903776ull);
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT__parent_dir[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1510619466984592661ull);
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT__queue_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1720239445400165159ull);
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT__rev_steps[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1577604904922718888ull);
    }
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT__head = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10543523648386328479ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT__tail = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4973303336219291270ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT__count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1764313126377296382ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT__init_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1243151453785261351ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT__current_cell = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16103367061080995919ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT__current_dist = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 470875244371673503ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT__current_row = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 347035352899786808ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT__current_col = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3885088933441167521ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT__neighbor = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 84737211931705543ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT__recon_cell = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9283006937732599394ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT__recon_len = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12557568043064449824ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT__pack_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5210601553979043989ull);
    VL_SCOPED_RAND_RESET_W(224, vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT__path_bits, __VscopeHash, 9734456270119169236ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h4e490c8d__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 523008821017611650ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h71b13248__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18358514376818625090ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h2f430fd9__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12512033217737316620ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h9ae0a7b2__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16246858810575158722ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h3c39d761__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7845814514031045924ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h7c0ab4be__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10716462143929653966ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h2907dd9b__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17265524852555364215ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h9ae0a7b2__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9806478550634340961ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h3c39d761__1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11127829554117235192ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h7c0ab4be__1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 808277325742928116ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h2907dd9b__1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17544739238953486035ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h9ae0a7b2__2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8994909400319495858ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h3c39d761__2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10529209928736640465ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h7c0ab4be__2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12672547446959269561ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h2907dd9b__2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15671634492665850272ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h9ae0a7b2__3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2344046923247173177ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h3c39d761__3 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4196538085164291057ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h7c0ab4be__3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5668707129236347848ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h2907dd9b__3 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 422231885912325669ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_hfd5ac9ac__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5818096508159321308ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__0__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h314fbb8b__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12128667435402799092ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3226549632969828657ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__is_target = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 797023745536597832ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__light_seen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10015454567713632352ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__full_seen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5791061242825240058ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__gen_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9411795849876722888ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__gen_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17121495336200750686ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__light_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1495247002626645296ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__light_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9585006156890408161ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__light_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16811643021713449728ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__light_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18424508212297214532ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__full_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7120690457163444615ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__full_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 911033519654653504ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__full_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1025180931429860058ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__full_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5315206279303566184ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_gen__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2805617789030699209ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_gen__DOT__grid_flat, __VscopeHash, 5936666746172097513ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_gen__DOT__rng_value = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8343907082333192904ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_gen__DOT__rng_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4682607987215659598ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_gen__DOT__rng_load_seed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11712015913583306847ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_gen__DOT__row = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13188463019594959964ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_gen__DOT__col = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16368989504516980908ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_gen__DOT__fill_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6708321095618301583ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_gen__DOT__bit_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13138893129454591590ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_gen__DOT__u_rng__DOT__feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8331351064894289349ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9116984552831451714ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT__grid_flat, __VscopeHash, 7600619429489531958ull);
    VL_SCOPED_RAND_RESET_W(100, vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT__visited, __VscopeHash, 6712132545452963960ull);
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT__dist_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17497805484457501569ull);
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT__queue_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10973309277270700732ull);
    }
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT__head = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14941120540862112090ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT__tail = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18151444965701529581ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT__count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3227935482740809346ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT__init_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5091956196729358410ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT__current_cell = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1094878273401292042ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT__current_dist = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17953564019756866504ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT__current_row = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13658358554932941491ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT__current_col = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14755080911128666830ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT__neighbor = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17818105158952104866ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h4e490c8d__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9096360290703720411ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h71b13248__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10461080445603209387ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h9ae0a7b2__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2282239953821626071ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h3c39d761__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13544067847193179692ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h2907dd9b__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4605353839543579799ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h9ae0a7b2__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16043084056768781412ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h3c39d761__1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10163223484140190873ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h2907dd9b__1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11374024876762538052ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h9ae0a7b2__2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12482501123405099165ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h3c39d761__2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14144590699756907445ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h2907dd9b__2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18020841380352876251ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h9ae0a7b2__3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 430781215142716877ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h3c39d761__3 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4506527741324988453ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_light__DOT____Vlvbound_h2907dd9b__3 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18417864326897616021ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT__state = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17465933821065626963ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT__grid_flat, __VscopeHash, 4595066124388437591ull);
    VL_SCOPED_RAND_RESET_W(100, vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT__visited, __VscopeHash, 3958083750869353159ull);
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT__dist_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5206894957937367234ull);
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT__parent_dir[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4139176068490634688ull);
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT__queue_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2928495006163020666ull);
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT__rev_steps[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16247312296721066597ull);
    }
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT__head = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3851742477387694453ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT__tail = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15090782739533339698ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT__count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17244305961615419754ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT__init_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1637374774514498055ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT__current_cell = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1371619732207258102ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT__current_dist = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10466479738299128466ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT__current_row = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16936456492412325416ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT__current_col = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16414891887475884005ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT__neighbor = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6928335626525507556ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT__recon_cell = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9955100793775507382ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT__recon_len = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14700196226392042802ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT__pack_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17331313740632246172ull);
    VL_SCOPED_RAND_RESET_W(224, vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT__path_bits, __VscopeHash, 16196338135174391279ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h4e490c8d__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1277790029999791294ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h71b13248__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12561879224088132309ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h2f430fd9__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5841172944496500044ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h9ae0a7b2__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12624777505906792732ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h3c39d761__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2184896642616459635ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h7c0ab4be__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5077635158002084794ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h2907dd9b__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7275928227106887217ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h9ae0a7b2__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16733525586310290546ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h3c39d761__1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3797195714171994551ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h7c0ab4be__1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3062471879816275424ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h2907dd9b__1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4478983658978527142ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h9ae0a7b2__2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16270680505521767958ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h3c39d761__2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2856942236192390289ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h7c0ab4be__2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1647148991123952523ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h2907dd9b__2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12053685957891431509ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h9ae0a7b2__3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12497651428411966713ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h3c39d761__3 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10607436214466828828ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h7c0ab4be__3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 510668128382205156ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h2907dd9b__3 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12275515385521978297ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_hfd5ac9ac__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12846875377985689155ull);
    vlSelf->tb_maze_system_top__DOT__dut__DOT__GEN_ENGINES__BRA__1__KET____DOT__u_engine__DOT__u_full__DOT____Vlvbound_h314fbb8b__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1739896241657398387ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_maze_system_top__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2796247976009491870ull);
}
