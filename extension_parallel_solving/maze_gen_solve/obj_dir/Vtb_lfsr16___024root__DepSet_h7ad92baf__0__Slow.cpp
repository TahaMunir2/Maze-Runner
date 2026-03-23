// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_lfsr16.h for the primary calling header

#include "Vtb_lfsr16__pch.h"
#include "Vtb_lfsr16___024root.h"

VL_ATTR_COLD void Vtb_lfsr16___024root___eval_static(Vtb_lfsr16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lfsr16___024root___eval_static\n"); );
    Vtb_lfsr16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_lfsr16__DOT__clk__0 
        = vlSelfRef.tb_lfsr16__DOT__clk;
}

VL_ATTR_COLD void Vtb_lfsr16___024root___eval_final(Vtb_lfsr16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lfsr16___024root___eval_final\n"); );
    Vtb_lfsr16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_lfsr16___024root___eval_settle(Vtb_lfsr16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lfsr16___024root___eval_settle\n"); );
    Vtb_lfsr16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lfsr16___024root___dump_triggers__act(Vtb_lfsr16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lfsr16___024root___dump_triggers__act\n"); );
    Vtb_lfsr16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_lfsr16.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lfsr16___024root___dump_triggers__nba(Vtb_lfsr16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lfsr16___024root___dump_triggers__nba\n"); );
    Vtb_lfsr16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_lfsr16.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_lfsr16___024root___ctor_var_reset(Vtb_lfsr16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lfsr16___024root___ctor_var_reset\n"); );
    Vtb_lfsr16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_lfsr16__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1748033711408182098ull);
    vlSelf->tb_lfsr16__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15994023654954779188ull);
    vlSelf->tb_lfsr16__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9901078007923045719ull);
    vlSelf->tb_lfsr16__DOT__load_seed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17963540473452752173ull);
    vlSelf->tb_lfsr16__DOT__seed = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9019278666649226933ull);
    vlSelf->tb_lfsr16__DOT__value = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8911858359867285160ull);
    vlSelf->tb_lfsr16__DOT__dut__DOT__feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12676910250981253760ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_lfsr16__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9430671494003126494ull);
}
