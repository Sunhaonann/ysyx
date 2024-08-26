// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_tb.h for the primary calling header

#include "verilated.h"

#include "Vcpu_tb___024root.h"

VL_ATTR_COLD void Vcpu_tb___024root___eval_static(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vcpu_tb___024root___eval_initial__TOP(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[0U] = 0xfe010113U;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[1U] = 0x812e23U;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[2U] = 0x2010413U;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[3U] = 0xfea42623U;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[4U] = 0xfec42783U;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[5U] = 0x7a783U;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[6U] = 0xa78713U;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[7U] = 0xfec42783U;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[8U] = 0xe7a023U;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[9U] = 0x13U;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[0xaU] = 0x1c12403U;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[0xbU] = 0x2010113U;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[0xcU] = 0x8067U;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[0xdU] = 0xfe010113U;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[0xeU] = 0x112e23U;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[0xfU] = 0x812c23U;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[0x10U] = 0x2010413U;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[0x11U] = 0x100793U;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[0x12U] = 0xfef42623U;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[0x13U] = 0xfec40793U;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[0x14U] = 0x78513U;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[0x15U] = 0xfadff0efU;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[0x16U] = 0x793U;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[0x17U] = 0x78513U;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[0x18U] = 0x1c12083U;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[0x19U] = 0x1812403U;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[0x1aU] = 0x2010113U;
    vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[0x1bU] = 0x13U;
    vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[2U] = 0x80U;
}

VL_ATTR_COLD void Vcpu_tb___024root___eval_final(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vcpu_tb___024root___eval_triggers__stl(Vcpu_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__stl(Vcpu_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___eval_stl(Vcpu_tb___024root* vlSelf);

VL_ATTR_COLD void Vcpu_tb___024root___eval_settle(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vcpu_tb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vcpu_tb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("sim_n/cpu_tb.v", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vcpu_tb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__stl(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcpu_tb___024root___stl_sequent__TOP__0(Vcpu_tb___024root* vlSelf);

VL_ATTR_COLD void Vcpu_tb___024root___eval_stl(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vcpu_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__act(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge cpu_tb.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__nba(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge cpu_tb.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcpu_tb___024root___ctor_var_reset(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->cpu_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->cpu_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->cpu_tb__DOT__CPU__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->cpu_tb__DOT__CPU__DOT__read_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->cpu_tb__DOT__CPU__DOT__read_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->cpu_tb__DOT__CPU__DOT__imm_32 = VL_RAND_RESET_I(32);
    vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_a = VL_RAND_RESET_I(32);
    vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_b = VL_RAND_RESET_I(32);
    vlSelf->cpu_tb__DOT__CPU__DOT__out_alu = VL_RAND_RESET_I(32);
    vlSelf->cpu_tb__DOT__CPU__DOT__out_mem = VL_RAND_RESET_I(32);
    vlSelf->cpu_tb__DOT__CPU__DOT__pc_o = VL_RAND_RESET_I(32);
    vlSelf->cpu_tb__DOT__CPU__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->cpu_tb__DOT__CPU__DOT__aluc = VL_RAND_RESET_I(5);
    vlSelf->cpu_tb__DOT__CPU__DOT__aluOut_WB_memOut = VL_RAND_RESET_I(1);
    vlSelf->cpu_tb__DOT__CPU__DOT__rs1Data_EX_PC = VL_RAND_RESET_I(1);
    vlSelf->cpu_tb__DOT__CPU__DOT__rs2Data_EX_imm32_4 = VL_RAND_RESET_I(2);
    vlSelf->cpu_tb__DOT__CPU__DOT__write_reg = VL_RAND_RESET_I(1);
    vlSelf->cpu_tb__DOT__CPU__DOT__write_mem = VL_RAND_RESET_I(2);
    vlSelf->cpu_tb__DOT__CPU__DOT__read_mem = VL_RAND_RESET_I(3);
    vlSelf->cpu_tb__DOT__CPU__DOT__extOP = VL_RAND_RESET_I(3);
    vlSelf->cpu_tb__DOT__CPU__DOT__pcImm_NEXTPC_rs1Imm = VL_RAND_RESET_I(2);
    vlSelf->cpu_tb__DOT__CPU__DOT__condition_branch = VL_RAND_RESET_I(1);
    vlSelf->cpu_tb__DOT__CPU__DOT__NEXT_PC__DOT____VdfgTmp_h05148406__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vdlyvval__cpu_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigrprev__TOP__cpu_tb__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
