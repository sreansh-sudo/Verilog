// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fa_behavioral.h for the primary calling header

#include "Vtb_fa_behavioral__pch.h"
#include "Vtb_fa_behavioral___024root.h"

VlCoroutine Vtb_fa_behavioral___024root___eval_initial__TOP__Vtiming__0(Vtb_fa_behavioral___024root* vlSelf);

void Vtb_fa_behavioral___024root___eval_initial(Vtb_fa_behavioral___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fa_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa_behavioral___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_fa_behavioral___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_fa_behavioral___024root___eval_initial__TOP__Vtiming__0(Vtb_fa_behavioral___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fa_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa_behavioral___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("==========================================\n  TESTBENCH: fa_behavioral\n  A  B Cin | Exp_Sum Exp_Cout | Got_Sum Got_Cout | Result\n==========================================\n",0);
    vlSelfRef.tb_fa_behavioral__DOT__errors = 0U;
    vlSelfRef.tb_fa_behavioral__DOT__A = 0U;
    vlSelfRef.tb_fa_behavioral__DOT__B = 0U;
    vlSelfRef.tb_fa_behavioral__DOT__Cin = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb_fa_behavioral.v", 
                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_fa_behavioral__DOT__exp_s = (((IData)(vlSelfRef.tb_fa_behavioral__DOT__A) 
                                               ^ (IData)(vlSelfRef.tb_fa_behavioral__DOT__B)) 
                                              ^ (IData)(vlSelfRef.tb_fa_behavioral__DOT__Cin));
    vlSelfRef.tb_fa_behavioral__DOT__exp_c = ((((IData)(vlSelfRef.tb_fa_behavioral__DOT__A) 
                                                & (IData)(vlSelfRef.tb_fa_behavioral__DOT__B)) 
                                               | ((IData)(vlSelfRef.tb_fa_behavioral__DOT__B) 
                                                  & (IData)(vlSelfRef.tb_fa_behavioral__DOT__Cin))) 
                                              | ((IData)(vlSelfRef.tb_fa_behavioral__DOT__A) 
                                                 & (IData)(vlSelfRef.tb_fa_behavioral__DOT__Cin)));
    if ((((IData)(vlSelfRef.tb_fa_behavioral__DOT__Sum) 
          == (IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_s)) 
         & ((IData)(vlSelfRef.tb_fa_behavioral__DOT__Cout) 
            == (IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_c)))) {
        VL_WRITEF_NX("  %b  %b  %b  |    %b       %b    |    %b       %b    |  PASS\n",0,
                     1,vlSelfRef.tb_fa_behavioral__DOT__A,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__B),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cin,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_s),
                     1,vlSelfRef.tb_fa_behavioral__DOT__exp_c,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__Sum),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cout);
    } else {
        VL_WRITEF_NX("  %b  %b  %b  |    %b       %b    |    %b       %b    |  FAIL\n",0,
                     1,vlSelfRef.tb_fa_behavioral__DOT__A,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__B),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cin,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_s),
                     1,vlSelfRef.tb_fa_behavioral__DOT__exp_c,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__Sum),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cout);
        vlSelfRef.tb_fa_behavioral__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.tb_fa_behavioral__DOT__errors);
    }
    vlSelfRef.tb_fa_behavioral__DOT__i = 1U;
    vlSelfRef.tb_fa_behavioral__DOT__A = 0U;
    vlSelfRef.tb_fa_behavioral__DOT__B = 0U;
    vlSelfRef.tb_fa_behavioral__DOT__Cin = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb_fa_behavioral.v", 
                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_fa_behavioral__DOT__exp_s = (((IData)(vlSelfRef.tb_fa_behavioral__DOT__A) 
                                               ^ (IData)(vlSelfRef.tb_fa_behavioral__DOT__B)) 
                                              ^ (IData)(vlSelfRef.tb_fa_behavioral__DOT__Cin));
    vlSelfRef.tb_fa_behavioral__DOT__exp_c = ((((IData)(vlSelfRef.tb_fa_behavioral__DOT__A) 
                                                & (IData)(vlSelfRef.tb_fa_behavioral__DOT__B)) 
                                               | ((IData)(vlSelfRef.tb_fa_behavioral__DOT__B) 
                                                  & (IData)(vlSelfRef.tb_fa_behavioral__DOT__Cin))) 
                                              | ((IData)(vlSelfRef.tb_fa_behavioral__DOT__A) 
                                                 & (IData)(vlSelfRef.tb_fa_behavioral__DOT__Cin)));
    if ((((IData)(vlSelfRef.tb_fa_behavioral__DOT__Sum) 
          == (IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_s)) 
         & ((IData)(vlSelfRef.tb_fa_behavioral__DOT__Cout) 
            == (IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_c)))) {
        VL_WRITEF_NX("  %b  %b  %b  |    %b       %b    |    %b       %b    |  PASS\n",0,
                     1,vlSelfRef.tb_fa_behavioral__DOT__A,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__B),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cin,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_s),
                     1,vlSelfRef.tb_fa_behavioral__DOT__exp_c,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__Sum),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cout);
    } else {
        VL_WRITEF_NX("  %b  %b  %b  |    %b       %b    |    %b       %b    |  FAIL\n",0,
                     1,vlSelfRef.tb_fa_behavioral__DOT__A,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__B),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cin,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_s),
                     1,vlSelfRef.tb_fa_behavioral__DOT__exp_c,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__Sum),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cout);
        vlSelfRef.tb_fa_behavioral__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.tb_fa_behavioral__DOT__errors);
    }
    vlSelfRef.tb_fa_behavioral__DOT__i = 2U;
    vlSelfRef.tb_fa_behavioral__DOT__A = 0U;
    vlSelfRef.tb_fa_behavioral__DOT__B = 1U;
    vlSelfRef.tb_fa_behavioral__DOT__Cin = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb_fa_behavioral.v", 
                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_fa_behavioral__DOT__exp_s = (((IData)(vlSelfRef.tb_fa_behavioral__DOT__A) 
                                               ^ (IData)(vlSelfRef.tb_fa_behavioral__DOT__B)) 
                                              ^ (IData)(vlSelfRef.tb_fa_behavioral__DOT__Cin));
    vlSelfRef.tb_fa_behavioral__DOT__exp_c = ((((IData)(vlSelfRef.tb_fa_behavioral__DOT__A) 
                                                & (IData)(vlSelfRef.tb_fa_behavioral__DOT__B)) 
                                               | ((IData)(vlSelfRef.tb_fa_behavioral__DOT__B) 
                                                  & (IData)(vlSelfRef.tb_fa_behavioral__DOT__Cin))) 
                                              | ((IData)(vlSelfRef.tb_fa_behavioral__DOT__A) 
                                                 & (IData)(vlSelfRef.tb_fa_behavioral__DOT__Cin)));
    if ((((IData)(vlSelfRef.tb_fa_behavioral__DOT__Sum) 
          == (IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_s)) 
         & ((IData)(vlSelfRef.tb_fa_behavioral__DOT__Cout) 
            == (IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_c)))) {
        VL_WRITEF_NX("  %b  %b  %b  |    %b       %b    |    %b       %b    |  PASS\n",0,
                     1,vlSelfRef.tb_fa_behavioral__DOT__A,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__B),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cin,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_s),
                     1,vlSelfRef.tb_fa_behavioral__DOT__exp_c,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__Sum),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cout);
    } else {
        VL_WRITEF_NX("  %b  %b  %b  |    %b       %b    |    %b       %b    |  FAIL\n",0,
                     1,vlSelfRef.tb_fa_behavioral__DOT__A,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__B),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cin,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_s),
                     1,vlSelfRef.tb_fa_behavioral__DOT__exp_c,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__Sum),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cout);
        vlSelfRef.tb_fa_behavioral__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.tb_fa_behavioral__DOT__errors);
    }
    vlSelfRef.tb_fa_behavioral__DOT__i = 3U;
    vlSelfRef.tb_fa_behavioral__DOT__A = 0U;
    vlSelfRef.tb_fa_behavioral__DOT__B = 1U;
    vlSelfRef.tb_fa_behavioral__DOT__Cin = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb_fa_behavioral.v", 
                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_fa_behavioral__DOT__exp_s = (((IData)(vlSelfRef.tb_fa_behavioral__DOT__A) 
                                               ^ (IData)(vlSelfRef.tb_fa_behavioral__DOT__B)) 
                                              ^ (IData)(vlSelfRef.tb_fa_behavioral__DOT__Cin));
    vlSelfRef.tb_fa_behavioral__DOT__exp_c = ((((IData)(vlSelfRef.tb_fa_behavioral__DOT__A) 
                                                & (IData)(vlSelfRef.tb_fa_behavioral__DOT__B)) 
                                               | ((IData)(vlSelfRef.tb_fa_behavioral__DOT__B) 
                                                  & (IData)(vlSelfRef.tb_fa_behavioral__DOT__Cin))) 
                                              | ((IData)(vlSelfRef.tb_fa_behavioral__DOT__A) 
                                                 & (IData)(vlSelfRef.tb_fa_behavioral__DOT__Cin)));
    if ((((IData)(vlSelfRef.tb_fa_behavioral__DOT__Sum) 
          == (IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_s)) 
         & ((IData)(vlSelfRef.tb_fa_behavioral__DOT__Cout) 
            == (IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_c)))) {
        VL_WRITEF_NX("  %b  %b  %b  |    %b       %b    |    %b       %b    |  PASS\n",0,
                     1,vlSelfRef.tb_fa_behavioral__DOT__A,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__B),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cin,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_s),
                     1,vlSelfRef.tb_fa_behavioral__DOT__exp_c,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__Sum),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cout);
    } else {
        VL_WRITEF_NX("  %b  %b  %b  |    %b       %b    |    %b       %b    |  FAIL\n",0,
                     1,vlSelfRef.tb_fa_behavioral__DOT__A,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__B),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cin,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_s),
                     1,vlSelfRef.tb_fa_behavioral__DOT__exp_c,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__Sum),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cout);
        vlSelfRef.tb_fa_behavioral__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.tb_fa_behavioral__DOT__errors);
    }
    vlSelfRef.tb_fa_behavioral__DOT__i = 4U;
    vlSelfRef.tb_fa_behavioral__DOT__A = 1U;
    vlSelfRef.tb_fa_behavioral__DOT__B = 0U;
    vlSelfRef.tb_fa_behavioral__DOT__Cin = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb_fa_behavioral.v", 
                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_fa_behavioral__DOT__exp_s = (((IData)(vlSelfRef.tb_fa_behavioral__DOT__A) 
                                               ^ (IData)(vlSelfRef.tb_fa_behavioral__DOT__B)) 
                                              ^ (IData)(vlSelfRef.tb_fa_behavioral__DOT__Cin));
    vlSelfRef.tb_fa_behavioral__DOT__exp_c = ((((IData)(vlSelfRef.tb_fa_behavioral__DOT__A) 
                                                & (IData)(vlSelfRef.tb_fa_behavioral__DOT__B)) 
                                               | ((IData)(vlSelfRef.tb_fa_behavioral__DOT__B) 
                                                  & (IData)(vlSelfRef.tb_fa_behavioral__DOT__Cin))) 
                                              | ((IData)(vlSelfRef.tb_fa_behavioral__DOT__A) 
                                                 & (IData)(vlSelfRef.tb_fa_behavioral__DOT__Cin)));
    if ((((IData)(vlSelfRef.tb_fa_behavioral__DOT__Sum) 
          == (IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_s)) 
         & ((IData)(vlSelfRef.tb_fa_behavioral__DOT__Cout) 
            == (IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_c)))) {
        VL_WRITEF_NX("  %b  %b  %b  |    %b       %b    |    %b       %b    |  PASS\n",0,
                     1,vlSelfRef.tb_fa_behavioral__DOT__A,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__B),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cin,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_s),
                     1,vlSelfRef.tb_fa_behavioral__DOT__exp_c,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__Sum),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cout);
    } else {
        VL_WRITEF_NX("  %b  %b  %b  |    %b       %b    |    %b       %b    |  FAIL\n",0,
                     1,vlSelfRef.tb_fa_behavioral__DOT__A,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__B),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cin,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_s),
                     1,vlSelfRef.tb_fa_behavioral__DOT__exp_c,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__Sum),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cout);
        vlSelfRef.tb_fa_behavioral__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.tb_fa_behavioral__DOT__errors);
    }
    vlSelfRef.tb_fa_behavioral__DOT__i = 5U;
    vlSelfRef.tb_fa_behavioral__DOT__A = 1U;
    vlSelfRef.tb_fa_behavioral__DOT__B = 0U;
    vlSelfRef.tb_fa_behavioral__DOT__Cin = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb_fa_behavioral.v", 
                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_fa_behavioral__DOT__exp_s = (((IData)(vlSelfRef.tb_fa_behavioral__DOT__A) 
                                               ^ (IData)(vlSelfRef.tb_fa_behavioral__DOT__B)) 
                                              ^ (IData)(vlSelfRef.tb_fa_behavioral__DOT__Cin));
    vlSelfRef.tb_fa_behavioral__DOT__exp_c = ((((IData)(vlSelfRef.tb_fa_behavioral__DOT__A) 
                                                & (IData)(vlSelfRef.tb_fa_behavioral__DOT__B)) 
                                               | ((IData)(vlSelfRef.tb_fa_behavioral__DOT__B) 
                                                  & (IData)(vlSelfRef.tb_fa_behavioral__DOT__Cin))) 
                                              | ((IData)(vlSelfRef.tb_fa_behavioral__DOT__A) 
                                                 & (IData)(vlSelfRef.tb_fa_behavioral__DOT__Cin)));
    if ((((IData)(vlSelfRef.tb_fa_behavioral__DOT__Sum) 
          == (IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_s)) 
         & ((IData)(vlSelfRef.tb_fa_behavioral__DOT__Cout) 
            == (IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_c)))) {
        VL_WRITEF_NX("  %b  %b  %b  |    %b       %b    |    %b       %b    |  PASS\n",0,
                     1,vlSelfRef.tb_fa_behavioral__DOT__A,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__B),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cin,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_s),
                     1,vlSelfRef.tb_fa_behavioral__DOT__exp_c,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__Sum),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cout);
    } else {
        VL_WRITEF_NX("  %b  %b  %b  |    %b       %b    |    %b       %b    |  FAIL\n",0,
                     1,vlSelfRef.tb_fa_behavioral__DOT__A,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__B),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cin,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_s),
                     1,vlSelfRef.tb_fa_behavioral__DOT__exp_c,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__Sum),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cout);
        vlSelfRef.tb_fa_behavioral__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.tb_fa_behavioral__DOT__errors);
    }
    vlSelfRef.tb_fa_behavioral__DOT__i = 6U;
    vlSelfRef.tb_fa_behavioral__DOT__A = 1U;
    vlSelfRef.tb_fa_behavioral__DOT__B = 1U;
    vlSelfRef.tb_fa_behavioral__DOT__Cin = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb_fa_behavioral.v", 
                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_fa_behavioral__DOT__exp_s = (((IData)(vlSelfRef.tb_fa_behavioral__DOT__A) 
                                               ^ (IData)(vlSelfRef.tb_fa_behavioral__DOT__B)) 
                                              ^ (IData)(vlSelfRef.tb_fa_behavioral__DOT__Cin));
    vlSelfRef.tb_fa_behavioral__DOT__exp_c = ((((IData)(vlSelfRef.tb_fa_behavioral__DOT__A) 
                                                & (IData)(vlSelfRef.tb_fa_behavioral__DOT__B)) 
                                               | ((IData)(vlSelfRef.tb_fa_behavioral__DOT__B) 
                                                  & (IData)(vlSelfRef.tb_fa_behavioral__DOT__Cin))) 
                                              | ((IData)(vlSelfRef.tb_fa_behavioral__DOT__A) 
                                                 & (IData)(vlSelfRef.tb_fa_behavioral__DOT__Cin)));
    if ((((IData)(vlSelfRef.tb_fa_behavioral__DOT__Sum) 
          == (IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_s)) 
         & ((IData)(vlSelfRef.tb_fa_behavioral__DOT__Cout) 
            == (IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_c)))) {
        VL_WRITEF_NX("  %b  %b  %b  |    %b       %b    |    %b       %b    |  PASS\n",0,
                     1,vlSelfRef.tb_fa_behavioral__DOT__A,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__B),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cin,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_s),
                     1,vlSelfRef.tb_fa_behavioral__DOT__exp_c,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__Sum),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cout);
    } else {
        VL_WRITEF_NX("  %b  %b  %b  |    %b       %b    |    %b       %b    |  FAIL\n",0,
                     1,vlSelfRef.tb_fa_behavioral__DOT__A,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__B),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cin,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_s),
                     1,vlSelfRef.tb_fa_behavioral__DOT__exp_c,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__Sum),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cout);
        vlSelfRef.tb_fa_behavioral__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.tb_fa_behavioral__DOT__errors);
    }
    vlSelfRef.tb_fa_behavioral__DOT__i = 7U;
    vlSelfRef.tb_fa_behavioral__DOT__A = 1U;
    vlSelfRef.tb_fa_behavioral__DOT__B = 1U;
    vlSelfRef.tb_fa_behavioral__DOT__Cin = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb_fa_behavioral.v", 
                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_fa_behavioral__DOT__exp_s = (((IData)(vlSelfRef.tb_fa_behavioral__DOT__A) 
                                               ^ (IData)(vlSelfRef.tb_fa_behavioral__DOT__B)) 
                                              ^ (IData)(vlSelfRef.tb_fa_behavioral__DOT__Cin));
    vlSelfRef.tb_fa_behavioral__DOT__exp_c = ((((IData)(vlSelfRef.tb_fa_behavioral__DOT__A) 
                                                & (IData)(vlSelfRef.tb_fa_behavioral__DOT__B)) 
                                               | ((IData)(vlSelfRef.tb_fa_behavioral__DOT__B) 
                                                  & (IData)(vlSelfRef.tb_fa_behavioral__DOT__Cin))) 
                                              | ((IData)(vlSelfRef.tb_fa_behavioral__DOT__A) 
                                                 & (IData)(vlSelfRef.tb_fa_behavioral__DOT__Cin)));
    if ((((IData)(vlSelfRef.tb_fa_behavioral__DOT__Sum) 
          == (IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_s)) 
         & ((IData)(vlSelfRef.tb_fa_behavioral__DOT__Cout) 
            == (IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_c)))) {
        VL_WRITEF_NX("  %b  %b  %b  |    %b       %b    |    %b       %b    |  PASS\n",0,
                     1,vlSelfRef.tb_fa_behavioral__DOT__A,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__B),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cin,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_s),
                     1,vlSelfRef.tb_fa_behavioral__DOT__exp_c,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__Sum),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cout);
    } else {
        VL_WRITEF_NX("  %b  %b  %b  |    %b       %b    |    %b       %b    |  FAIL\n",0,
                     1,vlSelfRef.tb_fa_behavioral__DOT__A,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__B),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cin,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__exp_s),
                     1,vlSelfRef.tb_fa_behavioral__DOT__exp_c,
                     1,(IData)(vlSelfRef.tb_fa_behavioral__DOT__Sum),
                     1,vlSelfRef.tb_fa_behavioral__DOT__Cout);
        vlSelfRef.tb_fa_behavioral__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.tb_fa_behavioral__DOT__errors);
    }
    vlSelfRef.tb_fa_behavioral__DOT__i = 8U;
    VL_WRITEF_NX("==========================================\n",0);
    if ((0U == vlSelfRef.tb_fa_behavioral__DOT__errors)) {
        VL_WRITEF_NX("  ALL 8 VECTORS PASSED\n",0);
    } else {
        VL_WRITEF_NX("  FAILED: %0d error(s)\n",0,32,
                     vlSelfRef.tb_fa_behavioral__DOT__errors);
    }
    VL_WRITEF_NX("==========================================\n",0);
    VL_FINISH_MT("tb_fa_behavioral.v", 41, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void Vtb_fa_behavioral___024root___act_sequent__TOP__0(Vtb_fa_behavioral___024root* vlSelf);

void Vtb_fa_behavioral___024root___eval_act(Vtb_fa_behavioral___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fa_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa_behavioral___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_fa_behavioral___024root___act_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 8> Vtb_fa_behavioral__ConstPool__TABLE_h485816db_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtb_fa_behavioral__ConstPool__TABLE_he9b6878e_0;

VL_INLINE_OPT void Vtb_fa_behavioral___024root___act_sequent__TOP__0(Vtb_fa_behavioral___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fa_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa_behavioral___024root___act_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.tb_fa_behavioral__DOT__Cin) 
                     << 2U) | (((IData)(vlSelfRef.tb_fa_behavioral__DOT__B) 
                                << 1U) | (IData)(vlSelfRef.tb_fa_behavioral__DOT__A)));
    vlSelfRef.tb_fa_behavioral__DOT__Cout = Vtb_fa_behavioral__ConstPool__TABLE_h485816db_0
        [__Vtableidx1];
    vlSelfRef.tb_fa_behavioral__DOT__Sum = Vtb_fa_behavioral__ConstPool__TABLE_he9b6878e_0
        [__Vtableidx1];
}

