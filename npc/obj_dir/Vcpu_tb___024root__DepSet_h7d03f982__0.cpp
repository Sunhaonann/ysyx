// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_tb.h for the primary calling header

#include "verilated.h"

#include "Vcpu_tb___024root.h"

VL_ATTR_COLD void Vcpu_tb___024root___eval_initial__TOP(Vcpu_tb___024root* vlSelf);
VlCoroutine Vcpu_tb___024root___eval_initial__TOP__0(Vcpu_tb___024root* vlSelf);
VlCoroutine Vcpu_tb___024root___eval_initial__TOP__1(Vcpu_tb___024root* vlSelf);
VlCoroutine Vcpu_tb___024root___eval_initial__TOP__2(Vcpu_tb___024root* vlSelf);

void Vcpu_tb___024root___eval_initial(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_initial\n"); );
    // Body
    Vcpu_tb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vcpu_tb___024root___eval_initial__TOP__0(vlSelf);
    Vcpu_tb___024root___eval_initial__TOP__1(vlSelf);
    Vcpu_tb___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigrprev__TOP__cpu_tb__DOT__clk = vlSelf->cpu_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vcpu_tb___024root___eval_initial__TOP__0(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->cpu_tb__DOT__clk = 0U;
    vlSelf->cpu_tb__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, "sim_n/cpu_tb.v", 
                                       12);
    vlSelf->cpu_tb__DOT__rst = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, "sim_n/cpu_tb.v", 
                                       13);
    vlSelf->cpu_tb__DOT__rst = 0U;
}

VL_INLINE_OPT VlCoroutine Vcpu_tb___024root___eval_initial__TOP__2(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_initial__TOP__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           "sim_n/cpu_tb.v", 
                                           17);
        vlSelf->__Vdlyvval__cpu_tb__DOT__clk__v0 = 
            (1U & (~ (IData)(vlSelf->cpu_tb__DOT__clk)));
        vlSelf->__Vdlyvset__cpu_tb__DOT__clk__v0 = 1U;
    }
}

void Vcpu_tb___024root___act_sequent__TOP__0(Vcpu_tb___024root* vlSelf);

