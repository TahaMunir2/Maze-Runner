// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_lfsr16.h for the primary calling header

#ifndef VERILATED_VTB_LFSR16___024ROOT_H_
#define VERILATED_VTB_LFSR16___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_lfsr16__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_lfsr16___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_lfsr16__DOT__clk;
    CData/*0:0*/ tb_lfsr16__DOT__rst;
    CData/*0:0*/ tb_lfsr16__DOT__enable;
    CData/*0:0*/ tb_lfsr16__DOT__load_seed;
    CData/*0:0*/ tb_lfsr16__DOT__dut__DOT__feedback;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_lfsr16__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_lfsr16__DOT__seed;
    SData/*15:0*/ tb_lfsr16__DOT__value;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_ha7935bcb__0;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_lfsr16__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_lfsr16___024root(Vtb_lfsr16__Syms* symsp, const char* v__name);
    ~Vtb_lfsr16___024root();
    VL_UNCOPYABLE(Vtb_lfsr16___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
