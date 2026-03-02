// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmaze_solver_parallel.h for the primary calling header

#ifndef VERILATED_VMAZE_SOLVER_PARALLEL___024ROOT_H_
#define VERILATED_VMAZE_SOLVER_PARALLEL___024ROOT_H_  // guard

#include "verilated.h"
class Vmaze_solver_parallel_maze_solver_core__N64;


class Vmaze_solver_parallel__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmaze_solver_parallel___024root final : public VerilatedModule {
  public:
    // CELLS
    Vmaze_solver_parallel_maze_solver_core__N64* __PVT__maze_solver_parallel__DOT__gen_cores__BRA__0__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64* __PVT__maze_solver_parallel__DOT__gen_cores__BRA__1__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64* __PVT__maze_solver_parallel__DOT__gen_cores__BRA__2__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64* __PVT__maze_solver_parallel__DOT__gen_cores__BRA__3__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64* __PVT__maze_solver_parallel__DOT__gen_cores__BRA__4__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64* __PVT__maze_solver_parallel__DOT__gen_cores__BRA__5__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64* __PVT__maze_solver_parallel__DOT__gen_cores__BRA__6__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64* __PVT__maze_solver_parallel__DOT__gen_cores__BRA__7__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64* __PVT__maze_solver_parallel__DOT__gen_cores__BRA__8__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64* __PVT__maze_solver_parallel__DOT__gen_cores__BRA__9__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64* __PVT__maze_solver_parallel__DOT__gen_cores__BRA__10__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64* __PVT__maze_solver_parallel__DOT__gen_cores__BRA__11__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64* __PVT__maze_solver_parallel__DOT__gen_cores__BRA__12__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64* __PVT__maze_solver_parallel__DOT__gen_cores__BRA__13__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64* __PVT__maze_solver_parallel__DOT__gen_cores__BRA__14__KET____DOT__solver_inst;
    Vmaze_solver_parallel_maze_solver_core__N64* __PVT__maze_solver_parallel__DOT__gen_cores__BRA__15__KET____DOT__solver_inst;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(s_axi_awvalid,0,0);
        VL_OUT8(s_axi_awready,0,0);
        VL_IN8(s_axi_wvalid,0,0);
        VL_OUT8(s_axi_wready,0,0);
        VL_OUT8(s_axi_bresp,1,0);
        VL_OUT8(s_axi_bvalid,0,0);
        VL_IN8(s_axi_bready,0,0);
        VL_IN8(s_axi_arvalid,0,0);
        VL_OUT8(s_axi_arready,0,0);
        VL_OUT8(s_axi_rresp,1,0);
        VL_OUT8(s_axi_rvalid,0,0);
        VL_IN8(s_axi_rready,0,0);
        VL_OUT8(irq,0,0);
        CData/*0:0*/ maze_solver_parallel__DOT__maze_mem_we;
        CData/*0:0*/ maze_solver_parallel__DOT__result_mem_we;
        VlWide<4>/*127:0*/ maze_solver_parallel__DOT__core_path_len;
        CData/*2:0*/ maze_solver_parallel__DOT__sched_state;
        CData/*3:0*/ maze_solver_parallel__DOT__next_free_core;
        CData/*2:0*/ __Vdly__maze_solver_parallel__DOT__sched_state;
        CData/*3:0*/ __Vdly__maze_solver_parallel__DOT__next_free_core;
        CData/*0:0*/ __Vdly__s_axi_wready;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__maze_mem__v0;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v0;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v1;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v2;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v3;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v4;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v5;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v6;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v7;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v8;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v9;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v10;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v11;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v12;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v13;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v14;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v15;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v16;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v17;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v18;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v19;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v20;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v21;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v22;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v23;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v24;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v25;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v26;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v27;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v28;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v29;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v30;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v31;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v32;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v33;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v34;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v35;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v36;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v37;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v38;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v39;
    };
    struct {
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v40;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v41;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v42;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v43;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v44;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v45;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v46;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v47;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v48;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v49;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v50;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v51;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v52;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v53;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v54;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v55;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v56;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v57;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v58;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v59;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v60;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v61;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v62;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v63;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v64;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v65;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v66;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v67;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v68;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v69;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v70;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v71;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v72;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v73;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v74;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v75;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v76;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v77;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v78;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v79;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v80;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v81;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v82;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v83;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v84;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v85;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v86;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v87;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v88;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v89;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v90;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v91;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v92;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v93;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v94;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v95;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v96;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v97;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v98;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v99;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v100;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v101;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v102;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v103;
    };
    struct {
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v104;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v105;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v106;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v107;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v108;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v109;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v110;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v111;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v112;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v113;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v114;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v115;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v116;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v117;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v118;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v119;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v120;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v121;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v122;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v123;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v124;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v125;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v126;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v127;
        CData/*0:0*/ __VdlySet__maze_solver_parallel__DOT__result_mem__v128;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ maze_solver_parallel__DOT__core_start;
        SData/*15:0*/ maze_solver_parallel__DOT__core_done;
        SData/*15:0*/ maze_solver_parallel__DOT__core_valid;
        VlWide<8>/*255:0*/ maze_solver_parallel__DOT__core_maze_id;
        SData/*15:0*/ maze_solver_parallel__DOT__current_maze_idx;
        SData/*15:0*/ maze_solver_parallel__DOT__core_busy;
        SData/*15:0*/ __Vdly__maze_solver_parallel__DOT__current_maze_idx;
        SData/*15:0*/ __Vdly__maze_solver_parallel__DOT__core_busy;
        VlWide<8>/*255:0*/ __Vdly__maze_solver_parallel__DOT__core_maze_id;
        SData/*11:0*/ __VdlyDim0__maze_solver_parallel__DOT__maze_mem__v0;
        SData/*12:0*/ __VdlyDim0__maze_solver_parallel__DOT__result_mem__v0;
        VL_IN(s_axi_awaddr,31,0);
        VL_IN(s_axi_wdata,31,0);
        VL_IN(s_axi_araddr,31,0);
        VL_OUT(s_axi_rdata,31,0);
        IData/*31:0*/ maze_solver_parallel__DOT__control_reg;
        IData/*31:0*/ maze_solver_parallel__DOT__status_reg;
        IData/*31:0*/ maze_solver_parallel__DOT__num_mazes_reg;
        IData/*31:0*/ maze_solver_parallel__DOT__mazes_done_reg;
        IData/*31:0*/ maze_solver_parallel__DOT__maze_mem_base;
        IData/*31:0*/ maze_solver_parallel__DOT__result_mem_base;
        IData/*31:0*/ maze_solver_parallel__DOT__maze_mem_addr;
        IData/*31:0*/ maze_solver_parallel__DOT__maze_mem_wdata;
        IData/*31:0*/ maze_solver_parallel__DOT__result_mem_addr;
        IData/*31:0*/ maze_solver_parallel__DOT__result_mem_wdata;
        VlWide<16>/*511:0*/ maze_solver_parallel__DOT__core_path_word0;
        VlWide<16>/*511:0*/ maze_solver_parallel__DOT__core_path_word1;
        VlWide<16>/*511:0*/ maze_solver_parallel__DOT__core_path_word2;
        VlWide<16>/*511:0*/ maze_solver_parallel__DOT__core_path_word3;
        VlWide<16>/*511:0*/ maze_solver_parallel__DOT__core_path_word4;
        VlWide<16>/*511:0*/ maze_solver_parallel__DOT__core_path_word5;
        VlWide<16>/*511:0*/ maze_solver_parallel__DOT__core_grid0;
        VlWide<16>/*511:0*/ maze_solver_parallel__DOT__core_grid1;
        VlWide<16>/*511:0*/ maze_solver_parallel__DOT__core_grid2;
        VlWide<16>/*511:0*/ maze_solver_parallel__DOT__core_grid3;
    };
    struct {
        IData/*31:0*/ maze_solver_parallel__DOT__maze_addr;
        IData/*31:0*/ maze_solver_parallel__DOT__result_addr;
        IData/*31:0*/ maze_solver_parallel__DOT____Vlvbound_he0ef3db9__0;
        IData/*31:0*/ maze_solver_parallel__DOT____Vlvbound_h87b0df76__0;
        IData/*31:0*/ maze_solver_parallel__DOT____Vlvbound_h0906b2dc__0;
        IData/*31:0*/ maze_solver_parallel__DOT____Vlvbound_haf27c38f__0;
        IData/*31:0*/ maze_solver_parallel__DOT____Vlvbound_haf27c2bc__0;
        IData/*31:0*/ maze_solver_parallel__DOT____Vlvbound_haf36726b__0;
        IData/*31:0*/ maze_solver_parallel__DOT____Vlvbound_haec77734__0;
        IData/*31:0*/ maze_solver_parallel__DOT____Vlvbound_haec76763__0;
        IData/*31:0*/ maze_solver_parallel__DOT____Vlvbound_hb143f124__0;
        IData/*31:0*/ maze_solver_parallel__DOT____Vlvbound_hb1fcc2f3__0;
        IData/*31:0*/ __Vdly__maze_solver_parallel__DOT__mazes_done_reg;
        IData/*31:0*/ __Vdly__maze_solver_parallel__DOT__maze_mem_base;
        IData/*31:0*/ __VdlyVal__maze_solver_parallel__DOT__maze_mem__v0;
        IData/*31:0*/ __VdlyVal__maze_solver_parallel__DOT__result_mem__v0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 4000> maze_solver_parallel__DOT__maze_mem;
        VlUnpacked<IData/*31:0*/, 8000> maze_solver_parallel__DOT__result_mem;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmaze_solver_parallel__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmaze_solver_parallel___024root(Vmaze_solver_parallel__Syms* symsp, const char* v__name);
    ~Vmaze_solver_parallel___024root();
    VL_UNCOPYABLE(Vmaze_solver_parallel___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
