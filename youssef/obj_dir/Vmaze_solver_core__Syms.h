// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMAZE_SOLVER_CORE__SYMS_H_
#define VERILATED_VMAZE_SOLVER_CORE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmaze_solver_core.h"

// INCLUDE MODULE CLASSES
#include "Vmaze_solver_core___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vmaze_solver_core__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmaze_solver_core* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmaze_solver_core___024root    TOP;

    // CONSTRUCTORS
    Vmaze_solver_core__Syms(VerilatedContext* contextp, const char* namep, Vmaze_solver_core* modelp);
    ~Vmaze_solver_core__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
