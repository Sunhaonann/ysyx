// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu_tb__Syms.h"


VL_ATTR_COLD void Vcpu_tb___024root__trace_init_sub__TOP__0(Vcpu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("cpu_tb ");
    tracep->declBit(c+60,"clk", false,-1);
    tracep->declBit(c+61,"rst", false,-1);
    tracep->pushNamePrefix("CPU ");
    tracep->declBit(c+60,"clk", false,-1);
    tracep->declBit(c+61,"rst", false,-1);
    tracep->declBus(c+33,"instruction", false,-1, 31,0);
    tracep->declBus(c+34,"write_rd_data", false,-1, 31,0);
    tracep->declBus(c+35,"read_rs1_data", false,-1, 31,0);
    tracep->declBus(c+36,"read_rs2_data", false,-1, 31,0);
    tracep->declBus(c+37,"imm_32", false,-1, 31,0);
    tracep->declBus(c+38,"in_alu_a", false,-1, 31,0);
    tracep->declBus(c+39,"in_alu_b", false,-1, 31,0);
    tracep->declBus(c+40,"out_alu", false,-1, 31,0);
    tracep->declBus(c+41,"out_mem", false,-1, 31,0);
    tracep->declBus(c+42,"pc_o", false,-1, 31,0);
    tracep->declBus(c+43,"next_pc", false,-1, 31,0);
    tracep->declBus(c+44,"rd", false,-1, 4,0);
    tracep->declBus(c+45,"rs1", false,-1, 4,0);
    tracep->declBus(c+46,"rs2", false,-1, 4,0);
    tracep->declBus(c+47,"opcode", false,-1, 6,0);
    tracep->declBus(c+48,"func3", false,-1, 2,0);
    tracep->declBus(c+49,"func7", false,-1, 6,0);
    tracep->declBus(c+50,"aluc", false,-1, 4,0);
    tracep->declBit(c+51,"aluOut_WB_memOut", false,-1);
    tracep->declBit(c+52,"rs1Data_EX_PC", false,-1);
    tracep->declBus(c+53,"rs2Data_EX_imm32_4", false,-1, 1,0);
    tracep->declBit(c+54,"write_reg", false,-1);
    tracep->declBus(c+55,"write_mem", false,-1, 1,0);
    tracep->declBus(c+56,"read_mem", false,-1, 2,0);
    tracep->declBus(c+57,"extOP", false,-1, 2,0);
    tracep->declBus(c+58,"pcImm_NEXTPC_rs1Imm", false,-1, 1,0);
    tracep->declBit(c+59,"condition_branch", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+50,"aluc", false,-1, 4,0);
    tracep->declBus(c+38,"a", false,-1, 31,0);
    tracep->declBus(c+39,"b", false,-1, 31,0);
    tracep->declBus(c+40,"out", false,-1, 31,0);
    tracep->declBit(c+59,"condition_branch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CONTROLLER ");
    tracep->declBus(c+47,"opcode", false,-1, 6,0);
    tracep->declBus(c+48,"func3", false,-1, 2,0);
    tracep->declBus(c+49,"func7", false,-1, 6,0);
    tracep->declBus(c+50,"aluc", false,-1, 4,0);
    tracep->declBit(c+51,"aluOut_WB_memOut", false,-1);
    tracep->declBit(c+52,"rs1Data_EX_PC", false,-1);
    tracep->declBus(c+53,"rs2Data_EX_imm32_4", false,-1, 1,0);
    tracep->declBit(c+54,"write_reg", false,-1);
    tracep->declBus(c+55,"write_mem", false,-1, 1,0);
    tracep->declBus(c+56,"read_mem", false,-1, 2,0);
    tracep->declBus(c+57,"extOP", false,-1, 2,0);
    tracep->declBus(c+58,"pcImm_NEXTPC_rs1Imm", false,-1, 1,0);
    tracep->declBus(c+49,"unused_bits", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DATA_MEM ");
    tracep->declBit(c+60,"clk", false,-1);
    tracep->declBit(c+61,"rst", false,-1);
    tracep->declBus(c+55,"write_mem", false,-1, 1,0);
    tracep->declBus(c+56,"read_mem", false,-1, 2,0);
    tracep->declBus(c+40,"address", false,-1, 31,0);
    tracep->declBus(c+36,"write_data", false,-1, 31,0);
    tracep->declBus(c+41,"out_mem", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBus(c+33,"instr", false,-1, 31,0);
    tracep->declBus(c+47,"opcode", false,-1, 6,0);
    tracep->declBus(c+48,"func3", false,-1, 2,0);
    tracep->declBus(c+49,"func7", false,-1, 6,0);
    tracep->declBus(c+44,"rd", false,-1, 4,0);
    tracep->declBus(c+45,"rs1", false,-1, 4,0);
    tracep->declBus(c+46,"rs2", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IMM ");
    tracep->declBus(c+33,"instr", false,-1, 31,0);
    tracep->declBus(c+57,"extOP", false,-1, 2,0);
    tracep->declBus(c+37,"imm_32", false,-1, 31,0);
    tracep->declBus(c+47,"unused_bits", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("INSTRUCTION_MEM ");
    tracep->declBus(c+42,"pc", false,-1, 31,0);
    tracep->declBus(c+33,"instruction", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MUX_EX_A ");
    tracep->declBit(c+52,"signal", false,-1);
    tracep->declBus(c+35,"a", false,-1, 31,0);
    tracep->declBus(c+42,"b", false,-1, 31,0);
    tracep->declBus(c+38,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MUX_EX_B ");
    tracep->declBus(c+53,"signal", false,-1, 1,0);
    tracep->declBus(c+36,"a", false,-1, 31,0);
    tracep->declBus(c+37,"b", false,-1, 31,0);
    tracep->declBus(c+62,"c", false,-1, 31,0);
    tracep->declBus(c+39,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MUX_WB ");
    tracep->declBit(c+51,"signal", false,-1);
    tracep->declBus(c+40,"a", false,-1, 31,0);
    tracep->declBus(c+41,"b", false,-1, 31,0);
    tracep->declBus(c+34,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("NEXT_PC ");
    tracep->declBus(c+58,"pcImm_NEXTPC_rs1Imm", false,-1, 1,0);
    tracep->declBit(c+59,"condition_branch", false,-1);
    tracep->declBus(c+42,"pc", false,-1, 31,0);
    tracep->declBus(c+37,"offset", false,-1, 31,0);
    tracep->declBus(c+35,"rs1Data", false,-1, 31,0);
    tracep->declBus(c+43,"next_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC ");
    tracep->declBit(c+61,"rst", false,-1);
    tracep->declBit(c+60,"clk", false,-1);
    tracep->declBus(c+43,"next_pc", false,-1, 31,0);
    tracep->declBus(c+42,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("REG_FILE ");
    tracep->declBit(c+61,"rst", false,-1);
    tracep->declBit(c+60,"clk", false,-1);
    tracep->declBit(c+54,"write_reg", false,-1);
    tracep->declBus(c+45,"rs1", false,-1, 4,0);
    tracep->declBus(c+46,"rs2", false,-1, 4,0);
    tracep->declBus(c+44,"target_reg", false,-1, 4,0);
    tracep->declBus(c+34,"write_rd_data", false,-1, 31,0);
    tracep->declBus(c+35,"read_rs1_data", false,-1, 31,0);
    tracep->declBus(c+36,"read_rs2_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vcpu_tb___024root__trace_init_top(Vcpu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_init_top\n"); );
    // Body
    Vcpu_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu_tb___024root__trace_register(Vcpu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcpu_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcpu_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcpu_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu_tb___024root__trace_full_sub_0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_full_top_0\n"); );
    // Init
    Vcpu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_tb___024root*>(voidSelf);
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu_tb___024root__trace_full_sub_0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->cpu_tb__DOT__CPU__DOT__instruction),32);
    bufp->fullIData(oldp+34,(((IData)(vlSelf->cpu_tb__DOT__CPU__DOT__aluOut_WB_memOut)
                               ? vlSelf->cpu_tb__DOT__CPU__DOT__out_mem
                               : vlSelf->cpu_tb__DOT__CPU__DOT__out_alu)),32);
    bufp->fullIData(oldp+35,(vlSelf->cpu_tb__DOT__CPU__DOT__read_rs1_data),32);
    bufp->fullIData(oldp+36,(vlSelf->cpu_tb__DOT__CPU__DOT__read_rs2_data),32);
    bufp->fullIData(oldp+37,(vlSelf->cpu_tb__DOT__CPU__DOT__imm_32),32);
    bufp->fullIData(oldp+38,(vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_a),32);
    bufp->fullIData(oldp+39,(vlSelf->cpu_tb__DOT__CPU__DOT__in_alu_b),32);
    bufp->fullIData(oldp+40,(vlSelf->cpu_tb__DOT__CPU__DOT__out_alu),32);
    bufp->fullIData(oldp+41,(vlSelf->cpu_tb__DOT__CPU__DOT__out_mem),32);
    bufp->fullIData(oldp+42,(vlSelf->cpu_tb__DOT__CPU__DOT__pc_o),32);
    bufp->fullIData(oldp+43,(((1U == (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__pcImm_NEXTPC_rs1Imm))
                               ? vlSelf->cpu_tb__DOT__CPU__DOT__NEXT_PC__DOT____VdfgTmp_h05148406__0
                               : ((2U == (IData)(vlSelf->cpu_tb__DOT__CPU__DOT__pcImm_NEXTPC_rs1Imm))
                                   ? (vlSelf->cpu_tb__DOT__CPU__DOT__imm_32 
                                      + vlSelf->cpu_tb__DOT__CPU__DOT__read_rs1_data)
                                   : ((IData)(vlSelf->cpu_tb__DOT__CPU__DOT__condition_branch)
                                       ? vlSelf->cpu_tb__DOT__CPU__DOT__NEXT_PC__DOT____VdfgTmp_h05148406__0
                                       : ((0x6cU == vlSelf->cpu_tb__DOT__CPU__DOT__pc_o)
                                           ? 0x6cU : 
                                          ((IData)(4U) 
                                           + vlSelf->cpu_tb__DOT__CPU__DOT__pc_o)))))),32);
    bufp->fullCData(oldp+44,((0x1fU & (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                       >> 7U))),5);
    bufp->fullCData(oldp+45,((0x1fU & (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+46,((0x1fU & (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+47,((0x7fU & vlSelf->cpu_tb__DOT__CPU__DOT__instruction)),7);
    bufp->fullCData(oldp+48,((7U & (vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+49,((vlSelf->cpu_tb__DOT__CPU__DOT__instruction 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+50,(vlSelf->cpu_tb__DOT__CPU__DOT__aluc),5);
    bufp->fullBit(oldp+51,(vlSelf->cpu_tb__DOT__CPU__DOT__aluOut_WB_memOut));
    bufp->fullBit(oldp+52,(vlSelf->cpu_tb__DOT__CPU__DOT__rs1Data_EX_PC));
    bufp->fullCData(oldp+53,(vlSelf->cpu_tb__DOT__CPU__DOT__rs2Data_EX_imm32_4),2);
    bufp->fullBit(oldp+54,(vlSelf->cpu_tb__DOT__CPU__DOT__write_reg));
    bufp->fullCData(oldp+55,(vlSelf->cpu_tb__DOT__CPU__DOT__write_mem),2);
    bufp->fullCData(oldp+56,(vlSelf->cpu_tb__DOT__CPU__DOT__read_mem),3);
    bufp->fullCData(oldp+57,(vlSelf->cpu_tb__DOT__CPU__DOT__extOP),3);
    bufp->fullCData(oldp+58,(vlSelf->cpu_tb__DOT__CPU__DOT__pcImm_NEXTPC_rs1Imm),2);
    bufp->fullBit(oldp+59,(vlSelf->cpu_tb__DOT__CPU__DOT__condition_branch));
    bufp->fullBit(oldp+60,(vlSelf->cpu_tb__DOT__clk));
    bufp->fullBit(oldp+61,(vlSelf->cpu_tb__DOT__rst));
    bufp->fullIData(oldp+62,(4U),32);
}
