// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_fa_behavioral__pch.h"
#include "Vtb_fa_behavioral.h"
#include "Vtb_fa_behavioral___024root.h"

// FUNCTIONS
Vtb_fa_behavioral__Syms::~Vtb_fa_behavioral__Syms()
{
}

Vtb_fa_behavioral__Syms::Vtb_fa_behavioral__Syms(VerilatedContext* contextp, const char* namep, Vtb_fa_behavioral* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(24);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
