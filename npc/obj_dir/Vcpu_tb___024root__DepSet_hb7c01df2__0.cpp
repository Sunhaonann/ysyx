// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_tb.h for the primary calling header

#include "verilated.h"

#include "Vcpu_tb__Syms.h"
#include "Vcpu_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vcpu_tb___024root___eval_initial__TOP__1(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    co_await vlSelf->__VdlySched.delay(0x7a120ULL, 
                                       "sim_n/cpu_tb.v", 
                                       21);
    VL_FINISH_MT("sim_n/cpu_tb.v", 21, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__act(Vcpu_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu_tb___024root___eval_triggers__act(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->cpu_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__cpu_tb__DOT__clk)));
    vlSelf->__VactTriggered.at(1U) = vlSelf->__VdlySched.awaitingCurrentTime();
    vlSelf->__Vtrigrprev__TOP__cpu_tb__DOT__clk = vlSelf->cpu_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vcpu_tb___024root___act_sequent__TOP__0(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("Time: %0t | clk: %b | rst: %b\n",
                  64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->cpu_tb__DOT__clk),
                  1,vlSelf->cpu_tb__DOT__rst);
    }
}

VL_INLINE_OPT void Vcpu_tb___024root___nba_sequent__TOP__1(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__cpu_tb__DOT__clk__v0) {
        vlSelf->cpu_tb__DOT__clk = vlSelf->__Vdlyvval__cpu_tb__DOT__clk__v0;
        vlSelf->__Vdlyvset__cpu_tb__DOT__clk__v0 = 0U;
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("Time: %0t | clk: %b | rst: %b\n",
                  64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->cpu_tb__DOT__clk),
                  1,vlSelf->cpu_tb__DOT__rst);
    }
}
