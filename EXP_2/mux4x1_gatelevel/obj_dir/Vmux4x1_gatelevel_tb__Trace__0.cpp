// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux4x1_gatelevel_tb__Syms.h"


void Vmux4x1_gatelevel_tb___024root__trace_chg_0_sub_0(Vmux4x1_gatelevel_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmux4x1_gatelevel_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_gatelevel_tb___024root__trace_chg_0\n"); );
    // Init
    Vmux4x1_gatelevel_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux4x1_gatelevel_tb___024root*>(voidSelf);
    Vmux4x1_gatelevel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmux4x1_gatelevel_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmux4x1_gatelevel_tb___024root__trace_chg_0_sub_0(Vmux4x1_gatelevel_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux4x1_gatelevel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_gatelevel_tb___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.mux4x1_gatelevel_tb__DOT__in),4);
        bufp->chgCData(oldp+1,(vlSelfRef.mux4x1_gatelevel_tb__DOT__sel),2);
        bufp->chgBit(oldp+2,((1U & ((IData)(((0U == (IData)(vlSelfRef.mux4x1_gatelevel_tb__DOT__sel)) 
                                             & (IData)(vlSelfRef.mux4x1_gatelevel_tb__DOT__in))) 
                                    | ((IData)(((1U 
                                                 == (IData)(vlSelfRef.mux4x1_gatelevel_tb__DOT__sel)) 
                                                & ((IData)(vlSelfRef.mux4x1_gatelevel_tb__DOT__in) 
                                                   >> 1U))) 
                                       | ((IData)((
                                                   (2U 
                                                    == (IData)(vlSelfRef.mux4x1_gatelevel_tb__DOT__sel)) 
                                                   & ((IData)(vlSelfRef.mux4x1_gatelevel_tb__DOT__in) 
                                                      >> 2U))) 
                                          | (IData)(
                                                    ((3U 
                                                      == (IData)(vlSelfRef.mux4x1_gatelevel_tb__DOT__sel)) 
                                                     & ((IData)(vlSelfRef.mux4x1_gatelevel_tb__DOT__in) 
                                                        >> 3U)))))))));
        bufp->chgBit(oldp+3,((1U & (~ (IData)(vlSelfRef.mux4x1_gatelevel_tb__DOT__sel)))));
        bufp->chgBit(oldp+4,((1U & (~ ((IData)(vlSelfRef.mux4x1_gatelevel_tb__DOT__sel) 
                                       >> 1U)))));
        bufp->chgBit(oldp+5,((1U & (IData)(((0U == (IData)(vlSelfRef.mux4x1_gatelevel_tb__DOT__sel)) 
                                            & (IData)(vlSelfRef.mux4x1_gatelevel_tb__DOT__in))))));
        bufp->chgBit(oldp+6,((1U & (IData)(((1U == (IData)(vlSelfRef.mux4x1_gatelevel_tb__DOT__sel)) 
                                            & ((IData)(vlSelfRef.mux4x1_gatelevel_tb__DOT__in) 
                                               >> 1U))))));
        bufp->chgBit(oldp+7,((1U & (IData)(((2U == (IData)(vlSelfRef.mux4x1_gatelevel_tb__DOT__sel)) 
                                            & ((IData)(vlSelfRef.mux4x1_gatelevel_tb__DOT__in) 
                                               >> 2U))))));
        bufp->chgBit(oldp+8,((1U & (IData)(((3U == (IData)(vlSelfRef.mux4x1_gatelevel_tb__DOT__sel)) 
                                            & ((IData)(vlSelfRef.mux4x1_gatelevel_tb__DOT__in) 
                                               >> 3U))))));
    }
}

void Vmux4x1_gatelevel_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_gatelevel_tb___024root__trace_cleanup\n"); );
    // Init
    Vmux4x1_gatelevel_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux4x1_gatelevel_tb___024root*>(voidSelf);
    Vmux4x1_gatelevel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
