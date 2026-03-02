// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmaze_solver_core__pch.h"
#include "Vmaze_solver_core.h"
#include "Vmaze_solver_core___024root.h"

// FUNCTIONS
Vmaze_solver_core__Syms::~Vmaze_solver_core__Syms()
{
}

Vmaze_solver_core__Syms::Vmaze_solver_core__Syms(VerilatedContext* contextp, const char* namep, Vmaze_solver_core* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(344);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
