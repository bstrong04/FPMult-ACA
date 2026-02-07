// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfpmult.h for the primary calling header

#ifndef VERILATED_VFPMULT___024UNIT_H_
#define VERILATED_VFPMULT___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vfpmult__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfpmult___024unit final {
  public:

    // INTERNAL VARIABLES
    Vfpmult__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vfpmult___024unit();
    ~Vfpmult___024unit();
    void ctor(Vfpmult__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vfpmult___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
