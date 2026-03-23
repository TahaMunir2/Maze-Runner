// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_maze_generator_10x10.h for the primary calling header

#ifndef VERILATED_VTB_MAZE_GENERATOR_10X10___024ROOT_H_
#define VERILATED_VTB_MAZE_GENERATOR_10X10___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_maze_generator_10x10__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_maze_generator_10x10___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_maze_generator_10x10__DOT__clk;
    CData/*0:0*/ tb_maze_generator_10x10__DOT__rst;
    CData/*0:0*/ tb_maze_generator_10x10__DOT__start;
    CData/*0:0*/ tb_maze_generator_10x10__DOT__done;
    CData/*0:0*/ tb_maze_generator_10x10__DOT__solve_start;
    CData/*0:0*/ tb_maze_generator_10x10__DOT__solve_done;
    CData/*0:0*/ tb_maze_generator_10x10__DOT__solve_valid;
    CData/*7:0*/ tb_maze_generator_10x10__DOT__solve_len;
    CData/*2:0*/ tb_maze_generator_10x10__DOT__u_gen__DOT__state;
    CData/*0:0*/ tb_maze_generator_10x10__DOT__u_gen__DOT__rng_enable;
    CData/*0:0*/ tb_maze_generator_10x10__DOT__u_gen__DOT__rng_load_seed;
    CData/*3:0*/ tb_maze_generator_10x10__DOT__u_gen__DOT__row;
    CData/*3:0*/ tb_maze_generator_10x10__DOT__u_gen__DOT__col;
    CData/*6:0*/ tb_maze_generator_10x10__DOT__u_gen__DOT__fill_idx;
    CData/*6:0*/ tb_maze_generator_10x10__DOT__u_gen__DOT__bit_idx;
    CData/*0:0*/ tb_maze_generator_10x10__DOT__u_gen__DOT__u_rng__DOT__feedback;
    CData/*3:0*/ tb_maze_generator_10x10__DOT__u_solve__DOT__state;
    CData/*6:0*/ tb_maze_generator_10x10__DOT__u_solve__DOT__head;
    CData/*6:0*/ tb_maze_generator_10x10__DOT__u_solve__DOT__tail;
    CData/*6:0*/ tb_maze_generator_10x10__DOT__u_solve__DOT__count;
    CData/*6:0*/ tb_maze_generator_10x10__DOT__u_solve__DOT__init_idx;
    CData/*6:0*/ tb_maze_generator_10x10__DOT__u_solve__DOT__current_cell;
    CData/*6:0*/ tb_maze_generator_10x10__DOT__u_solve__DOT__current_dist;
    CData/*6:0*/ tb_maze_generator_10x10__DOT__u_solve__DOT__current_row;
    CData/*6:0*/ tb_maze_generator_10x10__DOT__u_solve__DOT__current_col;
    CData/*6:0*/ tb_maze_generator_10x10__DOT__u_solve__DOT__neighbor;
    CData/*0:0*/ tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h4e490c8d__0;
    CData/*6:0*/ tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h71b13248__0;
    CData/*0:0*/ tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h9ae0a7b2__0;
    CData/*6:0*/ tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h3c39d761__0;
    CData/*6:0*/ tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h2907dd9b__0;
    CData/*0:0*/ tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h9ae0a7b2__1;
    CData/*6:0*/ tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h3c39d761__1;
    CData/*6:0*/ tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h2907dd9b__1;
    CData/*0:0*/ tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h9ae0a7b2__2;
    CData/*6:0*/ tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h3c39d761__2;
    CData/*6:0*/ tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h2907dd9b__2;
    CData/*0:0*/ tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h9ae0a7b2__3;
    CData/*6:0*/ tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h3c39d761__3;
    CData/*6:0*/ tb_maze_generator_10x10__DOT__u_solve__DOT____Vlvbound_h2907dd9b__3;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_maze_generator_10x10__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_maze_generator_10x10__DOT__seed;
    SData/*15:0*/ tb_maze_generator_10x10__DOT__u_gen__DOT__rng_value;
    VlWide<4>/*127:0*/ tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat;
    VlWide<4>/*127:0*/ tb_maze_generator_10x10__DOT__u_solve__DOT__grid_flat;
    VlWide<4>/*99:0*/ tb_maze_generator_10x10__DOT__u_solve__DOT__visited;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*6:0*/, 100> tb_maze_generator_10x10__DOT__u_solve__DOT__dist_mem;
    VlUnpacked<CData/*6:0*/, 100> tb_maze_generator_10x10__DOT__u_solve__DOT__queue_mem;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h45c9f161__0;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_maze_generator_10x10__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_maze_generator_10x10___024root(Vtb_maze_generator_10x10__Syms* symsp, const char* v__name);
    ~Vtb_maze_generator_10x10___024root();
    VL_UNCOPYABLE(Vtb_maze_generator_10x10___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
