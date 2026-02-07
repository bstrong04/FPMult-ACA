// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfpmult__pch.h"

//============================================================
// Constructors

Vfpmult::Vfpmult(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfpmult__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vfpmult::Vfpmult(const char* _vcname__)
    : Vfpmult(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfpmult::~Vfpmult() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfpmult___024root___eval_debug_assertions(Vfpmult___024root* vlSelf);
#endif  // VL_DEBUG
void Vfpmult___024root___eval_static(Vfpmult___024root* vlSelf);
void Vfpmult___024root___eval_initial(Vfpmult___024root* vlSelf);
void Vfpmult___024root___eval_settle(Vfpmult___024root* vlSelf);
void Vfpmult___024root___eval(Vfpmult___024root* vlSelf);

void Vfpmult::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfpmult::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfpmult___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfpmult___024root___eval_static(&(vlSymsp->TOP));
        Vfpmult___024root___eval_initial(&(vlSymsp->TOP));
        Vfpmult___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfpmult___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfpmult::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vfpmult::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vfpmult::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfpmult___024root___eval_final(Vfpmult___024root* vlSelf);

VL_ATTR_COLD void Vfpmult::final() {
    Vfpmult___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfpmult::hierName() const { return vlSymsp->name(); }
const char* Vfpmult::modelName() const { return "Vfpmult"; }
unsigned Vfpmult::threads() const { return 1; }
void Vfpmult::prepareClone() const { contextp()->prepareClone(); }
void Vfpmult::atClone() const {
    contextp()->threadPoolpOnClone();
}
