// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_maze_solver_full_10x10.h for the primary calling header

#include "Vtb_maze_solver_full_10x10__pch.h"
#include "Vtb_maze_solver_full_10x10__Syms.h"
#include "Vtb_maze_solver_full_10x10___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_maze_solver_full_10x10___024root___eval_initial__TOP__Vtiming__0(Vtb_maze_solver_full_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_solver_full_10x10___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_maze_solver_full_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_maze_solver_full_10x10__DOT__clk = 0U;
    vlSelfRef.tb_maze_solver_full_10x10__DOT__rst = 1U;
    vlSelfRef.tb_maze_solver_full_10x10__DOT__start = 0U;
    vlSelfRef.tb_maze_solver_full_10x10__DOT__grid0 = 0U;
    vlSelfRef.tb_maze_solver_full_10x10__DOT__grid1 = 0U;
    vlSelfRef.tb_maze_solver_full_10x10__DOT__grid2 = 0U;
    vlSelfRef.tb_maze_solver_full_10x10__DOT__grid3 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb_maze_solver_full_10x10.sv", 
                                         63);
    vlSelfRef.tb_maze_solver_full_10x10__DOT__rst = 0U;
    co_await vlSelfRef.__VtrigSched_h48171e25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_maze_solver_full_10x10.clk)", 
                                                         "tb_maze_solver_full_10x10.sv", 
                                                         65);
    vlSelfRef.tb_maze_solver_full_10x10__DOT__grid0 = 0xffffffffU;
    vlSelfRef.tb_maze_solver_full_10x10__DOT__grid1 = 0xffffffffU;
    vlSelfRef.tb_maze_solver_full_10x10__DOT__grid2 = 0xffffffffU;
    vlSelfRef.tb_maze_solver_full_10x10__DOT__grid3 = 0xfU;
    co_await vlSelfRef.__VtrigSched_h48171e25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_maze_solver_full_10x10.clk)", 
                                                         "tb_maze_solver_full_10x10.sv", 
                                                         39);
    vlSelfRef.tb_maze_solver_full_10x10__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h48171e25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_maze_solver_full_10x10.clk)", 
                                                         "tb_maze_solver_full_10x10.sv", 
                                                         41);
    vlSelfRef.tb_maze_solver_full_10x10__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_maze_solver_full_10x10__DOT__done)))) {
        co_await vlSelfRef.__VtrigSched_h48171e25__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_maze_solver_full_10x10.clk)", 
                                                             "tb_maze_solver_full_10x10.sv", 
                                                             49);
    }
    co_await vlSelfRef.__VtrigSched_h48171e25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_maze_solver_full_10x10.clk)", 
                                                         "tb_maze_solver_full_10x10.sv", 
                                                         50);
    VL_WRITEF_NX("FULL TEST: valid=%0# path_len=%0#\npath_word0=%x\npath_word1=%x\npath_word2=%x\npath_word3=%x\npath_word4=%x\npath_word5=%x\npath_word6=%x\n",0,
                 1,vlSelfRef.tb_maze_solver_full_10x10__DOT__valid,
                 8,(IData)(vlSelfRef.tb_maze_solver_full_10x10__DOT__path_len),
                 32,vlSelfRef.tb_maze_solver_full_10x10__DOT__dut__DOT__path_bits[0U],
                 32,vlSelfRef.tb_maze_solver_full_10x10__DOT__dut__DOT__path_bits[1U],
                 32,vlSelfRef.tb_maze_solver_full_10x10__DOT__dut__DOT__path_bits[2U],
                 32,vlSelfRef.tb_maze_solver_full_10x10__DOT__dut__DOT__path_bits[3U],
                 32,vlSelfRef.tb_maze_solver_full_10x10__DOT__dut__DOT__path_bits[4U],
                 32,vlSelfRef.tb_maze_solver_full_10x10__DOT__dut__DOT__path_bits[5U],
                 32,vlSelfRef.tb_maze_solver_full_10x10__DOT__dut__DOT__path_bits[6U]);
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_maze_solver_full_10x10__DOT__valid)))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_maze_solver_full_10x10.sv:86: Assertion failed in %Ntb_maze_solver_full_10x10: Full solver failed: all-open maze should be solvable\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_maze_solver_full_10x10.sv", 86, "");
    }
    if (VL_UNLIKELY(((0x12U != (IData)(vlSelfRef.tb_maze_solver_full_10x10__DOT__path_len))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_maze_solver_full_10x10.sv:90: Assertion failed in %Ntb_maze_solver_full_10x10: Full solver failed: expected path_len=18, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     8,(IData)(vlSelfRef.tb_maze_solver_full_10x10__DOT__path_len));
        VL_STOP_MT("tb_maze_solver_full_10x10.sv", 90, "");
    }
    VL_WRITEF_NX("tb_maze_solver_full_10x10 finished\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb_maze_solver_full_10x10.sv", 
                                         94);
    VL_FINISH_MT("tb_maze_solver_full_10x10.sv", 95, "");
}

VL_INLINE_OPT VlCoroutine Vtb_maze_solver_full_10x10___024root___eval_initial__TOP__Vtiming__1(Vtb_maze_solver_full_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_solver_full_10x10___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_maze_solver_full_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb_maze_solver_full_10x10.sv", 
                                             35);
        vlSelfRef.tb_maze_solver_full_10x10__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.tb_maze_solver_full_10x10__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_maze_solver_full_10x10___024root___dump_triggers__act(Vtb_maze_solver_full_10x10___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_maze_solver_full_10x10___024root___eval_triggers__act(Vtb_maze_solver_full_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_solver_full_10x10___024root___eval_triggers__act\n"); );
    Vtb_maze_solver_full_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_maze_solver_full_10x10__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_maze_solver_full_10x10__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_maze_solver_full_10x10__DOT__clk__0 
        = vlSelfRef.tb_maze_solver_full_10x10__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_maze_solver_full_10x10___024root___dump_triggers__act(vlSelf);
    }
#endif
}
