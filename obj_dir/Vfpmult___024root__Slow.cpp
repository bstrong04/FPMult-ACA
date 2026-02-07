// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfpmult.h for the primary calling header

#include "Vfpmult__pch.h"

void Vfpmult___024root___ctor_var_reset(Vfpmult___024root* vlSelf);

Vfpmult___024root::Vfpmult___024root(Vfpmult__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vfpmult___024root___ctor_var_reset(this);
}

void Vfpmult___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vfpmult___024root::~Vfpmult___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
