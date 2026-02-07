// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFPMULT__SYMS_H_
#define VERILATED_VFPMULT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vfpmult.h"

// INCLUDE MODULE CLASSES
#include "Vfpmult___024root.h"
#include "Vfpmult___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vfpmult__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vfpmult* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vfpmult___024root              TOP;

    // CONSTRUCTORS
    Vfpmult__Syms(VerilatedContext* contextp, const char* namep, Vfpmult* modelp);
    ~Vfpmult__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
