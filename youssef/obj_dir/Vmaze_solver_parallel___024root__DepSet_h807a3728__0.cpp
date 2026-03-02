// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmaze_solver_parallel.h for the primary calling header

#include "Vmaze_solver_parallel__pch.h"
#include "Vmaze_solver_parallel___024root.h"

void Vmaze_solver_parallel___024root___eval_triggers__ico(Vmaze_solver_parallel___024root* vlSelf);
void Vmaze_solver_parallel___024root___eval_ico(Vmaze_solver_parallel___024root* vlSelf);

bool Vmaze_solver_parallel___024root___eval_phase__ico(Vmaze_solver_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_parallel___024root___eval_phase__ico\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vmaze_solver_parallel___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vmaze_solver_parallel___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vmaze_solver_parallel___024root___eval_act(Vmaze_solver_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_parallel___024root___eval_act\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_INLINE_OPT void Vmaze_solver_parallel___024root___nba_sequent__TOP__0(Vmaze_solver_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_parallel___024root___nba_sequent__TOP__0\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__s_axi_awready;
    __Vdly__s_axi_awready = 0;
    CData/*0:0*/ __Vdly__s_axi_bvalid;
    __Vdly__s_axi_bvalid = 0;
    CData/*0:0*/ __Vdly__s_axi_arready;
    __Vdly__s_axi_arready = 0;
    CData/*0:0*/ __Vdly__s_axi_rvalid;
    __Vdly__s_axi_rvalid = 0;
    IData/*31:0*/ __Vdly__maze_solver_parallel__DOT__result_mem_addr;
    __Vdly__maze_solver_parallel__DOT__result_mem_addr = 0;
    // Body
    __Vdly__s_axi_awready = vlSelfRef.s_axi_awready;
    __Vdly__s_axi_bvalid = vlSelfRef.s_axi_bvalid;
    vlSelfRef.__Vdly__maze_solver_parallel__DOT__maze_mem_base 
        = vlSelfRef.maze_solver_parallel__DOT__maze_mem_base;
    vlSelfRef.__Vdly__s_axi_wready = vlSelfRef.s_axi_wready;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__maze_mem__v0 = 0U;
    __Vdly__s_axi_arready = vlSelfRef.s_axi_arready;
    __Vdly__s_axi_rvalid = vlSelfRef.s_axi_rvalid;
    __Vdly__maze_solver_parallel__DOT__result_mem_addr 
        = vlSelfRef.maze_solver_parallel__DOT__result_mem_addr;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v0 = 0U;
    vlSelfRef.__Vdly__maze_solver_parallel__DOT__current_maze_idx 
        = vlSelfRef.maze_solver_parallel__DOT__current_maze_idx;
    vlSelfRef.__Vdly__maze_solver_parallel__DOT__next_free_core 
        = vlSelfRef.maze_solver_parallel__DOT__next_free_core;
    vlSelfRef.__Vdly__maze_solver_parallel__DOT__core_maze_id[0U] 
        = vlSelfRef.maze_solver_parallel__DOT__core_maze_id[0U];
    vlSelfRef.__Vdly__maze_solver_parallel__DOT__core_maze_id[1U] 
        = vlSelfRef.maze_solver_parallel__DOT__core_maze_id[1U];
    vlSelfRef.__Vdly__maze_solver_parallel__DOT__core_maze_id[2U] 
        = vlSelfRef.maze_solver_parallel__DOT__core_maze_id[2U];
    vlSelfRef.__Vdly__maze_solver_parallel__DOT__core_maze_id[3U] 
        = vlSelfRef.maze_solver_parallel__DOT__core_maze_id[3U];
    vlSelfRef.__Vdly__maze_solver_parallel__DOT__core_maze_id[4U] 
        = vlSelfRef.maze_solver_parallel__DOT__core_maze_id[4U];
    vlSelfRef.__Vdly__maze_solver_parallel__DOT__core_maze_id[5U] 
        = vlSelfRef.maze_solver_parallel__DOT__core_maze_id[5U];
    vlSelfRef.__Vdly__maze_solver_parallel__DOT__core_maze_id[6U] 
        = vlSelfRef.maze_solver_parallel__DOT__core_maze_id[6U];
    vlSelfRef.__Vdly__maze_solver_parallel__DOT__core_maze_id[7U] 
        = vlSelfRef.maze_solver_parallel__DOT__core_maze_id[7U];
    vlSelfRef.__Vdly__maze_solver_parallel__DOT__core_busy 
        = vlSelfRef.maze_solver_parallel__DOT__core_busy;
    vlSelfRef.__Vdly__maze_solver_parallel__DOT__mazes_done_reg 
        = vlSelfRef.maze_solver_parallel__DOT__mazes_done_reg;
    vlSelfRef.__Vdly__maze_solver_parallel__DOT__sched_state 
        = vlSelfRef.maze_solver_parallel__DOT__sched_state;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v1 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v2 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v3 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v4 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v5 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v6 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v7 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v8 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v9 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v10 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v11 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v12 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v13 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v14 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v15 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v16 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v17 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v18 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v19 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v20 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v21 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v22 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v23 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v24 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v25 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v26 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v27 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v28 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v29 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v30 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v31 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v32 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v33 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v34 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v35 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v36 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v37 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v38 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v39 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v40 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v41 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v42 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v43 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v44 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v45 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v46 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v47 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v48 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v49 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v50 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v51 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v52 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v53 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v54 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v55 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v56 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v57 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v58 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v59 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v60 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v61 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v62 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v63 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v64 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v65 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v66 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v67 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v68 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v69 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v70 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v71 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v72 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v73 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v74 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v75 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v76 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v77 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v78 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v79 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v80 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v81 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v82 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v83 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v84 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v85 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v86 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v87 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v88 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v89 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v90 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v91 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v92 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v93 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v94 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v95 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v96 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v97 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v98 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v99 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v100 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v101 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v102 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v103 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v104 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v105 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v106 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v107 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v108 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v109 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v110 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v111 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v112 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v113 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v114 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v115 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v116 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v117 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v118 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v119 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v120 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v121 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v122 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v123 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v124 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v125 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v126 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v127 = 0U;
    vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v128 = 0U;
    __Vdly__s_axi_awready = ((1U & (~ (IData)(vlSelfRef.rst))) 
                             && ((IData)(vlSelfRef.s_axi_awvalid) 
                                 & (~ (IData)(vlSelfRef.s_axi_awready))));
    if (vlSelfRef.maze_solver_parallel__DOT__maze_mem_we) {
        vlSelfRef.maze_solver_parallel__DOT____Vlvbound_he0ef3db9__0 
            = vlSelfRef.maze_solver_parallel__DOT__maze_mem_wdata;
        if ((0xf9fU >= (0xfffU & vlSelfRef.maze_solver_parallel__DOT__maze_mem_addr))) {
            vlSelfRef.__VdlyVal__maze_solver_parallel__DOT__maze_mem__v0 
                = vlSelfRef.maze_solver_parallel__DOT____Vlvbound_he0ef3db9__0;
            vlSelfRef.__VdlyDim0__maze_solver_parallel__DOT__maze_mem__v0 
                = (0xfffU & vlSelfRef.maze_solver_parallel__DOT__maze_mem_addr);
            vlSelfRef.__VdlySet__maze_solver_parallel__DOT__maze_mem__v0 = 1U;
        }
    }
    if (vlSelfRef.maze_solver_parallel__DOT__result_mem_we) {
        vlSelfRef.maze_solver_parallel__DOT____Vlvbound_h87b0df76__0 
            = vlSelfRef.maze_solver_parallel__DOT__result_mem_wdata;
        if ((0x1f3fU >= (0x1fffU & vlSelfRef.maze_solver_parallel__DOT__result_mem_addr))) {
            vlSelfRef.__VdlyVal__maze_solver_parallel__DOT__result_mem__v0 
                = vlSelfRef.maze_solver_parallel__DOT____Vlvbound_h87b0df76__0;
            vlSelfRef.__VdlyDim0__maze_solver_parallel__DOT__result_mem__v0 
                = (0x1fffU & vlSelfRef.maze_solver_parallel__DOT__result_mem_addr);
            vlSelfRef.__VdlySet__maze_solver_parallel__DOT__result_mem__v0 = 1U;
        }
    }
    if (vlSelfRef.rst) {
        __Vdly__s_axi_bvalid = 0U;
        __Vdly__s_axi_arready = 0U;
        __Vdly__s_axi_rvalid = 0U;
        vlSelfRef.s_axi_rdata = 0U;
        __Vdly__maze_solver_parallel__DOT__result_mem_addr = 0U;
    } else {
        if (((((IData)(vlSelfRef.s_axi_awready) & (IData)(vlSelfRef.s_axi_awvalid)) 
              & ((IData)(vlSelfRef.s_axi_wready) & (IData)(vlSelfRef.s_axi_wvalid))) 
             & (~ (IData)(vlSelfRef.s_axi_bvalid)))) {
            __Vdly__s_axi_bvalid = 1U;
            vlSelfRef.s_axi_bresp = 0U;
        } else if (vlSelfRef.s_axi_bready) {
            __Vdly__s_axi_bvalid = 0U;
        }
        if (((IData)(vlSelfRef.s_axi_arvalid) & (~ (IData)(vlSelfRef.s_axi_arready)))) {
            __Vdly__s_axi_arready = 1U;
            if ((0U == (0xffU & vlSelfRef.s_axi_araddr))) {
                vlSelfRef.s_axi_rdata = vlSelfRef.maze_solver_parallel__DOT__control_reg;
            } else if ((4U == (0xffU & vlSelfRef.s_axi_araddr))) {
                vlSelfRef.s_axi_rdata = vlSelfRef.maze_solver_parallel__DOT__status_reg;
            } else if ((8U == (0xffU & vlSelfRef.s_axi_araddr))) {
                vlSelfRef.s_axi_rdata = vlSelfRef.maze_solver_parallel__DOT__num_mazes_reg;
            } else if ((0xcU == (0xffU & vlSelfRef.s_axi_araddr))) {
                vlSelfRef.s_axi_rdata = vlSelfRef.maze_solver_parallel__DOT__mazes_done_reg;
            } else if ((0x20U == (0xffU & vlSelfRef.s_axi_araddr))) {
                vlSelfRef.s_axi_rdata = vlSelfRef.maze_solver_parallel__DOT__maze_mem_base;
            } else if ((0x24U == (0xffU & vlSelfRef.s_axi_araddr))) {
                vlSelfRef.s_axi_rdata = vlSelfRef.maze_solver_parallel__DOT__result_mem_base;
            } else if (((vlSelfRef.s_axi_araddr >= vlSelfRef.maze_solver_parallel__DOT__result_mem_base) 
                        & (vlSelfRef.s_axi_araddr < 
                           ((IData)(0x7d00U) + vlSelfRef.maze_solver_parallel__DOT__result_mem_base)))) {
                vlSelfRef.s_axi_rdata = ((0x1f3fU >= 
                                          (0x1fffU 
                                           & vlSelfRef.maze_solver_parallel__DOT__result_mem_addr))
                                          ? vlSelfRef.maze_solver_parallel__DOT__result_mem
                                         [(0x1fffU 
                                           & vlSelfRef.maze_solver_parallel__DOT__result_mem_addr)]
                                          : 0U);
                __Vdly__maze_solver_parallel__DOT__result_mem_addr 
                    = VL_SHIFTR_III(32,32,32, (vlSelfRef.s_axi_araddr 
                                               - vlSelfRef.maze_solver_parallel__DOT__result_mem_base), 2U);
            } else {
                vlSelfRef.s_axi_rdata = 0U;
            }
        } else {
            __Vdly__s_axi_arready = 0U;
        }
        if (((IData)(vlSelfRef.s_axi_arready) & (~ (IData)(vlSelfRef.s_axi_rvalid)))) {
            __Vdly__s_axi_rvalid = 1U;
            vlSelfRef.s_axi_rresp = 0U;
        } else if (vlSelfRef.s_axi_rready) {
            __Vdly__s_axi_rvalid = 0U;
        }
    }
    vlSelfRef.s_axi_bvalid = __Vdly__s_axi_bvalid;
    vlSelfRef.s_axi_awready = __Vdly__s_axi_awready;
    vlSelfRef.s_axi_arready = __Vdly__s_axi_arready;
    vlSelfRef.s_axi_rvalid = __Vdly__s_axi_rvalid;
    vlSelfRef.maze_solver_parallel__DOT__result_mem_addr 
        = __Vdly__maze_solver_parallel__DOT__result_mem_addr;
}

void Vmaze_solver_parallel___024root___eval_triggers__act(Vmaze_solver_parallel___024root* vlSelf);

bool Vmaze_solver_parallel___024root___eval_phase__act(Vmaze_solver_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_parallel___024root___eval_phase__act\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmaze_solver_parallel___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmaze_solver_parallel___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vmaze_solver_parallel___024root___eval_nba(Vmaze_solver_parallel___024root* vlSelf);

bool Vmaze_solver_parallel___024root___eval_phase__nba(Vmaze_solver_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_parallel___024root___eval_phase__nba\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmaze_solver_parallel___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmaze_solver_parallel___024root___dump_triggers__ico(Vmaze_solver_parallel___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmaze_solver_parallel___024root___dump_triggers__nba(Vmaze_solver_parallel___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmaze_solver_parallel___024root___dump_triggers__act(Vmaze_solver_parallel___024root* vlSelf);
#endif  // VL_DEBUG

void Vmaze_solver_parallel___024root___eval(Vmaze_solver_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_parallel___024root___eval\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vmaze_solver_parallel___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("maze_solver_parallel.sv", 5, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vmaze_solver_parallel___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmaze_solver_parallel___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("maze_solver_parallel.sv", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmaze_solver_parallel___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("maze_solver_parallel.sv", 5, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmaze_solver_parallel___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmaze_solver_parallel___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmaze_solver_parallel___024root___eval_debug_assertions(Vmaze_solver_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_parallel___024root___eval_debug_assertions\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY(((vlSelfRef.s_axi_awvalid & 0xfeU)))) {
        Verilated::overWidthError("s_axi_awvalid");}
    if (VL_UNLIKELY(((vlSelfRef.s_axi_wvalid & 0xfeU)))) {
        Verilated::overWidthError("s_axi_wvalid");}
    if (VL_UNLIKELY(((vlSelfRef.s_axi_bready & 0xfeU)))) {
        Verilated::overWidthError("s_axi_bready");}
    if (VL_UNLIKELY(((vlSelfRef.s_axi_arvalid & 0xfeU)))) {
        Verilated::overWidthError("s_axi_arvalid");}
    if (VL_UNLIKELY(((vlSelfRef.s_axi_rready & 0xfeU)))) {
        Verilated::overWidthError("s_axi_rready");}
}
#endif  // VL_DEBUG
