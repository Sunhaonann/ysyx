// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_tb.h for the primary calling header

#ifndef VERILATED_VCPU_TB___024ROOT_H_
#define VERILATED_VCPU_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vcpu_tb__Syms;
class Vcpu_tb___024unit;


class Vcpu_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vcpu_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ cpu_tb__DOT__clk;
    CData/*0:0*/ cpu_tb__DOT__rst;
    CData/*4:0*/ cpu_tb__DOT__CPU__DOT__aluc;
    CData/*0:0*/ cpu_tb__DOT__CPU__DOT__aluOut_WB_memOut;
    CData/*0:0*/ cpu_tb__DOT__CPU__DOT__rs1Data_EX_PC;
    CData/*1:0*/ cpu_tb__DOT__CPU__DOT__rs2Data_EX_imm32_4;
    CData/*0:0*/ cpu_tb__DOT__CPU__DOT__write_reg;
    CData/*1:0*/ cpu_tb__DOT__CPU__DOT__write_mem;
    CData/*2:0*/ cpu_tb__DOT__CPU__DOT__read_mem;
    CData/*2:0*/ cpu_tb__DOT__CPU__DOT__extOP;
    CData/*1:0*/ cpu_tb__DOT__CPU__DOT__pcImm_NEXTPC_rs1Imm;
    CData/*0:0*/ cpu_tb__DOT__CPU__DOT__condition_branch;
    CData/*0:0*/ __Vdlyvval__cpu_tb__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__clk__v0;
    CData/*0:0*/ __Vtrigrprev__TOP__cpu_tb__DOT__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ cpu_tb__DOT__CPU__DOT__instruction;
    IData/*31:0*/ cpu_tb__DOT__CPU__DOT__read_rs1_data;
    IData/*31:0*/ cpu_tb__DOT__CPU__DOT__read_rs2_data;
    IData/*31:0*/ cpu_tb__DOT__CPU__DOT__imm_32;
    IData/*31:0*/ cpu_tb__DOT__CPU__DOT__in_alu_a;
    IData/*31:0*/ cpu_tb__DOT__CPU__DOT__in_alu_b;
    IData/*31:0*/ cpu_tb__DOT__CPU__DOT__out_alu;
    IData/*31:0*/ cpu_tb__DOT__CPU__DOT__out_mem;
    IData/*31:0*/ cpu_tb__DOT__CPU__DOT__pc_o;
    IData/*31:0*/ cpu_tb__DOT__CPU__DOT__next_pc;
    IData/*31:0*/ cpu_tb__DOT__CPU__DOT__NEXT_PC__DOT____VdfgTmp_h05148406__0;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 64> cpu_tb__DOT__CPU__DOT__INSTRUCTION_MEM__DOT__inst_mem;
    VlUnpacked<IData/*31:0*/, 32> cpu_tb__DOT__CPU__DOT__REG_FILE__DOT__regs;
    VlUnpacked<CData/*7:0*/, 128> cpu_tb__DOT__CPU__DOT__DATA_MEM__DOT__data;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcpu_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu_tb___024root(Vcpu_tb__Syms* symsp, const char* v__name);
    ~Vcpu_tb___024root();
    VL_UNCOPYABLE(Vcpu_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
