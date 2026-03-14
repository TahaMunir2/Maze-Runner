// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_maze_solver_full_10x10.h for the primary calling header

#ifndef VERILATED_VTB_MAZE_SOLVER_FULL_10X10___024ROOT_H_
#define VERILATED_VTB_MAZE_SOLVER_FULL_10X10___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_maze_solver_full_10x10__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_maze_solver_full_10x10___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_maze_solver_full_10x10__DOT__clk;
    CData/*0:0*/ tb_maze_solver_full_10x10__DOT__rst;
    CData/*0:0*/ tb_maze_solver_full_10x10__DOT__start;
    CData/*0:0*/ tb_maze_solver_full_10x10__DOT__done;
    CData/*0:0*/ tb_maze_solver_full_10x10__DOT__valid;
    CData/*7:0*/ tb_maze_solver_full_10x10__DOT__path_len;
    CData/*4:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT__state;
    CData/*6:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT__head;
    CData/*6:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT__tail;
    CData/*6:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT__count;
    CData/*6:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT__init_idx;
    CData/*6:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT__current_cell;
    CData/*6:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT__current_dist;
    CData/*6:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT__current_row;
    CData/*6:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT__current_col;
    CData/*6:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT__neighbor;
    CData/*6:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT__recon_cell;
    CData/*6:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT__recon_len;
    CData/*6:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT__pack_idx;
    CData/*0:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h4e490c8d__0;
    CData/*6:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h71b13248__0;
    CData/*1:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h2f430fd9__0;
    CData/*0:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h9ae0a7b2__0;
    CData/*6:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h3c39d761__0;
    CData/*1:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h7c0ab4be__0;
    CData/*6:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h2907dd9b__0;
    CData/*0:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h9ae0a7b2__1;
    CData/*6:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h3c39d761__1;
    CData/*1:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h7c0ab4be__1;
    CData/*6:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h2907dd9b__1;
    CData/*0:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h9ae0a7b2__2;
    CData/*6:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h3c39d761__2;
    CData/*1:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h7c0ab4be__2;
    CData/*6:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h2907dd9b__2;
    CData/*0:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h9ae0a7b2__3;
    CData/*6:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h3c39d761__3;
    CData/*1:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h7c0ab4be__3;
    CData/*6:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h2907dd9b__3;
    CData/*1:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_hfd5ac9ac__0;
    CData/*1:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT____Vlvbound_h314fbb8b__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_maze_solver_full_10x10__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_maze_solver_full_10x10__DOT__grid0;
    IData/*31:0*/ tb_maze_solver_full_10x10__DOT__grid1;
    IData/*31:0*/ tb_maze_solver_full_10x10__DOT__grid2;
    IData/*31:0*/ tb_maze_solver_full_10x10__DOT__grid3;
    VlWide<4>/*127:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT__grid_flat;
    VlWide<4>/*99:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT__visited;
    VlWide<7>/*223:0*/ tb_maze_solver_full_10x10__DOT__dut__DOT__path_bits;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*6:0*/, 100> tb_maze_solver_full_10x10__DOT__dut__DOT__dist_mem;
    VlUnpacked<CData/*1:0*/, 100> tb_maze_solver_full_10x10__DOT__dut__DOT__parent_dir;
    VlUnpacked<CData/*6:0*/, 100> tb_maze_solver_full_10x10__DOT__dut__DOT__queue_mem;
    VlUnpacked<CData/*1:0*/, 100> tb_maze_solver_full_10x10__DOT__dut__DOT__rev_steps;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h48171e25__0;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_maze_solver_full_10x10__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_maze_solver_full_10x10___024root(Vtb_maze_solver_full_10x10__Syms* symsp, const char* v__name);
    ~Vtb_maze_solver_full_10x10___024root();
    VL_UNCOPYABLE(Vtb_maze_solver_full_10x10___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
