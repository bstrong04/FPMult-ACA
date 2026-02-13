// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfpmult.h for the primary calling header

#include "Vfpmult__pch.h"

VL_ATTR_COLD void Vfpmult___024root___eval_static(Vfpmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___eval_static\n"); );
    Vfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__fpmult_tb__DOT__clk_in__0 
        = vlSelfRef.fpmult_tb__DOT__clk_in;
}

VL_ATTR_COLD void Vfpmult___024root___eval_final(Vfpmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___eval_final\n"); );
    Vfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfpmult___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vfpmult___024root___eval_phase__stl(Vfpmult___024root* vlSelf);

VL_ATTR_COLD void Vfpmult___024root___eval_settle(Vfpmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___eval_settle\n"); );
    Vfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vfpmult___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("fpmult_tb.sv", 10, "", "DIDNOTCONVERGE: Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vfpmult___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vfpmult___024root___eval_triggers__stl(Vfpmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___eval_triggers__stl\n"); );
    Vfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfpmult___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vfpmult___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfpmult___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vfpmult___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vfpmult___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vfpmult___024root___stl_sequent__TOP__0(Vfpmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___stl_sequent__TOP__0\n"); );
    Vfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ fpmult_tb__DOT__dut__DOT__rd__DOT__s;
    fpmult_tb__DOT__dut__DOT__rd__DOT__s = 0;
    CData/*0:0*/ fpmult_tb__DOT__dut__DOT__rd__DOT__tiebreak;
    fpmult_tb__DOT__dut__DOT__rd__DOT__tiebreak = 0;
    CData/*0:0*/ fpmult_tb__DOT__dut__DOT__rd__DOT__s_tie;
    fpmult_tb__DOT__dut__DOT__rd__DOT__s_tie = 0;
    CData/*0:0*/ fpmult_tb__DOT__dut__DOT__rd__DOT__genblk1__BRA__15__KET____DOT__tmp1;
    fpmult_tb__DOT__dut__DOT__rd__DOT__genblk1__BRA__15__KET____DOT__tmp1 = 0;
    CData/*0:0*/ fpmult_tb__DOT__dut__DOT__rd__DOT____VdfgRegularize_h82d11941_0_2;
    fpmult_tb__DOT__dut__DOT__rd__DOT____VdfgRegularize_h82d11941_0_2 = 0;
    CData/*0:0*/ fpmult_tb__DOT__dut__DOT__rd__DOT____VdfgRegularize_h82d11941_0_3;
    fpmult_tb__DOT__dut__DOT__rd__DOT____VdfgRegularize_h82d11941_0_3 = 0;
    // Body
    vlSelfRef.fpmult_tb__DOT__dut__DOT__oor__DOT__sign 
        = ((IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__oor__DOT__x_sign) 
           ^ (IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__oor__DOT__y_sign));
    fpmult_tb__DOT__dut__DOT__rd__DOT__genblk1__BRA__15__KET____DOT__tmp1 
        = (IData)((0x00004000U == (0x0000c000U & vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg)));
    fpmult_tb__DOT__dut__DOT__rd__DOT____VdfgRegularize_h82d11941_0_3 
        = (IData)((2U == (IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__round_reg)));
    fpmult_tb__DOT__dut__DOT__rd__DOT____VdfgRegularize_h82d11941_0_2 
        = (IData)((3U == (IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__round_reg)));
    fpmult_tb__DOT__dut__DOT__rd__DOT__tiebreak = (1U 
                                                   & ((IData)(
                                                              (0x00008100U 
                                                               == 
                                                               (0x00008100U 
                                                                & vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg))) 
                                                      | (IData)(
                                                                (0x00000080U 
                                                                 == 
                                                                 (0x00008080U 
                                                                  & vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg)))));
    fpmult_tb__DOT__dut__DOT__rd__DOT__s = (IData)(
                                                   (0U 
                                                    != 
                                                    (0x0000003fU 
                                                     & vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg)));
    vlSelfRef.fpmult_tb__DOT__dut__DOT__rd__DOT__fm_on_overflow 
        = (1U & ((IData)((1U == (IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__round_reg))) 
                 | (((~ (IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__sign)) 
                     & (IData)(fpmult_tb__DOT__dut__DOT__rd__DOT____VdfgRegularize_h82d11941_0_3)) 
                    | ((IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__sign) 
                       & (IData)(fpmult_tb__DOT__dut__DOT__rd__DOT____VdfgRegularize_h82d11941_0_2)))));
    fpmult_tb__DOT__dut__DOT__rd__DOT__s_tie = ((IData)(fpmult_tb__DOT__dut__DOT__rd__DOT__s) 
                                                | (IData)(fpmult_tb__DOT__dut__DOT__rd__DOT__tiebreak));
    vlSelfRef.fpmult_tb__DOT__dut__DOT__rd__DOT__nonzerotrail 
        = (1U & ((vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg 
                  >> 6U) | ((IData)(fpmult_tb__DOT__dut__DOT__rd__DOT__s) 
                            | (IData)((0x00008080U 
                                       == (0x00008080U 
                                           & vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg))))));
    vlSelfRef.fpmult_tb__DOT__dut__DOT__rd__DOT____VdfgRegularize_h82d11941_0_0 
        = ((IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__rd__DOT__nonzerotrail) 
           & (IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__sign));
    vlSelfRef.fpmult_tb__DOT__dut__DOT__rd__DOT____VdfgRegularize_h82d11941_0_5 
        = ((~ (IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__sign)) 
           & (IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__rd__DOT__nonzerotrail));
    vlSelfRef.fpmult_tb__DOT__dut__DOT__rd__DOT__bm 
        = (0x000001ffU & ((((((2U & ((0x0003fffeU & 
                                      (vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg 
                                       >> 0x0000000eU)) 
                                     | ((IData)(fpmult_tb__DOT__dut__DOT__rd__DOT__genblk1__BRA__15__KET____DOT__tmp1) 
                                        << 1U))) | 
                              (1U & ((IData)((0x0000c000U 
                                              == (0x0000c000U 
                                                  & vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg))) 
                                     | (IData)((0x00002000U 
                                                == 
                                                (0x0000a000U 
                                                 & vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg)))))) 
                             << 6U) | (((2U & (((IData)(
                                                        (0x0000a000U 
                                                         == 
                                                         (0x0000a000U 
                                                          & vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg))) 
                                                | (IData)(
                                                          (0x00001000U 
                                                           == 
                                                           (0x00009000U 
                                                            & vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg)))) 
                                               << 1U)) 
                                        | (1U & ((IData)(
                                                         (0x00009000U 
                                                          == 
                                                          (0x00009000U 
                                                           & vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg))) 
                                                 | (IData)(
                                                           (0x00000800U 
                                                            == 
                                                            (0x00008800U 
                                                             & vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg)))))) 
                                       << 4U)) | ((
                                                   ((2U 
                                                     & (((IData)(
                                                                 (0x00008800U 
                                                                  == 
                                                                  (0x00008800U 
                                                                   & vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg))) 
                                                         | (IData)(
                                                                   (0x00000400U 
                                                                    == 
                                                                    (0x00008400U 
                                                                     & vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg)))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(
                                                                  (0x00008400U 
                                                                   == 
                                                                   (0x00008400U 
                                                                    & vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg))) 
                                                          | (IData)(
                                                                    (0x00000200U 
                                                                     == 
                                                                     (0x00008200U 
                                                                      & vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg)))))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (((IData)(
                                                                  (0x00008200U 
                                                                   == 
                                                                   (0x00008200U 
                                                                    & vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg))) 
                                                          | (IData)(
                                                                    (0x00000100U 
                                                                     == 
                                                                     (0x00008100U 
                                                                      & vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg)))) 
                                                         << 1U)) 
                                                     | (IData)(fpmult_tb__DOT__dut__DOT__rd__DOT__tiebreak)))) 
                          + (1U & ((IData)(((0U == (IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__round_reg)) 
                                            & ((IData)(
                                                       ((0x00008080U 
                                                         == 
                                                         (0x00008080U 
                                                          & vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg)) 
                                                        & ((vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg 
                                                            >> 6U) 
                                                           | (IData)(fpmult_tb__DOT__dut__DOT__rd__DOT__s_tie)))) 
                                               | (IData)(
                                                         ((0x00000040U 
                                                           == 
                                                           (0x00008040U 
                                                            & vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg)) 
                                                          & (IData)(fpmult_tb__DOT__dut__DOT__rd__DOT__s_tie)))))) 
                                   | (((IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__rd__DOT____VdfgRegularize_h82d11941_0_0) 
                                       & (IData)(fpmult_tb__DOT__dut__DOT__rd__DOT____VdfgRegularize_h82d11941_0_3)) 
                                      | ((IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__rd__DOT____VdfgRegularize_h82d11941_0_5) 
                                         & (IData)(fpmult_tb__DOT__dut__DOT__rd__DOT____VdfgRegularize_h82d11941_0_2)))))));
    vlSelfRef.fpmult_tb__DOT__dut__DOT__rd__DOT__unround_exp 
        = (0x000003ffU & ((IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__exponent) 
                          + ((1U & (vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg 
                                    >> 0x0000000fU)) 
                             + (1U & ((IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__rd__DOT__bm) 
                                      >> 8U)))));
    vlSelfRef.fpmult_tb__DOT__dut__DOT__rd__DOT__shift_amt 
        = (0x000003ffU & ((0x007fU >= (IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__rd__DOT__unround_exp))
                           ? (((IData)(0x0000007fU) 
                               - (IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__rd__DOT__unround_exp)) 
                              + (3U & (VL_SHIFTL_III(2,2,32, 
                                                     (1U 
                                                      & (vlSelfRef.fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg 
                                                         >> 0x0000000fU)), 1U) 
                                       + (IData)(fpmult_tb__DOT__dut__DOT__rd__DOT__genblk1__BRA__15__KET____DOT__tmp1))))
                           : ((IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__rd__DOT__unround_exp) 
                              - (IData)(0x0000007fU))));
    vlSelfRef.fpmult_tb__DOT__dut__DOT__rd__DOT__is_subnormal 
        = (((0x007fU < (IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__rd__DOT__unround_exp)) 
            & ((0U == (0x000000ffU & vlSelfRef.fpmult_tb__DOT__dut__DOT__x_fix)) 
               | (0U == (0x000000ffU & vlSelfRef.fpmult_tb__DOT__dut__DOT__y_fix)))) 
           | (0x007fU >= (IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__rd__DOT__unround_exp)));
    vlSelfRef.fpmult_tb__DOT__dut__DOT__true_exp = 
        (0x000003ffU & ((0x017dU < (IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__rd__DOT__unround_exp))
                         ? ((IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__rd__DOT__fm_on_overflow)
                             ? 0x0000017dU : 0x0000017eU)
                         : ((IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__rd__DOT__is_subnormal)
                             ? 0x0000007eU : (IData)(vlSelfRef.fpmult_tb__DOT__dut__DOT__rd__DOT__unround_exp))));
}

VL_ATTR_COLD void Vfpmult___024root___eval_stl(Vfpmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___eval_stl\n"); );
    Vfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vfpmult___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vfpmult___024root___eval_phase__stl(Vfpmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___eval_phase__stl\n"); );
    Vfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vfpmult___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vfpmult___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vfpmult___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vfpmult___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfpmult___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vfpmult___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge fpmult_tb.clk_in)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge fpmult_tb.clk_in)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfpmult___024root___ctor_var_reset(Vfpmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___ctor_var_reset\n"); );
    Vfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->fpmult_tb__DOT__rst_in_N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17961262217266213541ull);
    vlSelf->fpmult_tb__DOT__clk_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4544485005244276523ull);
    vlSelf->fpmult_tb__DOT__x_in = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17693384569394971522ull);
    vlSelf->fpmult_tb__DOT__y_in = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10391658975131524709ull);
    vlSelf->fpmult_tb__DOT__round_in = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2172285676508535580ull);
    vlSelf->fpmult_tb__DOT__start_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11644990663595610569ull);
    vlSelf->fpmult_tb__DOT__p_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4798902475136930817ull);
    vlSelf->fpmult_tb__DOT__oor_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5124841105390427207ull);
    vlSelf->fpmult_tb__DOT__valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11661036661768053352ull);
    vlSelf->fpmult_tb__DOT__ready_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12541842160293175440ull);
    vlSelf->fpmult_tb__DOT__line = VL_SCOPED_RAND_RESET_Q(54, __VscopeHash, 5727555271241012979ull);
    vlSelf->fpmult_tb__DOT__test_x = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1503847092443455353ull);
    vlSelf->fpmult_tb__DOT__test_y = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11730983160922518973ull);
    vlSelf->fpmult_tb__DOT__test_p = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7117352749626034018ull);
    vlSelf->fpmult_tb__DOT__oor = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7578184180734890294ull);
    vlSelf->fpmult_tb__DOT__round_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5543272149073156687ull);
    vlSelf->fpmult_tb__DOT__out_is_nan = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18145220655505797114ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__x_fix = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 12542590380902202831ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__y_fix = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8771758450768682553ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__exponent = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7427990729042173597ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__true_exp = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5889979066821667522ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__fix_exp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11402089703579077988ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__x_hidden = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17881014188090479681ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__y_hidden = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7633651237589341924ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10968207904817172986ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__round_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9962198200893431363ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__fix_prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14551107168189335384ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__oor_found = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9208894721706778687ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4879575782082583729ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__adx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7111686251467320203ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__mc__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2249520231380538984ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__mc__DOT__load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6478933812037076822ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__mc__DOT__computing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6427045768455520320ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__b_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13120710305844214986ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3022506784587766133ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2553637299794462532ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__unnamedblk1__DOT__next_acc = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7991397265895147870ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__oor__DOT__x_exp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4489403352818619664ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__oor__DOT__y_exp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13117327953283494160ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__oor__DOT__x_frac = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9375950308380298082ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__oor__DOT__y_frac = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17961304019663239729ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__oor__DOT__x_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7840751917172913756ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__oor__DOT__y_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18090176942092688757ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__oor__DOT__sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16928731478181650680ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__oor__DOT__in_latched = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17199019698594955210ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__rd__DOT__nonzerotrail = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18319558509342960327ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__rd__DOT__bm = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17078651044321990633ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__rd__DOT__unround_exp = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7511260177231769830ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__rd__DOT__fm_on_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9695462030342475852ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__rd__DOT__is_subnormal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17001384368955218903ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__rd__DOT__shift_amt = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16183586324354908762ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__rd__DOT____VdfgRegularize_h82d11941_0_0 = 0;
    vlSelf->fpmult_tb__DOT__dut__DOT__rd__DOT____VdfgRegularize_h82d11941_0_5 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__fpmult_tb__DOT__clk_in__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
