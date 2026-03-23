// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_LFSR16__SYMS_H_
#define VERILATED_VTB_LFSR16__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_lfsr16.h"

// INCLUDE MODULE CLASSES
#include "Vtb_lfsr16___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_lfsr16__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_lfsr16* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_lfsr16___024root           TOP;

    // CONSTRUCTORS
    Vtb_lfsr16__Syms(VerilatedContext* contextp, const char* namep, Vtb_lfsr16* modelp);
    ~Vtb_lfsr16__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
