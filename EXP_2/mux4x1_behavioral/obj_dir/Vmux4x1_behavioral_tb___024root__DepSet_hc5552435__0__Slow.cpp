// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux4x1_behavioral_tb.h for the primary calling header

#include "Vmux4x1_behavioral_tb__pch.h"
#include "Vmux4x1_behavioral_tb__Syms.h"
#include "Vmux4x1_behavioral_tb___024root.h"

VL_ATTR_COLD void Vmux4x1_behavioral_tb___024root___eval_initial__TOP(Vmux4x1_behavioral_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux4x1_behavioral_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_behavioral_tb___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6f72616cU;
    __Vtemp_1[2U] = 0x68617669U;
    __Vtemp_1[3U] = 0x315f6265U;
    __Vtemp_1[4U] = 0x75783478U;
    __Vtemp_1[5U] = 0x6dU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux4x1_behavioral_tb___024root___dump_triggers__stl(Vmux4x1_behavioral_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmux4x1_behavioral_tb___024root___eval_triggers__stl(Vmux4x1_behavioral_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux4x1_behavioral_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_behavioral_tb___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmux4x1_behavioral_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
