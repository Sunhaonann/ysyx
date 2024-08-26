// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu_tb__Syms.h"


void Vcpu_tb___024root__trace_chg_sub_0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vcpu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_tb___024root*>(voidSelf);
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcpu_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu_tb___024root__trace_chg_sub_0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+32,(vlSelf->cpu_tb__DOT__CPU__DOT__instruction),32);
        bufp->chgIData(oldp+33,(((IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluOut_WB_memOut)
                                  ? vlSelf->cpu_tb__DOT__CPU__DOT__out_mem
                                  : vlSelf->cpu_tb__DOT__CPU__DOT__out_alu)),32);
        bufp->chgIData(oldp+34,(vlSelf->cpu_tb__DOT__CPU__DOT__read_rs1_data),32);
        bufp->chgIData(oldp+35,(vlSelf->cpu_tb__DOT__CPU__DOT__read_rs2_data),32);
        bufp->chgIData(oldp+36,(vlSelf->cpu_tb__DOT__CPU__DOT__imm_32),32);
        bufp->chgIData(oldp+37,(vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_a),32);
        bufp->chgIData(oldp+38,(vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_b),32);
        bufp->chgIData(oldp+39,(vlSelf->cpu_tb__DOT__CPU__DOT__out_alu),32);
        bufp->chgIData(oldp+40,(vlSelf->cpu_tb__DOT__CPU__DOT__out_mem),32);
        bufp->chgIData(oldp+41,(vlSelf->cpu_tb__DOT__CPU__DOT__pc_o),32);
        bufp->chgIData(oldp+42,(((1U == (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__pcImm_NEXTPC_rs1Imm))
                                  ? vlSelf->cpu_tb__DOT__CPU__DOT__NEXT_PC__DOT____VdfgTmp_h05148406__0
                                  : ((2U == (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__pcImm_NEXTPC_rs1Imm))
                                      ? (vlSelf->cpu_tb__DOT__CPU__DOT__imm_32 
                                         + vlSelf->cpu_tb__DOT__CPU__DOT__read_rs1_data)
                                      : ((IData)(vlSelf->cpu_tb__DOT__CPU__DOT__condition_branch)
                                          ? vlSelf->cpu_tb__DOT__CPU__DOT__NEXT_PC__DOT____VdfgTmp_h05148406__0
                                          : ((0x6cU 
                                              == vlSelf->cpu_tb__DOT__CPU__DOT__pc_o)
                                              ? 0x6cU
                                              : ((IData)(4U) 
                                                 + vlSelf->cpu_tb__DOT__CPU__DOT__pc_o)))))),32);
        bufp->chgCData(oldp+43,((0x1fU & (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                          >> 7U))),5);
        bufp->chgCData(oldp+44,((0x1fU & (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+45,((0x1fU & (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+46,((0x7fU & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)),7);
        bufp->chgCData(oldp+47,((7U & (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+48,((vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+49,(vlSelf->cpu_tb__DOT__CPU__DOT__aluc),5);
        bufp->chgBit(oldp+50,(vlSelf->cpu_tb__DOT__CPU__DOT__aluOut_WB_memOut));
        bufp->chgBit(oldp+51,(vlSelf->cpu_tb__DOT__CPU__DOT__rs1Data_EX_PC));
        bufp->chgCData(oldp+52,(vlSelf->cpu_tb__DOT__CPU__DOT__rs2Data_EX_imm32_4),2);
        bufp->chgBit(oldp+53,(vlSelf->cpu_tb__DOT__CPU__DOT__write_reg));
        bufp->chgCData(oldp+54,(vlSelf->cpu_tb__DOT__CPU__DOT__write_mem),2);
        bufp->chgCData(oldp+55,(vlSelf->cpu_tb__DOT__CPU__DOT__read_mem),3);
        bufp->chgCData(oldp+56,(vlSelf->cpu_tb__DOT__CPU__DOT__extOP),3);
        bufp->chgCData(oldp+57,(vlSelf->cpu_tb__DOT__CPU__DOT__pcImm_NEXTPC_rs1Imm),2);
        bufp->chgBit(oldp+58,(vlSelf->cpu_tb__DOT__CPU__DOT__condition_branch));
    }
    bufp->chgBit(oldp+59,(vlSelf->cpu_tb__DOT__clk));
    bufp->chgBit(oldp+60,(vlSelf->cpu_tb__DOT__rst));
}

void Vcpu_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_cleanup\n"); );
    // Init
    Vcpu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_tb___024root*>(voidSelf);
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
