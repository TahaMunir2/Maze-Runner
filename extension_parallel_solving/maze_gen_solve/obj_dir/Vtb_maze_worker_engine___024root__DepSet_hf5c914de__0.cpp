// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_maze_worker_engine.h for the primary calling header

#include "Vtb_maze_worker_engine__pch.h"
#include "Vtb_maze_worker_engine__Syms.h"
#include "Vtb_maze_worker_engine___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_maze_worker_engine___024root___eval_initial__TOP__Vtiming__0(Vtb_maze_worker_engine___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_worker_engine___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_maze_worker_engine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_maze_worker_engine__DOT__wait_done__Vstatic__cycles;
    tb_maze_worker_engine__DOT__wait_done__Vstatic__cycles = 0;
    // Body
    vlSelfRef.tb_maze_worker_engine__DOT__clk = 0U;
    vlSelfRef.tb_maze_worker_engine__DOT__rst = 1U;
    vlSelfRef.tb_maze_worker_engine__DOT__start = 0U;
    vlSelfRef.tb_maze_worker_engine__DOT__maze_id = 0U;
    vlSelfRef.tb_maze_worker_engine__DOT__target_id = 5U;
    vlSelfRef.tb_maze_worker_engine__DOT__seed = 0x1111U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb_maze_worker_engine.sv", 
                                         89);
    vlSelfRef.tb_maze_worker_engine__DOT__rst = 0U;
    co_await vlSelfRef.__VtrigSched_h2470b25b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_maze_worker_engine.clk)", 
                                                         "tb_maze_worker_engine.sv", 
                                                         91);
    vlSelfRef.tb_maze_worker_engine__DOT__maze_id = 2U;
    vlSelfRef.tb_maze_worker_engine__DOT__target_id = 5U;
    vlSelfRef.tb_maze_worker_engine__DOT__seed = 0x1111U;
    co_await vlSelfRef.__VtrigSched_h2470b25b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_maze_worker_engine.clk)", 
                                                         "tb_maze_worker_engine.sv", 
                                                         56);
    vlSelfRef.tb_maze_worker_engine__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h2470b25b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_maze_worker_engine.clk)", 
                                                         "tb_maze_worker_engine.sv", 
                                                         58);
    vlSelfRef.tb_maze_worker_engine__DOT__start = 0U;
    tb_maze_worker_engine__DOT__wait_done__Vstatic__cycles = 0U;
    while (((~ (IData)(vlSelfRef.tb_maze_worker_engine__DOT__done)) 
            & VL_GTS_III(32, 0x4e20U, tb_maze_worker_engine__DOT__wait_done__Vstatic__cycles))) {
        co_await vlSelfRef.__VtrigSched_h2470b25b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_maze_worker_engine.clk)", 
                                                             "tb_maze_worker_engine.sv", 
                                                             68);
        tb_maze_worker_engine__DOT__wait_done__Vstatic__cycles 
            = ((IData)(1U) + tb_maze_worker_engine__DOT__wait_done__Vstatic__cycles);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_maze_worker_engine__DOT__done)))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_maze_worker_engine.sv:73: Assertion failed in %Ntb_maze_worker_engine.wait_done: Timeout waiting for worker done\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_maze_worker_engine.sv", 73, "");
        VL_FINISH_MT("tb_maze_worker_engine.sv", 74, "");
    }
    co_await vlSelfRef.__VtrigSched_h2470b25b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_maze_worker_engine.clk)", 
                                                         "tb_maze_worker_engine.sv", 
                                                         77);
    VL_WRITEF_NX("WORKER TEST 1: maze_id=%0# done_maze_id=%0# solved=%0# len=%0# target_valid=%0#\n",0,
                 16,vlSelfRef.tb_maze_worker_engine__DOT__maze_id,
                 16,(IData)(vlSelfRef.tb_maze_worker_engine__DOT__done_maze_id),
                 1,vlSelfRef.tb_maze_worker_engine__DOT__solved,
                 8,(IData)(vlSelfRef.tb_maze_worker_engine__DOT__solved_path_len),
                 1,vlSelfRef.tb_maze_worker_engine__DOT__target_valid);
    if (VL_UNLIKELY(((2U != (IData)(vlSelfRef.tb_maze_worker_engine__DOT__done_maze_id))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_maze_worker_engine.sv:107: Assertion failed in %Ntb_maze_worker_engine: Worker wrong done_maze_id on non-target case\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_maze_worker_engine.sv", 107, "");
    }
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_maze_worker_engine__DOT__solved)))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_maze_worker_engine.sv:110: Assertion failed in %Ntb_maze_worker_engine: Worker should solve generated maze\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_maze_worker_engine.sv", 110, "");
    }
    vlSelfRef.tb_maze_worker_engine__DOT__maze_id = 7U;
    vlSelfRef.tb_maze_worker_engine__DOT__target_id = 7U;
    vlSelfRef.tb_maze_worker_engine__DOT__seed = 0x2222U;
    co_await vlSelfRef.__VtrigSched_h2470b25b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_maze_worker_engine.clk)", 
                                                         "tb_maze_worker_engine.sv", 
                                                         56);
    vlSelfRef.tb_maze_worker_engine__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h2470b25b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_maze_worker_engine.clk)", 
                                                         "tb_maze_worker_engine.sv", 
                                                         58);
    vlSelfRef.tb_maze_worker_engine__DOT__start = 0U;
    tb_maze_worker_engine__DOT__wait_done__Vstatic__cycles = 0U;
    while (((~ (IData)(vlSelfRef.tb_maze_worker_engine__DOT__done)) 
            & VL_GTS_III(32, 0x4e20U, tb_maze_worker_engine__DOT__wait_done__Vstatic__cycles))) {
        co_await vlSelfRef.__VtrigSched_h2470b25b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_maze_worker_engine.clk)", 
                                                             "tb_maze_worker_engine.sv", 
                                                             68);
        tb_maze_worker_engine__DOT__wait_done__Vstatic__cycles 
            = ((IData)(1U) + tb_maze_worker_engine__DOT__wait_done__Vstatic__cycles);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_maze_worker_engine__DOT__done)))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_maze_worker_engine.sv:73: Assertion failed in %Ntb_maze_worker_engine.wait_done: Timeout waiting for worker done\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_maze_worker_engine.sv", 73, "");
        VL_FINISH_MT("tb_maze_worker_engine.sv", 74, "");
    }
    co_await vlSelfRef.__VtrigSched_h2470b25b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_maze_worker_engine.clk)", 
                                                         "tb_maze_worker_engine.sv", 
                                                         77);
    VL_WRITEF_NX("WORKER TEST 2: maze_id=%0# done_maze_id=%0# solved=%0# len=%0# target_valid=%0# target_len=%0#\n",0,
                 16,vlSelfRef.tb_maze_worker_engine__DOT__maze_id,
                 16,(IData)(vlSelfRef.tb_maze_worker_engine__DOT__done_maze_id),
                 1,vlSelfRef.tb_maze_worker_engine__DOT__solved,
                 8,(IData)(vlSelfRef.tb_maze_worker_engine__DOT__solved_path_len),
                 1,vlSelfRef.tb_maze_worker_engine__DOT__target_valid,
                 8,(IData)(vlSelfRef.tb_maze_worker_engine__DOT__target_path_len));
    if (VL_UNLIKELY(((7U != (IData)(vlSelfRef.tb_maze_worker_engine__DOT__done_maze_id))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_maze_worker_engine.sv:126: Assertion failed in %Ntb_maze_worker_engine: Worker wrong done_maze_id on target case\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_maze_worker_engine.sv", 126, "");
    }
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_maze_worker_engine__DOT__solved)))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_maze_worker_engine.sv:129: Assertion failed in %Ntb_maze_worker_engine: Target maze should solve\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_maze_worker_engine.sv", 129, "");
    }
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_maze_worker_engine__DOT__target_valid)))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_maze_worker_engine.sv:132: Assertion failed in %Ntb_maze_worker_engine: Target full solver should produce valid path\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_maze_worker_engine.sv", 132, "");
    }
    VL_WRITEF_NX("tb_maze_worker_engine finished\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb_maze_worker_engine.sv", 
                                         135);
    VL_FINISH_MT("tb_maze_worker_engine.sv", 136, "");
}

VL_INLINE_OPT VlCoroutine Vtb_maze_worker_engine___024root___eval_initial__TOP__Vtiming__1(Vtb_maze_worker_engine___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_worker_engine___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_maze_worker_engine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb_maze_worker_engine.sv", 
                                             52);
        vlSelfRef.tb_maze_worker_engine__DOT__clk = 
            (1U & (~ (IData)(vlSelfRef.tb_maze_worker_engine__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_maze_worker_engine___024root___dump_triggers__act(Vtb_maze_worker_engine___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_maze_worker_engine___024root___eval_triggers__act(Vtb_maze_worker_engine___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_maze_worker_engine___024root___eval_triggers__act\n"); );
    Vtb_maze_worker_engine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_maze_worker_engine__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_maze_worker_engine__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_maze_worker_engine__DOT__clk__0 
        = vlSelfRef.tb_maze_worker_engine__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_maze_worker_engine___024root___dump_triggers__act(vlSelf);
    }
#endif
}
