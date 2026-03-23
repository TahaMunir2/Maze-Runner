// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_lfsr16.h for the primary calling header

#include "Vtb_lfsr16__pch.h"
#include "Vtb_lfsr16__Syms.h"
#include "Vtb_lfsr16___024root.h"

void Vtb_lfsr16___024root___ctor_var_reset(Vtb_lfsr16___024root* vlSelf);

Vtb_lfsr16___024root::Vtb_lfsr16___024root(Vtb_lfsr16__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_lfsr16___024root___ctor_var_reset(this);
}

void Vtb_lfsr16___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_lfsr16___024root::~Vtb_lfsr16___024root() {
}
