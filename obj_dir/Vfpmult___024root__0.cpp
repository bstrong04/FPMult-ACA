// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfpmult.h for the primary calling header

#include "Vfpmult__pch.h"

VlCoroutine Vfpmult___024root___eval_initial__TOP__Vtiming__0(Vfpmult___024root* vlSelf);
VlCoroutine Vfpmult___024root___eval_initial__TOP__Vtiming__1(Vfpmult___024root* vlSelf);

void Vfpmult___024root___eval_initial(Vfpmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___eval_initial\n"); );
    Vfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfpmult___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vfpmult___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vfpmult___024root___eval_initial__TOP__Vtiming__0(Vfpmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fpmult_tb__DOT__clk_in = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "fpmult_tb.sv", 
                                             48);
        vlSelfRef.fpmult_tb__DOT__clk_in = (1U & (~ (IData)(vlSelfRef.fpmult_tb__DOT__clk_in)));
    }
    co_return;}

VlCoroutine Vfpmult___024root___eval_initial__TOP__Vtiming__1(Vfpmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ fpmult_tb__DOT__fd;
    fpmult_tb__DOT__fd = 0;
    IData/*31:0*/ fpmult_tb__DOT__num_tests;
    fpmult_tb__DOT__num_tests = 0;
    IData/*31:0*/ fpmult_tb__DOT__num_wrong;
    fpmult_tb__DOT__num_wrong = 0;
    IData/*31:0*/ fpmult_tb__DOT__num_displayed;
    fpmult_tb__DOT__num_displayed = 0;
    // Body
    fpmult_tb__DOT__fd = VL_FOPEN_NN("small.txt"s, "r"s);
    ;
    fpmult_tb__DOT__num_tests = 0U;
    fpmult_tb__DOT__num_displayed = 0U;
    fpmult_tb__DOT__num_wrong = 0U;
    co_await vlSelfRef.__VtrigSched_hbf3208ac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fpmult_tb.clk_in)", 
                                                         "fpmult_tb.sv", 
                                                         62);
    co_await vlSelfRef.__VtrigSched_hbf3208ac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fpmult_tb.clk_in)", 
                                                         "fpmult_tb.sv", 
                                                         64);
    while ((! (fpmult_tb__DOT__fd ? feof(VL_CVT_I_FP(fpmult_tb__DOT__fd)) : true))) {
        (void)VL_FSCANF_INX(fpmult_tb__DOT__fd,"%x\n",0,
                            54,&(vlSelfRef.fpmult_tb__DOT__line)) ;
        vlSelfRef.fpmult_tb__DOT__test_x = (0x0000ffffU 
                                            & (IData)(
                                                      (vlSelfRef.fpmult_tb__DOT__line 
                                                       >> 0x24U)));
        vlSelfRef.fpmult_tb__DOT__test_y = (0x0000ffffU 
                                            & (IData)(
                                                      (vlSelfRef.fpmult_tb__DOT__line 
                                                       >> 0x14U)));
        vlSelfRef.fpmult_tb__DOT__test_p = (0x0000ffffU 
                                            & (IData)(
                                                      (vlSelfRef.fpmult_tb__DOT__line 
                                                       >> 4U)));
        vlSelfRef.fpmult_tb__DOT__oor = (0x0000000fU 
                                         & (IData)(vlSelfRef.fpmult_tb__DOT__line));
        vlSelfRef.fpmult_tb__DOT__x_in = vlSelfRef.fpmult_tb__DOT__test_x;
        vlSelfRef.fpmult_tb__DOT__y_in = vlSelfRef.fpmult_tb__DOT__test_y;
        vlSelfRef.fpmult_tb__DOT__start_in = 0U;
        while ((1U & (~ (IData)(vlSelfRef.fpmult_tb__DOT__ready_out)))) {
            co_await vlSelfRef.__VtrigSched_hbf3208ac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge fpmult_tb.clk_in)", 
                                                                 "fpmult_tb.sv", 
                                                                 85);
        }
        co_await vlSelfRef.__VtrigSched_hbf32086d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge fpmult_tb.clk_in)", 
                                                             "fpmult_tb.sv", 
                                                             87);
        vlSelfRef.fpmult_tb__DOT__start_in = 1U;
        co_await vlSelfRef.__VtrigSched_hbf32086d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge fpmult_tb.clk_in)", 
                                                             "fpmult_tb.sv", 
                                                             89);
        vlSelfRef.fpmult_tb__DOT__start_in = 0U;
        vlSelfRef.fpmult_tb__DOT__x_in = 0U;
        vlSelfRef.fpmult_tb__DOT__y_in = 0U;
        while ((1U & (~ (IData)(vlSelfRef.fpmult_tb__DOT__valid_out)))) {
            co_await vlSelfRef.__VtrigSched_hbf3208ac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge fpmult_tb.clk_in)", 
                                                                 "fpmult_tb.sv", 
                                                                 96);
        }
        fpmult_tb__DOT__num_tests = ((IData)(1U) + fpmult_tb__DOT__num_tests);
        vlSelfRef.fpmult_tb__DOT__out_is_nan = (IData)(
                                                       ((((IData)(vlSelfRef.fpmult_tb__DOT__oor_out) 
                                                          >> 1U) 
                                                         & (0x7f80U 
                                                            == 
                                                            (0x7f80U 
                                                             & (IData)(vlSelfRef.fpmult_tb__DOT__p_out)))) 
                                                        & (0U 
                                                           != 
                                                           (0x0000007fU 
                                                            & (IData)(vlSelfRef.fpmult_tb__DOT__p_out)))));
        if ((((IData)(vlSelfRef.fpmult_tb__DOT__p_out) 
              != (IData)(vlSelfRef.fpmult_tb__DOT__test_p)) 
             & (~ (((IData)(vlSelfRef.fpmult_tb__DOT__oor) 
                    >> 1U) & (IData)(vlSelfRef.fpmult_tb__DOT__out_is_nan))))) {
            if (VL_UNLIKELY((VL_GTS_III(32, 0x0000000cU, fpmult_tb__DOT__num_displayed)))) {
                VL_WRITEF_NX("ERROR: x_in = %x, y_in = %x, expected %x, got %x\n       (binary: x_in = %s%0b.%b*2^%0d, y_in = %s%0d.%b*2^%0d, expected %s%0d.%b*2^%0d, got %s%0d.%b*2^%0d) \n",0,
                             16,vlSelfRef.fpmult_tb__DOT__test_x,
                             16,(IData)(vlSelfRef.fpmult_tb__DOT__test_y),
                             16,vlSelfRef.fpmult_tb__DOT__test_p,
                             16,(IData)(vlSelfRef.fpmult_tb__DOT__p_out),
                             8,((0x00008000U & (IData)(vlSelfRef.fpmult_tb__DOT__test_x))
                                 ? 0x2dU : 0x2bU),32,
                             ((0U == (0x000000ffU & 
                                      ((IData)(vlSelfRef.fpmult_tb__DOT__test_x) 
                                       >> 7U))) ? 0U
                               : 1U),7,(0x0000007fU 
                                        & (IData)(vlSelfRef.fpmult_tb__DOT__test_x)),
                             32,((0U == (0x000000ffU 
                                         & ((IData)(vlSelfRef.fpmult_tb__DOT__test_x) 
                                            >> 7U)))
                                  ? 0xffffff82U : (
                                                   VL_EXTENDS_II(32,9, 
                                                                 (0x000000ffU 
                                                                  & ((IData)(vlSelfRef.fpmult_tb__DOT__test_x) 
                                                                     >> 7U))) 
                                                   - (IData)(0x0000007fU))),
                             8,((0x00008000U & (IData)(vlSelfRef.fpmult_tb__DOT__test_y))
                                 ? 0x2dU : 0x2bU),32,
                             ((0U == (0x000000ffU & 
                                      ((IData)(vlSelfRef.fpmult_tb__DOT__test_y) 
                                       >> 7U))) ? 0U
                               : 1U),7,(0x0000007fU 
                                        & (IData)(vlSelfRef.fpmult_tb__DOT__test_y)),
                             32,((0U == (0x000000ffU 
                                         & ((IData)(vlSelfRef.fpmult_tb__DOT__test_y) 
                                            >> 7U)))
                                  ? 0xffffff82U : (
                                                   VL_EXTENDS_II(32,9, 
                                                                 (0x000000ffU 
                                                                  & ((IData)(vlSelfRef.fpmult_tb__DOT__test_y) 
                                                                     >> 7U))) 
                                                   - (IData)(0x0000007fU))),
                             8,((0x00008000U & (IData)(vlSelfRef.fpmult_tb__DOT__test_p))
                                 ? 0x2dU : 0x2bU),32,
                             ((0U == (0x000000ffU & 
                                      ((IData)(vlSelfRef.fpmult_tb__DOT__test_p) 
                                       >> 7U))) ? 0U
                               : 1U),7,(0x0000007fU 
                                        & (IData)(vlSelfRef.fpmult_tb__DOT__test_p)),
                             32,((0U == (0x000000ffU 
                                         & ((IData)(vlSelfRef.fpmult_tb__DOT__test_p) 
                                            >> 7U)))
                                  ? 0xffffff82U : (
                                                   VL_EXTENDS_II(32,9, 
                                                                 (0x000000ffU 
                                                                  & ((IData)(vlSelfRef.fpmult_tb__DOT__test_p) 
                                                                     >> 7U))) 
                                                   - (IData)(0x0000007fU))),
                             8,((0x00008000U & (IData)(vlSelfRef.fpmult_tb__DOT__p_out))
                                 ? 0x2dU : 0x2bU),32,
                             ((0U == (0x000000ffU & 
                                      ((IData)(vlSelfRef.fpmult_tb__DOT__p_out) 
                                       >> 7U))) ? 0U
                               : 1U),7,(0x0000007fU 
                                        & (IData)(vlSelfRef.fpmult_tb__DOT__p_out)),
                             32,((0U == (0x000000ffU 
                                         & ((IData)(vlSelfRef.fpmult_tb__DOT__p_out) 
                                            >> 7U)))
                                  ? 0xffffff82U : (
                                                   VL_EXTENDS_II(32,9, 
                                                                 (0x000000ffU 
                                                                  & ((IData)(vlSelfRef.fpmult_tb__DOT__p_out) 
                                                                     >> 7U))) 
                                                   - (IData)(0x0000007fU))));
                fpmult_tb__DOT__num_displayed = ((IData)(1U) 
                                                 + fpmult_tb__DOT__num_displayed);
            }
            fpmult_tb__DOT__num_wrong = ((IData)(1U) 
                                         + fpmult_tb__DOT__num_wrong);
        }
    }
    VL_FCLOSE_I(fpmult_tb__DOT__fd); VL_WRITEF_NX("%11d errors out of %11d test vectors\n",0,
                                                  32,
                                                  fpmult_tb__DOT__num_wrong,
                                                  32,
                                                  fpmult_tb__DOT__num_tests);
    VL_FINISH_MT("fpmult_tb.sv", 127, "");
    co_return;}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfpmult___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vfpmult___024root___eval_triggers__act(Vfpmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___eval_triggers__act\n"); );
    Vfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.fpmult_tb__DOT__clk_in)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fpmult_tb__DOT__clk_in__0)) 
                                                      << 2U) 
                                                     | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.fpmult_tb__DOT__clk_in) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fpmult_tb__DOT__clk_in__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__fpmult_tb__DOT__clk_in__0 
        = vlSelfRef.fpmult_tb__DOT__clk_in;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfpmult___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vfpmult___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vfpmult___024root___nba_sequent__TOP__0(Vfpmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___nba_sequent__TOP__0\n"); );
    Vfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__fpmult_tb__DOT__dut__DOT__mc__DOT__state;
    __Vdly__fpmult_tb__DOT__dut__DOT__mc__DOT__state = 0;
    IData/*31:0*/ __Vdly__fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__counter;
    __Vdly__fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__counter = 0;
    IData/*16:0*/ __Vdly__fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg;
    __Vdly__fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg = 0;
    CData/*0:0*/ __Vdly__fpmult_tb__DOT__dut__DOT__done;
    __Vdly__fpmult_tb__DOT__dut__DOT__done = 0;
    // Body
    VL_WRITEF_NX(" MULT-CONTROL ADX UPDATE: %b\n",0,
                 1,vlSelfRef.fpmult_tb__DOT__dut__DOT__adx);
    __Vdly__fpmult_tb__DOT__dut__DOT__mc__DOT__state 
        = vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__state;
    __Vdly__fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__counter 
        = vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__counter;
    __Vdly__fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg 
        = vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg;
    __Vdly__fpmult_tb__DOT__dut__DOT__done = vlSelfRef.fpmult_tb__DOT__dut__DOT__done;
    if (vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__load) {
        __Vdly__fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__counter = 8U;
        __Vdly__fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg 
            = (0x000000ffU & (vlSelfRef.fpmult_tb__DOT__dut__DOT__x_fix 
                              >> 8U));
        __Vdly__fpmult_tb__DOT__dut__DOT__done = 0U;
        vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__b_reg 
            = (0x000000ffU & (vlSelfRef.fpmult_tb__DOT__dut__DOT__y_fix 
                              >> 8U));
    } else if (((IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__computing) 
                & (~ (IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__done)))) {
        __Vdly__fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg 
            = (0x0001ffffU & ((1U & vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg)
                               ? ((0x0000ff80U & ((
                                                   (vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg 
                                                    >> 8U) 
                                                   + (IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__b_reg)) 
                                                  << 7U)) 
                                  | (0x0000007fU & 
                                     (vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg 
                                      >> 1U))) : VL_SHIFTR_III(17,17,32, vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg, 1U)));
        __Vdly__fpmult_tb__DOT__dut__DOT__done = (1U 
                                                  == vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__counter);
        __Vdly__fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__counter 
            = (vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__counter 
               - (IData)(1U));
    }
    vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__counter 
        = __Vdly__fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__counter;
    if (vlSelfRef.fpmult_tb__DOT__dut__DOT__done) {
        vlSelfRef.fpmult_tb__DOT__oor_out = 0U;
        vlSelfRef.fpmult_tb__DOT__valid_out = 1U;
        if ((0x00008000U & vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg)) {
            vlSelfRef.fpmult_tb__DOT__dut__DOT__unnamedblk1__DOT__tmp_exp 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__exponent)));
            vlSelfRef.fpmult_tb__DOT__p_out = (((IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__sign) 
                                                << 0x0000000fU) 
                                               | (((IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__unnamedblk1__DOT__tmp_exp) 
                                                   << 7U) 
                                                  | (0x0000007fU 
                                                     & (vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg 
                                                        >> 8U))));
        } else {
            vlSelfRef.fpmult_tb__DOT__p_out = (((IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__sign) 
                                                << 0x0000000fU) 
                                               | (((IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__exponent) 
                                                   << 7U) 
                                                  | (0x0000007fU 
                                                     & (vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg 
                                                        >> 7U))));
        }
    }
    vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg 
        = __Vdly__fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg;
    if ((0U == (IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__state))) {
        vlSelfRef.fpmult_tb__DOT__ready_out = 1U;
        if (vlSelfRef.fpmult_tb__DOT__dut__DOT__adx) {
            vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__load = 1U;
            __Vdly__fpmult_tb__DOT__dut__DOT__mc__DOT__state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__state))) {
        vlSelfRef.fpmult_tb__DOT__ready_out = 0U;
        vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__load = 0U;
        vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__computing = 1U;
        __Vdly__fpmult_tb__DOT__dut__DOT__mc__DOT__state = 2U;
    } else if ((2U == (IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__state))) {
        if (vlSelfRef.fpmult_tb__DOT__dut__DOT__done) {
            vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__computing = 0U;
            __Vdly__fpmult_tb__DOT__dut__DOT__mc__DOT__state = 0U;
        }
    }
    vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__state 
        = __Vdly__fpmult_tb__DOT__dut__DOT__mc__DOT__state;
    if (VL_UNLIKELY((vlSelfRef.fpmult_tb__DOT__start_in))) {
        VL_WRITEF_NX("START_IN - SET\n",0);
        vlSelfRef.fpmult_tb__DOT__dut__DOT__x_fix = 
            (0x00008000U | ((0x00010000U & ((IData)(vlSelfRef.fpmult_tb__DOT__x_in) 
                                            << 1U)) 
                            | ((0x00007f00U & ((IData)(vlSelfRef.fpmult_tb__DOT__x_in) 
                                               << 8U)) 
                               | (0x000000ffU & ((IData)(vlSelfRef.fpmult_tb__DOT__x_in) 
                                                 >> 7U)))));
        vlSelfRef.fpmult_tb__DOT__dut__DOT__y_fix = 
            (0x00008000U | ((0x00010000U & ((IData)(vlSelfRef.fpmult_tb__DOT__y_in) 
                                            << 1U)) 
                            | ((0x00007f00U & ((IData)(vlSelfRef.fpmult_tb__DOT__y_in) 
                                               << 8U)) 
                               | (0x000000ffU & ((IData)(vlSelfRef.fpmult_tb__DOT__y_in) 
                                                 >> 7U)))));
        vlSelfRef.fpmult_tb__DOT__dut__DOT__exponent 
            = (0x000000ffU & ((((IData)(vlSelfRef.fpmult_tb__DOT__x_in) 
                                >> 7U) + ((IData)(vlSelfRef.fpmult_tb__DOT__y_in) 
                                          >> 7U)) - (IData)(0x7fU)));
        vlSelfRef.fpmult_tb__DOT__dut__DOT__sign = 
            (1U & (((IData)(vlSelfRef.fpmult_tb__DOT__x_in) 
                    ^ (IData)(vlSelfRef.fpmult_tb__DOT__y_in)) 
                   >> 0x0fU));
        vlSelfRef.fpmult_tb__DOT__dut__DOT__adx = 1U;
    }
    if (vlSelfRef.fpmult_tb__DOT__dut__DOT__done) {
        vlSelfRef.fpmult_tb__DOT__dut__DOT__adx = 0U;
    }
    vlSelfRef.fpmult_tb__DOT__dut__DOT__done = __Vdly__fpmult_tb__DOT__dut__DOT__done;
}

