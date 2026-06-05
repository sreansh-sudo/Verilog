// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fa_behavioral.h for the primary calling header

#include "Vtb_fa_behavioral__pch.h"
#include "Vtb_fa_behavioral___024root.h"

VL_ATTR_COLD void Vtb_fa_behavioral___024root___eval_static(Vtb_fa_behavioral___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fa_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa_behavioral___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_fa_behavioral___024root___eval_final(Vtb_fa_behavioral___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fa_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa_behavioral___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fa_behavioral___024root___dump_triggers__stl(Vtb_fa_behavioral___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_fa_behavioral___024root___eval_phase__stl(Vtb_fa_behavioral___024root* vlSelf);

VL_ATTR_COLD void Vtb_fa_behavioral___024root___eval_settle(Vtb_fa_behavioral___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fa_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa_behavioral___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_fa_behavioral___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_fa_behavioral.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_fa_behavioral___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fa_behavioral___024root___dump_triggers__stl(Vtb_fa_behavioral___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fa_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa_behavioral___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtb_fa_behavioral___024root___act_sequent__TOP__0(Vtb_fa_behavioral___024root* vlSelf);

VL_ATTR_COLD void Vtb_fa_behavioral___024root___eval_stl(Vtb_fa_behavioral___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fa_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa_behavioral___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_fa_behavioral___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_fa_behavioral___024root___eval_triggers__stl(Vtb_fa_behavioral___024root* vlSelf);

VL_ATTR_COLD bool Vtb_fa_behavioral___024root___eval_phase__stl(Vtb_fa_behavioral___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fa_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa_behavioral___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_fa_behavioral___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_fa_behavioral___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fa_behavioral___024root___dump_triggers__act(Vtb_fa_behavioral___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fa_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa_behavioral___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fa_behavioral___024root___dump_triggers__nba(Vtb_fa_behavioral___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fa_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa_behavioral___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fa_behavioral___024root___ctor_var_reset(Vtb_fa_behavioral___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fa_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa_behavioral___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_fa_behavioral__DOT__A = VL_RAND_RESET_I(1);
    vlSelf->tb_fa_behavioral__DOT__B = VL_RAND_RESET_I(1);
    vlSelf->tb_fa_behavioral__DOT__Cin = VL_RAND_RESET_I(1);
    vlSelf->tb_fa_behavioral__DOT__Sum = VL_RAND_RESET_I(1);
    vlSelf->tb_fa_behavioral__DOT__Cout = VL_RAND_RESET_I(1);
    vlSelf->tb_fa_behavioral__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_fa_behavioral__DOT__errors = VL_RAND_RESET_I(32);
    vlSelf->tb_fa_behavioral__DOT__exp_s = VL_RAND_RESET_I(1);
    vlSelf->tb_fa_behavioral__DOT__exp_c = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
