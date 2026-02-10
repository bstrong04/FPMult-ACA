// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfpmult.h for the primary calling header

#ifndef VERILATED_VFPMULT___024ROOT_H_
#define VERILATED_VFPMULT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vfpmult__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfpmult___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ fpmult_tb__DOT__rst_in_N;
    CData/*0:0*/ fpmult_tb__DOT__clk_in;
    CData/*0:0*/ fpmult_tb__DOT__start_in;
    CData/*3:0*/ fpmult_tb__DOT__oor_out;
    CData/*0:0*/ fpmult_tb__DOT__valid_out;
    CData/*0:0*/ fpmult_tb__DOT__ready_out;
    CData/*3:0*/ fpmult_tb__DOT__oor;
    CData/*0:0*/ fpmult_tb__DOT__out_is_nan;
    CData/*7:0*/ fpmult_tb__DOT__dut__DOT__fix_exp;
    CData/*0:0*/ fpmult_tb__DOT__dut__DOT__x_hidden;
    CData/*0:0*/ fpmult_tb__DOT__dut__DOT__y_hidden;
    CData/*0:0*/ fpmult_tb__DOT__dut__DOT__sign;
    CData/*3:0*/ fpmult_tb__DOT__dut__DOT__oor_found;
    CData/*0:0*/ fpmult_tb__DOT__dut__DOT__done;
    CData/*0:0*/ fpmult_tb__DOT__dut__DOT__adx;
    CData/*1:0*/ fpmult_tb__DOT__dut__DOT__mc__DOT__state;
    CData/*0:0*/ fpmult_tb__DOT__dut__DOT__mc__DOT__load;
    CData/*0:0*/ fpmult_tb__DOT__dut__DOT__mc__DOT__computing;
    CData/*7:0*/ fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__b_reg;
    CData/*7:0*/ fpmult_tb__DOT__dut__DOT__oor__DOT__x_exp;
    CData/*7:0*/ fpmult_tb__DOT__dut__DOT__oor__DOT__y_exp;
    CData/*6:0*/ fpmult_tb__DOT__dut__DOT__oor__DOT__x_frac;
    CData/*6:0*/ fpmult_tb__DOT__dut__DOT__oor__DOT__y_frac;
    CData/*0:0*/ fpmult_tb__DOT__dut__DOT__oor__DOT__x_sign;
    CData/*0:0*/ fpmult_tb__DOT__dut__DOT__oor__DOT__y_sign;
    CData/*0:0*/ fpmult_tb__DOT__dut__DOT__oor__DOT__sign;
    CData/*0:0*/ fpmult_tb__DOT__dut__DOT__oor__DOT__in_latched;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__fpmult_tb__DOT__clk_in__0;
    SData/*15:0*/ fpmult_tb__DOT__x_in;
    SData/*15:0*/ fpmult_tb__DOT__y_in;
    SData/*15:0*/ fpmult_tb__DOT__p_out;
    SData/*15:0*/ fpmult_tb__DOT__test_x;
    SData/*15:0*/ fpmult_tb__DOT__test_y;
    SData/*15:0*/ fpmult_tb__DOT__test_p;
    SData/*8:0*/ fpmult_tb__DOT__dut__DOT__exponent;
    SData/*15:0*/ fpmult_tb__DOT__dut__DOT__fix_prod;
    IData/*16:0*/ fpmult_tb__DOT__dut__DOT__x_fix;
    IData/*16:0*/ fpmult_tb__DOT__dut__DOT__y_fix;
    IData/*16:0*/ fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg;
    IData/*31:0*/ fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__counter;
    IData/*16:0*/ fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__unnamedblk1__DOT__next_acc;
    IData/*31:0*/ __VactIterCount;
    QData/*53:0*/ fpmult_tb__DOT__line;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hbf3208ac__0;
    VlTriggerScheduler __VtrigSched_hbf32086d__0;

    // INTERNAL VARIABLES
    Vfpmult__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vfpmult___024root(Vfpmult__Syms* symsp, const char* namep);
    ~Vfpmult___024root();
    VL_UNCOPYABLE(Vfpmult___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
