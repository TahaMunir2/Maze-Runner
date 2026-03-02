// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmaze_solver_core.h for the primary calling header

#include "Vmaze_solver_core__pch.h"
#include "Vmaze_solver_core___024root.h"

void Vmaze_solver_core___024root___eval_act(Vmaze_solver_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_core___024root___eval_act\n"); );
    Vmaze_solver_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmaze_solver_core___024root___nba_sequent__TOP__0(Vmaze_solver_core___024root* vlSelf);

void Vmaze_solver_core___024root___eval_nba(Vmaze_solver_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_core___024root___eval_nba\n"); );
    Vmaze_solver_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmaze_solver_core___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vmaze_solver_core___024root___eval_triggers__act(Vmaze_solver_core___024root* vlSelf);

bool Vmaze_solver_core___024root___eval_phase__act(Vmaze_solver_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_core___024root___eval_phase__act\n"); );
    Vmaze_solver_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmaze_solver_core___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmaze_solver_core___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmaze_solver_core___024root___eval_phase__nba(Vmaze_solver_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_core___024root___eval_phase__nba\n"); );
    Vmaze_solver_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmaze_solver_core___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmaze_solver_core___024root___dump_triggers__nba(Vmaze_solver_core___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmaze_solver_core___024root___dump_triggers__act(Vmaze_solver_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vmaze_solver_core___024root___eval(Vmaze_solver_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_core___024root___eval\n"); );
    Vmaze_solver_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vmaze_solver_core___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("maze_solver_core.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmaze_solver_core___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("maze_solver_core.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmaze_solver_core___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmaze_solver_core___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmaze_solver_core___024root___eval_debug_assertions(Vmaze_solver_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_core___024root___eval_debug_assertions\n"); );
    Vmaze_solver_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY(((vlSelfRef.start & 0xfeU)))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
