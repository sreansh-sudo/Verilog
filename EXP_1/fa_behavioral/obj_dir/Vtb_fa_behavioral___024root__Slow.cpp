// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fa_behavioral.h for the primary calling header

#include "Vtb_fa_behavioral__pch.h"
#include "Vtb_fa_behavioral__Syms.h"
#include "Vtb_fa_behavioral___024root.h"

void Vtb_fa_behavioral___024root___ctor_var_reset(Vtb_fa_behavioral___024root* vlSelf);

Vtb_fa_behavioral___024root::Vtb_fa_behavioral___024root(Vtb_fa_behavioral__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_fa_behavioral___024root___ctor_var_reset(this);
}

void Vtb_fa_behavioral___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_fa_behavioral___024root::~Vtb_fa_behavioral___024root() {
}
