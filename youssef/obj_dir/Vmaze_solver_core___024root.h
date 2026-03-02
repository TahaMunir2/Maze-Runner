// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmaze_solver_core.h for the primary calling header

#ifndef VERILATED_VMAZE_SOLVER_CORE___024ROOT_H_
#define VERILATED_VMAZE_SOLVER_CORE___024ROOT_H_  // guard

#include "verilated.h"


class Vmaze_solver_core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmaze_solver_core___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(start,0,0);
    VL_OUT8(done,0,0);
    VL_OUT8(path_len,7,0);
    VL_OUT8(valid,0,0);
    CData/*6:0*/ maze_solver_core__DOT__q_head;
    CData/*6:0*/ maze_solver_core__DOT__q_tail;
    CData/*6:0*/ maze_solver_core__DOT__q_count;
    CData/*7:0*/ maze_solver_core__DOT__path_len_reg;
    CData/*2:0*/ maze_solver_core__DOT__st;
    CData/*1:0*/ maze_solver_core__DOT__nb_i;
    CData/*6:0*/ maze_solver_core__DOT__bt_idx;
    CData/*7:0*/ maze_solver_core__DOT__bt_len;
    CData/*6:0*/ maze_solver_core__DOT__unnamedblk1__DOT__popped_idx;
    CData/*1:0*/ maze_solver_core__DOT__unnamedblk2__DOT__dir_to_neighbor;
    CData/*1:0*/ maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd;
    CData/*1:0*/ maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_back;
    CData/*1:0*/ maze_solver_core__DOT__unnamedblk6__DOT__mv;
    CData/*0:0*/ maze_solver_core__DOT____Vlvbound_h1e62cca8__0;
    CData/*0:0*/ maze_solver_core__DOT____Vlvbound_h7a4d3d60__0;
    CData/*1:0*/ maze_solver_core__DOT____Vlvbound_h9d5f4d18__0;
    CData/*0:0*/ maze_solver_core__DOT____Vlvbound_hffa0b24d__0;
    CData/*0:0*/ maze_solver_core__DOT____Vlvbound_h9b0fa813__0;
    CData/*1:0*/ maze_solver_core__DOT____Vlvbound_h3c9c8691__0;
    CData/*6:0*/ maze_solver_core__DOT____Vlvbound_hdabc1705__1;
    CData/*1:0*/ maze_solver_core__DOT____Vlvbound_h73cb18d2__0;
    CData/*1:0*/ maze_solver_core__DOT____Vlvbound_h95c5206c__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(grid0,31,0);
    VL_IN(grid1,31,0);
    VL_IN(grid2,31,0);
    VL_IN(grid3,31,0);
    VL_OUT(path_word0,31,0);
    VL_OUT(path_word1,31,0);
    VL_OUT(path_word2,31,0);
    VL_OUT(path_word3,31,0);
    VL_OUT(path_word4,31,0);
    VL_OUT(path_word5,31,0);
    VL_OUT(path_word6,31,0);
    IData/*31:0*/ maze_solver_core__DOT__cur_x_reg;
    IData/*31:0*/ maze_solver_core__DOT__cur_y_reg;
    IData/*31:0*/ maze_solver_core__DOT__i;
    IData/*31:0*/ maze_solver_core__DOT__unnamedblk2__DOT__nx;
    IData/*31:0*/ maze_solver_core__DOT__unnamedblk2__DOT__ny;
    IData/*31:0*/ maze_solver_core__DOT__unnamedblk2__DOT__unnamedblk3__DOT__nidx;
    IData/*31:0*/ maze_solver_core__DOT__unnamedblk4__DOT__bx;
    IData/*31:0*/ maze_solver_core__DOT__unnamedblk4__DOT__by;
    IData/*31:0*/ maze_solver_core__DOT__unnamedblk6__DOT__fwd_i;
    IData/*31:0*/ maze_solver_core__DOT__unnamedblk6__DOT__word_i;
    IData/*31:0*/ maze_solver_core__DOT__unnamedblk6__DOT__bitpos;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 100> maze_solver_core__DOT__visited;
    VlUnpacked<CData/*1:0*/, 100> maze_solver_core__DOT__parent_dir;
    VlUnpacked<CData/*0:0*/, 100> maze_solver_core__DOT__has_parent;
    VlUnpacked<CData/*6:0*/, 100> maze_solver_core__DOT__queue;
    VlUnpacked<CData/*1:0*/, 100> maze_solver_core__DOT__path_buf;
    VlUnpacked<IData/*31:0*/, 7> maze_solver_core__DOT__path_words;
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 7>, true, IData/*31:0*/, 1> __VdlyCommitQueuemaze_solver_core__DOT__path_words;
    VlNBACommitQueue<VlUnpacked<CData/*0:0*/, 100>, false, CData/*0:0*/, 1> __VdlyCommitQueuemaze_solver_core__DOT__visited;
    VlNBACommitQueue<VlUnpacked<CData/*0:0*/, 100>, false, CData/*0:0*/, 1> __VdlyCommitQueuemaze_solver_core__DOT__has_parent;
    VlNBACommitQueue<VlUnpacked<CData/*1:0*/, 100>, false, CData/*1:0*/, 1> __VdlyCommitQueuemaze_solver_core__DOT__parent_dir;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmaze_solver_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmaze_solver_core___024root(Vmaze_solver_core__Syms* symsp, const char* v__name);
    ~Vmaze_solver_core___024root();
    VL_UNCOPYABLE(Vmaze_solver_core___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
