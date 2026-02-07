// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfpmult.h for the primary calling header

#include "Vfpmult__pch.h"

void Vfpmult___024unit___ctor_var_reset(Vfpmult___024unit* vlSelf);

Vfpmult___024unit::Vfpmult___024unit() = default;
Vfpmult___024unit::~Vfpmult___024unit() = default;

void Vfpmult___024unit::ctor(Vfpmult__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vfpmult___024unit___ctor_var_reset(this);
}

void Vfpmult___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vfpmult___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
