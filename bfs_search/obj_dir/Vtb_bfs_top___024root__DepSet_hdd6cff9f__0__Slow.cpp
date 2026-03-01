// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_bfs_top.h for the primary calling header

#include "Vtb_bfs_top__pch.h"
#include "Vtb_bfs_top___024root.h"

VL_ATTR_COLD void Vtb_bfs_top___024root___eval_static(Vtb_bfs_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bfs_top___024root___eval_static\n"); );
    Vtb_bfs_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_bfs_top__DOT__clk__0 
        = vlSelfRef.tb_bfs_top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_bfs_top__DOT__rst__0 
        = vlSelfRef.tb_bfs_top__DOT__rst;
}

VL_ATTR_COLD void Vtb_bfs_top___024root___eval_initial__TOP(Vtb_bfs_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bfs_top___024root___eval_initial__TOP\n"); );
    Vtb_bfs_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_bfs_top__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_bfs_top___024root___eval_final(Vtb_bfs_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bfs_top___024root___eval_final\n"); );
    Vtb_bfs_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bfs_top___024root___dump_triggers__stl(Vtb_bfs_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_bfs_top___024root___eval_phase__stl(Vtb_bfs_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_bfs_top___024root___eval_settle(Vtb_bfs_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bfs_top___024root___eval_settle\n"); );
    Vtb_bfs_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_bfs_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_bfs_top.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_bfs_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bfs_top___024root___dump_triggers__stl(Vtb_bfs_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bfs_top___024root___dump_triggers__stl\n"); );
    Vtb_bfs_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_bfs_top___024root___stl_sequent__TOP__0(Vtb_bfs_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_bfs_top___024root___eval_stl(Vtb_bfs_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bfs_top___024root___eval_stl\n"); );
    Vtb_bfs_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_bfs_top___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> Vtb_bfs_top__ConstPool__TABLE_hdc9aca40_0;

VL_ATTR_COLD void Vtb_bfs_top___024root___stl_sequent__TOP__0(Vtb_bfs_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bfs_top___024root___stl_sequent__TOP__0\n"); );
    Vtb_bfs_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__11__Vfuncout;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__11__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__11__r;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__11__r = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__11__c;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__11__c = 0;
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.tb_bfs_top__DOT__dut__DOT__fsm__DOT____VdfgRegularize_ha3d9603b_0_0 
        = ((2U == (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__fsm__DOT__st)) 
           & (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_done));
    __Vtableidx1 = (((IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_done) 
                     << 4U) | (((IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__dist_done) 
                                << 3U) | (((IData)(vlSelfRef.tb_bfs_top__DOT__start) 
                                           << 2U) | (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__fsm__DOT__st))));
    vlSelfRef.tb_bfs_top__DOT__dut__DOT__fsm__DOT__st_n 
        = Vtb_bfs_top__ConstPool__TABLE_hdc9aca40_0
        [__Vtableidx1];
    __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__11__c 
        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__sx;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__11__r 
        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__sy;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__11__Vfuncout 
        = (0x7fU & (((IData)(0xaU) * (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__11__r)) 
                    + (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__11__c)));
    vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__scan_idx 
        = __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__11__Vfuncout;
}

VL_ATTR_COLD void Vtb_bfs_top___024root___eval_triggers__stl(Vtb_bfs_top___024root* vlSelf);

VL_ATTR_COLD bool Vtb_bfs_top___024root___eval_phase__stl(Vtb_bfs_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bfs_top___024root___eval_phase__stl\n"); );
    Vtb_bfs_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_bfs_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_bfs_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bfs_top___024root___dump_triggers__act(Vtb_bfs_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bfs_top___024root___dump_triggers__act\n"); );
    Vtb_bfs_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_bfs_top.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_bfs_top.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bfs_top___024root___dump_triggers__nba(Vtb_bfs_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bfs_top___024root___dump_triggers__nba\n"); );
    Vtb_bfs_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_bfs_top.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_bfs_top.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_bfs_top___024root___ctor_var_reset(Vtb_bfs_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bfs_top___024root___ctor_var_reset\n"); );
    Vtb_bfs_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_bfs_top__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13237074105358990740ull);
    vlSelf->tb_bfs_top__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 619426906030083690ull);
    vlSelf->tb_bfs_top__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11382253579002628850ull);
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_bfs_top__DOT__maze[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4091524852604120287ull);
    }
    for (int __Vi0 = 0; __Vi0 < 99; ++__Vi0) {
        vlSelf->tb_bfs_top__DOT__path[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17860648360877539426ull);
    }
    vlSelf->tb_bfs_top__DOT__path_length = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5825956374653127571ull);
    vlSelf->tb_bfs_top__DOT__solve_cycles = 0;
    vlSelf->tb_bfs_top__DOT__counting = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4560117938191690946ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__dist_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14543206099493323417ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__bt_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1865134617280994237ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__bt_no_path = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3148230780007065657ull);
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->tb_bfs_top__DOT__dut__DOT__dist_table[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10351897614909031144ull);
    }
    vlSelf->tb_bfs_top__DOT__dut__DOT__bt_widx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16051839714061072700ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__bt_wdata = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12177329817609594373ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__bt_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14144834532005631427ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_bfs_top__DOT__dut__DOT____Vlvbound_h24742f5c__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7377788843370596772ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT____Vlvbound_h11a44dc8__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12814242195585692005ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__fsm__DOT__st = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10429798695970007738ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__fsm__DOT__st_n = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13886058750000227589ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__fsm__DOT____VdfgRegularize_ha3d9603b_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3492455594050686422ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__distmap__DOT__st = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14378048926680347680ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__distmap__DOT__init_i = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17269598158076298880ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__distmap__DOT__sx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6525966022779368841ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__distmap__DOT__sy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5798393312307928075ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__distmap__DOT__d = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12131627611074581391ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__distmap__DOT__changed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4749715475354435888ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__distmap__DOT__scan_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16630133188463107712ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__distmap__DOT__dist_cycles = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16386449576159121115ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__distmap__DOT__dist_printed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10927838761764952293ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk2__DOT__nidx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18344087787905813683ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk3__DOT__nidx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2998695468331480619ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk4__DOT__nidx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7801625363179622667ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk5__DOT__nidx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10393946632250533228ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_heb6b86b7__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12952484206858742609ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_hd8d98a8f__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12599956408969853479ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_hcbc282ad__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11999088105546756495ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_hdebbed7b__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12019089524140996786ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_h2dc1b6d6__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6212701600680570909ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_h1d685d3f__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17160014872309886363ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__bt__DOT__st = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13198868622863418165ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2600543176308700156ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4667458988653945455ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_d = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10644713496323312382ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__bt__DOT__wptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10438761804346682765ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__bt__DOT__bt_cycles = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8323152798878687983ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__bt__DOT__bt_printed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4362010288295629300ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__moved = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9970423820432373286ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__nidx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16726646468127629887ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__unnamedblk3__DOT__nidx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16576133010376699910ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__unnamedblk4__DOT__nidx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17082431380980986337ull);
    vlSelf->tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__unnamedblk5__DOT__nidx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4214631874347176030ull);
    vlSelf->__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__bt_printed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11763257153002675393ull);
    vlSelf->__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__bt_cycles = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16568110673209352833ull);
    vlSelf->__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__st = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1392110988123896007ull);
    vlSelf->__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15418568655666139432ull);
    vlSelf->__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14406677534910285316ull);
    vlSelf->__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_d = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15363110914192810174ull);
    vlSelf->__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__wptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13086255070456443946ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_bfs_top__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16684256961057382251ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_bfs_top__DOT__rst__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4451261266440448568ull);
}