void Vcpu_tb___024root___eval_act(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(1U)) {
        Vcpu_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcpu_tb___024root___nba_sequent__TOP__0(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs__v0;
    __Vdlyvdim0__cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs__v0;
    __Vdlyvval__cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs__v0;
    __Vdlyvset__cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v0;
    __Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v0 = 0;
    CData/*7:0*/ __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v0;
    __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v0;
    __Vdlyvset__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v1;
    __Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v1 = 0;
    CData/*7:0*/ __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v1;
    __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v1 = 0;
    CData/*6:0*/ __Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v2;
    __Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v2 = 0;
    CData/*7:0*/ __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v2;
    __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v2 = 0;
    CData/*6:0*/ __Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v3;
    __Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v3 = 0;
    CData/*7:0*/ __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v3;
    __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v3 = 0;
    CData/*6:0*/ __Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v4;
    __Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v4 = 0;
    CData/*7:0*/ __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v4;
    __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v4 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v4;
    __Vdlyvset__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v4 = 0;
    CData/*6:0*/ __Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v5;
    __Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v5 = 0;
    CData/*7:0*/ __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v5;
    __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v5 = 0;
    CData/*6:0*/ __Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v6;
    __Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v6 = 0;
    CData/*7:0*/ __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v6;
    __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v6 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v6;
    __Vdlyvset__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v6 = 0;
    // Body
    __Vdlyvset__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v0 = 0U;
    __Vdlyvset__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v4 = 0U;
    __Vdlyvset__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v6 = 0U;
    __Vdlyvset__cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs__v0 = 0U;
    if ((1U == (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__write_mem))) {
        __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v0 
            = (vlSelf->cpu_tb__DOT__CPU__DOT__read_rs2_data 
               >> 0x18U);
        __Vdlyvset__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v0 = 1U;
        __Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v0 
            = (0x7fU & ((IData)(3U) + vlSelf->cpu_tb__DOT__CPU__DOT__out_alu));
        __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v1 
            = (0xffU & (vlSelf->cpu_tb__DOT__CPU__DOT__read_rs2_data 
                        >> 0x10U));
        __Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v1 
            = (0x7fU & ((IData)(2U) + vlSelf->cpu_tb__DOT__CPU__DOT__out_alu));
        __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v2 
            = (0xffU & (vlSelf->cpu_tb__DOT__CPU__DOT__read_rs2_data 
                        >> 8U));
        __Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v2 
            = (0x7fU & ((IData)(1U) + vlSelf->cpu_tb__DOT__CPU__DOT__out_alu));
        __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v3 
            = (0xffU & vlSelf->cpu_tb__DOT__CPU__DOT__read_rs2_data);
        __Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v3 
            = (0x7fU & vlSelf->cpu_tb__DOT__CPU__DOT__out_alu);
    } else if ((2U == (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__write_mem))) {
        __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v4 
            = (0xffU & (vlSelf->cpu_tb__DOT__CPU__DOT__read_rs2_data 
                        >> 8U));
        __Vdlyvset__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v4 = 1U;
        __Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v4 
            = (0x7fU & ((IData)(1U) + vlSelf->cpu_tb__DOT__CPU__DOT__out_alu));
        __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v5 
            = (0xffU & vlSelf->cpu_tb__DOT__CPU__DOT__read_rs2_data);
        __Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v5 
            = (0x7fU & vlSelf->cpu_tb__DOT__CPU__DOT__out_alu);
    } else if ((3U == (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__write_mem))) {
        __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v6 
            = (0xffU & vlSelf->cpu_tb__DOT__CPU__DOT__read_rs2_data);
        __Vdlyvset__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v6 = 1U;
        __Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v6 
            = (0x7fU & vlSelf->cpu_tb__DOT__CPU__DOT__out_alu);
    }
    if (((IData)(vlSelf->cpu_tb__DOT__CPU__DOT__write_reg) 
         & (0U != (0x1fU & (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                            >> 7U))))) {
        __Vdlyvval__cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs__v0 
            = ((IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluOut_WB_memOut)
                ? vlSelf->cpu_tb__DOT__CPU__DOT__out_mem
                : vlSelf->cpu_tb__DOT__CPU__DOT__out_alu);
        __Vdlyvset__cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs__v0 = 1U;
        __Vdlyvdim0__cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs__v0 
            = (0x1fU & (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                        >> 7U));
    }
    vlSelf->cpu_tb__DOT__CPU__DOT__pc_o = ((IData)(vlSelf->cpu_tb__DOT__rst)
                                            ? 0x34U
                                            : vlSelf->cpu_tb__DOT__CPU__DOT__next_pc);
    if (__Vdlyvset__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v0) {
        vlSelf->cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data[__Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v0] 
            = __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v0;
        vlSelf->cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data[__Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v1] 
            = __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v1;
        vlSelf->cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data[__Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v2] 
            = __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v2;
        vlSelf->cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data[__Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v3] 
            = __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v3;
    }
    if (__Vdlyvset__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v4) {
        vlSelf->cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data[__Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v4] 
            = __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v4;
        vlSelf->cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data[__Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v5] 
            = __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v5;
    }
    if (__Vdlyvset__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v6) {
        vlSelf->cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data[__Vdlyvdim0__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v6] 
            = __Vdlyvval__cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data__v6;
    }
    if (__Vdlyvset__cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs__v0) {
        vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[__Vdlyvdim0__cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs__v0] 
            = __Vdlyvval__cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs__v0;
    }
    vlSelf->cpu_tb__DOT__CPU__DOT__instruction = vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem
        [(0x3fU & (vlSelf->cpu_tb__DOT__CPU__DOT__pc_o 
                   >> 2U))];
    if ((0x40U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
        if ((0x20U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
            if ((1U & (~ (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                          >> 4U)))) {
                if ((8U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                    if ((4U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                        if ((2U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                            if ((1U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                                vlSelf->cpu_tb__DOT__CPU__DOT__write_mem = 0U;
                                vlSelf->cpu_tb__DOT__CPU__DOT__write_reg = 1U;
                                vlSelf->cpu_tb__DOT__CPU__DOT__aluOut_WB_memOut = 0U;
                                vlSelf->cpu_tb__DOT__CPU__DOT__read_mem = 0U;
                                vlSelf->cpu_tb__DOT__CPU__DOT__pcImm_NEXTPC_rs1Imm = 1U;
                                vlSelf->cpu_tb__DOT__CPU__DOT__aluc = 0U;
                                vlSelf->cpu_tb__DOT__CPU__DOT__rs1Data_EX_PC = 1U;
                                vlSelf->cpu_tb__DOT__CPU__DOT__rs2Data_EX_imm32_4 = 3U;
                                vlSelf->cpu_tb__DOT__CPU__DOT__extOP = 4U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                    if ((2U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                        if ((1U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                            vlSelf->cpu_tb__DOT__CPU__DOT__write_mem = 0U;
                            vlSelf->cpu_tb__DOT__CPU__DOT__write_reg = 1U;
                            vlSelf->cpu_tb__DOT__CPU__DOT__aluOut_WB_memOut = 0U;
                            vlSelf->cpu_tb__DOT__CPU__DOT__read_mem = 0U;
                            vlSelf->cpu_tb__DOT__CPU__DOT__pcImm_NEXTPC_rs1Imm = 2U;
                            vlSelf->cpu_tb__DOT__CPU__DOT__aluc = 0xaU;
                            vlSelf->cpu_tb__DOT__CPU__DOT__rs1Data_EX_PC = 1U;
                            vlSelf->cpu_tb__DOT__CPU__DOT__rs2Data_EX_imm32_4 = 3U;
                            vlSelf->cpu_tb__DOT__CPU__DOT__extOP = 0U;
                        }
                    }
                } else if ((2U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                    if ((1U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                        vlSelf->cpu_tb__DOT__CPU__DOT__write_mem = 0U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__write_reg = 0U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__aluOut_WB_memOut = 0U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__read_mem = 0U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__pcImm_NEXTPC_rs1Imm = 0U;
                        if ((0x4000U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                            vlSelf->cpu_tb__DOT__CPU__DOT__aluc 
                                = ((0x2000U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)
                                    ? ((0x1000U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)
                                        ? 0x10U : 0xfU)
                                    : ((0x1000U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)
                                        ? 0xeU : 0xdU));
                        } else if ((1U & (~ (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                             >> 0xdU)))) {
                            vlSelf->cpu_tb__DOT__CPU__DOT__aluc 
                                = ((0x1000U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)
                                    ? 0xcU : 0xbU);
                        }
                        vlSelf->cpu_tb__DOT__CPU__DOT__rs1Data_EX_PC = 0U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__rs2Data_EX_imm32_4 = 0U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__extOP = 3U;
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
        if ((0x10U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
            if ((1U & (~ (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                          >> 3U)))) {
                if ((4U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                    if ((2U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                        if ((1U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                            vlSelf->cpu_tb__DOT__CPU__DOT__write_mem = 0U;
                            vlSelf->cpu_tb__DOT__CPU__DOT__write_reg = 1U;
                            vlSelf->cpu_tb__DOT__CPU__DOT__aluOut_WB_memOut = 0U;
                            vlSelf->cpu_tb__DOT__CPU__DOT__read_mem = 0U;
                            vlSelf->cpu_tb__DOT__CPU__DOT__pcImm_NEXTPC_rs1Imm = 0U;
                            vlSelf->cpu_tb__DOT__CPU__DOT__aluc = 0U;
                            vlSelf->cpu_tb__DOT__CPU__DOT__rs1Data_EX_PC = 0U;
                            vlSelf->cpu_tb__DOT__CPU__DOT__rs2Data_EX_imm32_4 = 1U;
                            vlSelf->cpu_tb__DOT__CPU__DOT__extOP = 1U;
                        }
                    }
                } else if ((2U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                    if ((1U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                        vlSelf->cpu_tb__DOT__CPU__DOT__write_mem = 0U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__write_reg = 1U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__aluOut_WB_memOut = 0U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__read_mem = 0U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__pcImm_NEXTPC_rs1Imm = 0U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__aluc 
                            = ((0x4000U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)
                                ? ((0x2000U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)
                                    ? ((0x1000U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)
                                        ? 2U : 3U) : 
                                   ((0x1000U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)
                                     ? ((0x40000000U 
                                         & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)
                                         ? 9U : 8U)
                                     : 4U)) : ((0x2000U 
                                                & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)
                                                    ? 7U
                                                    : 6U)
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)
                                                    ? 5U
                                                    : 
                                                   ((0x40000000U 
                                                     & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)
                                                     ? 1U
                                                     : 0U))));
                        vlSelf->cpu_tb__DOT__CPU__DOT__rs1Data_EX_PC = 0U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__rs2Data_EX_imm32_4 = 0U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__extOP = 7U;
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                          >> 2U)))) {
                if ((2U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                    if ((1U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                        vlSelf->cpu_tb__DOT__CPU__DOT__write_mem = 0U;
                        if ((2U == (7U & (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                          >> 0xcU)))) {
                            vlSelf->cpu_tb__DOT__CPU__DOT__write_mem = 1U;
                        } else if ((1U == (7U & (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                                 >> 0xcU)))) {
                            vlSelf->cpu_tb__DOT__CPU__DOT__write_mem = 2U;
                        } else if ((0U == (7U & (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                                 >> 0xcU)))) {
                            vlSelf->cpu_tb__DOT__CPU__DOT__write_mem = 3U;
                        }
                        vlSelf->cpu_tb__DOT__CPU__DOT__write_reg = 0U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__aluOut_WB_memOut = 0U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__read_mem = 0U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__pcImm_NEXTPC_rs1Imm = 0U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__aluc = 0U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__rs1Data_EX_PC = 0U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__rs2Data_EX_imm32_4 = 1U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__extOP = 2U;
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
        if ((1U & (~ (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                      >> 3U)))) {
            if ((4U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                if ((2U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                    if ((1U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                        vlSelf->cpu_tb__DOT__CPU__DOT__write_mem = 0U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__write_reg = 1U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__aluOut_WB_memOut = 0U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__read_mem = 0U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__pcImm_NEXTPC_rs1Imm = 0U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__aluc = 0U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__rs1Data_EX_PC = 1U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__rs2Data_EX_imm32_4 = 1U;
                        vlSelf->cpu_tb__DOT__CPU__DOT__extOP = 1U;
                    }
                }
            } else if ((2U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                if ((1U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                    vlSelf->cpu_tb__DOT__CPU__DOT__write_mem = 0U;
                    vlSelf->cpu_tb__DOT__CPU__DOT__write_reg = 1U;
                    vlSelf->cpu_tb__DOT__CPU__DOT__aluOut_WB_memOut = 0U;
                    vlSelf->cpu_tb__DOT__CPU__DOT__read_mem = 0U;
                    vlSelf->cpu_tb__DOT__CPU__DOT__pcImm_NEXTPC_rs1Imm = 0U;
                    vlSelf->cpu_tb__DOT__CPU__DOT__rs1Data_EX_PC = 0U;
                    vlSelf->cpu_tb__DOT__CPU__DOT__rs2Data_EX_imm32_4 = 1U;
                    vlSelf->cpu_tb__DOT__CPU__DOT__extOP = 0U;
                    if ((0x4000U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                        vlSelf->cpu_tb__DOT__CPU__DOT__aluc 
                            = ((0x2000U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)
                                ? ((0x1000U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)
                                    ? 2U : 3U) : ((0x1000U 
                                                   & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)
                                                    ? 9U
                                                    : 8U)
                                                   : 4U));
                        if ((1U & (~ (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                      >> 0xdU)))) {
                            if ((0x1000U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                                if ((0x40000000U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                                    vlSelf->cpu_tb__DOT__CPU__DOT__extOP = 5U;
                                }
                            }
                        }
                    } else {
                        vlSelf->cpu_tb__DOT__CPU__DOT__aluc 
                            = ((0x2000U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)
                                ? ((0x1000U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)
                                    ? 7U : 6U) : ((0x1000U 
                                                   & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)
                                                   ? 5U
                                                   : 0U));
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                      >> 2U)))) {
            if ((2U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                if ((1U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                    vlSelf->cpu_tb__DOT__CPU__DOT__write_mem = 0U;
                    vlSelf->cpu_tb__DOT__CPU__DOT__write_reg = 1U;
                    vlSelf->cpu_tb__DOT__CPU__DOT__aluOut_WB_memOut = 1U;
                    vlSelf->cpu_tb__DOT__CPU__DOT__read_mem = 0U;
                    if ((0x4000U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                        if ((1U & (~ (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                      >> 0xdU)))) {
                            vlSelf->cpu_tb__DOT__CPU__DOT__read_mem 
                                = ((0x1000U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)
                                    ? 2U : 3U);
                        }
                    } else if ((0x2000U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)) {
                        if ((1U & (~ (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                      >> 0xcU)))) {
                            vlSelf->cpu_tb__DOT__CPU__DOT__read_mem = 1U;
                        }
                    } else {
                        vlSelf->cpu_tb__DOT__CPU__DOT__read_mem 
                            = ((0x1000U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)
                                ? 6U : 7U);
                    }
                    vlSelf->cpu_tb__DOT__CPU__DOT__pcImm_NEXTPC_rs1Imm = 0U;
                    vlSelf->cpu_tb__DOT__CPU__DOT__aluc = 0U;
                    vlSelf->cpu_tb__DOT__CPU__DOT__rs1Data_EX_PC = 0U;
                    vlSelf->cpu_tb__DOT__CPU__DOT__rs2Data_EX_imm32_4 = 1U;
                    vlSelf->cpu_tb__DOT__CPU__DOT__extOP = 0U;
                }
            }
        }
    }
    vlSelf->cpu_tb__DOT__CPU__DOT__read_rs2_data = 
        ((0U == (0x1fU & (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                          >> 0x14U))) ? 0U : vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs
         [(0x1fU & (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                    >> 0x14U))]);
    vlSelf->cpu_tb__DOT__CPU__DOT__read_rs1_data = 
        ((0U == (0x1fU & (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                          >> 0xfU))) ? 0U : vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs
         [(0x1fU & (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                    >> 0xfU))]);
    vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_a = ((IData)(vlSelf->cpu_tb__DOT__CPU__DOT__rs1Data_EX_PC)
                                                ? vlSelf->cpu_tb__DOT__CPU__DOT__pc_o
                                                : vlSelf->cpu_tb__DOT__CPU__DOT__read_rs1_data);
    if ((4U & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__extOP))) {
        if ((2U & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__extOP))) {
            vlSelf->cpu_tb__DOT__CPU__DOT__imm_32 = 0U;
        } else if ((1U & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__extOP))) {
            vlSelf->cpu_tb__DOT__CPU__DOT__imm_32 = 
                (((- (IData)((vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                              >> 0x1fU))) << 0xcU) 
                 | (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                    >> 0x14U));
            vlSelf->cpu_tb__DOT__CPU__DOT__imm_32 = 
                (0xfffffbffU & vlSelf->cpu_tb__DOT__CPU__DOT__imm_32);
        } else {
            vlSelf->cpu_tb__DOT__CPU__DOT__imm_32 = 
                (((- (IData)((vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                              >> 0x1fU))) << 0x14U) 
                 | ((0xff000U & vlSelf->cpu_tb__DOT__CPU__DOT__instruction) 
                    | ((0x800U & (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                  >> 9U)) | (0x7feU 
                                             & (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                                >> 0x14U)))));
        }
    } else {
        vlSelf->cpu_tb__DOT__CPU__DOT__imm_32 = ((2U 
                                                  & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__extOP))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__extOP))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0x800U 
                                                       & (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                                               >> 7U)))))
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0xfe0U 
                                                       & (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                                            >> 7U)))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__extOP))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                                      >> 0x14U))));
    }
    vlSelf->cpu_tb__DOT__CPU__DOT__NEXT_PC__DOT____VdfgTmp_h05148406__0 
        = (vlSelf->cpu_tb__DOT__CPU__DOT__imm_32 + vlSelf->cpu_tb__DOT__CPU__DOT__pc_o);
    vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_b = ((0U 
                                                == (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__rs2Data_EX_imm32_4))
                                                ? vlSelf->cpu_tb__DOT__CPU__DOT__read_rs2_data
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__rs2Data_EX_imm32_4))
                                                    ? vlSelf->cpu_tb__DOT__CPU__DOT__imm_32
                                                    : 4U));
    vlSelf->cpu_tb__DOT__CPU__DOT__out_alu = 0U;
    vlSelf->cpu_tb__DOT__CPU__DOT__condition_branch = 0U;
    if ((0x10U & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc))) {
        if ((8U & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc))) {
            vlSelf->cpu_tb__DOT__CPU__DOT__out_alu = 0U;
        } else if ((4U & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc))) {
            vlSelf->cpu_tb__DOT__CPU__DOT__out_alu = 0U;
        } else if ((2U & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc))) {
            vlSelf->cpu_tb__DOT__CPU__DOT__out_alu = 0U;
        } else if ((1U & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc))) {
            vlSelf->cpu_tb__DOT__CPU__DOT__out_alu = 0U;
        }
        if ((1U & (~ ((IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc)))) {
                        vlSelf->cpu_tb__DOT__CPU__DOT__condition_branch 
                            = (vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_a 
                               >= vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_b);
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc))) {
        if ((1U & (~ ((IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc))) {
                if ((1U & (~ (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc)))) {
                    vlSelf->cpu_tb__DOT__CPU__DOT__out_alu 
                        = (vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_a 
                           + vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_b);
                    vlSelf->cpu_tb__DOT__CPU__DOT__out_alu 
                        = (0xfffffffeU & vlSelf->cpu_tb__DOT__CPU__DOT__out_alu);
                }
            } else {
                vlSelf->cpu_tb__DOT__CPU__DOT__out_alu 
                    = ((1U & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc))
                        ? ((0x1fU >= vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_b)
                            ? VL_SHIFTRS_III(32,32,32, vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_a, vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_b)
                            : (- (vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_a 
                                  >> 0x1fU))) : ((0x1fU 
                                                  >= vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_b)
                                                  ? 
                                                 (vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_a 
                                                  >> vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_b)
                                                  : 0U));
            }
        }
        if ((4U & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc))) {
            vlSelf->cpu_tb__DOT__CPU__DOT__condition_branch 
                = ((2U & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc))
                    ? ((1U & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc))
                        ? (vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_a 
                           < vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_b)
                        : VL_GTES_III(32, vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_a, vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_b))
                    : ((1U & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc))
                        ? VL_LTS_III(32, vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_a, vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_b)
                        : (vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_a 
                           != vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_b)));
        } else if ((2U & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc))) {
            if ((1U & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc))) {
                vlSelf->cpu_tb__DOT__CPU__DOT__condition_branch 
                    = (vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_a 
                       == vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_b);
            }
        }
    } else {
        vlSelf->cpu_tb__DOT__CPU__DOT__out_alu = ((4U 
                                                   & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc))
                                                     ? 
                                                    ((vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_a 
                                                      < vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_b)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    (VL_LTS_III(32, vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_a, vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_b)
                                                      ? 1U
                                                      : 0U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc))
                                                     ? 
                                                    ((0x1fU 
                                                      >= vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_b)
                                                      ? 
                                                     (vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_a 
                                                      << vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_b)
                                                      : 0U)
                                                     : 
                                                    (vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_a 
                                                     ^ vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_b)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc))
                                                     ? 
                                                    (vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_a 
                                                     | vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_b)
                                                     : 
                                                    (vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_a 
                                                     & vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluc))
                                                     ? 
                                                    (vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_a 
                                                     - vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_b)
                                                     : 
                                                    (vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_a 
                                                     + vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_b))));
    }
    vlSelf->cpu_tb__DOT__CPU__DOT__out_mem = ((2U & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__read_mem))
                                               ? ((1U 
                                                   & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__read_mem))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__read_mem))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data
                                                                    [
                                                                    (0x7fU 
                                                                     & vlSelf->cpu_tb__DOT__CPU__DOT__out_alu)] 
                                                                    >> 7U)))) 
                                                     << 8U) 
                                                    | vlSelf->cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data
                                                    [
                                                    (0x7fU 
                                                     & vlSelf->cpu_tb__DOT__CPU__DOT__out_alu)])
                                                    : 
                                                   vlSelf->cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data
                                                   [
                                                   (0x7fU 
                                                    & vlSelf->cpu_tb__DOT__CPU__DOT__out_alu)])
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__read_mem))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data
                                                                    [
                                                                    (0x7fU 
                                                                     & ((IData)(1U) 
                                                                        + vlSelf->cpu_tb__DOT__CPU__DOT__out_alu))] 
                                                                    >> 7U)))) 
                                                     << 0x10U) 
                                                    | ((vlSelf->cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data
                                                        [
                                                        (0x7fU 
                                                         & ((IData)(1U) 
                                                            + vlSelf->cpu_tb__DOT__CPU__DOT__out_alu))] 
                                                        << 8U) 
                                                       | vlSelf->cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data
                                                       [
                                                       (0x7fU 
                                                        & vlSelf->cpu_tb__DOT__CPU__DOT__out_alu)]))
                                                    : 
                                                   ((vlSelf->cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + vlSelf->cpu_tb__DOT__CPU__DOT__out_alu))] 
                                                     << 8U) 
                                                    | vlSelf->cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data
                                                    [
                                                    (0x7fU 
                                                     & vlSelf->cpu_tb__DOT__CPU__DOT__out_alu)])))
                                               : ((1U 
                                                   & (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__read_mem))
                                                   ? 
                                                  ((vlSelf->cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data
                                                    [
                                                    (0x7fU 
                                                     & ((IData)(3U) 
                                                        + vlSelf->cpu_tb__DOT__CPU__DOT__out_alu))] 
                                                    << 0x18U) 
                                                   | ((vlSelf->cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data
                                                       [
                                                       (0x7fU 
                                                        & ((IData)(2U) 
                                                           + vlSelf->cpu_tb__DOT__CPU__DOT__out_alu))] 
                                                       << 0x10U) 
                                                      | ((vlSelf->cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data
                                                          [
                                                          (0x7fU 
                                                           & ((IData)(1U) 
                                                              + vlSelf->cpu_tb__DOT__CPU__DOT__out_alu))] 
                                                          << 8U) 
                                                         | vlSelf->cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data
                                                         [
                                                         (0x7fU 
                                                          & vlSelf->cpu_tb__DOT__CPU__DOT__out_alu)])))
                                                   : 0U));
    vlSelf->cpu_tb__DOT__CPU__DOT__next_pc = ((1U == (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__pcImm_NEXTPC_rs1Imm))
                                               ? vlSelf->cpu_tb__DOT__CPU__DOT__NEXT_PC__DOT____VdfgTmp_h05148406__0
                                               : ((2U 
                                                   == (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__pcImm_NEXTPC_rs1Imm))
                                                   ? 
                                                  (vlSelf->cpu_tb__DOT__CPU__DOT__imm_32 
                                                   + vlSelf->cpu_tb__DOT__CPU__DOT__read_rs1_data)
                                                   : 
                                                  ((IData)(vlSelf->cpu_tb__DOT__CPU__DOT__condition_branch)
                                                    ? vlSelf->cpu_tb__DOT__CPU__DOT__NEXT_PC__DOT____VdfgTmp_h05148406__0
                                                    : 
                                                   ((0x6cU 
                                                     == vlSelf->cpu_tb__DOT__CPU__DOT__pc_o)
                                                     ? 0x6cU
                                                     : 
                                                    ((IData)(4U) 
                                                     + vlSelf->cpu_tb__DOT__CPU__DOT__pc_o)))));
}

void Vcpu_tb___024root___nba_sequent__TOP__1(Vcpu_tb___024root* vlSelf);

void Vcpu_tb___024root___eval_nba(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vcpu_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vcpu_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vcpu_tb___024root___eval_triggers__act(Vcpu_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__act(Vcpu_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vcpu_tb___024root___timing_resume(Vcpu_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__nba(Vcpu_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu_tb___024root___eval(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vcpu_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vcpu_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("sim_n/cpu_tb.v", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vcpu_tb___024root___timing_resume(vlSelf);
                Vcpu_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vcpu_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("sim_n/cpu_tb.v", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vcpu_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vcpu_tb___024root___timing_resume(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(1U)) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vcpu_tb___024root___eval_debug_assertions(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
