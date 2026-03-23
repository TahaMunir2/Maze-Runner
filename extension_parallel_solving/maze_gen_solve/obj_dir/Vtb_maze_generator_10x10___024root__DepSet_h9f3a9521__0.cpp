// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_maze_generator_10x10.h for the primary calling header

#include "Vtb_maze_generator_10x10__pch.h"
#include "Vtb_maze_generator_10x10__Syms.h"
#include "Vtb_maze_generator_10x10___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_maze_generator_10x10___024root___eval_initial__TOP__Vtiming__0(Vtb_maze_generator_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_generator_10x10___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_maze_generator_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_maze_generator_10x10__DOT__clk = 0U;
    vlSelfRef.tb_maze_generator_10x10__DOT__rst = 1U;
    vlSelfRef.tb_maze_generator_10x10__DOT__start = 0U;
    vlSelfRef.tb_maze_generator_10x10__DOT__solve_start = 0U;
    vlSelfRef.tb_maze_generator_10x10__DOT__seed = 0x55aaU;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb_maze_generator_10x10.sv", 
                                         69);
    vlSelfRef.tb_maze_generator_10x10__DOT__rst = 0U;
    co_await vlSelfRef.__VtrigSched_h45c9f161__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_maze_generator_10x10.clk)", 
                                                         "tb_maze_generator_10x10.sv", 
                                                         71);
    co_await vlSelfRef.__VtrigSched_h45c9f161__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_maze_generator_10x10.clk)", 
                                                         "tb_maze_generator_10x10.sv", 
                                                         46);
    vlSelfRef.tb_maze_generator_10x10__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h45c9f161__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_maze_generator_10x10.clk)", 
                                                         "tb_maze_generator_10x10.sv", 
                                                         48);
    vlSelfRef.tb_maze_generator_10x10__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__done)))) {
        co_await vlSelfRef.__VtrigSched_h45c9f161__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_maze_generator_10x10.clk)", 
                                                             "tb_maze_generator_10x10.sv", 
                                                             76);
    }
    VL_WRITEF_NX("GENERATOR DONE\ngrid0=%x\ngrid1=%x\ngrid2=%x\ngrid3=%x\n",0,
                 32,vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[0U],
                 32,vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[1U],
                 32,vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[2U],
                 32,vlSelfRef.tb_maze_generator_10x10__DOT__u_gen__DOT__grid_flat[3U]);
    co_await vlSelfRef.__VtrigSched_h45c9f161__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_maze_generator_10x10.clk)", 
                                                         "tb_maze_generator_10x10.sv", 
                                                         55);
    vlSelfRef.tb_maze_generator_10x10__DOT__solve_start = 1U;
    co_await vlSelfRef.__VtrigSched_h45c9f161__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_maze_generator_10x10.clk)", 
                                                         "tb_maze_generator_10x10.sv", 
                                                         57);
    vlSelfRef.tb_maze_generator_10x10__DOT__solve_start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__solve_done)))) {
        co_await vlSelfRef.__VtrigSched_h45c9f161__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_maze_generator_10x10.clk)", 
                                                             "tb_maze_generator_10x10.sv", 
                                                             87);
    }
    VL_WRITEF_NX("GEN->SOLVE: valid=%0# path_len=%0#\n",0,
                 1,vlSelfRef.tb_maze_generator_10x10__DOT__solve_valid,
                 8,(IData)(vlSelfRef.tb_maze_generator_10x10__DOT__solve_len));
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__solve_valid)))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_maze_generator_10x10.sv:92: Assertion failed in %Ntb_maze_generator_10x10: Generated maze should always be solvable\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_maze_generator_10x10.sv", 92, "");
    }
    VL_WRITEF_NX("tb_maze_generator_10x10 finished\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb_maze_generator_10x10.sv", 
                                         96);
    VL_FINISH_MT("tb_maze_generator_10x10.sv", 97, "");
}

VL_INLINE_OPT VlCoroutine Vtb_maze_generator_10x10___024root___eval_initial__TOP__Vtiming__1(Vtb_maze_generator_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_generator_10x10___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_maze_generator_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb_maze_generator_10x10.sv", 
                                             42);
        vlSelfRef.tb_maze_generator_10x10__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.tb_maze_generator_10x10__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_maze_generator_10x10___024root___dump_triggers__act(Vtb_maze_generator_10x10___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_maze_generator_10x10___024root___eval_triggers__act(Vtb_maze_generator_10x10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_generator_10x10___024root___eval_triggers__act\n"); );
    Vtb_maze_generator_10x10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_maze_generator_10x10__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_maze_generator_10x10__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_maze_generator_10x10__DOT__clk__0 
        = vlSelfRef.tb_maze_generator_10x10__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_maze_generator_10x10___024root___dump_triggers__act(vlSelf);
    }
#endif
}
