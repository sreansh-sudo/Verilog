// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_fa_behavioral__Syms.h"


void Vtb_fa_behavioral___024root__trace_chg_0_sub_0(Vtb_fa_behavioral___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_fa_behavioral___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa_behavioral___024root__trace_chg_0\n"); );
    // Init
    Vtb_fa_behavioral___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fa_behavioral___024root*>(voidSelf);
    Vtb_fa_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_fa_behavioral___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_fa_behavioral___024root__trace_chg_0_sub_0(Vtb_fa_behavioral___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fa_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa_behavioral___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_fa_behavioral__DOT__A));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_fa_behavioral__DOT__B));
        bufp->chgBit(oldp+2,(vlSelfRef.tb_fa_behavioral__DOT__Cin));
        bufp->chgIData(oldp+3,(vlSelfRef.tb_fa_behavioral__DOT__i),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_fa_behavioral__DOT__errors),32);
        bufp->chgBit(oldp+5,(vlSelfRef.tb_fa_behavioral__DOT__exp_s));
        bufp->chgBit(oldp+6,(vlSelfRef.tb_fa_behavioral__DOT__exp_c));
    }
    bufp->chgBit(oldp+7,(vlSelfRef.tb_fa_behavioral__DOT__Sum));
    bufp->chgBit(oldp+8,(vlSelfRef.tb_fa_behavioral__DOT__Cout));
}

void Vtb_fa_behavioral___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa_behavioral___024root__trace_cleanup\n"); );
    // Init
    Vtb_fa_behavioral___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fa_behavioral___024root*>(voidSelf);
    Vtb_fa_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
