// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_bfs_top.h for the primary calling header

#ifndef VERILATED_VTB_BFS_TOP___024ROOT_H_
#define VERILATED_VTB_BFS_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_bfs_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_bfs_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_bfs_top__DOT__clk;
        CData/*0:0*/ tb_bfs_top__DOT__rst;
        CData/*0:0*/ tb_bfs_top__DOT__start;
        CData/*6:0*/ tb_bfs_top__DOT__path_length;
        CData/*0:0*/ tb_bfs_top__DOT__counting;
        CData/*0:0*/ tb_bfs_top__DOT__dut__DOT__dist_done;
        CData/*0:0*/ tb_bfs_top__DOT__dut__DOT__bt_done;
        CData/*0:0*/ tb_bfs_top__DOT__dut__DOT__bt_no_path;
        CData/*6:0*/ tb_bfs_top__DOT__dut__DOT__bt_widx;
        CData/*3:0*/ tb_bfs_top__DOT__dut__DOT__bt_wdata;
        CData/*0:0*/ tb_bfs_top__DOT__dut__DOT__bt_we;
        CData/*3:0*/ tb_bfs_top__DOT__dut__DOT____Vlvbound_h24742f5c__0;
        CData/*3:0*/ tb_bfs_top__DOT__dut__DOT____Vlvbound_h11a44dc8__0;
        CData/*1:0*/ tb_bfs_top__DOT__dut__DOT__fsm__DOT__st;
        CData/*1:0*/ tb_bfs_top__DOT__dut__DOT__fsm__DOT__st_n;
        CData/*0:0*/ tb_bfs_top__DOT__dut__DOT__fsm__DOT____VdfgRegularize_ha3d9603b_0_0;
        CData/*2:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT__st;
        CData/*6:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT__init_i;
        CData/*3:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT__sx;
        CData/*3:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT__sy;
        CData/*6:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT__d;
        CData/*0:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT__changed;
        CData/*6:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT__scan_idx;
        CData/*0:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT__dist_printed;
        CData/*0:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT__center_valid_reg;
        CData/*3:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT__sx_p;
        CData/*3:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT__sy_p;
        CData/*6:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT__d_p;
        CData/*0:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT__center_valid_reg2;
        CData/*3:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT__sx_p2;
        CData/*3:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT__sy_p2;
        CData/*6:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT__d_p2;
        CData/*6:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT__nb_up_d;
        CData/*6:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT__nb_dn_d;
        CData/*6:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT__nb_lt_d;
        CData/*6:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT__nb_rt_d;
        CData/*0:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT__nb_up_v;
        CData/*0:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT__nb_dn_v;
        CData/*0:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT__nb_lt_v;
        CData/*0:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT__nb_rt_v;
        CData/*6:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_heb6b86b7__0;
        CData/*6:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_hd8d98a8f__0;
        CData/*6:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_hffc5c0f2__0;
        CData/*6:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_hda973a45__0;
        CData/*6:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_h076a3959__0;
        CData/*6:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_hfa1b6407__0;
        CData/*6:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_hffc5c0f2__1;
        CData/*6:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_hda973a45__1;
        CData/*6:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_h076a3959__1;
        CData/*6:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_hfa1b6407__1;
        CData/*2:0*/ tb_bfs_top__DOT__dut__DOT__bt__DOT__st;
        CData/*3:0*/ tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r;
        CData/*3:0*/ tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c;
        CData/*6:0*/ tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_d;
        CData/*6:0*/ tb_bfs_top__DOT__dut__DOT__bt__DOT__wptr;
        CData/*6:0*/ tb_bfs_top__DOT__dut__DOT__bt__DOT__nb_up_d;
        CData/*6:0*/ tb_bfs_top__DOT__dut__DOT__bt__DOT__nb_rt_d;
        CData/*6:0*/ tb_bfs_top__DOT__dut__DOT__bt__DOT__nb_dn_d;
        CData/*6:0*/ tb_bfs_top__DOT__dut__DOT__bt__DOT__nb_lt_d;
        CData/*0:0*/ tb_bfs_top__DOT__dut__DOT__bt__DOT__nb_up_v;
        CData/*0:0*/ tb_bfs_top__DOT__dut__DOT__bt__DOT__nb_rt_v;
        CData/*0:0*/ tb_bfs_top__DOT__dut__DOT__bt__DOT__nb_dn_v;
        CData/*0:0*/ tb_bfs_top__DOT__dut__DOT__bt__DOT__nb_lt_v;
        CData/*0:0*/ tb_bfs_top__DOT__dut__DOT__bt__DOT__bt_printed;
    };
    struct {
        CData/*0:0*/ __Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__bt_printed;
        CData/*2:0*/ __Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__st;
        CData/*3:0*/ __Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r;
        CData/*3:0*/ __Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c;
        CData/*6:0*/ __Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_d;
        CData/*6:0*/ __Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__wptr;
        CData/*0:0*/ __Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__nb_up_v;
        CData/*6:0*/ __Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__nb_up_d;
        CData/*0:0*/ __Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__nb_rt_v;
        CData/*6:0*/ __Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__nb_rt_d;
        CData/*0:0*/ __Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__nb_dn_v;
        CData/*6:0*/ __Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__nb_dn_d;
        CData/*0:0*/ __Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__nb_lt_v;
        CData/*6:0*/ __Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__nb_lt_d;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_bfs_top__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_bfs_top__DOT__rst__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ tb_bfs_top__DOT__solve_cycles;
        IData/*31:0*/ tb_bfs_top__DOT__dut__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT__dist_cycles;
        IData/*31:0*/ tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_bfs_top__DOT__dut__DOT__bt__DOT__bt_cycles;
        IData/*31:0*/ __Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__bt_cycles;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 100> tb_bfs_top__DOT__maze;
        VlUnpacked<CData/*3:0*/, 99> tb_bfs_top__DOT__path;
        VlUnpacked<CData/*6:0*/, 100> tb_bfs_top__DOT__dut__DOT__dist_table;
    };
    VlNBACommitQueue<VlUnpacked<CData/*3:0*/, 99>, false, CData/*3:0*/, 1> __VdlyCommitQueuetb_bfs_top__DOT__path;
    VlNBACommitQueue<VlUnpacked<CData/*6:0*/, 100>, false, CData/*6:0*/, 1> __VdlyCommitQueuetb_bfs_top__DOT__dut__DOT__dist_table;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h0adaf061__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_bfs_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_bfs_top___024root(Vtb_bfs_top__Syms* symsp, const char* v__name);
    ~Vtb_bfs_top___024root();
    VL_UNCOPYABLE(Vtb_bfs_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