void Vfpmult___024root___eval_nba(Vfpmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___eval_nba\n"); );
    Vfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfpmult___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vfpmult___024root___timing_commit(Vfpmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___timing_commit\n"); );
    Vfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_hbf3208ac__0.commit(
                                                   "@(posedge fpmult_tb.clk_in)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_hbf32086d__0.commit(
                                                   "@(negedge fpmult_tb.clk_in)");
    }
}

void Vfpmult___024root___timing_resume(Vfpmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___timing_resume\n"); );
    Vfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hbf3208ac__0.resume(
                                                   "@(posedge fpmult_tb.clk_in)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hbf32086d__0.resume(
                                                   "@(negedge fpmult_tb.clk_in)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vfpmult___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vfpmult___024root___eval_phase__act(Vfpmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___eval_phase__act\n"); );
    Vfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vfpmult___024root___eval_triggers__act(vlSelf);
    Vfpmult___024root___timing_commit(vlSelf);
    Vfpmult___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vfpmult___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vfpmult___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vfpmult___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vfpmult___024root___eval_phase__nba(Vfpmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___eval_phase__nba\n"); );
    Vfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vfpmult___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vfpmult___024root___eval_nba(vlSelf);
        Vfpmult___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vfpmult___024root___eval(Vfpmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___eval\n"); );
    Vfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vfpmult___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("fpmult_tb.sv", 10, "", "DIDNOTCONVERGE: NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vfpmult___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("fpmult_tb.sv", 10, "", "DIDNOTCONVERGE: Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vfpmult___024root___eval_phase__act(vlSelf));
    } while (Vfpmult___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vfpmult___024root___eval_debug_assertions(Vfpmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___eval_debug_assertions\n"); );
    Vfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
