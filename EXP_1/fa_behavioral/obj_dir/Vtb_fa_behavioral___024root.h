// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_fa_behavioral.h for the primary calling header

#ifndef VERILATED_VTB_FA_BEHAVIORAL___024ROOT_H_
#define VERILATED_VTB_FA_BEHAVIORAL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_fa_behavioral__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_fa_behavioral___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_fa_behavioral__DOT__A;
    CData/*0:0*/ tb_fa_behavioral__DOT__B;
    CData/*0:0*/ tb_fa_behavioral__DOT__Cin;
    CData/*0:0*/ tb_fa_behavioral__DOT__Sum;
    CData/*0:0*/ tb_fa_behavioral__DOT__Cout;
    CData/*0:0*/ tb_fa_behavioral__DOT__exp_s;
    CData/*0:0*/ tb_fa_behavioral__DOT__exp_c;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_fa_behavioral__DOT__i;
    IData/*31:0*/ tb_fa_behavioral__DOT__errors;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_fa_behavioral__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_fa_behavioral___024root(Vtb_fa_behavioral__Syms* symsp, const char* v__name);
    ~Vtb_fa_behavioral___024root();
    VL_UNCOPYABLE(Vtb_fa_behavioral___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
