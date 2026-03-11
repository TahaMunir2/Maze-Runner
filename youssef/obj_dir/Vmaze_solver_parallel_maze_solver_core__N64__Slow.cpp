// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmaze_solver_parallel.h for the primary calling header

#include "Vmaze_solver_parallel__pch.h"
#include "Vmaze_solver_parallel__Syms.h"
#include "Vmaze_solver_parallel_maze_solver_core__N64.h"

void Vmaze_solver_parallel_maze_solver_core__N64___ctor_var_reset(Vmaze_solver_parallel_maze_solver_core__N64* vlSelf);

Vmaze_solver_parallel_maze_solver_core__N64::Vmaze_solver_parallel_maze_solver_core__N64(Vmaze_solver_parallel__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmaze_solver_parallel_maze_solver_core__N64___ctor_var_reset(this);
}

void Vmaze_solver_parallel_maze_solver_core__N64::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmaze_solver_parallel_maze_solver_core__N64::~Vmaze_solver_parallel_maze_solver_core__N64() {
}
