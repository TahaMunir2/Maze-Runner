// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMAZE_SOLVER_PARALLEL__SYMS_H_
#define VERILATED_VMAZE_SOLVER_PARALLEL__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmaze_solver_parallel.h"

// INCLUDE MODULE CLASSES
#include "Vmaze_solver_parallel___024root.h"
#include "Vmaze_solver_parallel_maze_solver_core__N64.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vmaze_solver_parallel__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmaze_solver_parallel* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmaze_solver_parallel___024root TOP;
    Vmaze_solver_parallel_maze_solver_core__N64 TOP__maze_solver_parallel__DOT__gen_cores__BRA__0__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64 TOP__maze_solver_parallel__DOT__gen_cores__BRA__10__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64 TOP__maze_solver_parallel__DOT__gen_cores__BRA__11__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64 TOP__maze_solver_parallel__DOT__gen_cores__BRA__12__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64 TOP__maze_solver_parallel__DOT__gen_cores__BRA__13__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64 TOP__maze_solver_parallel__DOT__gen_cores__BRA__14__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64 TOP__maze_solver_parallel__DOT__gen_cores__BRA__15__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64 TOP__maze_solver_parallel__DOT__gen_cores__BRA__1__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64 TOP__maze_solver_parallel__DOT__gen_cores__BRA__2__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64 TOP__maze_solver_parallel__DOT__gen_cores__BRA__3__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64 TOP__maze_solver_parallel__DOT__gen_cores__BRA__4__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64 TOP__maze_solver_parallel__DOT__gen_cores__BRA__5__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64 TOP__maze_solver_parallel__DOT__gen_cores__BRA__6__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64 TOP__maze_solver_parallel__DOT__gen_cores__BRA__7__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64 TOP__maze_solver_parallel__DOT__gen_cores__BRA__8__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64 TOP__maze_solver_parallel__DOT__gen_cores__BRA__9__KET____DOT__solver_inst;

    // CONSTRUCTORS
    Vmaze_solver_parallel__Syms(VerilatedContext* contextp, const char* namep, Vmaze_solver_parallel* modelp);
    ~Vmaze_solver_parallel__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
