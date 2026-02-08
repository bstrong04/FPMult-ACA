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

VL_ATTR_COLD void Vfpmult___024root___eval_settle(Vfpmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpmult___024root___eval_settle\n"); );
    Vfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(edge fpmult_tb.clk_in)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge fpmult_tb.clk_in)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge fpmult_tb.clk_in)\n");
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
    vlSelf->fpmult_tb__DOT__out_is_nan = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18145220655505797114ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__x_fix = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 12542590380902202831ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__y_fix = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8771758450768682553ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__exponent = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7427990729042173597ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10968207904817172986ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4879575782082583729ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__adx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7111686251467320203ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__mc__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2249520231380538984ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__mc__DOT__load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6478933812037076822ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__mc__DOT__computing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6427045768455520320ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__b_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13120710305844214986ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3022506784587766133ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2553637299794462532ull);
    vlSelf->fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__unnamedblk1__DOT__next_acc = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7991397265895147870ull);
    vlSelf->__Vdly__fpmult_tb__DOT__dut__DOT__mc__DOT__fm__DOT__acc_reg = 0;
    vlSelf->__Vdly__fpmult_tb__DOT__dut__DOT__done = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__fpmult_tb__DOT__clk_in__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
