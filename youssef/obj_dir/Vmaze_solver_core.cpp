// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmaze_solver_core__pch.h"

//============================================================
// Constructors

Vmaze_solver_core::Vmaze_solver_core(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmaze_solver_core__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , start{vlSymsp->TOP.start}
    , done{vlSymsp->TOP.done}
    , path_len{vlSymsp->TOP.path_len}
    , valid{vlSymsp->TOP.valid}
    , grid0{vlSymsp->TOP.grid0}
    , grid1{vlSymsp->TOP.grid1}
    , grid2{vlSymsp->TOP.grid2}
    , grid3{vlSymsp->TOP.grid3}
    , path_word0{vlSymsp->TOP.path_word0}
    , path_word1{vlSymsp->TOP.path_word1}
    , path_word2{vlSymsp->TOP.path_word2}
    , path_word3{vlSymsp->TOP.path_word3}
    , path_word4{vlSymsp->TOP.path_word4}
    , path_word5{vlSymsp->TOP.path_word5}
    , path_word6{vlSymsp->TOP.path_word6}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmaze_solver_core::Vmaze_solver_core(const char* _vcname__)
    : Vmaze_solver_core(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmaze_solver_core::~Vmaze_solver_core() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmaze_solver_core___024root___eval_debug_assertions(Vmaze_solver_core___024root* vlSelf);
#endif  // VL_DEBUG
void Vmaze_solver_core___024root___eval_static(Vmaze_solver_core___024root* vlSelf);
void Vmaze_solver_core___024root___eval_initial(Vmaze_solver_core___024root* vlSelf);
void Vmaze_solver_core___024root___eval_settle(Vmaze_solver_core___024root* vlSelf);
void Vmaze_solver_core___024root___eval(Vmaze_solver_core___024root* vlSelf);

void Vmaze_solver_core::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmaze_solver_core::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmaze_solver_core___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmaze_solver_core___024root___eval_static(&(vlSymsp->TOP));
        Vmaze_solver_core___024root___eval_initial(&(vlSymsp->TOP));
        Vmaze_solver_core___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmaze_solver_core___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmaze_solver_core::eventsPending() { return false; }

uint64_t Vmaze_solver_core::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmaze_solver_core::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmaze_solver_core___024root___eval_final(Vmaze_solver_core___024root* vlSelf);

VL_ATTR_COLD void Vmaze_solver_core::final() {
    Vmaze_solver_core___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmaze_solver_core::hierName() const { return vlSymsp->name(); }
const char* Vmaze_solver_core::modelName() const { return "Vmaze_solver_core"; }
unsigned Vmaze_solver_core::threads() const { return 1; }
void Vmaze_solver_core::prepareClone() const { contextp()->prepareClone(); }
void Vmaze_solver_core::atClone() const {
    contextp()->threadPoolpOnClone();
}
