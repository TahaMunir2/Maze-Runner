// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmaze_solver_core.h for the primary calling header

#include "Vmaze_solver_core__pch.h"
#include "Vmaze_solver_core___024root.h"

VL_ATTR_COLD void Vmaze_solver_core___024root___eval_static(Vmaze_solver_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_core___024root___eval_static\n"); );
    Vmaze_solver_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vmaze_solver_core___024root___eval_initial(Vmaze_solver_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_core___024root___eval_initial\n"); );
    Vmaze_solver_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmaze_solver_core___024root___eval_final(Vmaze_solver_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_core___024root___eval_final\n"); );
    Vmaze_solver_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmaze_solver_core___024root___dump_triggers__stl(Vmaze_solver_core___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmaze_solver_core___024root___eval_phase__stl(Vmaze_solver_core___024root* vlSelf);

VL_ATTR_COLD void Vmaze_solver_core___024root___eval_settle(Vmaze_solver_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_core___024root___eval_settle\n"); );
    Vmaze_solver_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vmaze_solver_core___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("maze_solver_core.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmaze_solver_core___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmaze_solver_core___024root___dump_triggers__stl(Vmaze_solver_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_core___024root___dump_triggers__stl\n"); );
    Vmaze_solver_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vmaze_solver_core___024root___stl_sequent__TOP__0(Vmaze_solver_core___024root* vlSelf);

VL_ATTR_COLD void Vmaze_solver_core___024root___eval_stl(Vmaze_solver_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_core___024root___eval_stl\n"); );
    Vmaze_solver_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vmaze_solver_core___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vmaze_solver_core___024root___stl_sequent__TOP__0(Vmaze_solver_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_core___024root___stl_sequent__TOP__0\n"); );
    Vmaze_solver_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.path_len = vlSelfRef.maze_solver_core__DOT__path_len_reg;
    vlSelfRef.path_word0 = vlSelfRef.maze_solver_core__DOT__path_words
        [0U];
    vlSelfRef.path_word1 = vlSelfRef.maze_solver_core__DOT__path_words
        [1U];
    vlSelfRef.path_word2 = vlSelfRef.maze_solver_core__DOT__path_words
        [2U];
    vlSelfRef.path_word3 = vlSelfRef.maze_solver_core__DOT__path_words
        [3U];
    vlSelfRef.path_word4 = vlSelfRef.maze_solver_core__DOT__path_words
        [4U];
    vlSelfRef.path_word5 = vlSelfRef.maze_solver_core__DOT__path_words
        [5U];
    vlSelfRef.path_word6 = vlSelfRef.maze_solver_core__DOT__path_words
        [6U];
}

VL_ATTR_COLD void Vmaze_solver_core___024root___eval_triggers__stl(Vmaze_solver_core___024root* vlSelf);

VL_ATTR_COLD bool Vmaze_solver_core___024root___eval_phase__stl(Vmaze_solver_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_core___024root___eval_phase__stl\n"); );
    Vmaze_solver_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmaze_solver_core___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vmaze_solver_core___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmaze_solver_core___024root___dump_triggers__act(Vmaze_solver_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_core___024root___dump_triggers__act\n"); );
    Vmaze_solver_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmaze_solver_core___024root___dump_triggers__nba(Vmaze_solver_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_core___024root___dump_triggers__nba\n"); );
    Vmaze_solver_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmaze_solver_core___024root___ctor_var_reset(Vmaze_solver_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_core___024root___ctor_var_reset\n"); );
    Vmaze_solver_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9867861323841650631ull);
    vlSelf->grid0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1862437880860874839ull);
    vlSelf->grid1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12695811892588907155ull);
    vlSelf->grid2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13978605058352999989ull);
    vlSelf->grid3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11534313734606634685ull);
    vlSelf->done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10296494685231209730ull);
    vlSelf->path_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14470622935530075418ull);
    vlSelf->path_word0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16408729472157823957ull);
    vlSelf->path_word1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15080482152089666894ull);
    vlSelf->path_word2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2999163070224720514ull);
    vlSelf->path_word3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9802896947556956916ull);
    vlSelf->path_word4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 186460582866001737ull);
    vlSelf->path_word5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4334852283928067726ull);
    vlSelf->path_word6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5096274582918213404ull);
    vlSelf->valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944192500720994163ull);
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->maze_solver_core__DOT__visited[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 908786523092607624ull);
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->maze_solver_core__DOT__parent_dir[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 684172900639656433ull);
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->maze_solver_core__DOT__has_parent[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14490299514797888413ull);
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->maze_solver_core__DOT__queue[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15967713679597632174ull);
    }
    vlSelf->maze_solver_core__DOT__q_head = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 577468776568887357ull);
    vlSelf->maze_solver_core__DOT__q_tail = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7391130829803196519ull);
    vlSelf->maze_solver_core__DOT__q_count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13278475249127473830ull);
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->maze_solver_core__DOT__path_buf[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9874593244593050578ull);
    }
    vlSelf->maze_solver_core__DOT__path_len_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9507754316866201475ull);
    vlSelf->maze_solver_core__DOT__st = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12291074820317317974ull);
    vlSelf->maze_solver_core__DOT__cur_x_reg = 0;
    vlSelf->maze_solver_core__DOT__cur_y_reg = 0;
    vlSelf->maze_solver_core__DOT__nb_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5653181078435652560ull);
    vlSelf->maze_solver_core__DOT__bt_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1175175170325218644ull);
    vlSelf->maze_solver_core__DOT__bt_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10141008945180228121ull);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->maze_solver_core__DOT__path_words[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10659183026358001702ull);
    }
    vlSelf->maze_solver_core__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15517345867274342014ull);
    vlSelf->maze_solver_core__DOT__unnamedblk1__DOT__popped_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6089652800232886779ull);
    vlSelf->maze_solver_core__DOT__unnamedblk2__DOT__nx = 0;
    vlSelf->maze_solver_core__DOT__unnamedblk2__DOT__ny = 0;
    vlSelf->maze_solver_core__DOT__unnamedblk2__DOT__dir_to_neighbor = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10060028534082999445ull);
    vlSelf->maze_solver_core__DOT__unnamedblk2__DOT__unnamedblk3__DOT__nidx = 0;
    vlSelf->maze_solver_core__DOT__unnamedblk4__DOT__bx = 0;
    vlSelf->maze_solver_core__DOT__unnamedblk4__DOT__by = 0;
    vlSelf->maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10687804776006884700ull);
    vlSelf->maze_solver_core__DOT__unnamedblk4__DOT__unnamedblk5__DOT__d_back = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11367294525999180346ull);
    vlSelf->maze_solver_core__DOT__unnamedblk6__DOT__fwd_i = 0;
    vlSelf->maze_solver_core__DOT__unnamedblk6__DOT__word_i = 0;
    vlSelf->maze_solver_core__DOT__unnamedblk6__DOT__bitpos = 0;
    vlSelf->maze_solver_core__DOT__unnamedblk6__DOT__mv = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16763860823025041966ull);
    vlSelf->maze_solver_core__DOT____Vlvbound_h1e62cca8__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18220366530253125434ull);
    vlSelf->maze_solver_core__DOT____Vlvbound_h7a4d3d60__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15372175993026844747ull);
    vlSelf->maze_solver_core__DOT____Vlvbound_h9d5f4d18__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2845636294583637913ull);
    vlSelf->maze_solver_core__DOT____Vlvbound_hffa0b24d__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5365137866355252309ull);
    vlSelf->maze_solver_core__DOT____Vlvbound_h9b0fa813__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17231398578326585501ull);
    vlSelf->maze_solver_core__DOT____Vlvbound_h3c9c8691__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11454694375425181856ull);
    vlSelf->maze_solver_core__DOT____Vlvbound_hdabc1705__1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17851659484238857411ull);
    vlSelf->maze_solver_core__DOT____Vlvbound_h73cb18d2__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10768112801713246127ull);
    vlSelf->maze_solver_core__DOT____Vlvbound_h95c5206c__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3992126261681034302ull);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
}
