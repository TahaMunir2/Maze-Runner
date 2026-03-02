// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmaze_solver_parallel__pch.h"

//============================================================
// Constructors

Vmaze_solver_parallel::Vmaze_solver_parallel(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmaze_solver_parallel__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , s_axi_awvalid{vlSymsp->TOP.s_axi_awvalid}
    , s_axi_awready{vlSymsp->TOP.s_axi_awready}
    , s_axi_wvalid{vlSymsp->TOP.s_axi_wvalid}
    , s_axi_wready{vlSymsp->TOP.s_axi_wready}
    , s_axi_bresp{vlSymsp->TOP.s_axi_bresp}
    , s_axi_bvalid{vlSymsp->TOP.s_axi_bvalid}
    , s_axi_bready{vlSymsp->TOP.s_axi_bready}
    , s_axi_arvalid{vlSymsp->TOP.s_axi_arvalid}
    , s_axi_arready{vlSymsp->TOP.s_axi_arready}
    , s_axi_rresp{vlSymsp->TOP.s_axi_rresp}
    , s_axi_rvalid{vlSymsp->TOP.s_axi_rvalid}
    , s_axi_rready{vlSymsp->TOP.s_axi_rready}
    , irq{vlSymsp->TOP.irq}
    , s_axi_awaddr{vlSymsp->TOP.s_axi_awaddr}
    , s_axi_wdata{vlSymsp->TOP.s_axi_wdata}
    , s_axi_araddr{vlSymsp->TOP.s_axi_araddr}
    , s_axi_rdata{vlSymsp->TOP.s_axi_rdata}
    , __PVT__maze_solver_parallel__DOT__gen_cores__BRA__0__KET____DOT__solver_inst{vlSymsp->TOP.__PVT__maze_solver_parallel__DOT__gen_cores__BRA__0__KET____DOT__solver_inst}
    , __PVT__maze_solver_parallel__DOT__gen_cores__BRA__1__KET____DOT__solver_inst{vlSymsp->TOP.__PVT__maze_solver_parallel__DOT__gen_cores__BRA__1__KET____DOT__solver_inst}
    , __PVT__maze_solver_parallel__DOT__gen_cores__BRA__2__KET____DOT__solver_inst{vlSymsp->TOP.__PVT__maze_solver_parallel__DOT__gen_cores__BRA__2__KET____DOT__solver_inst}
    , __PVT__maze_solver_parallel__DOT__gen_cores__BRA__3__KET____DOT__solver_inst{vlSymsp->TOP.__PVT__maze_solver_parallel__DOT__gen_cores__BRA__3__KET____DOT__solver_inst}
    , __PVT__maze_solver_parallel__DOT__gen_cores__BRA__4__KET____DOT__solver_inst{vlSymsp->TOP.__PVT__maze_solver_parallel__DOT__gen_cores__BRA__4__KET____DOT__solver_inst}
    , __PVT__maze_solver_parallel__DOT__gen_cores__BRA__5__KET____DOT__solver_inst{vlSymsp->TOP.__PVT__maze_solver_parallel__DOT__gen_cores__BRA__5__KET____DOT__solver_inst}
    , __PVT__maze_solver_parallel__DOT__gen_cores__BRA__6__KET____DOT__solver_inst{vlSymsp->TOP.__PVT__maze_solver_parallel__DOT__gen_cores__BRA__6__KET____DOT__solver_inst}
    , __PVT__maze_solver_parallel__DOT__gen_cores__BRA__7__KET____DOT__solver_inst{vlSymsp->TOP.__PVT__maze_solver_parallel__DOT__gen_cores__BRA__7__KET____DOT__solver_inst}
    , __PVT__maze_solver_parallel__DOT__gen_cores__BRA__8__KET____DOT__solver_inst{vlSymsp->TOP.__PVT__maze_solver_parallel__DOT__gen_cores__BRA__8__KET____DOT__solver_inst}
    , __PVT__maze_solver_parallel__DOT__gen_cores__BRA__9__KET____DOT__solver_inst{vlSymsp->TOP.__PVT__maze_solver_parallel__DOT__gen_cores__BRA__9__KET____DOT__solver_inst}
    , __PVT__maze_solver_parallel__DOT__gen_cores__BRA__10__KET____DOT__solver_inst{vlSymsp->TOP.__PVT__maze_solver_parallel__DOT__gen_cores__BRA__10__KET____DOT__solver_inst}
    , __PVT__maze_solver_parallel__DOT__gen_cores__BRA__11__KET____DOT__solver_inst{vlSymsp->TOP.__PVT__maze_solver_parallel__DOT__gen_cores__BRA__11__KET____DOT__solver_inst}
    , __PVT__maze_solver_parallel__DOT__gen_cores__BRA__12__KET____DOT__solver_inst{vlSymsp->TOP.__PVT__maze_solver_parallel__DOT__gen_cores__BRA__12__KET____DOT__solver_inst}
    , __PVT__maze_solver_parallel__DOT__gen_cores__BRA__13__KET____DOT__solver_inst{vlSymsp->TOP.__PVT__maze_solver_parallel__DOT__gen_cores__BRA__13__KET____DOT__solver_inst}
    , __PVT__maze_solver_parallel__DOT__gen_cores__BRA__14__KET____DOT__solver_inst{vlSymsp->TOP.__PVT__maze_solver_parallel__DOT__gen_cores__BRA__14__KET____DOT__solver_inst}
    , __PVT__maze_solver_parallel__DOT__gen_cores__BRA__15__KET____DOT__solver_inst{vlSymsp->TOP.__PVT__maze_solver_parallel__DOT__gen_cores__BRA__15__KET____DOT__solver_inst}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmaze_solver_parallel::Vmaze_solver_parallel(const char* _vcname__)
    : Vmaze_solver_parallel(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmaze_solver_parallel::~Vmaze_solver_parallel() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmaze_solver_parallel___024root___eval_debug_assertions(Vmaze_solver_parallel___024root* vlSelf);
#endif  // VL_DEBUG
void Vmaze_solver_parallel___024root___eval_static(Vmaze_solver_parallel___024root* vlSelf);
void Vmaze_solver_parallel___024root___eval_initial(Vmaze_solver_parallel___024root* vlSelf);
void Vmaze_solver_parallel___024root___eval_settle(Vmaze_solver_parallel___024root* vlSelf);
void Vmaze_solver_parallel___024root___eval(Vmaze_solver_parallel___024root* vlSelf);

void Vmaze_solver_parallel::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmaze_solver_parallel::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmaze_solver_parallel___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmaze_solver_parallel___024root___eval_static(&(vlSymsp->TOP));
        Vmaze_solver_parallel___024root___eval_initial(&(vlSymsp->TOP));
        Vmaze_solver_parallel___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmaze_solver_parallel___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmaze_solver_parallel::eventsPending() { return false; }

uint64_t Vmaze_solver_parallel::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmaze_solver_parallel::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmaze_solver_parallel___024root___eval_final(Vmaze_solver_parallel___024root* vlSelf);

VL_ATTR_COLD void Vmaze_solver_parallel::final() {
    Vmaze_solver_parallel___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmaze_solver_parallel::hierName() const { return vlSymsp->name(); }
const char* Vmaze_solver_parallel::modelName() const { return "Vmaze_solver_parallel"; }
unsigned Vmaze_solver_parallel::threads() const { return 1; }
void Vmaze_solver_parallel::prepareClone() const { contextp()->prepareClone(); }
void Vmaze_solver_parallel::atClone() const {
    contextp()->threadPoolpOnClone();
}
