// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmaze_solver_parallel.h for the primary calling header

#include "Vmaze_solver_parallel__pch.h"
#include "Vmaze_solver_parallel__Syms.h"
#include "Vmaze_solver_parallel___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmaze_solver_parallel___024root___dump_triggers__stl(Vmaze_solver_parallel___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmaze_solver_parallel___024root___eval_triggers__stl(Vmaze_solver_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_parallel___024root___eval_triggers__stl\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmaze_solver_parallel___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vmaze_solver_parallel___024root___stl_sequent__TOP__0(Vmaze_solver_parallel___024root* vlSelf);
void Vmaze_solver_parallel_maze_solver_core__N64___ico_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__0__KET____DOT__solver_inst__0(Vmaze_solver_parallel_maze_solver_core__N64* vlSelf);

VL_ATTR_COLD void Vmaze_solver_parallel___024root___eval_stl(Vmaze_solver_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_parallel___024root___eval_stl\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vmaze_solver_parallel___024root___stl_sequent__TOP__0(vlSelf);
        Vmaze_solver_parallel_maze_solver_core__N64___ico_sequent__TOP__maze_solver_parallel__DOT__gen_cores__BRA__0__KET____DOT__solver_inst__0((&vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__0__KET____DOT__solver_inst));
    }
}

VL_ATTR_COLD void Vmaze_solver_parallel___024root___stl_sequent__TOP__0(Vmaze_solver_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaze_solver_parallel___024root___stl_sequent__TOP__0\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.maze_solver_parallel__DOT__status_reg = 0U;
    vlSelfRef.maze_solver_parallel__DOT__status_reg 
        = ((0xfffffffcU & vlSelfRef.maze_solver_parallel__DOT__status_reg) 
           | (((2U == (IData)(vlSelfRef.maze_solver_parallel__DOT__sched_state)) 
               << 1U) | (0U == (IData)(vlSelfRef.maze_solver_parallel__DOT__sched_state))));
    vlSelfRef.maze_solver_parallel__DOT__status_reg 
        = ((0xffff00ffU & vlSelfRef.maze_solver_parallel__DOT__status_reg) 
           | (0xff00U & (VL_COUNTONES_I((IData)(vlSelfRef.maze_solver_parallel__DOT__core_busy)) 
                         << 8U)));
    vlSelfRef.irq = ((vlSelfRef.maze_solver_parallel__DOT__mazes_done_reg 
                      >= vlSelfRef.maze_solver_parallel__DOT__num_mazes_reg) 
                     & ((0U < vlSelfRef.maze_solver_parallel__DOT__num_mazes_reg) 
                        & ((~ (vlSelfRef.maze_solver_parallel__DOT__control_reg 
                               >> 1U)) & (2U == (IData)(vlSelfRef.maze_solver_parallel__DOT__sched_state)))));
    vlSelfRef.maze_solver_parallel__DOT__core_valid 
        = ((((((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__15__KET____DOT__solver_inst.valid) 
               << 0xfU) | ((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__14__KET____DOT__solver_inst.valid) 
                           << 0xeU)) | (((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__13__KET____DOT__solver_inst.valid) 
                                         << 0xdU) | 
                                        ((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__12__KET____DOT__solver_inst.valid) 
                                         << 0xcU))) 
            | ((((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__11__KET____DOT__solver_inst.valid) 
                 << 0xbU) | ((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__10__KET____DOT__solver_inst.valid) 
                             << 0xaU)) | (((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__9__KET____DOT__solver_inst.valid) 
                                           << 9U) | 
                                          ((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__8__KET____DOT__solver_inst.valid) 
                                           << 8U)))) 
           | (((((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__7__KET____DOT__solver_inst.valid) 
                 << 7U) | ((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__6__KET____DOT__solver_inst.valid) 
                           << 6U)) | (((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__5__KET____DOT__solver_inst.valid) 
                                       << 5U) | ((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__4__KET____DOT__solver_inst.valid) 
                                                 << 4U))) 
              | ((((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__3__KET____DOT__solver_inst.valid) 
                   << 3U) | ((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__2__KET____DOT__solver_inst.valid) 
                             << 2U)) | (((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__1__KET____DOT__solver_inst.valid) 
                                         << 1U) | (IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__0__KET____DOT__solver_inst.valid)))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word0[0U] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__0__KET____DOT__solver_inst.__PVT__path_words
        [0U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word0[1U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__2__KET____DOT__solver_inst.__PVT__path_words
                                    [0U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__1__KET____DOT__solver_inst.__PVT__path_words
                                     [0U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word0[2U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__2__KET____DOT__solver_inst.__PVT__path_words
                                     [0U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__1__KET____DOT__solver_inst.__PVT__path_words
                                      [0U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word0[3U] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__3__KET____DOT__solver_inst.__PVT__path_words
        [0U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word0[4U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__5__KET____DOT__solver_inst.__PVT__path_words
                                    [0U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__4__KET____DOT__solver_inst.__PVT__path_words
                                     [0U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word0[5U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__5__KET____DOT__solver_inst.__PVT__path_words
                                     [0U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__4__KET____DOT__solver_inst.__PVT__path_words
                                      [0U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word0[6U] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__6__KET____DOT__solver_inst.__PVT__path_words
        [0U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word0[7U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__8__KET____DOT__solver_inst.__PVT__path_words
                                    [0U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__7__KET____DOT__solver_inst.__PVT__path_words
                                     [0U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word0[8U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__8__KET____DOT__solver_inst.__PVT__path_words
                                     [0U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__7__KET____DOT__solver_inst.__PVT__path_words
                                      [0U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word0[9U] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__9__KET____DOT__solver_inst.__PVT__path_words
        [0U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word0[0xaU] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__11__KET____DOT__solver_inst.__PVT__path_words
                                    [0U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__10__KET____DOT__solver_inst.__PVT__path_words
                                     [0U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word0[0xbU] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__11__KET____DOT__solver_inst.__PVT__path_words
                                     [0U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__10__KET____DOT__solver_inst.__PVT__path_words
                                      [0U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word0[0xcU] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__12__KET____DOT__solver_inst.__PVT__path_words
        [0U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word0[0xdU] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__14__KET____DOT__solver_inst.__PVT__path_words
                                    [0U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__13__KET____DOT__solver_inst.__PVT__path_words
                                     [0U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word0[0xeU] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__14__KET____DOT__solver_inst.__PVT__path_words
                                     [0U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__13__KET____DOT__solver_inst.__PVT__path_words
                                      [0U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word0[0xfU] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__15__KET____DOT__solver_inst.__PVT__path_words
        [0U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word1[0U] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__0__KET____DOT__solver_inst.__PVT__path_words
        [1U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word1[1U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__2__KET____DOT__solver_inst.__PVT__path_words
                                    [1U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__1__KET____DOT__solver_inst.__PVT__path_words
                                     [1U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word1[2U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__2__KET____DOT__solver_inst.__PVT__path_words
                                     [1U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__1__KET____DOT__solver_inst.__PVT__path_words
                                      [1U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word1[3U] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__3__KET____DOT__solver_inst.__PVT__path_words
        [1U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word1[4U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__5__KET____DOT__solver_inst.__PVT__path_words
                                    [1U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__4__KET____DOT__solver_inst.__PVT__path_words
                                     [1U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word1[5U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__5__KET____DOT__solver_inst.__PVT__path_words
                                     [1U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__4__KET____DOT__solver_inst.__PVT__path_words
                                      [1U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word1[6U] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__6__KET____DOT__solver_inst.__PVT__path_words
        [1U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word1[7U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__8__KET____DOT__solver_inst.__PVT__path_words
                                    [1U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__7__KET____DOT__solver_inst.__PVT__path_words
                                     [1U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word1[8U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__8__KET____DOT__solver_inst.__PVT__path_words
                                     [1U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__7__KET____DOT__solver_inst.__PVT__path_words
                                      [1U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word1[9U] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__9__KET____DOT__solver_inst.__PVT__path_words
        [1U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word1[0xaU] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__11__KET____DOT__solver_inst.__PVT__path_words
                                    [1U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__10__KET____DOT__solver_inst.__PVT__path_words
                                     [1U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word1[0xbU] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__11__KET____DOT__solver_inst.__PVT__path_words
                                     [1U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__10__KET____DOT__solver_inst.__PVT__path_words
                                      [1U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word1[0xcU] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__12__KET____DOT__solver_inst.__PVT__path_words
        [1U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word1[0xdU] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__14__KET____DOT__solver_inst.__PVT__path_words
                                    [1U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__13__KET____DOT__solver_inst.__PVT__path_words
                                     [1U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word1[0xeU] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__14__KET____DOT__solver_inst.__PVT__path_words
                                     [1U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__13__KET____DOT__solver_inst.__PVT__path_words
                                      [1U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word1[0xfU] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__15__KET____DOT__solver_inst.__PVT__path_words
        [1U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word2[0U] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__0__KET____DOT__solver_inst.__PVT__path_words
        [2U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word2[1U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__2__KET____DOT__solver_inst.__PVT__path_words
                                    [2U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__1__KET____DOT__solver_inst.__PVT__path_words
                                     [2U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word2[2U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__2__KET____DOT__solver_inst.__PVT__path_words
                                     [2U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__1__KET____DOT__solver_inst.__PVT__path_words
                                      [2U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word2[3U] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__3__KET____DOT__solver_inst.__PVT__path_words
        [2U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word2[4U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__5__KET____DOT__solver_inst.__PVT__path_words
                                    [2U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__4__KET____DOT__solver_inst.__PVT__path_words
                                     [2U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word2[5U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__5__KET____DOT__solver_inst.__PVT__path_words
                                     [2U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__4__KET____DOT__solver_inst.__PVT__path_words
                                      [2U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word2[6U] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__6__KET____DOT__solver_inst.__PVT__path_words
        [2U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word2[7U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__8__KET____DOT__solver_inst.__PVT__path_words
                                    [2U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__7__KET____DOT__solver_inst.__PVT__path_words
                                     [2U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word2[8U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__8__KET____DOT__solver_inst.__PVT__path_words
                                     [2U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__7__KET____DOT__solver_inst.__PVT__path_words
                                      [2U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word2[9U] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__9__KET____DOT__solver_inst.__PVT__path_words
        [2U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word2[0xaU] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__11__KET____DOT__solver_inst.__PVT__path_words
                                    [2U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__10__KET____DOT__solver_inst.__PVT__path_words
                                     [2U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word2[0xbU] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__11__KET____DOT__solver_inst.__PVT__path_words
                                     [2U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__10__KET____DOT__solver_inst.__PVT__path_words
                                      [2U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word2[0xcU] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__12__KET____DOT__solver_inst.__PVT__path_words
        [2U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word2[0xdU] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__14__KET____DOT__solver_inst.__PVT__path_words
                                    [2U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__13__KET____DOT__solver_inst.__PVT__path_words
                                     [2U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word2[0xeU] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__14__KET____DOT__solver_inst.__PVT__path_words
                                     [2U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__13__KET____DOT__solver_inst.__PVT__path_words
                                      [2U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word2[0xfU] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__15__KET____DOT__solver_inst.__PVT__path_words
        [2U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word3[0U] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__0__KET____DOT__solver_inst.__PVT__path_words
        [3U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word3[1U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__2__KET____DOT__solver_inst.__PVT__path_words
                                    [3U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__1__KET____DOT__solver_inst.__PVT__path_words
                                     [3U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word3[2U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__2__KET____DOT__solver_inst.__PVT__path_words
                                     [3U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__1__KET____DOT__solver_inst.__PVT__path_words
                                      [3U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word3[3U] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__3__KET____DOT__solver_inst.__PVT__path_words
        [3U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word3[4U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__5__KET____DOT__solver_inst.__PVT__path_words
                                    [3U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__4__KET____DOT__solver_inst.__PVT__path_words
                                     [3U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word3[5U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__5__KET____DOT__solver_inst.__PVT__path_words
                                     [3U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__4__KET____DOT__solver_inst.__PVT__path_words
                                      [3U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word3[6U] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__6__KET____DOT__solver_inst.__PVT__path_words
        [3U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word3[7U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__8__KET____DOT__solver_inst.__PVT__path_words
                                    [3U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__7__KET____DOT__solver_inst.__PVT__path_words
                                     [3U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word3[8U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__8__KET____DOT__solver_inst.__PVT__path_words
                                     [3U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__7__KET____DOT__solver_inst.__PVT__path_words
                                      [3U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word3[9U] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__9__KET____DOT__solver_inst.__PVT__path_words
        [3U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word3[0xaU] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__11__KET____DOT__solver_inst.__PVT__path_words
                                    [3U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__10__KET____DOT__solver_inst.__PVT__path_words
                                     [3U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word3[0xbU] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__11__KET____DOT__solver_inst.__PVT__path_words
                                     [3U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__10__KET____DOT__solver_inst.__PVT__path_words
                                      [3U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word3[0xcU] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__12__KET____DOT__solver_inst.__PVT__path_words
        [3U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word3[0xdU] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__14__KET____DOT__solver_inst.__PVT__path_words
                                    [3U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__13__KET____DOT__solver_inst.__PVT__path_words
                                     [3U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word3[0xeU] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__14__KET____DOT__solver_inst.__PVT__path_words
                                     [3U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__13__KET____DOT__solver_inst.__PVT__path_words
                                      [3U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word3[0xfU] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__15__KET____DOT__solver_inst.__PVT__path_words
        [3U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word4[0U] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__0__KET____DOT__solver_inst.__PVT__path_words
        [4U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word4[1U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__2__KET____DOT__solver_inst.__PVT__path_words
                                    [4U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__1__KET____DOT__solver_inst.__PVT__path_words
                                     [4U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word4[2U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__2__KET____DOT__solver_inst.__PVT__path_words
                                     [4U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__1__KET____DOT__solver_inst.__PVT__path_words
                                      [4U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word4[3U] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__3__KET____DOT__solver_inst.__PVT__path_words
        [4U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word4[4U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__5__KET____DOT__solver_inst.__PVT__path_words
                                    [4U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__4__KET____DOT__solver_inst.__PVT__path_words
                                     [4U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word4[5U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__5__KET____DOT__solver_inst.__PVT__path_words
                                     [4U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__4__KET____DOT__solver_inst.__PVT__path_words
                                      [4U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word4[6U] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__6__KET____DOT__solver_inst.__PVT__path_words
        [4U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word4[7U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__8__KET____DOT__solver_inst.__PVT__path_words
                                    [4U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__7__KET____DOT__solver_inst.__PVT__path_words
                                     [4U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word4[8U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__8__KET____DOT__solver_inst.__PVT__path_words
                                     [4U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__7__KET____DOT__solver_inst.__PVT__path_words
                                      [4U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word4[9U] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__9__KET____DOT__solver_inst.__PVT__path_words
        [4U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word4[0xaU] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__11__KET____DOT__solver_inst.__PVT__path_words
                                    [4U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__10__KET____DOT__solver_inst.__PVT__path_words
                                     [4U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word4[0xbU] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__11__KET____DOT__solver_inst.__PVT__path_words
                                     [4U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__10__KET____DOT__solver_inst.__PVT__path_words
                                      [4U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word4[0xcU] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__12__KET____DOT__solver_inst.__PVT__path_words
        [4U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word4[0xdU] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__14__KET____DOT__solver_inst.__PVT__path_words
                                    [4U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__13__KET____DOT__solver_inst.__PVT__path_words
                                     [4U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word4[0xeU] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__14__KET____DOT__solver_inst.__PVT__path_words
                                     [4U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__13__KET____DOT__solver_inst.__PVT__path_words
                                      [4U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word4[0xfU] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__15__KET____DOT__solver_inst.__PVT__path_words
        [4U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word5[0U] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__0__KET____DOT__solver_inst.__PVT__path_words
        [5U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word5[1U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__2__KET____DOT__solver_inst.__PVT__path_words
                                    [5U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__1__KET____DOT__solver_inst.__PVT__path_words
                                     [5U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word5[2U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__2__KET____DOT__solver_inst.__PVT__path_words
                                     [5U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__1__KET____DOT__solver_inst.__PVT__path_words
                                      [5U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word5[3U] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__3__KET____DOT__solver_inst.__PVT__path_words
        [5U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word5[4U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__5__KET____DOT__solver_inst.__PVT__path_words
                                    [5U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__4__KET____DOT__solver_inst.__PVT__path_words
                                     [5U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word5[5U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__5__KET____DOT__solver_inst.__PVT__path_words
                                     [5U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__4__KET____DOT__solver_inst.__PVT__path_words
                                      [5U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word5[6U] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__6__KET____DOT__solver_inst.__PVT__path_words
        [5U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word5[7U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__8__KET____DOT__solver_inst.__PVT__path_words
                                    [5U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__7__KET____DOT__solver_inst.__PVT__path_words
                                     [5U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word5[8U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__8__KET____DOT__solver_inst.__PVT__path_words
                                     [5U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__7__KET____DOT__solver_inst.__PVT__path_words
                                      [5U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word5[9U] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__9__KET____DOT__solver_inst.__PVT__path_words
        [5U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word5[0xaU] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__11__KET____DOT__solver_inst.__PVT__path_words
                                    [5U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__10__KET____DOT__solver_inst.__PVT__path_words
                                     [5U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word5[0xbU] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__11__KET____DOT__solver_inst.__PVT__path_words
                                     [5U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__10__KET____DOT__solver_inst.__PVT__path_words
                                      [5U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word5[0xcU] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__12__KET____DOT__solver_inst.__PVT__path_words
        [5U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_word5[0xdU] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__14__KET____DOT__solver_inst.__PVT__path_words
                                    [5U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__13__KET____DOT__solver_inst.__PVT__path_words
                                     [5U]))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word5[0xeU] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__14__KET____DOT__solver_inst.__PVT__path_words
                                     [5U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__13__KET____DOT__solver_inst.__PVT__path_words
                                      [5U]))) >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_word5[0xfU] 
        = vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__15__KET____DOT__solver_inst.__PVT__path_words
        [5U];
    vlSelfRef.maze_solver_parallel__DOT__core_path_len[0U] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__7__KET____DOT__solver_inst.__PVT__path_len_reg) 
                                       << 0x18U) | 
                                      ((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__6__KET____DOT__solver_inst.__PVT__path_len_reg) 
                                       << 0x10U)) | 
                                     (((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__5__KET____DOT__solver_inst.__PVT__path_len_reg) 
                                       << 8U) | (IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__4__KET____DOT__solver_inst.__PVT__path_len_reg))))) 
                    << 0x20U) | (QData)((IData)(((((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__3__KET____DOT__solver_inst.__PVT__path_len_reg) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__2__KET____DOT__solver_inst.__PVT__path_len_reg) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__1__KET____DOT__solver_inst.__PVT__path_len_reg) 
                                                     << 8U) 
                                                    | (IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__0__KET____DOT__solver_inst.__PVT__path_len_reg)))))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_len[1U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__7__KET____DOT__solver_inst.__PVT__path_len_reg) 
                                        << 0x18U) | 
                                       ((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__6__KET____DOT__solver_inst.__PVT__path_len_reg) 
                                        << 0x10U)) 
                                      | (((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__5__KET____DOT__solver_inst.__PVT__path_len_reg) 
                                          << 8U) | (IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__4__KET____DOT__solver_inst.__PVT__path_len_reg))))) 
                     << 0x20U) | (QData)((IData)(((
                                                   ((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__3__KET____DOT__solver_inst.__PVT__path_len_reg) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__2__KET____DOT__solver_inst.__PVT__path_len_reg) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__1__KET____DOT__solver_inst.__PVT__path_len_reg) 
                                                      << 8U) 
                                                     | (IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__0__KET____DOT__solver_inst.__PVT__path_len_reg)))))) 
                   >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_path_len[2U] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__15__KET____DOT__solver_inst.__PVT__path_len_reg) 
                                       << 0x18U) | 
                                      ((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__14__KET____DOT__solver_inst.__PVT__path_len_reg) 
                                       << 0x10U)) | 
                                     (((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__13__KET____DOT__solver_inst.__PVT__path_len_reg) 
                                       << 8U) | (IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__12__KET____DOT__solver_inst.__PVT__path_len_reg))))) 
                    << 0x20U) | (QData)((IData)(((((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__11__KET____DOT__solver_inst.__PVT__path_len_reg) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__10__KET____DOT__solver_inst.__PVT__path_len_reg) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__9__KET____DOT__solver_inst.__PVT__path_len_reg) 
                                                     << 8U) 
                                                    | (IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__8__KET____DOT__solver_inst.__PVT__path_len_reg)))))));
    vlSelfRef.maze_solver_parallel__DOT__core_path_len[3U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__15__KET____DOT__solver_inst.__PVT__path_len_reg) 
                                        << 0x18U) | 
                                       ((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__14__KET____DOT__solver_inst.__PVT__path_len_reg) 
                                        << 0x10U)) 
                                      | (((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__13__KET____DOT__solver_inst.__PVT__path_len_reg) 
                                          << 8U) | (IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__12__KET____DOT__solver_inst.__PVT__path_len_reg))))) 
                     << 0x20U) | (QData)((IData)(((
                                                   ((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__11__KET____DOT__solver_inst.__PVT__path_len_reg) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__10__KET____DOT__solver_inst.__PVT__path_len_reg) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__9__KET____DOT__solver_inst.__PVT__path_len_reg) 
                                                      << 8U) 
                                                     | (IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__8__KET____DOT__solver_inst.__PVT__path_len_reg)))))) 
                   >> 0x20U));
    vlSelfRef.maze_solver_parallel__DOT__core_done 
        = ((((((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__15__KET____DOT__solver_inst.done) 
               << 0xfU) | ((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__14__KET____DOT__solver_inst.done) 
                           << 0xeU)) | (((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__13__KET____DOT__solver_inst.done) 
                                         << 0xdU) | 
                                        ((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__12__KET____DOT__solver_inst.done) 
                                         << 0xcU))) 
            | ((((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__11__KET____DOT__solver_inst.done) 
                 << 0xbU) | ((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__10__KET____DOT__solver_inst.done) 
                             << 0xaU)) | (((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__9__KET____DOT__solver_inst.done) 
                                           << 9U) | 
                                          ((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__8__KET____DOT__solver_inst.done) 
                                           << 8U)))) 
           | (((((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__7__KET____DOT__solver_inst.done) 
                 << 7U) | ((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__6__KET____DOT__solver_inst.done) 
                           << 6U)) | (((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__5__KET____DOT__solver_inst.done) 
                                       << 5U) | ((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__4__KET____DOT__solver_inst.done) 
                                                 << 4U))) 
              | ((((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__3__KET____DOT__solver_inst.done) 
                   << 3U) | ((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__2__KET____DOT__solver_inst.done) 
                             << 2U)) | (((IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__1__KET____DOT__solver_inst.done) 
                                         << 1U) | (IData)(vlSymsp->TOP__maze_solver_parallel__DOT__gen_cores__BRA__0__KET____DOT__solver_inst.done)))));
}