void Vtb_fa_behavioral___024root___eval_nba(Vtb_fa_behavioral___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fa_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa_behavioral___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_fa_behavioral___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_fa_behavioral___024root___timing_resume(Vtb_fa_behavioral___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fa_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa_behavioral___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_fa_behavioral___024root___eval_triggers__act(Vtb_fa_behavioral___024root* vlSelf);

bool Vtb_fa_behavioral___024root___eval_phase__act(Vtb_fa_behavioral___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fa_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa_behavioral___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_fa_behavioral___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_fa_behavioral___024root___timing_resume(vlSelf);
        Vtb_fa_behavioral___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_fa_behavioral___024root___eval_phase__nba(Vtb_fa_behavioral___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fa_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa_behavioral___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_fa_behavioral___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fa_behavioral___024root___dump_triggers__nba(Vtb_fa_behavioral___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fa_behavioral___024root___dump_triggers__act(Vtb_fa_behavioral___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_fa_behavioral___024root___eval(Vtb_fa_behavioral___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fa_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa_behavioral___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_fa_behavioral___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_fa_behavioral.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_fa_behavioral___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_fa_behavioral.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_fa_behavioral___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_fa_behavioral___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_fa_behavioral___024root___eval_debug_assertions(Vtb_fa_behavioral___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fa_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa_behavioral___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
