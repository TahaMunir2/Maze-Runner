// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_maze_worker_engine.h for the primary calling header

#include "Vtb_maze_worker_engine__pch.h"
#include "Vtb_maze_worker_engine__Syms.h"
#include "Vtb_maze_worker_engine___024root.h"

void Vtb_maze_worker_engine___024root___ctor_var_reset(Vtb_maze_worker_engine___024root* vlSelf);

Vtb_maze_worker_engine___024root::Vtb_maze_worker_engine___024root(Vtb_maze_worker_engine__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_maze_worker_engine___024root___ctor_var_reset(this);
}

void Vtb_maze_worker_engine___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_maze_worker_engine___024root::~Vtb_maze_worker_engine___024root() {
}
