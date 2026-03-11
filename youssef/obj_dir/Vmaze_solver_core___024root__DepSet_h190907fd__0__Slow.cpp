// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmaze_solver_core.h for the primary calling header

#include "Vmaze_solver_core__pch.h"
#include "Vmaze_solver_core__Syms.h"
#include "Vmaze_solver_core___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmaze_solver_core___024root___dump_triggers__stl(Vmaze_solver_core___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmaze_solver_core___024root___eval_triggers__stl(Vmaze_solver_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_core___024root___eval_triggers__stl\n"); );
    Vmaze_solver_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmaze_solver_core___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
