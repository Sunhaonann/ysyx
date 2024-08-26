// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_tb.h for the primary calling header

#include "verilated.h"

#include "Vcpu_tb__Syms.h"
#include "Vcpu_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__stl(Vcpu_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcpu_tb___024root___eval_triggers__stl(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vcpu_tb___024root___stl_sequent__TOP__0(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___stl_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("Time: %0t | clk: %b | rst: %b\n",
                  64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->cpu_tb__DOT__clk),
                  1,vlSelf->cpu_tb__DOT__rst);
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
