// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmaze_solver_core.h for the primary calling header

#include "Vmaze_solver_core__pch.h"
#include "Vmaze_solver_core__Syms.h"
#include "Vmaze_solver_core___024root.h"

void Vmaze_solver_core___024root___ctor_var_reset(Vmaze_solver_core___024root* vlSelf);

Vmaze_solver_core___024root::Vmaze_solver_core___024root(Vmaze_solver_core__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmaze_solver_core___024root___ctor_var_reset(this);
}

void Vmaze_solver_core___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmaze_solver_core___024root::~Vmaze_solver_core___024root() {
}
