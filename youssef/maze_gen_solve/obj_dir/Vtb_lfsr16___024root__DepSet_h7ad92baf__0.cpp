// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_lfsr16.h for the primary calling header

#include "Vtb_lfsr16__pch.h"
#include "Vtb_lfsr16___024root.h"

VlCoroutine Vtb_lfsr16___024root___eval_initial__TOP__Vtiming__0(Vtb_lfsr16___024root* vlSelf);
VlCoroutine Vtb_lfsr16___024root___eval_initial__TOP__Vtiming__1(Vtb_lfsr16___024root* vlSelf);

void Vtb_lfsr16___024root___eval_initial(Vtb_lfsr16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lfsr16___024root___eval_initial\n"); );
    Vtb_lfsr16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_lfsr16___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_lfsr16___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_lfsr16___024root___eval_initial__TOP__Vtiming__0(Vtb_lfsr16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lfsr16___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_lfsr16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_lfsr16__DOT__clk = 0U;
    vlSelfRef.tb_lfsr16__DOT__rst = 1U;
    vlSelfRef.tb_lfsr16__DOT__enable = 0U;
    vlSelfRef.tb_lfsr16__DOT__load_seed = 0U;
    vlSelfRef.tb_lfsr16__DOT__seed = 0x1234U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb_lfsr16.sv", 
                                         30);
    vlSelfRef.tb_lfsr16__DOT__rst = 0U;
    co_await vlSelfRef.__VtrigSched_ha7935bcb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lfsr16.clk)", 
                                                         "tb_lfsr16.sv", 
                                                         32);
    co_await vlSelfRef.__VtrigSched_ha7935bcb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lfsr16.clk)", 
                                                         "tb_lfsr16.sv", 
                                                         36);
    vlSelfRef.tb_lfsr16__DOT__load_seed = 1U;
    vlSelfRef.tb_lfsr16__DOT__seed = 0x1234U;
    co_await vlSelfRef.__VtrigSched_ha7935bcb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lfsr16.clk)", 
                                                         "tb_lfsr16.sv", 
                                                         40);
    vlSelfRef.tb_lfsr16__DOT__load_seed = 0U;
    vlSelfRef.tb_lfsr16__DOT__enable = 1U;
    co_await vlSelfRef.__VtrigSched_ha7935bcb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lfsr16.clk)", 
                                                         "tb_lfsr16.sv", 
                                                         45);
    VL_WRITEF_NX("time=%0t value=%x\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,16,(IData)(vlSelfRef.tb_lfsr16__DOT__value));
    co_await vlSelfRef.__VtrigSched_ha7935bcb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lfsr16.clk)", 
                                                         "tb_lfsr16.sv", 
                                                         45);
    VL_WRITEF_NX("time=%0t value=%x\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,16,(IData)(vlSelfRef.tb_lfsr16__DOT__value));
    co_await vlSelfRef.__VtrigSched_ha7935bcb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lfsr16.clk)", 
                                                         "tb_lfsr16.sv", 
                                                         45);
    VL_WRITEF_NX("time=%0t value=%x\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,16,(IData)(vlSelfRef.tb_lfsr16__DOT__value));
    co_await vlSelfRef.__VtrigSched_ha7935bcb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lfsr16.clk)", 
                                                         "tb_lfsr16.sv", 
                                                         45);
    VL_WRITEF_NX("time=%0t value=%x\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,16,(IData)(vlSelfRef.tb_lfsr16__DOT__value));
    co_await vlSelfRef.__VtrigSched_ha7935bcb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lfsr16.clk)", 
                                                         "tb_lfsr16.sv", 
                                                         45);
    VL_WRITEF_NX("time=%0t value=%x\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,16,(IData)(vlSelfRef.tb_lfsr16__DOT__value));
    co_await vlSelfRef.__VtrigSched_ha7935bcb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lfsr16.clk)", 
                                                         "tb_lfsr16.sv", 
                                                         45);
    VL_WRITEF_NX("time=%0t value=%x\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,16,(IData)(vlSelfRef.tb_lfsr16__DOT__value));
    co_await vlSelfRef.__VtrigSched_ha7935bcb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lfsr16.clk)", 
                                                         "tb_lfsr16.sv", 
                                                         45);
    VL_WRITEF_NX("time=%0t value=%x\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,16,(IData)(vlSelfRef.tb_lfsr16__DOT__value));
    co_await vlSelfRef.__VtrigSched_ha7935bcb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lfsr16.clk)", 
                                                         "tb_lfsr16.sv", 
                                                         45);
    VL_WRITEF_NX("time=%0t value=%x\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,16,(IData)(vlSelfRef.tb_lfsr16__DOT__value));
    co_await vlSelfRef.__VtrigSched_ha7935bcb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lfsr16.clk)", 
                                                         "tb_lfsr16.sv", 
                                                         45);
    VL_WRITEF_NX("time=%0t value=%x\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,16,(IData)(vlSelfRef.tb_lfsr16__DOT__value));
    co_await vlSelfRef.__VtrigSched_ha7935bcb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lfsr16.clk)", 
                                                         "tb_lfsr16.sv", 
                                                         45);
    VL_WRITEF_NX("time=%0t value=%x\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,16,(IData)(vlSelfRef.tb_lfsr16__DOT__value));
    co_await vlSelfRef.__VtrigSched_ha7935bcb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lfsr16.clk)", 
                                                         "tb_lfsr16.sv", 
                                                         45);
    VL_WRITEF_NX("time=%0t value=%x\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,16,(IData)(vlSelfRef.tb_lfsr16__DOT__value));
    co_await vlSelfRef.__VtrigSched_ha7935bcb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lfsr16.clk)", 
                                                         "tb_lfsr16.sv", 
                                                         45);
    VL_WRITEF_NX("time=%0t value=%x\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,16,(IData)(vlSelfRef.tb_lfsr16__DOT__value));
    co_await vlSelfRef.__VtrigSched_ha7935bcb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lfsr16.clk)", 
                                                         "tb_lfsr16.sv", 
                                                         45);
    VL_WRITEF_NX("time=%0t value=%x\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,16,(IData)(vlSelfRef.tb_lfsr16__DOT__value));
    co_await vlSelfRef.__VtrigSched_ha7935bcb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lfsr16.clk)", 
                                                         "tb_lfsr16.sv", 
                                                         45);
    VL_WRITEF_NX("time=%0t value=%x\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,16,(IData)(vlSelfRef.tb_lfsr16__DOT__value));
    co_await vlSelfRef.__VtrigSched_ha7935bcb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lfsr16.clk)", 
                                                         "tb_lfsr16.sv", 
                                                         45);
    VL_WRITEF_NX("time=%0t value=%x\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,16,(IData)(vlSelfRef.tb_lfsr16__DOT__value));
    co_await vlSelfRef.__VtrigSched_ha7935bcb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lfsr16.clk)", 
                                                         "tb_lfsr16.sv", 
                                                         45);
    VL_WRITEF_NX("time=%0t value=%x\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,16,(IData)(vlSelfRef.tb_lfsr16__DOT__value));
    co_await vlSelfRef.__VtrigSched_ha7935bcb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lfsr16.clk)", 
                                                         "tb_lfsr16.sv", 
                                                         45);
    VL_WRITEF_NX("time=%0t value=%x\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,16,(IData)(vlSelfRef.tb_lfsr16__DOT__value));
    co_await vlSelfRef.__VtrigSched_ha7935bcb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lfsr16.clk)", 
                                                         "tb_lfsr16.sv", 
                                                         45);
    VL_WRITEF_NX("time=%0t value=%x\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,16,(IData)(vlSelfRef.tb_lfsr16__DOT__value));
    co_await vlSelfRef.__VtrigSched_ha7935bcb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lfsr16.clk)", 
                                                         "tb_lfsr16.sv", 
                                                         45);
    VL_WRITEF_NX("time=%0t value=%x\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,16,(IData)(vlSelfRef.tb_lfsr16__DOT__value));
    co_await vlSelfRef.__VtrigSched_ha7935bcb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lfsr16.clk)", 
                                                         "tb_lfsr16.sv", 
                                                         45);
    VL_WRITEF_NX("time=%0t value=%x\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,16,(IData)(vlSelfRef.tb_lfsr16__DOT__value));
    vlSelfRef.tb_lfsr16__DOT__enable = 0U;
    VL_WRITEF_NX("tb_lfsr16 finished\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb_lfsr16.sv", 
                                         52);
    VL_FINISH_MT("tb_lfsr16.sv", 53, "");
}

void Vtb_lfsr16___024root___eval_act(Vtb_lfsr16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lfsr16___024root___eval_act\n"); );
    Vtb_lfsr16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_lfsr16___024root___nba_sequent__TOP__0(Vtb_lfsr16___024root* vlSelf);

void Vtb_lfsr16___024root___eval_nba(Vtb_lfsr16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lfsr16___024root___eval_nba\n"); );
    Vtb_lfsr16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_lfsr16___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_lfsr16___024root___nba_sequent__TOP__0(Vtb_lfsr16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lfsr16___024root___nba_sequent__TOP__0\n"); );
    Vtb_lfsr16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vdly__tb_lfsr16__DOT__value;
    __Vdly__tb_lfsr16__DOT__value = 0;
    // Body
    __Vdly__tb_lfsr16__DOT__value = vlSelfRef.tb_lfsr16__DOT__value;
    if (vlSelfRef.tb_lfsr16__DOT__rst) {
        __Vdly__tb_lfsr16__DOT__value = 0xace1U;
    } else if (vlSelfRef.tb_lfsr16__DOT__load_seed) {
        __Vdly__tb_lfsr16__DOT__value = ((0U == (IData)(vlSelfRef.tb_lfsr16__DOT__seed))
                                          ? 0xace1U
                                          : (IData)(vlSelfRef.tb_lfsr16__DOT__seed));
    } else if (vlSelfRef.tb_lfsr16__DOT__enable) {
        vlSelfRef.tb_lfsr16__DOT__dut__DOT__feedback 
            = (1U & VL_REDXOR_16((0xb400U & (IData)(vlSelfRef.tb_lfsr16__DOT__value))));
        __Vdly__tb_lfsr16__DOT__value = ((0xfffeU & 
                                          ((IData)(vlSelfRef.tb_lfsr16__DOT__value) 
                                           << 1U)) 
                                         | (IData)(vlSelfRef.tb_lfsr16__DOT__dut__DOT__feedback));
    }
    vlSelfRef.tb_lfsr16__DOT__value = __Vdly__tb_lfsr16__DOT__value;
}

void Vtb_lfsr16___024root___timing_commit(Vtb_lfsr16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lfsr16___024root___timing_commit\n"); );
    Vtb_lfsr16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_ha7935bcb__0.commit(
                                                   "@(posedge tb_lfsr16.clk)");
    }
}

void Vtb_lfsr16___024root___timing_resume(Vtb_lfsr16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lfsr16___024root___timing_resume\n"); );
    Vtb_lfsr16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_ha7935bcb__0.resume(
                                                   "@(posedge tb_lfsr16.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_lfsr16___024root___eval_triggers__act(Vtb_lfsr16___024root* vlSelf);

bool Vtb_lfsr16___024root___eval_phase__act(Vtb_lfsr16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lfsr16___024root___eval_phase__act\n"); );
    Vtb_lfsr16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_lfsr16___024root___eval_triggers__act(vlSelf);
    Vtb_lfsr16___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_lfsr16___024root___timing_resume(vlSelf);
        Vtb_lfsr16___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_lfsr16___024root___eval_phase__nba(Vtb_lfsr16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lfsr16___024root___eval_phase__nba\n"); );
    Vtb_lfsr16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_lfsr16___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lfsr16___024root___dump_triggers__nba(Vtb_lfsr16___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lfsr16___024root___dump_triggers__act(Vtb_lfsr16___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_lfsr16___024root___eval(Vtb_lfsr16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lfsr16___024root___eval\n"); );
    Vtb_lfsr16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_lfsr16___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_lfsr16.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_lfsr16___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_lfsr16.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_lfsr16___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_lfsr16___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_lfsr16___024root___eval_debug_assertions(Vtb_lfsr16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lfsr16___024root___eval_debug_assertions\n"); );
    Vtb_lfsr16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
