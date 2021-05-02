// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsoc_top__Syms.h"


void Vsoc_top::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vsoc_top__Syms* __restrict vlSymsp = static_cast<Vsoc_top__Syms*>(userp);
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vsoc_top::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vsoc_top__Syms* __restrict vlSymsp = static_cast<Vsoc_top__Syms*>(userp);
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp2009[3];
    WData/*95:0*/ __Vtemp2025[3];
    WData/*95:0*/ __Vtemp2041[3];
    WData/*95:0*/ __Vtemp2057[3];
    WData/*95:0*/ __Vtemp2073[3];
    WData/*95:0*/ __Vtemp2089[3];
    WData/*95:0*/ __Vtemp2105[3];
    WData/*95:0*/ __Vtemp2121[3];
    WData/*95:0*/ __Vtemp2137[3];
    WData/*95:0*/ __Vtemp2153[3];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgWData(oldp+0,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_pmp_addr),136);
            tracep->chgIData(oldp+5,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_pmp_cfg),24);
            tracep->chgCData(oldp+6,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err),2);
            tracep->chgBit(oldp+7,((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err))));
            tracep->chgBit(oldp+8,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu));
            tracep->chgIData(oldp+9,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev),32);
            tracep->chgBit(oldp+10,((1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err) 
                                           >> 1U))));
            tracep->chgIData(oldp+11,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0]),32);
            tracep->chgIData(oldp+12,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1]),32);
            tracep->chgIData(oldp+13,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2]),32);
            tracep->chgIData(oldp+14,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3]),32);
            tracep->chgIData(oldp+15,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4]),32);
            tracep->chgIData(oldp+16,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5]),32);
            tracep->chgIData(oldp+17,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6]),32);
            tracep->chgIData(oldp+18,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7]),32);
            tracep->chgIData(oldp+19,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8]),32);
            tracep->chgIData(oldp+20,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9]),32);
            tracep->chgIData(oldp+21,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[10]),32);
            tracep->chgIData(oldp+22,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[11]),32);
            tracep->chgIData(oldp+23,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[12]),32);
            tracep->chgIData(oldp+24,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[13]),32);
            tracep->chgIData(oldp+25,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[14]),32);
            tracep->chgIData(oldp+26,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[15]),32);
            tracep->chgCData(oldp+27,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0]),8);
            tracep->chgCData(oldp+28,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1]),8);
            tracep->chgCData(oldp+29,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2]),8);
            tracep->chgCData(oldp+30,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3]),8);
            tracep->chgCData(oldp+31,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4]),8);
            tracep->chgCData(oldp+32,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5]),8);
            tracep->chgCData(oldp+33,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6]),8);
            tracep->chgCData(oldp+34,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7]),8);
            tracep->chgCData(oldp+35,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8]),8);
            tracep->chgCData(oldp+36,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9]),8);
            tracep->chgCData(oldp+37,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[10]),8);
            tracep->chgCData(oldp+38,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[11]),8);
            tracep->chgCData(oldp+39,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[12]),8);
            tracep->chgCData(oldp+40,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[13]),8);
            tracep->chgCData(oldp+41,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[14]),8);
            tracep->chgCData(oldp+42,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[15]),8);
            tracep->chgIData(oldp+43,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0]),32);
            tracep->chgIData(oldp+44,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[1]),32);
            tracep->chgIData(oldp+45,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[2]),32);
            tracep->chgIData(oldp+46,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[3]),32);
            tracep->chgIData(oldp+47,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[4]),32);
            tracep->chgIData(oldp+48,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[5]),32);
            tracep->chgIData(oldp+49,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[6]),32);
            tracep->chgIData(oldp+50,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[7]),32);
            tracep->chgIData(oldp+51,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[8]),32);
            tracep->chgIData(oldp+52,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[9]),32);
            tracep->chgIData(oldp+53,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[10]),32);
            tracep->chgIData(oldp+54,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[11]),32);
            tracep->chgIData(oldp+55,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[12]),32);
            tracep->chgIData(oldp+56,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[13]),32);
            tracep->chgIData(oldp+57,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[14]),32);
            tracep->chgIData(oldp+58,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[15]),32);
            tracep->chgIData(oldp+59,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[16]),32);
            tracep->chgIData(oldp+60,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[17]),32);
            tracep->chgIData(oldp+61,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[18]),32);
            tracep->chgIData(oldp+62,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[19]),32);
            tracep->chgIData(oldp+63,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[20]),32);
            tracep->chgIData(oldp+64,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[21]),32);
            tracep->chgIData(oldp+65,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[22]),32);
            tracep->chgIData(oldp+66,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[23]),32);
            tracep->chgIData(oldp+67,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[24]),32);
            tracep->chgIData(oldp+68,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[25]),32);
            tracep->chgIData(oldp+69,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[26]),32);
            tracep->chgIData(oldp+70,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[27]),32);
            tracep->chgIData(oldp+71,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[28]),32);
            tracep->chgIData(oldp+72,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[29]),32);
            tracep->chgIData(oldp+73,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[30]),32);
            tracep->chgIData(oldp+74,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[31]),32);
            tracep->chgCData(oldp+75,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_d),6);
            tracep->chgCData(oldp+76,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0]),4);
            tracep->chgCData(oldp+77,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[1]),4);
            tracep->chgCData(oldp+78,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[2]),4);
            tracep->chgCData(oldp+79,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[3]),4);
            tracep->chgCData(oldp+80,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[4]),4);
            tracep->chgCData(oldp+81,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[5]),4);
            tracep->chgCData(oldp+82,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[6]),4);
            tracep->chgCData(oldp+83,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[7]),4);
            tracep->chgCData(oldp+84,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[8]),4);
            tracep->chgCData(oldp+85,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[9]),4);
            tracep->chgCData(oldp+86,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[10]),4);
            tracep->chgCData(oldp+87,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[11]),4);
            tracep->chgCData(oldp+88,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[12]),4);
            tracep->chgCData(oldp+89,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[13]),4);
            tracep->chgCData(oldp+90,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[14]),4);
            tracep->chgCData(oldp+91,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[15]),4);
            tracep->chgCData(oldp+92,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[16]),4);
            tracep->chgCData(oldp+93,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[17]),4);
            tracep->chgCData(oldp+94,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[18]),4);
            tracep->chgCData(oldp+95,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[19]),4);
            tracep->chgCData(oldp+96,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[20]),4);
            tracep->chgCData(oldp+97,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[21]),4);
            tracep->chgCData(oldp+98,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[22]),4);
            tracep->chgCData(oldp+99,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[23]),4);
            tracep->chgCData(oldp+100,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[24]),4);
            tracep->chgCData(oldp+101,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[25]),4);
            tracep->chgCData(oldp+102,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[26]),4);
            tracep->chgCData(oldp+103,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[27]),4);
            tracep->chgCData(oldp+104,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[28]),4);
            tracep->chgCData(oldp+105,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[29]),4);
            tracep->chgCData(oldp+106,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[30]),4);
            tracep->chgCData(oldp+107,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[31]),4);
            tracep->chgCData(oldp+108,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[32]),4);
            tracep->chgCData(oldp+109,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[33]),4);
            tracep->chgCData(oldp+110,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[34]),4);
            tracep->chgCData(oldp+111,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[35]),4);
            tracep->chgCData(oldp+112,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[36]),4);
            tracep->chgCData(oldp+113,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[37]),4);
            tracep->chgCData(oldp+114,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[0]),4);
            tracep->chgCData(oldp+115,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[1]),4);
            tracep->chgCData(oldp+116,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[2]),4);
            tracep->chgCData(oldp+117,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[3]),4);
            tracep->chgCData(oldp+118,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[4]),4);
            tracep->chgCData(oldp+119,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[5]),4);
            tracep->chgCData(oldp+120,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[6]),4);
            tracep->chgCData(oldp+121,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[7]),4);
            tracep->chgCData(oldp+122,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[8]),4);
            tracep->chgCData(oldp+123,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[9]),4);
            tracep->chgCData(oldp+124,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[10]),4);
            tracep->chgCData(oldp+125,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[11]),4);
            tracep->chgCData(oldp+126,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[12]),4);
            tracep->chgCData(oldp+127,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[13]),4);
            tracep->chgCData(oldp+128,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[14]),4);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+129,((0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+130,((0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+131,((0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 7U))),5);
            tracep->chgIData(oldp+132,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id),32);
            tracep->chgBit(oldp+133,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_is_compressed_id));
            tracep->chgBit(oldp+134,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err));
            tracep->chgBit(oldp+135,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_c_insn_id));
            tracep->chgIData(oldp+136,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_id),32);
            tracep->chgIData(oldp+137,(((0xfffff000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                           >> 0x1fU)))) 
                                            << 0xcU)) 
                                        | (0xfffU & 
                                           (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0x14U)))),32);
            tracep->chgIData(oldp+138,(((0xfffff000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                           >> 0x1fU)))) 
                                            << 0xcU)) 
                                        | ((0xfe0U 
                                            & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 7U))))),32);
            tracep->chgIData(oldp+139,(((0xffffe000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                           >> 0x1fU)))) 
                                            << 0xdU)) 
                                        | ((0x1000U 
                                            & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x13U)) 
                                           | ((0x800U 
                                               & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                       >> 7U))))))),32);
            tracep->chgIData(oldp+140,((0xfffff000U 
                                        & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)),32);
            tracep->chgIData(oldp+141,(((0xfff00000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                           >> 0x1fU)))) 
                                            << 0x14U)) 
                                        | ((0xff000U 
                                            & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id) 
                                           | ((0x800U 
                                               & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x14U)))))),32);
            tracep->chgIData(oldp+142,((0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0xfU))),32);
            tracep->chgCData(oldp+143,((0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x1bU))),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+144,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
            tracep->chgIData(oldp+145,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q),32);
            tracep->chgBit(oldp+146,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q));
            tracep->chgCData(oldp+147,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),4);
            tracep->chgCData(oldp+148,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
            tracep->chgCData(oldp+149,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q),2);
            tracep->chgBit(oldp+150,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q));
            tracep->chgBit(oldp+151,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+152,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle));
            tracep->chgBit(oldp+153,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec));
            tracep->chgBit(oldp+154,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgWData(oldp+155,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q),68);
            tracep->chgBit(oldp+158,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req));
            tracep->chgBit(oldp+159,((0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
            tracep->chgQData(oldp+160,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a),33);
            tracep->chgQData(oldp+162,((((QData)((IData)(
                                                         ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                                           << 0x1eU) 
                                                          | (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                                             >> 2U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U])))),64);
            tracep->chgIData(oldp+164,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U]),32);
            tracep->chgCData(oldp+165,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q),3);
            tracep->chgCData(oldp+166,((3U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U])),2);
            tracep->chgBit(oldp+167,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
            tracep->chgCData(oldp+168,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            tracep->chgWData(oldp+169,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg),1024);
            tracep->chgWData(oldp+201,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q),992);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[6U])) {
            tracep->chgBit(oldp+232,(vlTOPp->soc_top__DOT__u_top__DOT__data_req));
            tracep->chgBit(oldp+233,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we));
            tracep->chgBit(oldp+234,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__icache_inval));
            tracep->chgCData(oldp+235,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator),6);
            tracep->chgBit(oldp+236,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__mult_sel_ex));
            tracep->chgBit(oldp+237,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex));
            tracep->chgCData(oldp+238,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator),2);
            tracep->chgCData(oldp+239,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode),2);
            tracep->chgBit(oldp+240,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_access));
            tracep->chgCData(oldp+241,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type),2);
            tracep->chgBit(oldp+242,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext));
            tracep->chgBit(oldp+243,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req));
            tracep->chgBit(oldp+244,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__data_req_out));
            tracep->chgBit(oldp+245,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn));
            tracep->chgBit(oldp+246,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn));
            tracep->chgBit(oldp+247,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec));
            tracep->chgBit(oldp+248,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec));
            tracep->chgBit(oldp+249,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec));
            tracep->chgBit(oldp+250,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec));
            tracep->chgBit(oldp+251,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec));
            tracep->chgBit(oldp+252,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec));
            tracep->chgBit(oldp+253,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec));
            tracep->chgIData(oldp+254,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b),32);
            tracep->chgBit(oldp+255,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel));
            tracep->chgBit(oldp+256,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we));
            tracep->chgBit(oldp+257,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec));
            tracep->chgBit(oldp+258,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec));
            tracep->chgCData(oldp+259,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
            tracep->chgCData(oldp+260,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec),2);
            tracep->chgBit(oldp+261,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec));
            tracep->chgBit(oldp+262,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
            tracep->chgCData(oldp+263,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel),3);
            tracep->chgCData(oldp+264,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec),3);
            tracep->chgBit(oldp+265,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec));
            tracep->chgBit(oldp+266,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
            tracep->chgCData(oldp+267,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
            tracep->chgCData(oldp+268,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode),7);
            tracep->chgCData(oldp+269,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu),7);
            tracep->chgBit(oldp+270,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel));
            tracep->chgBit(oldp+271,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate));
            tracep->chgBit(oldp+272,((8U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))));
            tracep->chgBit(oldp+273,(((3U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                      | (6U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))));
            tracep->chgBit(oldp+274,(((4U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                      | (7U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))));
            tracep->chgBit(oldp+275,((0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[7U])) {
            tracep->chgCData(oldp+276,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be),4);
            tracep->chgIData(oldp+277,((0xfffffffcU 
                                        & ((IData)(
                                                   (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                    >> 3U)) 
                                           << 2U))),32);
            tracep->chgIData(oldp+278,(((1U & (IData)(
                                                      (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                       >> 2U)))
                                         ? ((1U & (IData)(
                                                          (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                           >> 1U)))
                                             ? ((0xff000000U 
                                                 & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                    << 0x18U)) 
                                                | (0xffffffU 
                                                   & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                      >> 8U)))
                                             : ((0xffff0000U 
                                                 & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                    << 0x10U)) 
                                                | (0xffffU 
                                                   & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                      >> 0x10U))))
                                         : ((1U & (IData)(
                                                          (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                           >> 1U)))
                                             ? ((0xffffff00U 
                                                 & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                      >> 0x18U)))
                                             : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc))),32);
            tracep->chgIData(oldp+279,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc),32);
            tracep->chgIData(oldp+280,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc),32);
            tracep->chgIData(oldp+281,((IData)((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                >> 1U))),32);
            tracep->chgIData(oldp+282,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a),32);
            tracep->chgIData(oldp+283,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b),32);
            tracep->chgQData(oldp+284,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b),33);
            tracep->chgQData(oldp+286,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext),34);
            tracep->chgBit(oldp+288,((0U == (IData)(
                                                    (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 1U)))));
            tracep->chgQData(oldp+289,((0x1ffffffffULL 
                                        & (~ ((QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                              << 1U)))),33);
            tracep->chgCData(oldp+291,((0x3fU & ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)))),6);
            tracep->chgCData(oldp+292,(((0x10U & ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0xfU 
                                                               & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                                  >> 0x18U))))) 
                                                  << 4U)) 
                                        | (0xfU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                   >> 0x18U)))),5);
            tracep->chgCData(oldp+293,((0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                 >> 0x10U))),5);
            tracep->chgIData(oldp+294,((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                        | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+295,((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                        & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+296,((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                        ^ vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgBit(oldp+297,((1U & (((IData)(0x20U) 
                                             - (0x1fU 
                                                & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                            >> 5U))));
            tracep->chgCData(oldp+298,(((2U & ((IData)(
                                                       (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 0x21U)) 
                                               << 1U)) 
                                        | (1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)))),2);
            tracep->chgCData(oldp+299,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 1U)))),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[8U])) {
            tracep->chgBit(oldp+300,((1U & (vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+301,((7U & (vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+302,((7U & (vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+303,((3U & (vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+304,((0xffU & (vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+305,(((vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__lsu_to_xbar[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+306,((0xfU & ((vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__lsu_to_xbar[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+307,(((vlTOPp->soc_top__DOT__lsu_to_xbar[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__lsu_to_xbar[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+308,((1U & vlTOPp->soc_top__DOT__lsu_to_xbar[0U])));
            tracep->chgBit(oldp+309,((1U & (vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+310,((1U & vlTOPp->soc_top__DOT__lsu_to_xbar[0U])));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [8U] | vlTOPp->__Vm_traceActivity
                         [0x15U]))) {
            tracep->chgBit(oldp+311,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+312,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+313,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+314,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+315,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+316,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+317,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+318,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+319,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[9U])) {
            tracep->chgBit(oldp+320,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_q));
            tracep->chgIData(oldp+321,(vlTOPp->soc_top__DOT__intr_controller__DOT__ip),32);
            tracep->chgBit(oldp+322,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__q));
            tracep->chgBit(oldp+323,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__q));
            tracep->chgBit(oldp+324,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__q));
            tracep->chgBit(oldp+325,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__q));
            tracep->chgCData(oldp+326,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_id_q),6);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xaU])) {
            tracep->chgBit(oldp+327,((1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                            >> 1U))));
            tracep->chgBit(oldp+328,((1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                            >> 2U))));
            tracep->chgCData(oldp+329,((7U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+330,((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q))));
            tracep->chgBit(oldp+331,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q));
            tracep->chgBit(oldp+332,((1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                            >> 5U))));
            tracep->chgBit(oldp+333,((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))));
            tracep->chgCData(oldp+334,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q),2);
            tracep->chgCData(oldp+335,((3U & ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                                               ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                  >> 2U)
                                               : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)))),2);
            tracep->chgBit(oldp+336,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
            tracep->chgBit(oldp+337,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                            >> 2U))));
            tracep->chgBit(oldp+338,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                            >> 0xfU))));
            tracep->chgBit(oldp+339,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                            >> 0xcU))));
            tracep->chgBit(oldp+340,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                                      & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)))));
            tracep->chgBit(oldp+341,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q));
            tracep->chgBit(oldp+342,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q));
            tracep->chgBit(oldp+343,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q));
            tracep->chgBit(oldp+344,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q));
            tracep->chgBit(oldp+345,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q));
            tracep->chgBit(oldp+346,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q));
            tracep->chgBit(oldp+347,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q));
            tracep->chgBit(oldp+348,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q));
            tracep->chgIData(oldp+349,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q),24);
            tracep->chgBit(oldp+350,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q));
            tracep->chgBit(oldp+351,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q));
            tracep->chgCData(oldp+352,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+353,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q),18);
            tracep->chgIData(oldp+354,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+355,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q),6);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xbU])) {
            tracep->chgBit(oldp+356,((0U != vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)));
            tracep->chgIData(oldp+357,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs),18);
            tracep->chgCData(oldp+358,(((0x4000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                         ? 0xeU : (
                                                   (0x2000U 
                                                    & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                    ? 0xdU
                                                    : 
                                                   ((0x1000U 
                                                     & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                     ? 0xcU
                                                     : 
                                                    ((0x800U 
                                                      & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                      ? 0xbU
                                                      : 
                                                     ((0x400U 
                                                       & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                       ? 0xaU
                                                       : 
                                                      ((0x200U 
                                                        & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                        ? 9U
                                                        : 
                                                       ((0x100U 
                                                         & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                         ? 8U
                                                         : 
                                                        ((0x80U 
                                                          & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                          ? 7U
                                                          : 
                                                         ((0x40U 
                                                           & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                           ? 6U
                                                           : 
                                                          ((0x20U 
                                                            & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                            ? 5U
                                                            : 
                                                           ((0x10U 
                                                             & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                             ? 4U
                                                             : 
                                                            ((8U 
                                                              & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                              ? 3U
                                                              : 
                                                             ((4U 
                                                               & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                               ? 2U
                                                               : 
                                                              ((2U 
                                                                & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                                ? 1U
                                                                : 0U))))))))))))))),4);
            tracep->chgBit(oldp+359,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs 
                                            >> 0x10U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xcU])) {
            tracep->chgBit(oldp+360,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set));
            tracep->chgBit(oldp+361,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
            tracep->chgBit(oldp+362,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug));
            tracep->chgBit(oldp+363,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xdU])) {
            tracep->chgIData(oldp+364,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__num_req_outstanding),17);
            tracep->chgCData(oldp+365,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__dev_select_outstanding),4);
            tracep->chgCData(oldp+366,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_opcode),3);
            tracep->chgCData(oldp+367,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_source),8);
            tracep->chgCData(oldp+368,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_size),2);
            tracep->chgBit(oldp+369,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_req_pending));
            tracep->chgIData(oldp+370,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q),32);
            tracep->chgCData(oldp+371,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio10__q),3);
            tracep->chgBit(oldp+372,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__qe));
            tracep->chgBit(oldp+373,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__qe));
            tracep->chgBit(oldp+374,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__qe));
            tracep->chgBit(oldp+375,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__qe));
            tracep->chgBit(oldp+376,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__qe));
            tracep->chgBit(oldp+377,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__qe));
            tracep->chgBit(oldp+378,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__qe));
            tracep->chgBit(oldp+379,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__qe));
            tracep->chgBit(oldp+380,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__qe));
            tracep->chgBit(oldp+381,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__qe));
            tracep->chgBit(oldp+382,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__qe));
            tracep->chgBit(oldp+383,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__qe));
            tracep->chgBit(oldp+384,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__qe));
            tracep->chgBit(oldp+385,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__qe));
            tracep->chgBit(oldp+386,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__qe));
            tracep->chgBit(oldp+387,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__qe));
            tracep->chgBit(oldp+388,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__qe));
            tracep->chgBit(oldp+389,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__qe));
            tracep->chgBit(oldp+390,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__qe));
            tracep->chgBit(oldp+391,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__qe));
            tracep->chgBit(oldp+392,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__qe));
            tracep->chgBit(oldp+393,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__qe));
            tracep->chgBit(oldp+394,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__qe));
            tracep->chgBit(oldp+395,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__qe));
            tracep->chgBit(oldp+396,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__qe));
            tracep->chgBit(oldp+397,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__qe));
            tracep->chgBit(oldp+398,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__qe));
            tracep->chgBit(oldp+399,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__qe));
            tracep->chgBit(oldp+400,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__qe));
            tracep->chgBit(oldp+401,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__qe));
            tracep->chgBit(oldp+402,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__qe));
            tracep->chgBit(oldp+403,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__qe));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xeU])) {
            tracep->chgBit(oldp+404,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+405,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+406,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+407,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+408,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+409,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+410,((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                >> 2U))),32);
            tracep->chgBit(oldp+411,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 1U)))));
            tracep->chgBit(oldp+412,((1U & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h))));
            tracep->chgCData(oldp+413,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqid),8);
            tracep->chgCData(oldp+414,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqsz),2);
            tracep->chgBit(oldp+415,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_0__q));
            tracep->chgBit(oldp+416,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_7__q));
            tracep->chgBit(oldp+417,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_8__q));
            tracep->chgBit(oldp+418,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_20__q));
            tracep->chgBit(oldp+419,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_21__q));
            tracep->chgBit(oldp+420,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_22__q));
            tracep->chgBit(oldp+421,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_23__q));
            tracep->chgBit(oldp+422,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_24__q));
            tracep->chgBit(oldp+423,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_25__q));
            tracep->chgBit(oldp+424,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_31__q));
            tracep->chgCData(oldp+425,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q),3);
            tracep->chgCData(oldp+426,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q),3);
            tracep->chgBit(oldp+427,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_0__q));
            tracep->chgBit(oldp+428,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_1__q));
            tracep->chgBit(oldp+429,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding));
            tracep->chgIData(oldp+430,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rdata),32);
            tracep->chgBit(oldp+431,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__error));
            tracep->chgCData(oldp+432,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqid),8);
            tracep->chgCData(oldp+433,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqsz),2);
            tracep->chgCData(oldp+434,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rspop),3);
            tracep->chgCData(oldp+435,(vlTOPp->soc_top__DOT__u_tempsense__DOT__reqsz),2);
            tracep->chgBit(oldp+436,(vlTOPp->soc_top__DOT__u_tempsense__DOT__rspop));
            tracep->chgCData(oldp+437,(vlTOPp->soc_top__DOT__u_tempsense__DOT__SEL_CONV_TIME_REG),4);
            tracep->chgBit(oldp+438,(vlTOPp->soc_top__DOT__u_tempsense__DOT__en_REG));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xfU])) {
            tracep->chgBit(oldp+439,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err_plus2));
            tracep->chgWData(oldp+440,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q),96);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x10U])) {
            tracep->chgIData(oldp+443,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+444,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+445,((0xffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)),8);
            tracep->chgCData(oldp+446,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q),2);
            tracep->chgCData(oldp+447,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q),2);
            tracep->chgCData(oldp+448,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_q),2);
            tracep->chgIData(oldp+449,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+450,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+451,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+452,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+453,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+454,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+455,((0xfffffff8U 
                                        | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),32);
            tracep->chgCData(oldp+456,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q),3);
            tracep->chgQData(oldp+457,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q),64);
            tracep->chgQData(oldp+459,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q),64);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x11U])) {
            tracep->chgIData(oldp+461,((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                        << 1U)),32);
            tracep->chgCData(oldp+462,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q),3);
            tracep->chgIData(oldp+463,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q),31);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x12U])) {
            tracep->chgCData(oldp+464,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id),2);
            tracep->chgBit(oldp+465,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_req_int));
            tracep->chgIData(oldp+466,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+467,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev),2);
            tracep->chgCData(oldp+468,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q),6);
            tracep->chgQData(oldp+469,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0]),64);
            tracep->chgQData(oldp+471,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[1]),64);
            tracep->chgQData(oldp+473,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[2]),64);
            tracep->chgQData(oldp+475,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[3]),64);
            tracep->chgQData(oldp+477,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[4]),64);
            tracep->chgQData(oldp+479,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[5]),64);
            tracep->chgQData(oldp+481,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[6]),64);
            tracep->chgQData(oldp+483,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[7]),64);
            tracep->chgQData(oldp+485,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[8]),64);
            tracep->chgQData(oldp+487,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[9]),64);
            tracep->chgQData(oldp+489,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[10]),64);
            tracep->chgQData(oldp+491,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[11]),64);
            tracep->chgQData(oldp+493,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[12]),64);
            tracep->chgQData(oldp+495,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[13]),64);
            tracep->chgQData(oldp+497,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[14]),64);
            tracep->chgQData(oldp+499,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[15]),64);
            tracep->chgQData(oldp+501,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[16]),64);
            tracep->chgQData(oldp+503,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[17]),64);
            tracep->chgQData(oldp+505,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[18]),64);
            tracep->chgQData(oldp+507,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[19]),64);
            tracep->chgQData(oldp+509,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[20]),64);
            tracep->chgQData(oldp+511,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[21]),64);
            tracep->chgQData(oldp+513,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[22]),64);
            tracep->chgQData(oldp+515,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[23]),64);
            tracep->chgQData(oldp+517,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[24]),64);
            tracep->chgQData(oldp+519,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[25]),64);
            tracep->chgQData(oldp+521,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[26]),64);
            tracep->chgQData(oldp+523,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[27]),64);
            tracep->chgQData(oldp+525,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[28]),64);
            tracep->chgQData(oldp+527,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[29]),64);
            tracep->chgQData(oldp+529,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[30]),64);
            tracep->chgQData(oldp+531,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[31]),64);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x13U])) {
            tracep->chgCData(oldp+533,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_mux_id),3);
            tracep->chgCData(oldp+534,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op),2);
            tracep->chgBit(oldp+535,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_valid));
            tracep->chgBit(oldp+536,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_load));
            tracep->chgBit(oldp+537,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_store));
            tracep->chgBit(oldp+538,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec));
            tracep->chgBit(oldp+539,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec));
            tracep->chgBit(oldp+540,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec));
            tracep->chgBit(oldp+541,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio));
            tracep->chgBit(oldp+542,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio));
            tracep->chgBit(oldp+543,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio));
            tracep->chgBit(oldp+544,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio));
            tracep->chgBit(oldp+545,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio));
            tracep->chgBit(oldp+546,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio));
            tracep->chgBit(oldp+547,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn));
            tracep->chgBit(oldp+548,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn));
            tracep->chgBit(oldp+549,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn));
            tracep->chgBit(oldp+550,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn));
            tracep->chgBit(oldp+551,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn));
            tracep->chgBit(oldp+552,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid) 
                                      | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid))));
            tracep->chgBit(oldp+553,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid));
            tracep->chgBit(oldp+554,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid));
            tracep->chgCData(oldp+555,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q),2);
            tracep->chgCData(oldp+556,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d),2);
            tracep->chgBit(oldp+557,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x14U])) {
            tracep->chgBit(oldp+558,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_branch));
            tracep->chgBit(oldp+559,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set));
            tracep->chgBit(oldp+560,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw));
            tracep->chgBit(oldp+561,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id));
            tracep->chgBit(oldp+562,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x15U])) {
            tracep->chgCData(oldp+563,(vlTOPp->soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10),4);
            tracep->chgCData(oldp+564,((0xfU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])),4);
            tracep->chgBit(oldp+565,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hold_all_requests));
            tracep->chgBit(oldp+566,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+567,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+568,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+569,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+570,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+571,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [0U][2U] << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+572,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+573,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [0U][1U] << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+574,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [0U][0U])));
            tracep->chgBit(oldp+575,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+576,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+577,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+578,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+579,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+580,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [1U][2U] << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+581,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+582,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [1U][1U] << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+583,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [1U][0U])));
            tracep->chgBit(oldp+584,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+585,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [2U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+586,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [2U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+587,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [2U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+588,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [2U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+589,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [2U][2U] << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [2U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+590,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [2U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [2U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+591,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [2U][1U] << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [2U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+592,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [2U][0U])));
            tracep->chgBit(oldp+593,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+594,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [3U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+595,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [3U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+596,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [3U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+597,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [3U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+598,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [3U][2U] << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [3U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+599,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [3U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [3U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+600,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [3U][1U] << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [3U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+601,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [3U][0U])));
            tracep->chgBit(oldp+602,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+603,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [4U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+604,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [4U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+605,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [4U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+606,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [4U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+607,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [4U][2U] << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [4U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+608,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [4U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [4U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+609,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [4U][1U] << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [4U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+610,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [4U][0U])));
            tracep->chgBit(oldp+611,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+612,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [5U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+613,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [5U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+614,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [5U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+615,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [5U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+616,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [5U][2U] << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [5U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+617,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [5U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [5U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+618,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [5U][1U] << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [5U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+619,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [5U][0U])));
            tracep->chgBit(oldp+620,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+621,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [6U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+622,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [6U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+623,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [6U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+624,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [6U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+625,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [6U][2U] << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [6U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+626,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [6U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [6U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+627,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [6U][1U] << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [6U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+628,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [6U][0U])));
            tracep->chgBit(oldp+629,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+630,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [7U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+631,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [7U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+632,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [7U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+633,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [7U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+634,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [7U][2U] << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [7U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+635,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [7U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [7U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+636,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [7U][1U] << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [7U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+637,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [7U][0U])));
            tracep->chgBit(oldp+638,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+639,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [8U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+640,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [8U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+641,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [8U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+642,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [8U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+643,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [8U][2U] << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [8U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+644,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [8U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [8U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+645,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [8U][1U] << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [8U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+646,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [8U][0U])));
            tracep->chgBit(oldp+647,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+648,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [9U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+649,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [9U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+650,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [9U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+651,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [9U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+652,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [9U][2U] << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [9U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+653,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [9U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [9U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+654,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [9U][1U] << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [9U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+655,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [9U][0U])));
            tracep->chgBit(oldp+656,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+657,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [0xaU][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+658,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [0xaU][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+659,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [0xaU][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+660,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [0xaU][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+661,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [0xaU][2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [0xaU][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+662,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [0xaU][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [0xaU][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+663,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [0xaU][1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [0xaU][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+664,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [0xaU][0U])));
            tracep->chgWData(oldp+665,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i),88);
            tracep->chgBit(oldp+668,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+669,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [0xaU][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+670,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [0xaU][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+671,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [0xaU][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+672,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [0xaU][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+673,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [0xaU][2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [0xaU][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+674,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [0xaU][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [0xaU][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+675,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [0xaU][1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [0xaU][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+676,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [0xaU][0U])));
            tracep->chgBit(oldp+677,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+678,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+679,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+680,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+681,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+682,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [0U][2U] << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+683,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+684,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [0U][1U] << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+685,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [0U][0U])));
            tracep->chgBit(oldp+686,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0x15U))));
            __Vtemp2009[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [0U][0U]);
            __Vtemp2009[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [0U][1U]) | (0xfffffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [0U][1U]));
            __Vtemp2009[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [0U][2U]) | (0x1ffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [0U][2U]));
            tracep->chgWData(oldp+687,(__Vtemp2009),85);
            tracep->chgBit(oldp+690,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [0U][0U])));
            tracep->chgBit(oldp+691,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+692,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+693,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+694,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+695,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+696,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [1U][2U] << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+697,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+698,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [1U][1U] << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+699,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [1U][0U])));
            tracep->chgBit(oldp+700,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0x15U))));
            __Vtemp2025[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [1U][0U]);
            __Vtemp2025[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [1U][1U]) | (0xfffffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [1U][1U]));
            __Vtemp2025[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [1U][2U]) | (0x1ffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [1U][2U]));
            tracep->chgWData(oldp+701,(__Vtemp2025),85);
            tracep->chgBit(oldp+704,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [1U][0U])));
            tracep->chgBit(oldp+705,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+706,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [2U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+707,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [2U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+708,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [2U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+709,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [2U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+710,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [2U][2U] << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [2U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+711,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [2U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [2U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+712,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [2U][1U] << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [2U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+713,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [2U][0U])));
            tracep->chgBit(oldp+714,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0x15U))));
            __Vtemp2041[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [2U][0U]);
            __Vtemp2041[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [2U][1U]) | (0xfffffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [2U][1U]));
            __Vtemp2041[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [2U][2U]) | (0x1ffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [2U][2U]));
            tracep->chgWData(oldp+715,(__Vtemp2041),85);
            tracep->chgBit(oldp+718,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [2U][0U])));
            tracep->chgBit(oldp+719,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+720,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [3U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+721,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [3U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+722,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [3U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+723,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [3U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+724,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [3U][2U] << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [3U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+725,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [3U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [3U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+726,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [3U][1U] << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [3U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+727,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [3U][0U])));
            tracep->chgBit(oldp+728,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0x15U))));
            __Vtemp2057[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [3U][0U]);
            __Vtemp2057[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [3U][1U]) | (0xfffffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [3U][1U]));
            __Vtemp2057[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [3U][2U]) | (0x1ffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [3U][2U]));
            tracep->chgWData(oldp+729,(__Vtemp2057),85);
            tracep->chgBit(oldp+732,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [3U][0U])));
            tracep->chgBit(oldp+733,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+734,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [4U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+735,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [4U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+736,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [4U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+737,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [4U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+738,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [4U][2U] << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [4U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+739,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [4U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [4U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+740,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [4U][1U] << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [4U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+741,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [4U][0U])));
            tracep->chgBit(oldp+742,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0x15U))));
            __Vtemp2073[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [4U][0U]);
            __Vtemp2073[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [4U][1U]) | (0xfffffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [4U][1U]));
            __Vtemp2073[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [4U][2U]) | (0x1ffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [4U][2U]));
            tracep->chgWData(oldp+743,(__Vtemp2073),85);
            tracep->chgBit(oldp+746,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [4U][0U])));
            tracep->chgBit(oldp+747,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+748,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [5U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+749,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [5U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+750,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [5U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+751,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [5U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+752,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [5U][2U] << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [5U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+753,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [5U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [5U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+754,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [5U][1U] << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [5U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+755,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [5U][0U])));
            tracep->chgBit(oldp+756,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0x15U))));
            __Vtemp2089[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [5U][0U]);
            __Vtemp2089[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [5U][1U]) | (0xfffffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [5U][1U]));
            __Vtemp2089[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [5U][2U]) | (0x1ffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [5U][2U]));
            tracep->chgWData(oldp+757,(__Vtemp2089),85);
            tracep->chgBit(oldp+760,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [5U][0U])));
            tracep->chgBit(oldp+761,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+762,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [6U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+763,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [6U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+764,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [6U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+765,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [6U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+766,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [6U][2U] << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [6U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+767,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [6U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [6U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+768,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [6U][1U] << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [6U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+769,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [6U][0U])));
            tracep->chgBit(oldp+770,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0x15U))));
            __Vtemp2105[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [6U][0U]);
            __Vtemp2105[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [6U][1U]) | (0xfffffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [6U][1U]));
            __Vtemp2105[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [6U][2U]) | (0x1ffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [6U][2U]));
            tracep->chgWData(oldp+771,(__Vtemp2105),85);
            tracep->chgBit(oldp+774,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [6U][0U])));
            tracep->chgBit(oldp+775,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+776,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [7U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+777,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [7U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+778,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [7U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+779,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [7U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+780,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [7U][2U] << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [7U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+781,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [7U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [7U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+782,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [7U][1U] << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [7U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+783,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [7U][0U])));
            tracep->chgBit(oldp+784,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0x15U))));
            __Vtemp2121[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [7U][0U]);
            __Vtemp2121[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [7U][1U]) | (0xfffffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [7U][1U]));
            __Vtemp2121[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [7U][2U]) | (0x1ffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [7U][2U]));
            tracep->chgWData(oldp+785,(__Vtemp2121),85);
            tracep->chgBit(oldp+788,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [7U][0U])));
            tracep->chgBit(oldp+789,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+790,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [8U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+791,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [8U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+792,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [8U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+793,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [8U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+794,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [8U][2U] << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [8U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+795,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [8U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [8U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+796,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [8U][1U] << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [8U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+797,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [8U][0U])));
            tracep->chgBit(oldp+798,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0x15U))));
            __Vtemp2137[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [8U][0U]);
            __Vtemp2137[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [8U][1U]) | (0xfffffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [8U][1U]));
            __Vtemp2137[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [8U][2U]) | (0x1ffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [8U][2U]));
            tracep->chgWData(oldp+799,(__Vtemp2137),85);
            tracep->chgBit(oldp+802,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [8U][0U])));
            tracep->chgBit(oldp+803,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+804,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [9U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+805,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [9U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+806,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [9U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+807,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [9U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+808,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [9U][2U] << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [9U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+809,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [9U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [9U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+810,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [9U][1U] << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [9U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+811,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [9U][0U])));
            tracep->chgBit(oldp+812,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0x15U))));
            __Vtemp2153[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [9U][0U]);
            __Vtemp2153[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [9U][1U]) | (0xfffffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [9U][1U]));
            __Vtemp2153[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [9U][2U]) | (0x1ffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [9U][2U]));
            tracep->chgWData(oldp+813,(__Vtemp2153),85);
            tracep->chgBit(oldp+816,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [9U][0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x16U])) {
            tracep->chgBit(oldp+817,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+818,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+819,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+820,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+821,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+822,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+823,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+824,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+825,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+826,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+827,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+828,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+829,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+830,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+831,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+832,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+833,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+834,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x17U])) {
            tracep->chgBit(oldp+835,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+836,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+837,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+838,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+839,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+840,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+841,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+842,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+843,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+844,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+845,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+846,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+847,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+848,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+849,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+850,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+851,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+852,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x18U])) {
            tracep->chgBit(oldp+853,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+854,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+855,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+856,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+857,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+858,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+859,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+860,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+861,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+862,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+863,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+864,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+865,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+866,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+867,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+868,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+869,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+870,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x19U])) {
            tracep->chgBit(oldp+871,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+872,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+873,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+874,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+875,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+876,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+877,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+878,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+879,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+880,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+881,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+882,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+883,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+884,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+885,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+886,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+887,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+888,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1aU])) {
            tracep->chgBit(oldp+889,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+890,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+891,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+892,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+893,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+894,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+895,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+896,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+897,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+898,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+899,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+900,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+901,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+902,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+903,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+904,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+905,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+906,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1bU])) {
            tracep->chgBit(oldp+907,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__outstanding));
            tracep->chgBit(oldp+908,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_3__q));
            tracep->chgBit(oldp+909,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_4__q));
            tracep->chgBit(oldp+910,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_5__q));
            tracep->chgBit(oldp+911,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_6__q));
            tracep->chgBit(oldp+912,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_9__q));
            tracep->chgBit(oldp+913,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_10__q));
            tracep->chgBit(oldp+914,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_11__q));
            tracep->chgBit(oldp+915,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_12__q));
            tracep->chgBit(oldp+916,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_13__q));
            tracep->chgBit(oldp+917,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_14__q));
            tracep->chgBit(oldp+918,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_15__q));
            tracep->chgBit(oldp+919,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_16__q));
            tracep->chgCData(oldp+920,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q),3);
            tracep->chgCData(oldp+921,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q),3);
            tracep->chgCData(oldp+922,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q),3);
            tracep->chgCData(oldp+923,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q),3);
            tracep->chgCData(oldp+924,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q),3);
            tracep->chgCData(oldp+925,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q),3);
            tracep->chgBit(oldp+926,(vlTOPp->soc_top__DOT__u_tempsense__DOT__outstanding));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1cU])) {
            tracep->chgSData(oldp+927,((0x1fffU & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage))),13);
            tracep->chgSData(oldp+928,((0x1fffU & (IData)(
                                                          (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                           >> 0xdU)))),13);
            tracep->chgSData(oldp+929,((0x1fffU & (IData)(
                                                          (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                           >> 0x1aU)))),13);
            tracep->chgSData(oldp+930,((0x1fffU & (IData)(
                                                          (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                           >> 0x27U)))),13);
            tracep->chgCData(oldp+931,((0x1fU & vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage)),5);
            tracep->chgCData(oldp+932,((0x1fU & (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                 >> 5U))),5);
            tracep->chgCData(oldp+933,((0x1fU & (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                 >> 0xaU))),5);
            tracep->chgCData(oldp+934,((0x1fU & (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                 >> 0xfU))),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1dU])) {
            tracep->chgBit(oldp+935,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_1__q));
            tracep->chgBit(oldp+936,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_2__q));
            tracep->chgBit(oldp+937,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_17__q));
            tracep->chgBit(oldp+938,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_18__q));
            tracep->chgBit(oldp+939,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_27__q));
            tracep->chgBit(oldp+940,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_28__q));
            tracep->chgBit(oldp+941,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_29__q));
            tracep->chgBit(oldp+942,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_30__q));
            tracep->chgCData(oldp+943,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio0__q),3);
            tracep->chgCData(oldp+944,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio1__q),3);
            tracep->chgCData(oldp+945,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio2__q),3);
            tracep->chgCData(oldp+946,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio3__q),3);
            tracep->chgCData(oldp+947,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio4__q),3);
            tracep->chgCData(oldp+948,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio5__q),3);
            tracep->chgCData(oldp+949,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio6__q),3);
            tracep->chgCData(oldp+950,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio9__q),3);
            tracep->chgCData(oldp+951,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q),3);
            tracep->chgCData(oldp+952,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio12__q),3);
            tracep->chgCData(oldp+953,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio13__q),3);
            tracep->chgCData(oldp+954,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio14__q),3);
            tracep->chgCData(oldp+955,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q),3);
            tracep->chgCData(oldp+956,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio16__q),3);
            tracep->chgCData(oldp+957,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q),3);
            tracep->chgCData(oldp+958,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q),3);
            tracep->chgCData(oldp+959,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q),3);
            tracep->chgCData(oldp+960,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q),3);
            tracep->chgCData(oldp+961,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio29__q),3);
            tracep->chgCData(oldp+962,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio30__q),3);
            tracep->chgCData(oldp+963,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q),3);
            tracep->chgBit(oldp+964,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_4__q));
            tracep->chgBit(oldp+965,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_5__q));
            tracep->chgBit(oldp+966,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_6__q));
            tracep->chgBit(oldp+967,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_22__q));
            tracep->chgBit(oldp+968,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_23__q));
            tracep->chgBit(oldp+969,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_26__q));
            tracep->chgBit(oldp+970,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_27__q));
            tracep->chgBit(oldp+971,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_msip0__q));
            tracep->chgBit(oldp+972,(vlTOPp->soc_top__DOT__u_tempsense__DOT__RESET_REGn));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1eU])) {
            tracep->chgIData(oldp+973,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q),32);
            tracep->chgIData(oldp+974,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q),32);
            tracep->chgIData(oldp+975,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q),32);
            tracep->chgIData(oldp+976,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q),32);
            tracep->chgIData(oldp+977,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q),32);
            tracep->chgBit(oldp+978,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_19__q));
            tracep->chgBit(oldp+979,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_26__q));
            tracep->chgCData(oldp+980,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio8__q),3);
            tracep->chgBit(oldp+981,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_2__q));
            tracep->chgBit(oldp+982,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_3__q));
            tracep->chgBit(oldp+983,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_7__q));
            tracep->chgBit(oldp+984,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_8__q));
            tracep->chgBit(oldp+985,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_9__q));
            tracep->chgBit(oldp+986,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_10__q));
            tracep->chgBit(oldp+987,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_11__q));
            tracep->chgBit(oldp+988,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_12__q));
            tracep->chgBit(oldp+989,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_13__q));
            tracep->chgBit(oldp+990,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_14__q));
            tracep->chgBit(oldp+991,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_15__q));
            tracep->chgBit(oldp+992,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_16__q));
            tracep->chgBit(oldp+993,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_17__q));
            tracep->chgBit(oldp+994,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_18__q));
            tracep->chgBit(oldp+995,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_19__q));
            tracep->chgBit(oldp+996,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_20__q));
            tracep->chgBit(oldp+997,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_21__q));
            tracep->chgBit(oldp+998,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_24__q));
            tracep->chgBit(oldp+999,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_25__q));
            tracep->chgBit(oldp+1000,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_28__q));
            tracep->chgBit(oldp+1001,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_29__q));
            tracep->chgBit(oldp+1002,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_30__q));
            tracep->chgBit(oldp+1003,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_31__q));
            tracep->chgCData(oldp+1004,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_threshold0__q),3);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x1fU] | vlTOPp->__Vm_traceActivity
                         [0x33U]))) {
            tracep->chgBit(oldp+1005,((1U & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U])));
            tracep->chgBit(oldp+1006,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1007,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1008,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1009,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1010,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1011,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1012,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1013,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1014,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1015,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1016,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1017,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1018,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1019,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1020,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1021,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1022,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1023,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1024,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1025,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+1026,((1U & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U])));
            tracep->chgBit(oldp+1027,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1028,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1029,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1030,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1031,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1032,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1033,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1034,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1035,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1036,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1037,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1038,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                                << 0x17U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                  >> 9U)))),3);
            tracep->chgCData(oldp+1039,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                                << 0x1aU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                  >> 6U)))),3);
            tracep->chgCData(oldp+1040,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                                << 0x1dU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                  >> 3U)))),3);
            tracep->chgCData(oldp+1041,((7U & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U])),3);
            tracep->chgCData(oldp+1042,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 3U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 0x1dU)))),3);
            tracep->chgCData(oldp+1043,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 6U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 0x1aU)))),3);
            tracep->chgCData(oldp+1044,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 9U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 0x17U)))),3);
            tracep->chgCData(oldp+1045,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 0xcU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 0x14U)))),3);
            tracep->chgCData(oldp+1046,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 0xfU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 0x11U)))),3);
            tracep->chgCData(oldp+1047,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 0x12U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 0xeU)))),3);
            tracep->chgCData(oldp+1048,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 0x15U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 0xbU)))),3);
            tracep->chgCData(oldp+1049,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 0x18U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 8U)))),3);
            tracep->chgCData(oldp+1050,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 0x1bU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 5U)))),3);
            tracep->chgCData(oldp+1051,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 0x1eU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 2U)))),3);
            tracep->chgCData(oldp+1052,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 1U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0x1fU)))),3);
            tracep->chgCData(oldp+1053,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 4U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0x1cU)))),3);
            tracep->chgCData(oldp+1054,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 7U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0x19U)))),3);
            tracep->chgCData(oldp+1055,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 0xaU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0x16U)))),3);
            tracep->chgCData(oldp+1056,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 0xdU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0x13U)))),3);
            tracep->chgCData(oldp+1057,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 0x10U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0x10U)))),3);
            tracep->chgCData(oldp+1058,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 0x13U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0xdU)))),3);
            tracep->chgCData(oldp+1059,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 0x16U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0xaU)))),3);
            tracep->chgCData(oldp+1060,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 0x19U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 7U)))),3);
            tracep->chgCData(oldp+1061,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 0x1cU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 4U)))),3);
            tracep->chgCData(oldp+1062,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 0x1fU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 1U)))),3);
            tracep->chgCData(oldp+1063,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                << 2U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                  >> 0x1eU)))),3);
            tracep->chgCData(oldp+1064,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                << 5U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                  >> 0x1bU)))),3);
            tracep->chgCData(oldp+1065,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                << 8U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                  >> 0x18U)))),3);
            tracep->chgCData(oldp+1066,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                << 0xbU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                  >> 0x15U)))),3);
            tracep->chgCData(oldp+1067,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                << 0xeU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                  >> 0x12U)))),3);
            tracep->chgCData(oldp+1068,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                << 0x11U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                  >> 0xfU)))),3);
            tracep->chgCData(oldp+1069,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                << 0x14U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                  >> 0xcU)))),3);
            tracep->chgBit(oldp+1070,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1071,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1072,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1073,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1074,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1075,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1076,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1077,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1078,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1079,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1080,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1081,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1082,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1083,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1084,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1085,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1086,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1087,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1088,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1089,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+1090,((1U & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U])));
            tracep->chgBit(oldp+1091,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1092,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1093,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1094,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1095,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1096,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1097,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1098,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1099,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1100,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1101,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1102,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                << 0x17U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                                  >> 9U)))),3);
            tracep->chgCData(oldp+1103,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                                     >> 3U)))),6);
            tracep->chgBit(oldp+1104,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1105,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1106,((1U & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U])));
            tracep->chgBit(oldp+1107,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1108,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 2U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x20U])) {
            tracep->chgSData(oldp+1109,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_c_id),16);
            tracep->chgIData(oldp+1110,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q),32);
            tracep->chgIData(oldp+1111,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x21U])) {
            tracep->chgBit(oldp+1112,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_q));
            tracep->chgBit(oldp+1113,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q));
            tracep->chgCData(oldp+1114,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x22U])) {
            tracep->chgBit(oldp+1115,((1U & vlTOPp->soc_top__DOT__u_top__DOT____Vcellout__u_core__crash_dump_o[0U])));
            tracep->chgWData(oldp+1116,(vlTOPp->soc_top__DOT__u_top__DOT____Vcellout__u_core__crash_dump_o),128);
            tracep->chgBit(oldp+1120,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_mret_id));
            tracep->chgBit(oldp+1121,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_dret_id));
            tracep->chgBit(oldp+1122,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
            tracep->chgBit(oldp+1123,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x23U])) {
            tracep->chgSData(oldp+1124,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr),12);
            tracep->chgCData(oldp+1125,((0x1fU & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))),5);
            tracep->chgCData(oldp+1126,((7U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                               >> 5U))),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x24U])) {
            tracep->chgCData(oldp+1127,((0x3fU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)),6);
            tracep->chgIData(oldp+1128,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int),32);
            tracep->chgBit(oldp+1129,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 1U))));
            tracep->chgBit(oldp+1130,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 2U))));
            tracep->chgCData(oldp+1131,((7U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1132,((1U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x25U])) {
            tracep->chgBit(oldp+1133,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id));
            tracep->chgBit(oldp+1134,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id));
            tracep->chgBit(oldp+1135,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
            tracep->chgBit(oldp+1136,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x26U])) {
            tracep->chgWData(oldp+1137,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex),68);
            tracep->chgCData(oldp+1140,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_we_ex),2);
            tracep->chgBit(oldp+1141,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result));
            tracep->chgBit(oldp+1142,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_spec));
            tracep->chgBit(oldp+1143,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d));
            tracep->chgIData(oldp+1144,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result),32);
            tracep->chgWData(oldp+1145,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d),68);
            tracep->chgCData(oldp+1148,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we),2);
            tracep->chgIData(oldp+1149,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev),32);
            tracep->chgBit(oldp+1150,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed));
            tracep->chgBit(oldp+1151,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left));
            tracep->chgCData(oldp+1152,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt),6);
            tracep->chgIData(oldp+1153,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand),32);
            tracep->chgQData(oldp+1154,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed),33);
            tracep->chgQData(oldp+1156,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext),33);
            tracep->chgBit(oldp+1158,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext));
            tracep->chgIData(oldp+1159,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result),32);
            tracep->chgIData(oldp+1160,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev),32);
            tracep->chgIData(oldp+1161,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result),32);
            tracep->chgQData(oldp+1162,((0x7ffffffffULL 
                                         & (VL_MULS_QQQ(35,35,35, 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                            + VL_EXTENDS_QQ(35,34, vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))),35);
            tracep->chgQData(oldp+1164,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum),34);
            tracep->chgBit(oldp+1166,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a));
            tracep->chgBit(oldp+1167,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b));
            tracep->chgQData(oldp+1168,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d),34);
            tracep->chgQData(oldp+1170,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d),34);
            tracep->chgQData(oldp+1172,((0x3ffffffffULL 
                                         & ((0x7ffffffffULL 
                                             & VL_MULS_QQQ(35,35,35, 
                                                           (0x7ffffffffULL 
                                                            & VL_EXTENDS_QI(35,17, 
                                                                            (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                              << 0x10U) 
                                                                             | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                           (0x7ffffffffULL 
                                                            & VL_EXTENDS_QI(35,17, 
                                                                            (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                              << 0x10U) 
                                                                             | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                            + (0x7ffffffffULL 
                                               & VL_EXTENDS_QQ(35,34, vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))),34);
            tracep->chgBit(oldp+1174,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a));
            tracep->chgBit(oldp+1175,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b));
            tracep->chgBit(oldp+1176,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal));
            tracep->chgBit(oldp+1177,((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                                        ^ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)) 
                                       & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)))));
            tracep->chgIData(oldp+1178,(((IData)(1U) 
                                         << (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))),32);
            tracep->chgIData(oldp+1179,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q),32);
            tracep->chgIData(oldp+1180,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q),32);
            tracep->chgIData(oldp+1181,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d),32);
            tracep->chgIData(oldp+1182,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d),32);
            tracep->chgIData(oldp+1183,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d),32);
            tracep->chgIData(oldp+1184,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder),32);
            tracep->chgQData(oldp+1185,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient),33);
            tracep->chgCData(oldp+1187,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q),5);
            tracep->chgCData(oldp+1188,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d),5);
            tracep->chgBit(oldp+1189,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                                       | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal))));
            tracep->chgBit(oldp+1190,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold));
            tracep->chgBit(oldp+1191,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold));
            tracep->chgBit(oldp+1192,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d));
            tracep->chgBit(oldp+1193,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q));
            tracep->chgBit(oldp+1194,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal));
            tracep->chgBit(oldp+1195,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal));
            tracep->chgCData(oldp+1196,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d),3);
            tracep->chgBit(oldp+1197,((1U & (IData)(
                                                    (1ULL 
                                                     & ((VL_MULS_QQQ(35,35,35, 
                                                                     (0x7ffffffffULL 
                                                                      & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                                     (0x7ffffffffULL 
                                                                      & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                                         + 
                                                         VL_EXTENDS_QQ(35,34, vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)) 
                                                        >> 0x22U))))));
            tracep->chgSData(oldp+1198,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a),16);
            tracep->chgSData(oldp+1199,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b),16);
            tracep->chgBit(oldp+1200,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x27U])) {
            tracep->chgBit(oldp+1201,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q));
            tracep->chgIData(oldp+1202,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rdata),32);
            tracep->chgBit(oldp+1203,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__error));
            tracep->chgCData(oldp+1204,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rspop),3);
            tracep->chgCData(oldp+1205,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
            tracep->chgCData(oldp+1206,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
            tracep->chgBit(oldp+1207,((1U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 2U))));
            tracep->chgBit(oldp+1208,((1U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 2U))));
            tracep->chgCData(oldp+1209,((3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
            tracep->chgCData(oldp+1210,((3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
            tracep->chgCData(oldp+1211,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
            tracep->chgCData(oldp+1212,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
            tracep->chgBit(oldp+1213,((1U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 2U))));
            tracep->chgBit(oldp+1214,((1U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 2U))));
            tracep->chgCData(oldp+1215,((3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
            tracep->chgCData(oldp+1216,((3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
            tracep->chgCData(oldp+1217,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
            tracep->chgBit(oldp+1218,((1U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 2U))));
            tracep->chgCData(oldp+1219,((3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x28U])) {
            tracep->chgCData(oldp+1220,(vlTOPp->soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q),8);
            tracep->chgBit(oldp+1221,(vlTOPp->soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q));
            tracep->chgBit(oldp+1222,(vlTOPp->soc_top__DOT__dccm__DOT__rvalid));
            tracep->chgQData(oldp+1223,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[0U]))))),33);
            tracep->chgQData(oldp+1225,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                             << 0x3fU) 
                                            | (((QData)((IData)(
                                                                vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                                << 0x1fU) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                                  >> 1U))))),33);
            tracep->chgQData(oldp+1227,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[4U])) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                                << 0x1eU) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                                  >> 2U))))),33);
            tracep->chgQData(oldp+1229,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[4U])) 
                                             << 0x1dU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                               >> 3U)))),33);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x29U])) {
            tracep->chgCData(oldp+1231,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
            tracep->chgBit(oldp+1232,((1U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 2U))));
            tracep->chgCData(oldp+1233,((3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
            tracep->chgIData(oldp+1234,(vlTOPp->soc_top__DOT__u_tempsense__DOT__DOUT_REG),24);
            tracep->chgBit(oldp+1235,(vlTOPp->soc_top__DOT__u_tempsense__DOT__DONE_REG));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2aU])) {
            tracep->chgBit(oldp+1236,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1237,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1238,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1239,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1240,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1241,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1242,((IData)((vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1243,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1244,((1U & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h))));
            tracep->chgBit(oldp+1245,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__tsen1_to_xbar 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1246,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__tsen1_to_xbar 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1247,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__tsen1_to_xbar 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1248,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__tsen1_to_xbar 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1249,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__tsen1_to_xbar 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1250,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__tsen1_to_xbar 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1251,((IData)((vlTOPp->soc_top__DOT__tsen1_to_xbar 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1252,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__tsen1_to_xbar 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1253,((1U & (IData)(vlTOPp->soc_top__DOT__tsen1_to_xbar))));
            tracep->chgBit(oldp+1254,((1U & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+1255,((1U & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+1256,((1U & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+1257,((1U & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+1258,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+1259,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+1260,((1U & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+1261,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+1262,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+1263,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+1264,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2bU])) {
            tracep->chgBit(oldp+1265,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_rsp_pending));
            tracep->chgCData(oldp+1266,((3U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU))),2);
            tracep->chgBit(oldp+1267,((1U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                             >> 0xaU))));
            tracep->chgCData(oldp+1268,((3U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 8U))),2);
            tracep->chgCData(oldp+1269,((0xffU & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o))),8);
            tracep->chgBit(oldp+1270,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid));
            tracep->chgCData(oldp+1271,((0xfU & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                 >> 1U))),4);
            tracep->chgBit(oldp+1272,((1U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o))));
            tracep->chgSData(oldp+1273,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
            tracep->chgCData(oldp+1274,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x2bU] | vlTOPp->__Vm_traceActivity
                         [0x2cU]))) {
            tracep->chgBit(oldp+1275,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1276,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1277,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1278,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1279,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1280,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1281,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1282,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1283,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0U]))));
            tracep->chgBit(oldp+1284,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1285,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1286,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1287,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1288,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1289,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1290,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1291,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1292,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [1U]))));
            tracep->chgBit(oldp+1293,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1294,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [2U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1295,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [2U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1296,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [2U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1297,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [2U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1298,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [2U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1299,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [2U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1300,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [2U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1301,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [2U]))));
            tracep->chgBit(oldp+1302,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1303,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [3U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1304,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [3U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1305,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [3U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1306,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [3U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1307,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [3U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1308,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [3U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1309,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1310,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [3U]))));
            tracep->chgBit(oldp+1311,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1312,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [4U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1313,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [4U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1314,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [4U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1315,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [4U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1316,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [4U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1317,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [4U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1318,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [4U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1319,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [4U]))));
            tracep->chgBit(oldp+1320,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1321,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [5U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1322,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [5U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1323,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [5U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1324,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [5U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1325,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [5U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1326,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [5U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1327,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [5U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1328,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [5U]))));
            tracep->chgBit(oldp+1329,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1330,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [6U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1331,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [6U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1332,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [6U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1333,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [6U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1334,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [6U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1335,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [6U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1336,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [6U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1337,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [6U]))));
            tracep->chgBit(oldp+1338,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1339,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [7U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1340,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [7U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1341,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [7U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1342,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [7U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1343,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [7U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1344,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [7U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1345,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [7U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1346,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [7U]))));
            tracep->chgBit(oldp+1347,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1348,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [8U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1349,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [8U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1350,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [8U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1351,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [8U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1352,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [8U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1353,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [8U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1354,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [8U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1355,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [8U]))));
            tracep->chgBit(oldp+1356,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [9U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1357,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [9U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1358,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [9U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1359,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [9U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1360,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [9U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1361,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [9U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1362,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [9U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1363,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [9U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1364,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [9U]))));
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0x2bU] | vlTOPp->__Vm_traceActivity
                          [0x2cU]) | vlTOPp->__Vm_traceActivity
                         [0x32U]))) {
            tracep->chgBit(oldp+1365,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1366,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1367,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1368,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1369,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1370,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1371,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1372,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1373,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2cU])) {
            tracep->chgBit(oldp+1374,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__dccm_to_xbar 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1375,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__dccm_to_xbar 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1376,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__dccm_to_xbar 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1377,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__dccm_to_xbar 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1378,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__dccm_to_xbar 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1379,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__dccm_to_xbar 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1380,((IData)((vlTOPp->soc_top__DOT__dccm_to_xbar 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1381,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__dccm_to_xbar 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1382,((1U & (IData)(vlTOPp->soc_top__DOT__dccm_to_xbar))));
            tracep->chgBit(oldp+1383,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1384,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1385,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1386,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1387,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1388,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1389,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1390,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1391,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [0U]))));
            tracep->chgBit(oldp+1392,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1393,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1394,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1395,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1396,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1397,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1398,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1399,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1400,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [1U]))));
            tracep->chgBit(oldp+1401,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1402,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [2U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1403,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [2U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1404,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [2U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1405,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [2U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1406,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [2U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1407,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [2U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1408,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [2U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1409,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [2U]))));
            tracep->chgBit(oldp+1410,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1411,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [3U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1412,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [3U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1413,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [3U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1414,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [3U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1415,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [3U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1416,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [3U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1417,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1418,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [3U]))));
            tracep->chgBit(oldp+1419,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1420,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [4U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1421,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [4U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1422,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [4U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1423,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [4U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1424,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [4U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1425,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [4U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1426,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [4U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1427,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [4U]))));
            tracep->chgBit(oldp+1428,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1429,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [5U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1430,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [5U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1431,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [5U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1432,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [5U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1433,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [5U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1434,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [5U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1435,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [5U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1436,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [5U]))));
            tracep->chgBit(oldp+1437,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1438,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [6U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1439,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [6U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1440,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [6U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1441,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [6U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1442,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [6U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1443,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [6U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1444,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [6U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1445,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [6U]))));
            tracep->chgBit(oldp+1446,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1447,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [7U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1448,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [7U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1449,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [7U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1450,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [7U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1451,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [7U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1452,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [7U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1453,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [7U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1454,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [7U]))));
            tracep->chgBit(oldp+1455,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1456,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [8U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1457,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [8U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1458,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [8U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1459,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [8U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1460,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [8U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1461,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [8U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1462,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [8U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1463,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [8U]))));
            tracep->chgBit(oldp+1464,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [9U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1465,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [9U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1466,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [9U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1467,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [9U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1468,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [9U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1469,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [9U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1470,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [9U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1471,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [9U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1472,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [9U]))));
            tracep->chgBit(oldp+1473,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1474,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1475,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1476,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1477,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1478,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1479,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1480,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1481,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1482,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1483,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1484,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1485,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1486,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1487,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1488,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1489,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1490,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [0U]))));
            tracep->chgBit(oldp+1491,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [0U]))));
            tracep->chgBit(oldp+1492,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1493,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [0U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                          [0U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1495,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1496,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1497,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1498,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1499,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1500,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1501,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1502,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1503,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1504,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1505,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1506,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1507,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1508,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1509,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1510,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1511,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1512,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [1U]))));
            tracep->chgBit(oldp+1513,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [1U]))));
            tracep->chgBit(oldp+1514,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1515,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                      [1U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [1U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                          [1U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [1U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1517,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1518,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1519,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1520,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1521,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1522,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1523,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1524,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1525,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1526,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1527,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [2U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1528,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [2U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1529,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [2U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1530,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [2U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1531,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [2U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1532,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [2U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1533,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [2U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1534,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [2U]))));
            tracep->chgBit(oldp+1535,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [2U]))));
            tracep->chgBit(oldp+1536,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1537,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                      [2U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [2U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                          [2U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [2U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1539,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1540,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1541,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1542,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1543,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1544,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1545,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1546,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1547,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1548,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1549,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [3U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1550,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [3U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1551,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [3U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1552,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [3U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1553,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [3U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1554,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [3U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1555,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1556,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [3U]))));
            tracep->chgBit(oldp+1557,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [3U]))));
            tracep->chgBit(oldp+1558,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1559,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                      [3U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [3U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                          [3U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [3U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1561,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1562,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1563,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1564,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1565,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1566,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1567,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1568,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1569,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1570,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1571,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [4U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1572,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [4U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1573,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [4U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1574,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [4U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1575,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [4U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1576,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [4U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1577,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [4U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1578,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [4U]))));
            tracep->chgBit(oldp+1579,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [4U]))));
            tracep->chgBit(oldp+1580,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1581,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                      [4U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [4U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                          [4U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [4U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1583,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1584,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1585,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1586,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1587,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1588,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1589,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1590,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1591,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1592,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1593,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [5U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1594,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [5U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1595,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [5U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1596,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [5U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1597,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [5U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1598,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [5U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1599,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [5U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1600,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [5U]))));
            tracep->chgBit(oldp+1601,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [5U]))));
            tracep->chgBit(oldp+1602,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1603,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                      [5U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [5U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                          [5U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [5U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1605,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1606,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1607,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1608,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1609,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1610,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1611,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1612,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1613,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1614,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1615,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [6U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1616,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [6U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1617,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [6U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1618,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [6U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1619,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [6U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1620,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [6U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1621,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [6U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1622,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [6U]))));
            tracep->chgBit(oldp+1623,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [6U]))));
            tracep->chgBit(oldp+1624,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1625,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                      [6U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [6U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                          [6U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [6U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1627,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1628,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1629,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1630,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1631,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1632,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1633,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1634,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1635,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1636,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1637,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [7U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1638,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [7U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1639,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [7U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1640,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [7U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1641,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [7U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1642,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [7U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1643,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [7U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1644,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [7U]))));
            tracep->chgBit(oldp+1645,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [7U]))));
            tracep->chgBit(oldp+1646,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1647,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                      [7U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [7U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                          [7U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [7U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1649,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1650,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1651,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1652,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1653,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1654,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1655,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1656,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1657,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1658,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1659,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [8U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1660,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [8U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1661,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [8U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1662,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [8U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1663,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [8U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1664,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [8U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1665,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [8U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1666,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [8U]))));
            tracep->chgBit(oldp+1667,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [8U]))));
            tracep->chgBit(oldp+1668,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1669,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                      [8U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [8U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                          [8U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [8U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1671,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1672,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1673,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1674,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1675,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1676,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1677,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1678,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1679,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1680,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [9U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1681,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [9U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1682,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [9U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1683,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [9U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1684,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [9U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1685,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [9U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1686,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [9U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1687,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [9U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1688,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [9U]))));
            tracep->chgBit(oldp+1689,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [9U]))));
            tracep->chgBit(oldp+1690,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [9U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1691,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                      [9U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [9U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                          [9U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [9U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1693,((1U & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))));
            tracep->chgIData(oldp+1694,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword),32);
            tracep->chgIData(oldp+1695,((IData)((vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                                 >> 1U))),32);
            tracep->chgBit(oldp+1696,((1U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o))));
            tracep->chgBit(oldp+1697,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid));
            tracep->chgIData(oldp+1698,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rmask),32);
            tracep->chgIData(oldp+1699,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword),32);
            tracep->chgQData(oldp+1700,(((QData)((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
                                         << 1U)),33);
            tracep->chgQData(oldp+1702,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
            tracep->chgBit(oldp+1704,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+1705,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x2cU] | vlTOPp->__Vm_traceActivity
                         [0x32U]))) {
            tracep->chgBit(oldp+1706,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1707,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1708,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1709,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1710,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1711,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1712,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1713,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1714,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [0U]))));
            tracep->chgBit(oldp+1715,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1716,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1717,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1718,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1719,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1720,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1721,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1722,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1723,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [1U]))));
            tracep->chgBit(oldp+1724,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1725,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [2U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1726,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [2U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1727,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [2U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1728,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [2U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1729,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [2U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1730,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [2U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1731,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [2U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1732,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [2U]))));
            tracep->chgBit(oldp+1733,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1734,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [3U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1735,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [3U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1736,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [3U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1737,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [3U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1738,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [3U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1739,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [3U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1740,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1741,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [3U]))));
            tracep->chgBit(oldp+1742,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1743,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [4U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1744,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [4U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1745,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [4U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1746,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [4U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1747,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [4U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1748,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [4U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1749,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [4U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1750,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [4U]))));
            tracep->chgBit(oldp+1751,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1752,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [5U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1753,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [5U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1754,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [5U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1755,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [5U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1756,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [5U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1757,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [5U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1758,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [5U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1759,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [5U]))));
            tracep->chgBit(oldp+1760,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1761,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [6U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1762,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [6U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1763,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [6U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1764,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [6U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1765,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [6U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1766,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [6U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1767,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [6U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1768,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [6U]))));
            tracep->chgBit(oldp+1769,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1770,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [7U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1771,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [7U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1772,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [7U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1773,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [7U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1774,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [7U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1775,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [7U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1776,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [7U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1777,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [7U]))));
            tracep->chgBit(oldp+1778,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1779,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [8U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1780,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [8U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1781,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [8U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1782,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [8U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1783,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [8U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1784,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [8U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1785,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [8U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1786,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [8U]))));
            tracep->chgBit(oldp+1787,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [9U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1788,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [9U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1789,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [9U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1790,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [9U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1791,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [9U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1792,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [9U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1793,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [9U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1794,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [9U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1795,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [9U]))));
            tracep->chgBit(oldp+1796,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [0xaU] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1797,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [0xaU] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1798,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [0xaU] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1799,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [0xaU] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1800,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [0xaU] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1801,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [0xaU] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1802,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [0xaU] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1803,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [0xaU] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1804,((1U & (IData)(
                                                    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [0xaU]))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2dU])) {
            tracep->chgBit(oldp+1805,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1806,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1807,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1808,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1809,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1810,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1811,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1812,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1813,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [0U][0U])));
            tracep->chgBit(oldp+1814,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1815,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1816,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1817,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1818,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1819,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1820,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1821,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1822,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [1U][0U])));
            tracep->chgBit(oldp+1823,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1824,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1825,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1826,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1827,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1828,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1829,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1830,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1831,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [6U][0U])));
            tracep->chgBit(oldp+1832,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1833,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1834,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1835,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1836,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1837,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1838,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1839,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1840,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [9U][0U])));
            tracep->chgBit(oldp+1841,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [6U][0U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1842,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [6U][1U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1843,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1844,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1845,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1846,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1847,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1848,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1849,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1850,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1851,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [2U][0U])));
            tracep->chgBit(oldp+1852,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1853,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1854,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1855,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1856,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1857,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1858,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1859,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1860,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [3U][0U])));
            tracep->chgBit(oldp+1861,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1862,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1863,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1864,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1865,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1866,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1867,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1868,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1869,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [4U][0U])));
            tracep->chgBit(oldp+1870,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1871,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1872,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1873,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1874,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1875,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1876,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1877,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1878,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [5U][0U])));
            tracep->chgBit(oldp+1879,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1880,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1881,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1882,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1883,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1884,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1885,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1886,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1887,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [7U][0U])));
            tracep->chgBit(oldp+1888,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1889,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1890,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1891,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1892,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1893,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1894,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1895,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1896,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [8U][0U])));
            tracep->chgBit(oldp+1897,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1898,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1899,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1900,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1901,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1902,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1903,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1904,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1905,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [0U][0U])));
            tracep->chgBit(oldp+1906,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1907,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1908,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1909,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1910,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1911,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1912,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1913,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1914,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [1U][0U])));
            tracep->chgBit(oldp+1915,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1916,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1917,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1918,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1919,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1920,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1921,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1922,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1923,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [2U][0U])));
            tracep->chgBit(oldp+1924,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1925,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1926,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1927,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1928,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1929,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1930,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1931,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1932,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [3U][0U])));
            tracep->chgBit(oldp+1933,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1934,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1935,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1936,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1937,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1938,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1939,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1940,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1941,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [4U][0U])));
            tracep->chgBit(oldp+1942,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1943,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1944,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1945,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1946,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1947,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1948,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1949,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1950,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [5U][0U])));
            tracep->chgBit(oldp+1951,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1952,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1953,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1954,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1955,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1956,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1957,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1958,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1959,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [6U][0U])));
            tracep->chgBit(oldp+1960,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1961,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1962,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1963,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1964,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1965,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1966,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1967,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1968,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [7U][0U])));
            tracep->chgBit(oldp+1969,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1970,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1971,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1972,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1973,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1974,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1975,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1976,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1977,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [8U][0U])));
            tracep->chgBit(oldp+1978,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1979,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1980,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1981,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1982,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1983,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1984,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1985,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1986,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [9U][0U])));
            tracep->chgBit(oldp+1987,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1988,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1989,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1990,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1991,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1992,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1993,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1994,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1995,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [0U][0U])));
            tracep->chgBit(oldp+1996,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1997,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1998,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1999,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2000,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2001,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2002,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2003,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2004,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [1U][0U])));
            tracep->chgBit(oldp+2005,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2006,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2007,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2008,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2009,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2010,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2011,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2012,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2013,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [2U][0U])));
            tracep->chgBit(oldp+2014,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2015,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2016,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2017,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2018,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2019,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2020,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2021,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2022,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [3U][0U])));
            tracep->chgBit(oldp+2023,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2024,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2025,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2026,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2027,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2028,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2029,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2030,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2031,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [4U][0U])));
            tracep->chgBit(oldp+2032,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2033,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2034,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2035,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2036,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2037,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2038,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2039,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2040,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [5U][0U])));
            tracep->chgBit(oldp+2041,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2042,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2043,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2044,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2045,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2046,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2047,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2048,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2049,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [6U][0U])));
            tracep->chgBit(oldp+2050,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2051,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2052,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2053,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2054,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2055,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2056,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2057,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2058,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [7U][0U])));
            tracep->chgBit(oldp+2059,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2060,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2061,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2062,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2063,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2064,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2065,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2066,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2067,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [8U][0U])));
            tracep->chgBit(oldp+2068,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [9U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2069,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [9U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2070,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [9U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2071,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [9U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2072,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [9U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2073,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [9U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2074,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2075,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2076,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [9U][0U])));
            tracep->chgCData(oldp+2077,((0x3cU & ((
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][2U] 
                                                   << 0x1bU) 
                                                  | (0x7fffffcU 
                                                     & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [1U][1U] 
                                                        >> 5U))))),6);
            tracep->chgIData(oldp+2078,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgCData(oldp+2079,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgSData(oldp+2080,((0x3ffU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [1U][0U] 
                                                      >> 1U)))),10);
            tracep->chgSData(oldp+2081,((0xfc00U | 
                                         (0x3ffU & 
                                          ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][1U] 
                                            << 0x15U) 
                                           | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][0U] 
                                              >> 0xbU))))),16);
            tracep->chgSData(oldp+2082,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [1U][1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [1U][0U] 
                                             >> 1U)))),16);
            tracep->chgSData(oldp+2083,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [1U][1U] 
                                           << 0xfU) 
                                          | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [1U][0U] 
                                             >> 0x11U)))),16);
            tracep->chgBit(oldp+2084,((((0U == (7U 
                                                & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [1U][2U] 
                                                     >> 0x12U)))) 
                                       | (4U == (7U 
                                                 & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][2U] 
                                                    >> 0x12U))))));
            tracep->chgBit(oldp+2085,((0U == (7U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2086,((1U == (7U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2087,((4U == (7U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0x12U)))));
            tracep->chgCData(oldp+2088,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [1U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [1U][1U] 
                                                        >> 5U)))))),4);
            tracep->chgSData(oldp+2089,((0x3ffU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [1U][0U] 
                                                      >> 1U)))),16);
            tracep->chgCData(oldp+2090,(((4U != (7U 
                                                 & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [0U][2U] 
                                                    >> 0x12U)))
                                          ? 0U : 1U)),2);
            tracep->chgCData(oldp+2091,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2092,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgCData(oldp+2093,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgBit(oldp+2094,((((0U == (7U 
                                                & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0U][2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [0U][2U] 
                                                     >> 0x12U)))) 
                                       | (4U == (7U 
                                                 & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [0U][2U] 
                                                    >> 0x12U))))));
            tracep->chgBit(oldp+2095,((0U == (7U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2096,((1U == (7U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2097,((4U == (7U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0x12U)))));
            tracep->chgCData(oldp+2098,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [0U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [0U][1U] 
                                                        >> 5U)))))),4);
            tracep->chgCData(oldp+2099,((0x1eU & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [0U][1U])),5);
            tracep->chgSData(oldp+2100,((0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))),9);
            tracep->chgIData(oldp+2101,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgCData(oldp+2102,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgBit(oldp+2103,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2104,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 2U))));
            tracep->chgBit(oldp+2105,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 3U))));
            tracep->chgBit(oldp+2106,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 4U))));
            tracep->chgBit(oldp+2107,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 5U))));
            tracep->chgBit(oldp+2108,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 6U))));
            tracep->chgBit(oldp+2109,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 7U))));
            tracep->chgBit(oldp+2110,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 8U))));
            tracep->chgBit(oldp+2111,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 9U))));
            tracep->chgBit(oldp+2112,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2113,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2114,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2115,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2116,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2117,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2118,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2119,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2120,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2121,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2122,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2123,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2124,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2125,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2126,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2127,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2128,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2129,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2130,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2131,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2132,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2133,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2134,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [9U][1U])));
            tracep->chgCData(oldp+2135,((7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                << 0x1fU) 
                                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][0U] 
                                                  >> 1U)))),3);
            tracep->chgCData(oldp+2136,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [9U][1U] 
                                                   << 0x1fU) 
                                                  | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [9U][0U] 
                                                     >> 1U)))),6);
            tracep->chgBit(oldp+2137,((((0U == (7U 
                                                & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [9U][2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [9U][2U] 
                                                     >> 0x12U)))) 
                                       | (4U == (7U 
                                                 & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    >> 0x12U))))));
            tracep->chgBit(oldp+2138,((0U == (7U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2139,((1U == (7U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2140,((4U == (7U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0x12U)))));
            tracep->chgCData(oldp+2141,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [9U][1U] 
                                                        >> 5U)))))),4);
            tracep->chgCData(oldp+2142,((0xfcU & ((
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [6U][2U] 
                                                   << 0x1bU) 
                                                  | (0x7fffffcU 
                                                     & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [6U][1U] 
                                                        >> 5U))))),8);
            tracep->chgIData(oldp+2143,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgCData(oldp+2144,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgBit(oldp+2145,((((0U == (7U 
                                                & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [6U][2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [6U][2U] 
                                                     >> 0x12U)))) 
                                       | (4U == (7U 
                                                 & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [6U][2U] 
                                                    >> 0x12U))))));
            tracep->chgBit(oldp+2146,((0U == (7U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2147,((1U == (7U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2148,((4U == (7U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0x12U)))));
            tracep->chgCData(oldp+2149,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [6U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [6U][1U] 
                                                        >> 5U)))))),4);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x2dU] | vlTOPp->__Vm_traceActivity
                         [0x2eU]))) {
            tracep->chgBit(oldp+2150,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                                       & (0U != (3U 
                                                 & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [9U][2U] 
                                                     << 0x1bU) 
                                                    | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                       [9U][1U] 
                                                       >> 5U)))))));
            tracep->chgBit(oldp+2151,((1U & (~ ((((0U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                       [9U][2U] 
                                                       >> 0x12U))) 
                                                  | (1U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][2U] 
                                                         >> 0x12U)))) 
                                                 | (4U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [9U][2U] 
                                                        >> 0x12U)))) 
                                                & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                                    & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                                   & (((4U 
                                                        == 
                                                        (7U 
                                                         & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                            [9U][2U] 
                                                            >> 0x12U))) 
                                                       | (1U 
                                                          == 
                                                          (7U 
                                                           & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                              [9U][2U] 
                                                              >> 0x12U)))) 
                                                      | (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))))));
            tracep->chgBit(oldp+2152,((((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                        & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                       & (((4U == (7U 
                                                   & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][2U] 
                                                      >> 0x12U))) 
                                           | (1U == 
                                              (7U & 
                                               (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][2U] 
                                                >> 0x12U)))) 
                                          | (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))));
            tracep->chgBit(oldp+2153,((1U & (~ ((((0U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                       [6U][2U] 
                                                       >> 0x12U))) 
                                                  | (1U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [6U][2U] 
                                                         >> 0x12U)))) 
                                                 | (4U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [6U][2U] 
                                                        >> 0x12U)))) 
                                                & (((IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                                    & (IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                                   & (((4U 
                                                        == 
                                                        (7U 
                                                         & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                            [6U][2U] 
                                                            >> 0x12U))) 
                                                       | (1U 
                                                          == 
                                                          (7U 
                                                           & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                              [6U][2U] 
                                                              >> 0x12U)))) 
                                                      | (IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk))))))));
            tracep->chgBit(oldp+2154,((((IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                        & (IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                       & (((4U == (7U 
                                                   & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [6U][2U] 
                                                      >> 0x12U))) 
                                           | (1U == 
                                              (7U & 
                                               (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [6U][2U] 
                                                >> 0x12U)))) 
                                          | (IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk)))));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x2dU] | vlTOPp->__Vm_traceActivity
                         [0x57U]))) {
            tracep->chgBit(oldp+2155,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 1U))));
            tracep->chgBit(oldp+2156,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 2U))));
            tracep->chgBit(oldp+2157,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 3U))));
            tracep->chgBit(oldp+2158,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 4U))));
            tracep->chgBit(oldp+2159,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 5U))));
            tracep->chgBit(oldp+2160,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 6U))));
            tracep->chgBit(oldp+2161,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 7U))));
            tracep->chgBit(oldp+2162,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 8U))));
            tracep->chgBit(oldp+2163,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 9U))));
            tracep->chgBit(oldp+2164,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xaU))));
            tracep->chgBit(oldp+2165,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xbU))));
            tracep->chgBit(oldp+2166,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xcU))));
            tracep->chgBit(oldp+2167,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xdU))));
            tracep->chgBit(oldp+2168,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xeU))));
            tracep->chgBit(oldp+2169,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xfU))));
            tracep->chgBit(oldp+2170,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x10U))));
            tracep->chgBit(oldp+2171,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x17U))));
            tracep->chgBit(oldp+2172,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x18U))));
            tracep->chgBit(oldp+2173,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x19U))));
            tracep->chgBit(oldp+2174,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1aU))));
            tracep->chgBit(oldp+2175,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1bU))));
            tracep->chgBit(oldp+2176,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1cU))));
            tracep->chgBit(oldp+2177,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1dU))));
            tracep->chgBit(oldp+2178,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1eU))));
            tracep->chgCData(oldp+2179,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio5_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2180,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio6_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2181,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio8_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2182,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio9_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2183,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio10_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2184,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio11_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2185,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio12_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2186,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio21_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2187,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio24_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2188,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio25_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2189,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio26_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2190,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio30_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2191,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio31_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgBit(oldp+2192,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 1U))));
            tracep->chgBit(oldp+2193,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 2U))));
            tracep->chgBit(oldp+2194,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 3U))));
            tracep->chgBit(oldp+2195,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 4U))));
            tracep->chgBit(oldp+2196,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 5U))));
            tracep->chgBit(oldp+2197,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 6U))));
            tracep->chgBit(oldp+2198,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 7U))));
            tracep->chgBit(oldp+2199,((1U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we)
                                              ? (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [9U][0U] 
                                                 >> 8U)
                                              : (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__d)))));
            tracep->chgBit(oldp+2200,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 9U))));
            tracep->chgBit(oldp+2201,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xbU))));
            tracep->chgBit(oldp+2202,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xeU))));
            tracep->chgBit(oldp+2203,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xfU))));
            tracep->chgBit(oldp+2204,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x10U))));
            tracep->chgBit(oldp+2205,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x14U))));
            tracep->chgBit(oldp+2206,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x15U))));
            tracep->chgBit(oldp+2207,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x16U))));
            tracep->chgBit(oldp+2208,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x17U))));
            tracep->chgBit(oldp+2209,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x18U))));
            tracep->chgBit(oldp+2210,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x19U))));
            tracep->chgBit(oldp+2211,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1aU))));
            tracep->chgBit(oldp+2212,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1bU))));
            tracep->chgBit(oldp+2213,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1cU))));
            tracep->chgBit(oldp+2214,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1dU))));
            tracep->chgBit(oldp+2215,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1eU))));
            tracep->chgBit(oldp+2216,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1fU))));
            tracep->chgBit(oldp+2217,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we) 
                                       & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [9U][1U])));
            tracep->chgCData(oldp+2218,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgBit(oldp+2219,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 1U))));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x2dU] | vlTOPp->__Vm_traceActivity
                         [0x58U]))) {
            tracep->chgIData(oldp+2220,(((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we)
                                          ? ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgIData(oldp+2221,(((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we)
                                          ? ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgIData(oldp+2222,(((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we)
                                          ? ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgIData(oldp+2223,(((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we)
                                          ? ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgIData(oldp+2224,(((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we)
                                          ? ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgIData(oldp+2225,(((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__ctrl_en_input_filter_we)
                                          ? ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgBit(oldp+2226,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x11U))));
            tracep->chgBit(oldp+2227,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x12U))));
            tracep->chgBit(oldp+2228,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x13U))));
            tracep->chgBit(oldp+2229,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x14U))));
            tracep->chgBit(oldp+2230,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x15U))));
            tracep->chgBit(oldp+2231,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x16U))));
            tracep->chgBit(oldp+2232,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1fU))));
            tracep->chgBit(oldp+2233,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we) 
                                       & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [9U][1U])));
            tracep->chgCData(oldp+2234,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio0_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2235,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio1_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2236,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio2_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2237,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio3_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2238,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio4_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2239,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio13_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2240,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio14_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2241,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio15_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2242,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio16_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2243,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio17_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2244,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio18_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2245,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio19_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2246,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio20_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2247,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio22_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2248,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio23_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2249,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio27_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2250,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio28_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2251,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio29_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgBit(oldp+2252,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xaU))));
            tracep->chgBit(oldp+2253,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xcU))));
            tracep->chgBit(oldp+2254,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xdU))));
            tracep->chgBit(oldp+2255,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x11U))));
            tracep->chgBit(oldp+2256,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x12U))));
            tracep->chgBit(oldp+2257,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x13U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2eU])) {
            tracep->chgBit(oldp+2258,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
            tracep->chgBit(oldp+2259,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
            tracep->chgBit(oldp+2260,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+2261,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+2262,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk));
            tracep->chgBit(oldp+2263,(vlTOPp->soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+2264,(vlTOPp->soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+2265,(vlTOPp->soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2fU])) {
            tracep->chgBit(oldp+2266,(vlTOPp->soc_top__DOT__dccm__DOT__we));
            tracep->chgBit(oldp+2267,(vlTOPp->soc_top__DOT__dccm__DOT__req));
            tracep->chgSData(oldp+2268,(vlTOPp->soc_top__DOT__dccm__DOT__addr),12);
            tracep->chgIData(oldp+2269,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+2270,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int),32);
            tracep->chgCData(oldp+2271,(vlTOPp->soc_top__DOT__dccm__DOT__data_we),4);
            tracep->chgBit(oldp+2272,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error));
            tracep->chgBit(oldp+2273,(((IData)(vlTOPp->soc_top__DOT__dccm__DOT__req) 
                                       & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__we)))));
            tracep->chgBit(oldp+2274,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error));
            tracep->chgIData(oldp+2275,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int),32);
            tracep->chgIData(oldp+2276,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int),32);
            tracep->chgBit(oldp+2277,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+2278,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+2279,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk));
            tracep->chgBit(oldp+2280,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+2281,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+2282,(vlTOPp->soc_top__DOT__u_tempsense__DOT__a_ack));
            tracep->chgBit(oldp+2283,(vlTOPp->soc_top__DOT__u_tempsense__DOT__wr_req));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x30U] | vlTOPp->__Vm_traceActivity
                         [0x33U]))) {
            tracep->chgBit(oldp+2284,(((((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re) 
                                         | (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit)))) 
                                       | (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err))));
            tracep->chgBit(oldp+2285,((((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re) 
                                        | (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit))))));
            tracep->chgBit(oldp+2286,((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                 >> 9U)) 
                                        & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2287,((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                 >> 0x24U)) 
                                        & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2288,(((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                >> 0x24U)) 
                                       & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x31U])) {
            tracep->chgBit(oldp+2289,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we));
            tracep->chgBit(oldp+2290,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err));
            tracep->chgBit(oldp+2291,(((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 2U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2292,(((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 4U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2293,(((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 5U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2294,(((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 6U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2295,(((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 7U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2296,(((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 8U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2297,(((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 9U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgSData(oldp+2298,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit),15);
            tracep->chgBit(oldp+2299,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
            tracep->chgBit(oldp+2300,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
            tracep->chgBit(oldp+2301,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
            tracep->chgBit(oldp+2302,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+2303,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+2304,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x31U] | vlTOPp->__Vm_traceActivity
                         [0x55U]))) {
            tracep->chgBit(oldp+2305,(((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re) 
                                         | (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))))) 
                                       | (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))));
            tracep->chgBit(oldp+2306,((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re) 
                                        | (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)))))));
            tracep->chgBit(oldp+2307,((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 4U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+2308,((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 5U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+2309,((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 6U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+2310,((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 7U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+2311,((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 8U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+2312,((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 9U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x32U])) {
            tracep->chgBit(oldp+2313,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2314,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2315,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2316,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2317,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2318,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2319,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2320,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2321,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h))));
            tracep->chgBit(oldp+2322,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h))));
            tracep->chgBit(oldp+2323,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                     >> 0x33U)))));
            tracep->chgIData(oldp+2324,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2325,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2326,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err));
            tracep->chgBit(oldp+2327,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err));
            tracep->chgBit(oldp+2328,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op_en));
            tracep->chgBit(oldp+2329,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid));
            tracep->chgBit(oldp+2330,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err) 
                                       | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err))));
            tracep->chgBit(oldp+2331,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done));
            tracep->chgBit(oldp+2332,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_instr_ret_wb));
            tracep->chgBit(oldp+2333,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv));
            tracep->chgBit(oldp+2334,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch));
            tracep->chgBit(oldp+2335,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump));
            tracep->chgBit(oldp+2336,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id));
            tracep->chgBit(oldp+2337,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done));
            tracep->chgBit(oldp+2338,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err) 
                                       | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err))));
            tracep->chgBit(oldp+2339,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err));
            tracep->chgBit(oldp+2340,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int));
            tracep->chgBit(oldp+2341,(vlTOPp->soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_d));
            tracep->chgBit(oldp+2342,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2343,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2344,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2345,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2346,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2347,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2348,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2349,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2350,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i))));
            tracep->chgBit(oldp+2351,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__accept_t_req));
            tracep->chgBit(oldp+2352,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__accept_t_rsp));
            tracep->chgBit(oldp+2353,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2354,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2355,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2356,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2357,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2358,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2359,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2360,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2361,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p))));
            tracep->chgBit(oldp+2362,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hfifo_reqready));
            tracep->chgBit(oldp+2363,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i))));
            tracep->chgBit(oldp+2364,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2365,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x33U])) {
            tracep->chgBit(oldp+2367,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we));
            tracep->chgBit(oldp+2368,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re));
            tracep->chgBit(oldp+2369,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err));
            tracep->chgBit(oldp+2370,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
            tracep->chgBit(oldp+2371,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x34U])) {
            tracep->chgCData(oldp+2372,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[0]),3);
            tracep->chgCData(oldp+2373,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[1]),3);
            tracep->chgCData(oldp+2374,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[2]),3);
            tracep->chgCData(oldp+2375,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[3]),3);
            tracep->chgCData(oldp+2376,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[4]),3);
            tracep->chgCData(oldp+2377,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[5]),3);
            tracep->chgCData(oldp+2378,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[6]),3);
            tracep->chgCData(oldp+2379,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[7]),3);
            tracep->chgCData(oldp+2380,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[8]),3);
            tracep->chgCData(oldp+2381,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[9]),3);
            tracep->chgCData(oldp+2382,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[10]),3);
            tracep->chgCData(oldp+2383,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[11]),3);
            tracep->chgCData(oldp+2384,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[12]),3);
            tracep->chgCData(oldp+2385,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[13]),3);
            tracep->chgCData(oldp+2386,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[14]),3);
            tracep->chgCData(oldp+2387,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[15]),3);
            tracep->chgCData(oldp+2388,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[16]),3);
            tracep->chgCData(oldp+2389,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[17]),3);
            tracep->chgCData(oldp+2390,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[18]),3);
            tracep->chgCData(oldp+2391,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[19]),3);
            tracep->chgCData(oldp+2392,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[20]),3);
            tracep->chgCData(oldp+2393,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[21]),3);
            tracep->chgCData(oldp+2394,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[22]),3);
            tracep->chgCData(oldp+2395,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[23]),3);
            tracep->chgCData(oldp+2396,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[24]),3);
            tracep->chgCData(oldp+2397,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[25]),3);
            tracep->chgCData(oldp+2398,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[26]),3);
            tracep->chgCData(oldp+2399,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[27]),3);
            tracep->chgCData(oldp+2400,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[28]),3);
            tracep->chgCData(oldp+2401,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[29]),3);
            tracep->chgCData(oldp+2402,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[30]),3);
            tracep->chgCData(oldp+2403,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[31]),3);
            tracep->chgCData(oldp+2404,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0]),3);
            tracep->chgCData(oldp+2405,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[1]),3);
            tracep->chgCData(oldp+2406,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[2]),3);
            tracep->chgCData(oldp+2407,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[3]),3);
            tracep->chgCData(oldp+2408,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[4]),3);
            tracep->chgCData(oldp+2409,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[5]),3);
            tracep->chgCData(oldp+2410,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[6]),3);
            tracep->chgCData(oldp+2411,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[7]),3);
            tracep->chgCData(oldp+2412,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[8]),3);
            tracep->chgCData(oldp+2413,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[9]),3);
            tracep->chgCData(oldp+2414,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[10]),3);
            tracep->chgCData(oldp+2415,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[11]),3);
            tracep->chgCData(oldp+2416,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[12]),3);
            tracep->chgCData(oldp+2417,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[13]),3);
            tracep->chgCData(oldp+2418,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[14]),3);
            tracep->chgCData(oldp+2419,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[15]),3);
            tracep->chgCData(oldp+2420,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[16]),3);
            tracep->chgCData(oldp+2421,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[17]),3);
            tracep->chgCData(oldp+2422,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[18]),3);
            tracep->chgCData(oldp+2423,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[19]),3);
            tracep->chgCData(oldp+2424,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[20]),3);
            tracep->chgCData(oldp+2425,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[21]),3);
            tracep->chgCData(oldp+2426,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[22]),3);
            tracep->chgCData(oldp+2427,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[23]),3);
            tracep->chgCData(oldp+2428,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[24]),3);
            tracep->chgCData(oldp+2429,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[25]),3);
            tracep->chgCData(oldp+2430,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[26]),3);
            tracep->chgCData(oldp+2431,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[27]),3);
            tracep->chgCData(oldp+2432,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[28]),3);
            tracep->chgCData(oldp+2433,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[29]),3);
            tracep->chgCData(oldp+2434,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[30]),3);
            tracep->chgCData(oldp+2435,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[31]),3);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x34U] | vlTOPp->__Vm_traceActivity
                         [0x38U]))) {
            tracep->chgCData(oldp+2436,((7U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U])),3);
            tracep->chgCData(oldp+2437,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0x1dU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 3U)))),3);
            tracep->chgCData(oldp+2438,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0x1aU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 6U)))),3);
            tracep->chgCData(oldp+2439,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0x17U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 9U)))),3);
            tracep->chgCData(oldp+2440,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0x14U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0xcU)))),3);
            tracep->chgCData(oldp+2441,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0x11U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0xfU)))),3);
            tracep->chgCData(oldp+2442,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0xeU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x12U)))),3);
            tracep->chgCData(oldp+2443,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0xbU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x15U)))),3);
            tracep->chgCData(oldp+2444,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 8U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x18U)))),3);
            tracep->chgCData(oldp+2445,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 5U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x1bU)))),3);
            tracep->chgCData(oldp+2446,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 2U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x1eU)))),3);
            tracep->chgCData(oldp+2447,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 1U)))),3);
            tracep->chgCData(oldp+2448,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x1cU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 4U)))),3);
            tracep->chgCData(oldp+2449,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x19U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 7U)))),3);
            tracep->chgCData(oldp+2450,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x16U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0xaU)))),3);
            tracep->chgCData(oldp+2451,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x13U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0xdU)))),3);
            tracep->chgCData(oldp+2452,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x10U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x10U)))),3);
            tracep->chgCData(oldp+2453,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0xdU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x13U)))),3);
            tracep->chgCData(oldp+2454,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0xaU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x16U)))),3);
            tracep->chgCData(oldp+2455,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 7U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x19U)))),3);
            tracep->chgCData(oldp+2456,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 4U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x1cU)))),3);
            tracep->chgCData(oldp+2457,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 1U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x1fU)))),3);
            tracep->chgCData(oldp+2458,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0x1eU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 2U)))),3);
            tracep->chgCData(oldp+2459,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0x1bU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 5U)))),3);
            tracep->chgCData(oldp+2460,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0x18U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 8U)))),3);
            tracep->chgCData(oldp+2461,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0x15U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0xbU)))),3);
            tracep->chgCData(oldp+2462,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0x12U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0xeU)))),3);
            tracep->chgCData(oldp+2463,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0xfU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x11U)))),3);
            tracep->chgCData(oldp+2464,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0xcU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x14U)))),3);
            tracep->chgCData(oldp+2465,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 9U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x17U)))),3);
            tracep->chgCData(oldp+2466,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 6U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x1aU)))),3);
            tracep->chgCData(oldp+2467,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 3U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x1dU)))),3);
            tracep->chgCData(oldp+2468,((7U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U])),3);
            tracep->chgCData(oldp+2469,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0x1dU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 3U)))),3);
            tracep->chgCData(oldp+2470,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0x1aU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 6U)))),3);
            tracep->chgCData(oldp+2471,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0x17U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 9U)))),3);
            tracep->chgCData(oldp+2472,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0x14U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0xcU)))),3);
            tracep->chgCData(oldp+2473,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0x11U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0xfU)))),3);
            tracep->chgCData(oldp+2474,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0xeU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x12U)))),3);
            tracep->chgCData(oldp+2475,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0xbU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x15U)))),3);
            tracep->chgCData(oldp+2476,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 8U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x18U)))),3);
            tracep->chgCData(oldp+2477,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 5U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x1bU)))),3);
            tracep->chgCData(oldp+2478,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 2U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x1eU)))),3);
            tracep->chgCData(oldp+2479,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x1fU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 1U)))),3);
            tracep->chgCData(oldp+2480,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x1cU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 4U)))),3);
            tracep->chgCData(oldp+2481,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x19U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 7U)))),3);
            tracep->chgCData(oldp+2482,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x16U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0xaU)))),3);
            tracep->chgCData(oldp+2483,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x13U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0xdU)))),3);
            tracep->chgCData(oldp+2484,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x10U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x10U)))),3);
            tracep->chgCData(oldp+2485,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0xdU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x13U)))),3);
            tracep->chgCData(oldp+2486,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0xaU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x16U)))),3);
            tracep->chgCData(oldp+2487,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 7U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x19U)))),3);
            tracep->chgCData(oldp+2488,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 4U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x1cU)))),3);
            tracep->chgCData(oldp+2489,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 1U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x1fU)))),3);
            tracep->chgCData(oldp+2490,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 2U))),3);
            tracep->chgCData(oldp+2491,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 5U))),3);
            tracep->chgCData(oldp+2492,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 8U))),3);
            tracep->chgCData(oldp+2493,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0xbU))),3);
            tracep->chgCData(oldp+2494,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0xeU))),3);
            tracep->chgCData(oldp+2495,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0x11U))),3);
            tracep->chgCData(oldp+2496,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0x14U))),3);
            tracep->chgCData(oldp+2497,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0x17U))),3);
            tracep->chgCData(oldp+2498,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0x1aU))),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x35U])) {
            tracep->chgBit(oldp+2499,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en));
            tracep->chgBit(oldp+2500,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en));
            tracep->chgBit(oldp+2501,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en));
            tracep->chgBit(oldp+2502,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en));
            tracep->chgBit(oldp+2503,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en));
            tracep->chgBit(oldp+2504,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en));
            tracep->chgBit(oldp+2505,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en));
            tracep->chgBit(oldp+2506,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_we));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x36U])) {
            tracep->chgBit(oldp+2507,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel));
            tracep->chgBit(oldp+2508,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel));
            tracep->chgBit(oldp+2509,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x37U])) {
            tracep->chgCData(oldp+2510,((0x3fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U])),6);
            tracep->chgCData(oldp+2511,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                     >> 6U)))),6);
            tracep->chgCData(oldp+2512,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                   << 0x14U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                     >> 0xcU)))),6);
            tracep->chgCData(oldp+2513,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                     >> 0x12U)))),6);
            tracep->chgCData(oldp+2514,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                   << 8U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                     >> 0x18U)))),6);
            tracep->chgCData(oldp+2515,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                   << 2U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                     >> 0x1eU)))),6);
            tracep->chgCData(oldp+2516,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                     >> 4U)))),6);
            tracep->chgCData(oldp+2517,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                     >> 0xaU)))),6);
            tracep->chgCData(oldp+2518,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                     >> 0x10U)))),6);
            tracep->chgCData(oldp+2519,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                     >> 0x16U)))),6);
            tracep->chgCData(oldp+2520,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                   << 4U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                     >> 0x1cU)))),6);
            tracep->chgCData(oldp+2521,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                     >> 2U)))),6);
            tracep->chgCData(oldp+2522,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                     >> 8U)))),6);
            tracep->chgCData(oldp+2523,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                     >> 0xeU)))),6);
            tracep->chgCData(oldp+2524,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                     >> 0x14U)))),6);
            tracep->chgCData(oldp+2525,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                   << 6U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                     >> 0x1aU)))),6);
            tracep->chgCData(oldp+2526,((0x3fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U])),6);
            tracep->chgCData(oldp+2527,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                     >> 6U)))),6);
            tracep->chgCData(oldp+2528,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                   << 0x14U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                     >> 0xcU)))),6);
            tracep->chgCData(oldp+2529,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                     >> 0x12U)))),6);
            tracep->chgCData(oldp+2530,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                   << 8U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                     >> 0x18U)))),6);
            tracep->chgCData(oldp+2531,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                   << 2U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                     >> 0x1eU)))),6);
            tracep->chgCData(oldp+2532,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                     >> 4U)))),6);
            tracep->chgCData(oldp+2533,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                     >> 0xaU)))),6);
            tracep->chgCData(oldp+2534,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                     >> 0x10U)))),6);
            tracep->chgCData(oldp+2535,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                     >> 0x16U)))),6);
            tracep->chgCData(oldp+2536,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                   << 4U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                     >> 0x1cU)))),6);
            tracep->chgCData(oldp+2537,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                     >> 2U)))),6);
            tracep->chgCData(oldp+2538,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                     >> 8U)))),6);
            tracep->chgCData(oldp+2539,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                     >> 0xeU)))),6);
            tracep->chgCData(oldp+2540,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                     >> 0x14U)))),6);
            tracep->chgCData(oldp+2541,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                   << 6U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                     >> 0x1aU)))),6);
            tracep->chgCData(oldp+2542,((0x3fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U])),6);
            tracep->chgCData(oldp+2543,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                     >> 6U)))),6);
            tracep->chgCData(oldp+2544,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                   << 0x14U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                     >> 0xcU)))),6);
            tracep->chgCData(oldp+2545,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                     >> 0x12U)))),6);
            tracep->chgCData(oldp+2546,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                   << 8U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                     >> 0x18U)))),6);
            tracep->chgCData(oldp+2547,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                   << 2U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                     >> 0x1eU)))),6);
            tracep->chgCData(oldp+2548,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                     >> 4U)))),6);
            tracep->chgCData(oldp+2549,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                     >> 0xaU)))),6);
            tracep->chgCData(oldp+2550,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                     >> 0x10U)))),6);
            tracep->chgCData(oldp+2551,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                     >> 0x16U)))),6);
            tracep->chgCData(oldp+2552,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                   << 4U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                     >> 0x1cU)))),6);
            tracep->chgCData(oldp+2553,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                     >> 2U)))),6);
            tracep->chgCData(oldp+2554,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                     >> 8U)))),6);
            tracep->chgCData(oldp+2555,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                     >> 0xeU)))),6);
            tracep->chgCData(oldp+2556,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                     >> 0x14U)))),6);
            tracep->chgCData(oldp+2557,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                   << 6U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                     >> 0x1aU)))),6);
            tracep->chgCData(oldp+2558,((0x3fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U])),6);
            tracep->chgCData(oldp+2559,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                     >> 6U)))),6);
            tracep->chgCData(oldp+2560,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                   << 0x14U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                     >> 0xcU)))),6);
            tracep->chgCData(oldp+2561,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                   << 0xeU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                     >> 0x12U)))),6);
            tracep->chgCData(oldp+2562,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                   << 8U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                     >> 0x18U)))),6);
            tracep->chgCData(oldp+2563,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                   << 2U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                     >> 0x1eU)))),6);
            tracep->chgCData(oldp+2564,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                     >> 4U)))),6);
            tracep->chgCData(oldp+2565,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                   << 0x16U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                     >> 0xaU)))),6);
            tracep->chgCData(oldp+2566,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                   << 0x10U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                     >> 0x10U)))),6);
            tracep->chgCData(oldp+2567,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                   << 0xaU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                     >> 0x16U)))),6);
            tracep->chgCData(oldp+2568,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                   << 4U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                     >> 0x1cU)))),6);
            tracep->chgCData(oldp+2569,((0x3fU & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                  >> 2U))),6);
            tracep->chgCData(oldp+2570,((0x3fU & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                  >> 8U))),6);
            tracep->chgCData(oldp+2571,((0x3fU & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                  >> 0xeU))),6);
            tracep->chgCData(oldp+2572,((0x3fU & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                  >> 0x14U))),6);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x39U])) {
            tracep->chgBit(oldp+2573,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready));
            tracep->chgBit(oldp+2574,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_pipe_flush));
            tracep->chgBit(oldp+2575,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if));
            tracep->chgBit(oldp+2576,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id));
            tracep->chgBit(oldp+2577,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req));
            tracep->chgBit(oldp+2578,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush));
            tracep->chgBit(oldp+2579,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en));
            tracep->chgBit(oldp+2580,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en));
            tracep->chgIData(oldp+2581,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we),32);
            tracep->chgIData(oldp+2582,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we),32);
            tracep->chgIData(oldp+2583,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr),32);
            tracep->chgBit(oldp+2584,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 1U))));
            tracep->chgBit(oldp+2585,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 1U))));
            tracep->chgBit(oldp+2586,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                             >> 1U))));
            tracep->chgIData(oldp+2587,((0x1fffffffU 
                                         & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            >> 3U))),29);
            tracep->chgIData(oldp+2588,((0x1fffffffU 
                                         & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            >> 3U))),29);
            tracep->chgIData(oldp+2589,((0x1fffffffU 
                                         & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                            >> 3U))),29);
            tracep->chgBit(oldp+2590,((1U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)));
            tracep->chgBit(oldp+2591,((1U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we)));
            tracep->chgBit(oldp+2592,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 2U))));
            tracep->chgBit(oldp+2593,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 2U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3aU])) {
            tracep->chgBit(oldp+2594,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_enable__DOT__qe));
            tracep->chgBit(oldp+2595,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2596,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2597,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2598,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2599,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2600,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2601,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2602,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2603,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2604,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2605,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2606,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2607,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2608,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2609,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2610,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2611,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2612,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2613,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2614,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2615,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2616,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2617,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2618,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2619,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2620,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2621,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2622,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2623,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2624,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2625,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2626,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2627,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2628,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2629,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2630,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2631,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_1__DOT__qe));
            tracep->chgBit(oldp+2632,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_2__DOT__qe));
            tracep->chgBit(oldp+2633,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_3__DOT__qe));
            tracep->chgBit(oldp+2634,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_9__DOT__qe));
            tracep->chgBit(oldp+2635,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_10__DOT__qe));
            tracep->chgBit(oldp+2636,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_11__DOT__qe));
            tracep->chgBit(oldp+2637,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_22__DOT__qe));
            tracep->chgBit(oldp+2638,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_23__DOT__qe));
            tracep->chgBit(oldp+2639,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_24__DOT__qe));
            tracep->chgBit(oldp+2640,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_25__DOT__qe));
            tracep->chgBit(oldp+2641,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio4__DOT__qe));
            tracep->chgBit(oldp+2642,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio5__DOT__qe));
            tracep->chgBit(oldp+2643,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio6__DOT__qe));
            tracep->chgBit(oldp+2644,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio8__DOT__qe));
            tracep->chgBit(oldp+2645,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio19__DOT__qe));
            tracep->chgBit(oldp+2646,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio22__DOT__qe));
            tracep->chgBit(oldp+2647,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio23__DOT__qe));
            tracep->chgBit(oldp+2648,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio26__DOT__qe));
            tracep->chgBit(oldp+2649,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_0__DOT__qe));
            tracep->chgBit(oldp+2650,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_1__DOT__qe));
            tracep->chgBit(oldp+2651,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_2__DOT__qe));
            tracep->chgBit(oldp+2652,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_3__DOT__qe));
            tracep->chgBit(oldp+2653,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_11__DOT__qe));
            tracep->chgBit(oldp+2654,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_12__DOT__qe));
            tracep->chgBit(oldp+2655,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_15__DOT__qe));
            tracep->chgBit(oldp+2656,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_21__DOT__qe));
            tracep->chgBit(oldp+2657,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_22__DOT__qe));
            tracep->chgBit(oldp+2658,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_23__DOT__qe));
            tracep->chgBit(oldp+2659,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_24__DOT__qe));
            tracep->chgBit(oldp+2660,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_threshold0__DOT__qe));
            tracep->chgBit(oldp+2661,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_msip0__DOT__qe));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3bU])) {
            tracep->chgCData(oldp+2662,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2663,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2664,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2665,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2666,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2667,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2668,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2669,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2670,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2671,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2672,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2673,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2674,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2675,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2676,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2677,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2678,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2679,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2680,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2681,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3cU])) {
            tracep->chgCData(oldp+2682,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2683,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2684,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2685,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2686,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2687,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2688,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2689,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2690,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2691,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2692,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2693,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2694,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2695,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2696,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2697,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2698,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2699,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2700,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2701,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2702,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2703,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2704,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2705,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2706,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2707,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2708,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2709,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2710,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2711,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2712,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2713,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2714,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2715,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_4__DOT__qe));
            tracep->chgBit(oldp+2716,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_5__DOT__qe));
            tracep->chgBit(oldp+2717,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_6__DOT__qe));
            tracep->chgBit(oldp+2718,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_7__DOT__qe));
            tracep->chgBit(oldp+2719,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_8__DOT__qe));
            tracep->chgBit(oldp+2720,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_12__DOT__qe));
            tracep->chgBit(oldp+2721,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_13__DOT__qe));
            tracep->chgBit(oldp+2722,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_14__DOT__qe));
            tracep->chgBit(oldp+2723,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_15__DOT__qe));
            tracep->chgBit(oldp+2724,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_16__DOT__qe));
            tracep->chgBit(oldp+2725,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_26__DOT__qe));
            tracep->chgBit(oldp+2726,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_27__DOT__qe));
            tracep->chgBit(oldp+2727,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_28__DOT__qe));
            tracep->chgBit(oldp+2728,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_29__DOT__qe));
            tracep->chgBit(oldp+2729,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_30__DOT__qe));
            tracep->chgBit(oldp+2730,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio9__DOT__qe));
            tracep->chgBit(oldp+2731,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio10__DOT__qe));
            tracep->chgBit(oldp+2732,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio11__DOT__qe));
            tracep->chgBit(oldp+2733,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio12__DOT__qe));
            tracep->chgBit(oldp+2734,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio13__DOT__qe));
            tracep->chgBit(oldp+2735,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio20__DOT__qe));
            tracep->chgBit(oldp+2736,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio21__DOT__qe));
            tracep->chgBit(oldp+2737,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_4__DOT__qe));
            tracep->chgBit(oldp+2738,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_5__DOT__qe));
            tracep->chgBit(oldp+2739,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_6__DOT__qe));
            tracep->chgBit(oldp+2740,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__qe));
            tracep->chgBit(oldp+2741,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_8__DOT__qe));
            tracep->chgBit(oldp+2742,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_9__DOT__qe));
            tracep->chgBit(oldp+2743,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_10__DOT__qe));
            tracep->chgBit(oldp+2744,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_25__DOT__qe));
            tracep->chgBit(oldp+2745,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__qe));
            tracep->chgBit(oldp+2746,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_27__DOT__qe));
            tracep->chgBit(oldp+2747,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_28__DOT__qe));
            tracep->chgBit(oldp+2748,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_29__DOT__qe));
            tracep->chgBit(oldp+2749,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_30__DOT__qe));
            tracep->chgBit(oldp+2750,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_31__DOT__qe));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3dU])) {
            tracep->chgCData(oldp+2751,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2752,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2753,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2754,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2755,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2756,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2757,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2758,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2759,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2760,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2761,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2762,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2763,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2764,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2765,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2766,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2767,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2768,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2769,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2770,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2771,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2772,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3eU])) {
            tracep->chgCData(oldp+2773,(vlTOPp->soc_top__DOT__intr_controller__DOT__irq_id_o[0]),5);
            tracep->chgBit(oldp+2774,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 7U))));
            tracep->chgBit(oldp+2775,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 6U))));
            tracep->chgBit(oldp+2776,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 9U))));
            tracep->chgBit(oldp+2777,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 8U))));
            tracep->chgBit(oldp+2778,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2779,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2780,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2781,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2782,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2783,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2784,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2785,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2786,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2787,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2788,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2789,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2790,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2791,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2792,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2793,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2794,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2795,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2796,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2797,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2798,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2799,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2800,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2801,((1U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U])));
            tracep->chgBit(oldp+2802,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 3U))));
            tracep->chgBit(oldp+2803,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 2U))));
            tracep->chgBit(oldp+2804,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 5U))));
            tracep->chgBit(oldp+2805,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 4U))));
            tracep->chgBit(oldp+2806,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 7U))));
            tracep->chgBit(oldp+2807,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 6U))));
            tracep->chgBit(oldp+2808,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 9U))));
            tracep->chgBit(oldp+2809,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 8U))));
            tracep->chgBit(oldp+2810,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2811,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2812,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2813,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2814,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2815,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2816,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2817,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2818,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2819,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2820,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2821,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2822,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2823,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2824,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2825,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2826,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2827,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2828,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2829,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2830,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2831,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2832,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2833,((1U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U])));
            tracep->chgBit(oldp+2834,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 3U))));
            tracep->chgBit(oldp+2835,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 2U))));
            tracep->chgBit(oldp+2836,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 5U))));
            tracep->chgBit(oldp+2837,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 4U))));
            tracep->chgCData(oldp+2838,((0x3fU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U])),6);
            tracep->chgCData(oldp+2839,(vlTOPp->soc_top__DOT__intr_controller__DOT__claim_id[0]),5);
            tracep->chgCData(oldp+2840,(vlTOPp->soc_top__DOT__intr_controller__DOT__cc_id[0]),5);
            tracep->chgBit(oldp+2841,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__q));
            tracep->chgBit(oldp+2842,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__q));
            tracep->chgBit(oldp+2843,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__q));
            tracep->chgBit(oldp+2844,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__q));
            tracep->chgBit(oldp+2845,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__q));
            tracep->chgBit(oldp+2846,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__q));
            tracep->chgBit(oldp+2847,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__q));
            tracep->chgBit(oldp+2848,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__q));
            tracep->chgBit(oldp+2849,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__q));
            tracep->chgBit(oldp+2850,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__q));
            tracep->chgBit(oldp+2851,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__q));
            tracep->chgBit(oldp+2852,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__q));
            tracep->chgBit(oldp+2853,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__q));
            tracep->chgBit(oldp+2854,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__q));
            tracep->chgBit(oldp+2855,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__q));
            tracep->chgBit(oldp+2856,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__q));
            tracep->chgBit(oldp+2857,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__q));
            tracep->chgBit(oldp+2858,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__q));
            tracep->chgBit(oldp+2859,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__q));
            tracep->chgBit(oldp+2860,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__q));
            tracep->chgBit(oldp+2861,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__q));
            tracep->chgBit(oldp+2862,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__q));
            tracep->chgBit(oldp+2863,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__q));
            tracep->chgBit(oldp+2864,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__q));
            tracep->chgBit(oldp+2865,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__q));
            tracep->chgBit(oldp+2866,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__q));
            tracep->chgBit(oldp+2867,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__q));
            tracep->chgBit(oldp+2868,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__q));
            tracep->chgCData(oldp+2869,((0x3fU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U])),6);
            tracep->chgBit(oldp+2870,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 6U))));
            tracep->chgBit(oldp+2871,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 7U))));
            tracep->chgBit(oldp+2872,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 8U))));
            tracep->chgBit(oldp+2873,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 9U))));
            tracep->chgBit(oldp+2874,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2875,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2876,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2877,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2878,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2879,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2880,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2881,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2882,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2883,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2884,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2885,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2886,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2887,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2888,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2889,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2890,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2891,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2892,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2893,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2894,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2895,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2896,((1U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U])));
            tracep->chgBit(oldp+2897,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2898,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 2U))));
            tracep->chgBit(oldp+2899,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 3U))));
            tracep->chgBit(oldp+2900,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 4U))));
            tracep->chgBit(oldp+2901,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 5U))));
            tracep->chgBit(oldp+2902,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 6U))));
            tracep->chgBit(oldp+2903,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 7U))));
            tracep->chgBit(oldp+2904,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 8U))));
            tracep->chgBit(oldp+2905,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 9U))));
            tracep->chgBit(oldp+2906,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2907,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2908,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2909,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2910,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2911,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2912,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2913,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2914,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2915,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2916,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2917,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2918,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2919,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2920,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2921,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2922,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2923,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2924,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2925,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2926,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2927,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2928,((1U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U])));
            tracep->chgBit(oldp+2929,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2930,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 2U))));
            tracep->chgBit(oldp+2931,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 3U))));
            tracep->chgBit(oldp+2932,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 4U))));
            tracep->chgBit(oldp+2933,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 5U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3fU])) {
            tracep->chgIData(oldp+2934,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q),32);
            tracep->chgBit(oldp+2935,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2936,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2937,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2938,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2939,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2940,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2941,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2942,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2943,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+2944,((1U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+2945,((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgCData(oldp+2946,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+2947,((1U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+2948,((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgCData(oldp+2949,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+2950,((1U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+2951,((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgIData(oldp+2952,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q),32);
            tracep->chgBit(oldp+2953,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_0__DOT__qe));
            tracep->chgBit(oldp+2954,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio25__DOT__qe));
            tracep->chgBit(oldp+2955,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_14__DOT__qe));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x40U])) {
            tracep->chgBit(oldp+2956,(vlTOPp->soc_top__DOT__iccm__DOT__instr_valid));
            tracep->chgSData(oldp+2957,((0x1fffU & vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage)),13);
            tracep->chgSData(oldp+2958,((0x1fffU & 
                                         (vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                          >> 0xdU))),13);
            tracep->chgCData(oldp+2959,((0x1fU & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage))),5);
            tracep->chgCData(oldp+2960,((0x1fU & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                                  >> 5U))),5);
            tracep->chgQData(oldp+2961,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[0U]))))),33);
            tracep->chgQData(oldp+2963,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                             << 0x1fU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                               >> 1U)))),33);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x41U])) {
            tracep->chgCData(oldp+2965,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgBit(oldp+2966,((1U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+2967,((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgCData(oldp+2968,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgBit(oldp+2969,((1U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+2970,((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgCData(oldp+2971,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgBit(oldp+2972,((1U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+2973,((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgIData(oldp+2974,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__ia),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x42U])) {
            tracep->chgBit(oldp+2975,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__iccm_to_xbar 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2976,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__iccm_to_xbar 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2977,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__iccm_to_xbar 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2978,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__iccm_to_xbar 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2979,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__iccm_to_xbar 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2980,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__iccm_to_xbar 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2981,((IData)((vlTOPp->soc_top__DOT__iccm_to_xbar 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2982,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__iccm_to_xbar 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2983,((1U & (IData)(vlTOPp->soc_top__DOT__iccm_to_xbar))));
            tracep->chgCData(oldp+2984,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2985,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2986,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2987,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgIData(oldp+2988,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword),32);
            tracep->chgIData(oldp+2989,((IData)((vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                                 >> 1U))),32);
            tracep->chgBit(oldp+2990,((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o))));
            tracep->chgIData(oldp+2991,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword),32);
            tracep->chgQData(oldp+2992,(((QData)((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword)) 
                                         << 1U)),33);
            tracep->chgQData(oldp+2994,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x43U])) {
            tracep->chgQData(oldp+2996,(((QData)((IData)(vlTOPp->soc_top__DOT__intr_gpio)) 
                                         << 1U)),33);
            tracep->chgIData(oldp+2998,(vlTOPp->soc_top__DOT__intr_gpio),32);
            tracep->chgBit(oldp+2999,((1U & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+3000,((1U & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+3001,((1U & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+3002,((1U & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+3003,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+3004,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+3005,((1U & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+3006,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+3007,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+3008,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+3009,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgIData(oldp+3010,((0xfffffffeU 
                                         & (vlTOPp->soc_top__DOT__intr_gpio 
                                            << 1U))),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x44U])) {
            tracep->chgCData(oldp+3011,((3U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU))),2);
            tracep->chgBit(oldp+3012,((1U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                             >> 0xaU))));
            tracep->chgCData(oldp+3013,((3U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 8U))),2);
            tracep->chgCData(oldp+3014,((0xffU & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o))),8);
            tracep->chgBit(oldp+3015,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid));
            tracep->chgCData(oldp+3016,((0xfU & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                 >> 1U))),4);
            tracep->chgBit(oldp+3017,((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o))));
            tracep->chgSData(oldp+3018,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
            tracep->chgCData(oldp+3019,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x45U])) {
            tracep->chgBit(oldp+3020,((1U & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))));
            tracep->chgIData(oldp+3021,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask),32);
            tracep->chgBit(oldp+3022,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+3023,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x46U])) {
            tracep->chgIData(oldp+3024,((0xfffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__cio_gpio_q)),20);
            tracep->chgIData(oldp+3025,(vlTOPp->soc_top__DOT__gpio_32__DOT__cio_gpio_q),32);
            tracep->chgIData(oldp+3026,(vlTOPp->soc_top__DOT__gpio_32__DOT__cio_gpio_en_q),32);
            tracep->chgIData(oldp+3027,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__q),32);
            tracep->chgBit(oldp+3028,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_state__DOT__qe));
            tracep->chgBit(oldp+3029,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+3030,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+3031,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+3032,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+3033,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+3034,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio24__DOT__qe));
            tracep->chgBit(oldp+3035,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_13__DOT__qe));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x47U])) {
            tracep->chgBit(oldp+3036,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__xbar_to_ifu 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3037,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__xbar_to_ifu 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3038,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__xbar_to_ifu 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3039,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__xbar_to_ifu 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3040,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__xbar_to_ifu 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3041,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__xbar_to_ifu 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3042,((IData)((vlTOPp->soc_top__DOT__xbar_to_ifu 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3043,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__xbar_to_ifu 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3044,((1U & (IData)(vlTOPp->soc_top__DOT__xbar_to_ifu))));
            tracep->chgBit(oldp+3045,((1U & (IData)(vlTOPp->soc_top__DOT__xbar_to_ifu))));
            tracep->chgBit(oldp+3046,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__xbar_to_ifu 
                                                     >> 0x33U)))));
            tracep->chgIData(oldp+3047,((IData)((vlTOPp->soc_top__DOT__xbar_to_ifu 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3048,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__xbar_to_ifu 
                                                     >> 1U)))));
            tracep->chgIData(oldp+3049,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata),32);
            tracep->chgBit(oldp+3050,((3U != (3U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
            tracep->chgBit(oldp+3051,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err));
            tracep->chgIData(oldp+3052,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata),32);
            tracep->chgBit(oldp+3053,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
            tracep->chgBit(oldp+3054,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
            tracep->chgBit(oldp+3055,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed));
            tracep->chgCData(oldp+3056,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+3057,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+3058,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+3059,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d))));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x48U] | vlTOPp->__Vm_traceActivity
                         [0x4cU]))) {
            tracep->chgIData(oldp+3060,(((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
                                          << 0xaU) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                            >> 0x16U))),32);
            tracep->chgBit(oldp+3061,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                             >> 0x15U))));
            tracep->chgIData(oldp+3062,(((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                          << 0xbU) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                            >> 0x15U))),32);
            tracep->chgBit(oldp+3063,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                             >> 0x14U))));
            tracep->chgIData(oldp+3064,(((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                          << 0xcU) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                            >> 0x14U))),32);
            tracep->chgSData(oldp+3065,((0x3ffU & (
                                                   (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                      >> 0xaU)))),10);
            tracep->chgSData(oldp+3066,((0x3ffU & vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U])),10);
            tracep->chgSData(oldp+3067,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                           << 0x10U) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[3U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+3068,((0xffffU & 
                                         vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[3U])),16);
            tracep->chgIData(oldp+3069,(vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[2U]),32);
            tracep->chgSData(oldp+3070,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+3071,((0xffffU & 
                                         vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[1U])),16);
            tracep->chgSData(oldp+3072,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[0U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+3073,((0xffffU & 
                                         vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[0U])),16);
            tracep->chgIData(oldp+3074,(((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                          << 0xcU) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                            >> 0x14U))),32);
            tracep->chgSData(oldp+3075,((0x3ffU & (
                                                   (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                      >> 0xaU)))),10);
            tracep->chgSData(oldp+3076,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                           << 0x10U) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[3U] 
                                             >> 0x10U)))),16);
            tracep->chgIData(oldp+3077,(vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[2U]),32);
            tracep->chgSData(oldp+3078,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+3079,((0xffffU & 
                                         vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[1U])),16);
            tracep->chgSData(oldp+3080,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[0U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+3081,((0xffffU & 
                                         vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[0U])),16);
            tracep->chgBit(oldp+3082,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                             >> 0x15U))));
            tracep->chgIData(oldp+3083,(((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
                                          << 0xaU) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                            >> 0x16U))),32);
            tracep->chgBit(oldp+3084,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                             >> 0x14U))));
            tracep->chgIData(oldp+3085,(((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                          << 0xbU) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                            >> 0x15U))),32);
            tracep->chgSData(oldp+3086,((0x3ffU & (
                                                   (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                      >> 0xaU)))),16);
            tracep->chgSData(oldp+3087,((0x3ffU & vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U])),16);
            tracep->chgSData(oldp+3088,((0xffffU & 
                                         vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[3U])),16);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x49U])) {
            tracep->chgBit(oldp+3089,((1U & (vlTOPp->soc_top__DOT__ifu_to_xbar[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3090,((7U & (vlTOPp->soc_top__DOT__ifu_to_xbar[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3091,((7U & (vlTOPp->soc_top__DOT__ifu_to_xbar[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3092,((3U & (vlTOPp->soc_top__DOT__ifu_to_xbar[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3093,((0xffU & (vlTOPp->soc_top__DOT__ifu_to_xbar[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3094,(((vlTOPp->soc_top__DOT__ifu_to_xbar[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__ifu_to_xbar[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3095,((0xfU & ((vlTOPp->soc_top__DOT__ifu_to_xbar[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__ifu_to_xbar[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3096,(((vlTOPp->soc_top__DOT__ifu_to_xbar[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__ifu_to_xbar[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3097,((1U & vlTOPp->soc_top__DOT__ifu_to_xbar[0U])));
            tracep->chgBit(oldp+3098,(vlTOPp->soc_top__DOT__u_top__DOT__instr_req));
            tracep->chgIData(oldp+3099,((0xfffffffcU 
                                         & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr)),32);
            tracep->chgBit(oldp+3100,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req));
            tracep->chgBit(oldp+3101,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtvec_init));
            tracep->chgIData(oldp+3102,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n),32);
            tracep->chgBit(oldp+3103,((1U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)));
            tracep->chgIData(oldp+3104,((0xfffffffeU 
                                         & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)),32);
            tracep->chgBit(oldp+3105,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
            tracep->chgBit(oldp+3106,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
            tracep->chgCData(oldp+3107,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n),2);
            tracep->chgIData(oldp+3108,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4aU])) {
            tracep->chgBit(oldp+3109,((1U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3110,((7U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3111,((7U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3112,((3U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3113,((0xffU & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3114,(((vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3115,((0xfU & ((vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3116,(((vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__xbar_to_iccm[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3117,((1U & vlTOPp->soc_top__DOT__xbar_to_iccm[0U])));
            tracep->chgCData(oldp+3118,(((4U != (7U 
                                                 & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                    >> 0x12U)))
                                          ? 0U : 1U)),2);
            tracep->chgCData(oldp+3119,((3U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3120,((0xffU & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                  >> 5U))),8);
            tracep->chgCData(oldp+3121,((0xfU & ((vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                                    >> 1U)))),4);
            tracep->chgBit(oldp+3122,((((0U == (7U 
                                                & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                     >> 0x12U)))) 
                                       | (4U == (7U 
                                                 & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                    >> 0x12U))))));
            tracep->chgBit(oldp+3123,((0U == (7U & 
                                              (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+3124,((1U == (7U & 
                                              (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+3125,((4U == (7U & 
                                              (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0x12U)))));
            tracep->chgCData(oldp+3126,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                                        >> 5U)))))),4);
            tracep->chgCData(oldp+3127,((0x1eU & vlTOPp->soc_top__DOT__xbar_to_iccm[1U])),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4bU])) {
            tracep->chgIData(oldp+3128,(((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                          << 0x15U) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                            >> 0xbU))),32);
            tracep->chgIData(oldp+3129,(((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                          << 0x15U) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                            >> 0xbU))),32);
            tracep->chgIData(oldp+3130,(((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                          << 0x15U) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                            >> 0xbU))),32);
            tracep->chgBit(oldp+3131,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                             >> 0xaU))));
            tracep->chgIData(oldp+3132,(((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                          << 0x16U) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                            >> 0xaU))),32);
            tracep->chgBit(oldp+3133,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                             >> 9U))));
            tracep->chgSData(oldp+3134,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                           << 7U) | 
                                          (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                           >> 0x19U)))),16);
            tracep->chgBit(oldp+3135,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                             >> 0x18U))));
            tracep->chgSData(oldp+3136,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                           << 0x18U) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                             >> 8U)))),16);
            tracep->chgBit(oldp+3137,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                             >> 7U))));
            tracep->chgSData(oldp+3138,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                           << 9U) | 
                                          (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                           >> 0x17U)))),16);
            tracep->chgBit(oldp+3139,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                             >> 0x16U))));
            tracep->chgSData(oldp+3140,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                           << 0x1aU) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                             >> 6U)))),16);
            tracep->chgBit(oldp+3141,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                             >> 5U))));
            tracep->chgIData(oldp+3142,(((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                            >> 5U))),32);
            tracep->chgBit(oldp+3143,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                             >> 4U))));
            tracep->chgSData(oldp+3144,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                           << 0xcU) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                             >> 0x14U)))),16);
            tracep->chgBit(oldp+3145,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                             >> 0x13U))));
            tracep->chgSData(oldp+3146,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                           << 0x1dU) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                             >> 3U)))),16);
            tracep->chgBit(oldp+3147,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                             >> 2U))));
            tracep->chgSData(oldp+3148,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                           << 0xeU) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                             >> 0x12U)))),16);
            tracep->chgBit(oldp+3149,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                             >> 0x11U))));
            tracep->chgSData(oldp+3150,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                           << 0x1fU) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                             >> 1U)))),16);
            tracep->chgBit(oldp+3151,((1U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[5U])));
            tracep->chgIData(oldp+3152,(vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[4U]),32);
            tracep->chgIData(oldp+3153,(vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[3U]),32);
            tracep->chgIData(oldp+3154,(vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[2U]),32);
            tracep->chgIData(oldp+3155,(vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[1U]),32);
            tracep->chgIData(oldp+3156,(vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U]),32);
            tracep->chgIData(oldp+3157,(((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                          << 0x15U) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                            >> 0xbU))),32);
            tracep->chgIData(oldp+3158,(((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                          << 0x15U) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                            >> 0xbU))),32);
            tracep->chgBit(oldp+3159,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                             >> 0xaU))));
            tracep->chgIData(oldp+3160,(((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                          << 0x15U) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                            >> 0xbU))),32);
            tracep->chgBit(oldp+3161,((1U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])));
            tracep->chgBit(oldp+3162,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 1U))));
            tracep->chgBit(oldp+3163,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 2U))));
            tracep->chgBit(oldp+3164,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 3U))));
            tracep->chgBit(oldp+3165,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 4U))));
            tracep->chgBit(oldp+3166,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 5U))));
            tracep->chgBit(oldp+3167,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 6U))));
            tracep->chgBit(oldp+3168,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 7U))));
            tracep->chgBit(oldp+3169,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 8U))));
            tracep->chgBit(oldp+3170,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 9U))));
            tracep->chgBit(oldp+3171,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+3172,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+3173,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+3174,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+3175,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+3176,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+3177,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+3178,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+3179,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+3180,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+3181,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+3182,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+3183,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+3184,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+3185,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+3186,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+3187,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+3188,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+3189,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+3190,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+3191,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+3192,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x1fU))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4cU])) {
            tracep->chgIData(oldp+3193,(vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d),32);
            tracep->chgBit(oldp+3194,((0U != vlTOPp->soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event)));
            tracep->chgIData(oldp+3195,(vlTOPp->soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event),32);
            tracep->chgIData(oldp+3196,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4dU])) {
            tracep->chgCData(oldp+3197,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d),6);
            tracep->chgBit(oldp+3198,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en));
            tracep->chgBit(oldp+3199,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en));
            tracep->chgIData(oldp+3200,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d),32);
            tracep->chgBit(oldp+3201,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4eU])) {
            tracep->chgBit(oldp+3202,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_rising__DOT__qe));
            tracep->chgBit(oldp+3203,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_falling__DOT__qe));
            tracep->chgBit(oldp+3204,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_lvlhigh__DOT__qe));
            tracep->chgBit(oldp+3205,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_lvllow__DOT__qe));
            tracep->chgBit(oldp+3206,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__qe));
            tracep->chgCData(oldp+3207,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+3208,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+3209,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+3210,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+3211,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+3212,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+3213,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+3214,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+3215,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+3216,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+3217,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+3218,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+3219,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+3220,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+3221,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_17__DOT__qe));
            tracep->chgBit(oldp+3222,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_18__DOT__qe));
            tracep->chgBit(oldp+3223,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_19__DOT__qe));
            tracep->chgBit(oldp+3224,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_20__DOT__qe));
            tracep->chgBit(oldp+3225,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_21__DOT__qe));
            tracep->chgBit(oldp+3226,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_31__DOT__qe));
            tracep->chgBit(oldp+3227,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio0__DOT__qe));
            tracep->chgBit(oldp+3228,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio1__DOT__qe));
            tracep->chgBit(oldp+3229,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio2__DOT__qe));
            tracep->chgBit(oldp+3230,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio3__DOT__qe));
            tracep->chgBit(oldp+3231,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__qe));
            tracep->chgBit(oldp+3232,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio14__DOT__qe));
            tracep->chgBit(oldp+3233,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio15__DOT__qe));
            tracep->chgBit(oldp+3234,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio16__DOT__qe));
            tracep->chgBit(oldp+3235,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio17__DOT__qe));
            tracep->chgBit(oldp+3236,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio18__DOT__qe));
            tracep->chgBit(oldp+3237,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio27__DOT__qe));
            tracep->chgBit(oldp+3238,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio28__DOT__qe));
            tracep->chgBit(oldp+3239,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio29__DOT__qe));
            tracep->chgBit(oldp+3240,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio30__DOT__qe));
            tracep->chgBit(oldp+3241,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio31__DOT__qe));
            tracep->chgBit(oldp+3242,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_16__DOT__qe));
            tracep->chgBit(oldp+3243,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_17__DOT__qe));
            tracep->chgBit(oldp+3244,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_18__DOT__qe));
            tracep->chgBit(oldp+3245,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_19__DOT__qe));
            tracep->chgBit(oldp+3246,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_20__DOT__qe));
            tracep->chgBit(oldp+3247,(vlTOPp->soc_top__DOT__u_tempsense__DOT__CLK_SEL));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4fU])) {
            tracep->chgCData(oldp+3248,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+3249,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+3250,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+3251,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+3252,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+3253,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+3254,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+3255,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+3256,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+3257,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+3258,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+3259,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+3260,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+3261,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x50U])) {
            tracep->chgBit(oldp+3262,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err));
            tracep->chgIData(oldp+3263,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed),32);
            tracep->chgBit(oldp+3264,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn));
            tracep->chgWData(oldp+3265,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d),96);
            tracep->chgCData(oldp+3268,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d),3);
            tracep->chgBit(oldp+3269,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack));
            tracep->chgBit(oldp+3270,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x51U])) {
            tracep->chgSData(oldp+3271,(vlTOPp->soc_top__DOT__iccm__DOT__addr),12);
            tracep->chgIData(oldp+3272,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int),32);
            tracep->chgIData(oldp+3273,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int),32);
            tracep->chgIData(oldp+3274,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__unnamedblk1__DOT__i),32);
            tracep->chgBit(oldp+3275,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+3276,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x52U])) {
            tracep->chgIData(oldp+3277,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int),32);
            tracep->chgBit(oldp+3278,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error));
            tracep->chgBit(oldp+3279,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error));
            tracep->chgIData(oldp+3280,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x53U])) {
            tracep->chgIData(oldp+3281,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc),32);
            tracep->chgIData(oldp+3282,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d),18);
            tracep->chgIData(oldp+3283,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d),32);
            tracep->chgCData(oldp+3284,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d),6);
            tracep->chgIData(oldp+3285,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d),32);
            tracep->chgIData(oldp+3286,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x54U])) {
            tracep->chgBit(oldp+3287,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw));
            tracep->chgBit(oldp+3288,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err));
            tracep->chgBit(oldp+3289,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err));
            tracep->chgCData(oldp+3290,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n),2);
            tracep->chgCData(oldp+3291,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                          ? (1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n) 
                                                   >> 1U))
                                          : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n))),2);
            tracep->chgCData(oldp+3292,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n),2);
            tracep->chgCData(oldp+3293,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                          ? (1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n) 
                                                   >> 1U))
                                          : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n))),2);
            tracep->chgBit(oldp+3294,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid));
            tracep->chgCData(oldp+3295,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed),3);
            tracep->chgBit(oldp+3296,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
            tracep->chgBit(oldp+3297,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two));
            tracep->chgBit(oldp+3298,(vlTOPp->soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_d));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x56U])) {
            tracep->chgIData(oldp+3299,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb),32);
            tracep->chgIData(oldp+3300,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext),32);
            tracep->chgBit(oldp+3301,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d));
            tracep->chgBit(oldp+3302,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update));
            tracep->chgBit(oldp+3303,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update));
            tracep->chgBit(oldp+3304,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update));
            tracep->chgBit(oldp+3305,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
            tracep->chgBit(oldp+3306,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d));
            tracep->chgBit(oldp+3307,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d));
            tracep->chgCData(oldp+3308,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns),3);
            tracep->chgIData(oldp+3309,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec),31);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x57U])) {
            tracep->chgBit(oldp+3310,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we));
            tracep->chgBit(oldp+3311,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we));
            tracep->chgBit(oldp+3312,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we));
            tracep->chgBit(oldp+3313,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we));
            tracep->chgBit(oldp+3314,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we));
            tracep->chgBit(oldp+3315,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we));
            tracep->chgBit(oldp+3316,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we));
            tracep->chgBit(oldp+3317,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we));
            tracep->chgBit(oldp+3318,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we));
            tracep->chgBit(oldp+3319,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we));
            tracep->chgBit(oldp+3320,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we));
            tracep->chgBit(oldp+3321,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we));
            tracep->chgBit(oldp+3322,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we));
            tracep->chgBit(oldp+3323,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we));
            tracep->chgBit(oldp+3324,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we));
            tracep->chgBit(oldp+3325,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we));
            tracep->chgBit(oldp+3326,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we));
            tracep->chgBit(oldp+3327,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we));
            tracep->chgBit(oldp+3328,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we));
            tracep->chgBit(oldp+3329,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we));
            tracep->chgBit(oldp+3330,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we));
            tracep->chgBit(oldp+3331,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we));
            tracep->chgBit(oldp+3332,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we));
            tracep->chgBit(oldp+3333,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we));
            tracep->chgBit(oldp+3334,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio5_we));
            tracep->chgBit(oldp+3335,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio6_we));
            tracep->chgBit(oldp+3336,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio8_we));
            tracep->chgBit(oldp+3337,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio9_we));
            tracep->chgBit(oldp+3338,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio10_we));
            tracep->chgBit(oldp+3339,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio11_we));
            tracep->chgBit(oldp+3340,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio12_we));
            tracep->chgBit(oldp+3341,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio21_we));
            tracep->chgBit(oldp+3342,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio24_we));
            tracep->chgBit(oldp+3343,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio25_we));
            tracep->chgBit(oldp+3344,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio26_we));
            tracep->chgBit(oldp+3345,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio30_we));
            tracep->chgBit(oldp+3346,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio31_we));
            tracep->chgBit(oldp+3347,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we));
            tracep->chgBit(oldp+3348,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we));
            tracep->chgBit(oldp+3349,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we));
            tracep->chgBit(oldp+3350,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we));
            tracep->chgBit(oldp+3351,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we));
            tracep->chgBit(oldp+3352,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we));
            tracep->chgBit(oldp+3353,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we));
            tracep->chgBit(oldp+3354,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we));
            tracep->chgBit(oldp+3355,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we));
            tracep->chgBit(oldp+3356,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we));
            tracep->chgBit(oldp+3357,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we));
            tracep->chgBit(oldp+3358,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we));
            tracep->chgBit(oldp+3359,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we));
            tracep->chgBit(oldp+3360,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we));
            tracep->chgBit(oldp+3361,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we));
            tracep->chgBit(oldp+3362,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we));
            tracep->chgBit(oldp+3363,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we));
            tracep->chgBit(oldp+3364,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we));
            tracep->chgBit(oldp+3365,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we));
            tracep->chgBit(oldp+3366,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we));
            tracep->chgBit(oldp+3367,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we));
            tracep->chgBit(oldp+3368,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we));
            tracep->chgBit(oldp+3369,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we));
            tracep->chgBit(oldp+3370,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we));
            tracep->chgBit(oldp+3371,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we));
            tracep->chgBit(oldp+3372,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we));
            tracep->chgBit(oldp+3373,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we));
            tracep->chgBit(oldp+3374,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x58U])) {
            tracep->chgBit(oldp+3375,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we));
            tracep->chgBit(oldp+3376,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we));
            tracep->chgBit(oldp+3377,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we));
            tracep->chgBit(oldp+3378,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we));
            tracep->chgBit(oldp+3379,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we));
            tracep->chgBit(oldp+3380,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we));
            tracep->chgBit(oldp+3381,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__ctrl_en_input_filter_we));
            tracep->chgIData(oldp+3382,(vlTOPp->soc_top__DOT__intr_controller__DOT__claim),32);
            tracep->chgCData(oldp+3383,(vlTOPp->soc_top__DOT__intr_controller__DOT__complete_id[0]),5);
            tracep->chgIData(oldp+3384,(vlTOPp->soc_top__DOT__intr_controller__DOT__complete),32);
            tracep->chgCData(oldp+3385,(vlTOPp->soc_top__DOT__intr_controller__DOT__threshold[0]),3);
            tracep->chgBit(oldp+3386,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we));
            tracep->chgBit(oldp+3387,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we));
            tracep->chgBit(oldp+3388,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we));
            tracep->chgBit(oldp+3389,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we));
            tracep->chgBit(oldp+3390,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we));
            tracep->chgBit(oldp+3391,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we));
            tracep->chgBit(oldp+3392,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we));
            tracep->chgBit(oldp+3393,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we));
            tracep->chgBit(oldp+3394,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio0_we));
            tracep->chgBit(oldp+3395,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio1_we));
            tracep->chgBit(oldp+3396,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio2_we));
            tracep->chgBit(oldp+3397,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio3_we));
            tracep->chgBit(oldp+3398,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio4_we));
            tracep->chgBit(oldp+3399,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio13_we));
            tracep->chgBit(oldp+3400,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio14_we));
            tracep->chgBit(oldp+3401,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio15_we));
            tracep->chgBit(oldp+3402,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio16_we));
            tracep->chgBit(oldp+3403,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio17_we));
            tracep->chgBit(oldp+3404,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio18_we));
            tracep->chgBit(oldp+3405,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio19_we));
            tracep->chgBit(oldp+3406,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio20_we));
            tracep->chgBit(oldp+3407,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio22_we));
            tracep->chgBit(oldp+3408,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio23_we));
            tracep->chgBit(oldp+3409,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio27_we));
            tracep->chgBit(oldp+3410,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio28_we));
            tracep->chgBit(oldp+3411,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio29_we));
            tracep->chgBit(oldp+3412,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we));
            tracep->chgBit(oldp+3413,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we));
            tracep->chgBit(oldp+3414,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we));
            tracep->chgBit(oldp+3415,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we));
            tracep->chgBit(oldp+3416,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we));
            tracep->chgBit(oldp+3417,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we));
            tracep->chgCData(oldp+3418,(vlTOPp->soc_top__DOT__intr_controller__DOT__threshold
                                        [0U]),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x59U])) {
            tracep->chgBit(oldp+3419,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d));
            tracep->chgCData(oldp+3420,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d),3);
            tracep->chgCData(oldp+3421,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped),3);
            tracep->chgBit(oldp+3422,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x5aU])) {
            tracep->chgQData(oldp+3423,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_upd),64);
            tracep->chgQData(oldp+3425,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load),64);
            tracep->chgBit(oldp+3427,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we));
            tracep->chgQData(oldp+3428,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d),64);
            tracep->chgQData(oldp+3430,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_upd),64);
            tracep->chgQData(oldp+3432,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load),64);
            tracep->chgBit(oldp+3434,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we));
            tracep->chgQData(oldp+3435,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d),64);
        }
        tracep->chgBit(oldp+3437,(vlTOPp->clk_i));
        tracep->chgBit(oldp+3438,(vlTOPp->rst_ni));
        tracep->chgIData(oldp+3439,(vlTOPp->gpio_i),20);
        tracep->chgIData(oldp+3440,(vlTOPp->gpio_o),20);
        tracep->chgBit(oldp+3441,((((IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__a_ack) 
                                    & (4U == (7U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0x12U)))) 
                                   & (~ ((((IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__wr_req) 
                                           & (0U != 
                                              (3U & 
                                               ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [6U][2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [6U][1U] 
                                                   >> 5U))))) 
                                          | (IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__malformed_meta_err)) 
                                         | (~ ((((0U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [6U][2U] 
                                                      >> 0x12U))) 
                                                 | (1U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [6U][2U] 
                                                        >> 0x12U)))) 
                                                | (4U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                       [6U][2U] 
                                                       >> 0x12U)))) 
                                               & (((IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                                   & (IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                                  & (((4U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                           [6U][2U] 
                                                           >> 0x12U))) 
                                                      | (1U 
                                                         == 
                                                         (7U 
                                                          & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                             [6U][2U] 
                                                             >> 0x12U)))) 
                                                     | (IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk))))))))));
        tracep->chgBit(oldp+3442,(((IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__wr_req) 
                                   & (~ ((((IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__wr_req) 
                                           & (0U != 
                                              (3U & 
                                               ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [6U][2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [6U][1U] 
                                                   >> 5U))))) 
                                          | (IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__malformed_meta_err)) 
                                         | (~ ((((0U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [6U][2U] 
                                                      >> 0x12U))) 
                                                 | (1U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [6U][2U] 
                                                        >> 0x12U)))) 
                                                | (4U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                       [6U][2U] 
                                                       >> 0x12U)))) 
                                               & (((IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                                   & (IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                                  & (((4U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                           [6U][2U] 
                                                           >> 0x12U))) 
                                                      | (1U 
                                                         == 
                                                         (7U 
                                                          & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                             [6U][2U] 
                                                             >> 0x12U)))) 
                                                     | (IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk))))))))));
        tracep->chgBit(oldp+3443,((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                            & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                               | (0U 
                                                  != vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)))))));
        tracep->chgBit(oldp+3444,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk));
        tracep->chgBit(oldp+3445,((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ctrl_busy) 
                                    | ((0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                       | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))) 
                                   | (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))));
        tracep->chgBit(oldp+3446,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q));
        tracep->chgBit(oldp+3447,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                   & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                      | (0U != vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)))));
        tracep->chgBit(oldp+3448,((0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))));
        tracep->chgBit(oldp+3449,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
        tracep->chgIData(oldp+3450,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id),32);
        tracep->chgBit(oldp+3451,((1U & (((((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                                            & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec))) 
                                           & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn))) 
                                          & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id))) 
                                         & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))))));
        tracep->chgBit(oldp+3452,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear));
        tracep->chgBit(oldp+3453,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set));
        tracep->chgBit(oldp+3454,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec));
        tracep->chgCData(oldp+3455,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause),6);
        tracep->chgBit(oldp+3456,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ctrl_busy));
        tracep->chgBit(oldp+3457,(((0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                   | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))));
        tracep->chgBit(oldp+3458,(((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                     & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                    & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                   & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec))));
        tracep->chgBit(oldp+3459,(((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                     & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                    & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                   & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec))));
        tracep->chgBit(oldp+3460,(((((0U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                                     & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                >> 0x33U))) 
                                    & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err))) 
                                   & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)))));
        tracep->chgIData(oldp+3461,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                      ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                          ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int
                                          : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex)
                                      : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex)),32);
        tracep->chgBit(oldp+3462,((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw) 
                                    & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec)) 
                                   & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id)))));
        tracep->chgIData(oldp+3463,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex),32);
        tracep->chgBit(oldp+3464,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                   & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec))));
        tracep->chgBit(oldp+3465,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                   & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec))));
        tracep->chgIData(oldp+3466,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int),32);
        tracep->chgBit(oldp+3467,((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) 
                                    | (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                                   & (0U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns)))));
        tracep->chgBit(oldp+3468,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_if));
        tracep->chgBit(oldp+3469,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_id));
        tracep->chgBit(oldp+3470,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause));
        tracep->chgIData(oldp+3471,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtval),32);
        tracep->chgCData(oldp+3472,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d),2);
        tracep->chgCData(oldp+3473,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_cause),3);
        tracep->chgBit(oldp+3474,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save));
        tracep->chgBit(oldp+3475,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_instr_ret_wb) 
                                   & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_is_compressed_id))));
        tracep->chgBit(oldp+3476,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready) 
                                   & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
        tracep->chgBit(oldp+3477,((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                    & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)) 
                                   & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid)))));
        tracep->chgBit(oldp+3478,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
                                   & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec))));
        tracep->chgBit(oldp+3479,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
                                   & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec))));
        tracep->chgBit(oldp+3480,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_jump));
        tracep->chgBit(oldp+3481,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_tbranch));
        tracep->chgBit(oldp+3482,(((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw) 
                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready)) 
                                    & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set))) 
                                   | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                      & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear))))));
        tracep->chgBit(oldp+3483,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                         & ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                             ? (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                                 >> 1U) 
                                                & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                             : (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                                 & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                                & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))))));
        tracep->chgIData(oldp+3484,(((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                                      ? ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                                          ? 0x1a110808U
                                          : 0x1a110800U)
                                      : ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                                          ? ((0xffffff00U 
                                              & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                                             | (0x7cU 
                                                & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause) 
                                                   << 2U)))
                                          : (0xffffff00U 
                                             & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)))),32);
        tracep->chgBit(oldp+3485,((1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause) 
                                         >> 5U))));
        tracep->chgBit(oldp+3486,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw) 
                                   & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err)))));
        tracep->chgBit(oldp+3487,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec) 
                                   & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)))));
        tracep->chgBit(oldp+3488,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                                   & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)))));
        tracep->chgBit(oldp+3489,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q));
        tracep->chgCData(oldp+3490,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                      ? (1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n) 
                                               >> 1U))
                                      : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n))),2);
        tracep->chgBit(oldp+3491,((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                    & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
                                   & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)))));
        tracep->chgIData(oldp+3492,((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                       ? (0xfffffffeU 
                                          & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                       : (0xfffffffcU 
                                          & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
                                     + (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                         & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
                                        << 2U))),32);
        tracep->chgBit(oldp+3493,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set) 
                                   | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                      & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))))));
        tracep->chgIData(oldp+3494,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                      ? (0xfffffffeU 
                                         & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                      : 0U)),32);
        tracep->chgBit(oldp+3495,((1U & (~ (IData)(
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                         >> 1U) 
                                                        | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev)))))))));
        tracep->chgCData(oldp+3496,((3U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                           >> 1U))),2);
        tracep->chgIData(oldp+3497,((0xfffffffeU & 
                                     ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                       + ((2U & ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                 << 1U)) 
                                          | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))) 
                                      << 1U))),32);
        tracep->chgCData(oldp+3498,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q),3);
        tracep->chgCData(oldp+3499,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry),3);
        tracep->chgCData(oldp+3500,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en),3);
        tracep->chgIData(oldp+3501,(((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                      ? ((0xffff0000U 
                                          & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                                             << 0x10U)) 
                                         | (0xffffU 
                                            & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                               >> 0x10U)))
                                      : ((0xffff0000U 
                                          & ((IData)(
                                                     (vlTOPp->soc_top__DOT__xbar_to_ifu 
                                                      >> 2U)) 
                                             << 0x10U)) 
                                         | (0xffffU 
                                            & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                               >> 0x10U))))),32);
        tracep->chgBit(oldp+3502,((1U & ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                          ? ((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                               >> 1U) 
                                              & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))) 
                                             | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                                          : (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                              & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                                             | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                                & ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                                   | (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)))))))));
        tracep->chgBit(oldp+3503,((1U & ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                          ? (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                              >> 1U) 
                                             & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                          : (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                              & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                             & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))))));
        tracep->chgBit(oldp+3504,((1U & (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                          >> 1U) | 
                                         ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                          & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid))))));
        tracep->chgIData(oldp+3505,((0x7fffffffU & 
                                     (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                      + ((2U & ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                << 1U)) 
                                         | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))))),31);
        tracep->chgIData(oldp+3506,((0x7fffffffU & 
                                     ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                       ? (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                            ? (0xfffffffeU 
                                               & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                            : 0U) >> 1U)
                                       : (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                          + ((2U & 
                                              ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                               << 1U)) 
                                             | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))))),31);
        tracep->chgBit(oldp+3507,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set) 
                                   | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready) 
                                      & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw)))));
        tracep->chgBit(oldp+3508,(0U));
        tracep->chgBit(oldp+3509,(((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                                     | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw)) 
                                    | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
                                   & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear)))));
        tracep->chgBit(oldp+3510,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                   & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec) 
                                      & ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid)) 
                                         | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle))))));
        tracep->chgIData(oldp+3511,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                      ? 0U : (0x1fU 
                                              & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0xfU)))),32);
        tracep->chgBit(oldp+3512,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req) 
                                   | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec))));
        tracep->chgSData(oldp+3513,(((0x3e0U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                >> 0xaU)) 
                                     | (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                 >> 7U)))),10);
        tracep->chgCData(oldp+3514,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),4);
        tracep->chgBit(oldp+3515,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
                                   & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))));
        tracep->chgBit(oldp+3516,(((3U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                   & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                      | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                         & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn))))));
        tracep->chgBit(oldp+3517,(((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                     | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)) 
                                    | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d)) 
                                   | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err) 
                                      | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err)))));
        tracep->chgBit(oldp+3518,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
                                   | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush))));
        tracep->chgBit(oldp+3519,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
        tracep->chgBit(oldp+3520,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq));
        tracep->chgIData(oldp+3521,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex)
                                      ? ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                          << 0x1eU) 
                                         | (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                            >> 2U))
                                      : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))),32);
        tracep->chgQData(oldp+3522,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                      ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                      : (1ULL | ((QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                                 << 1U)))),33);
        tracep->chgQData(oldp+3524,((0x1ffffffffULL 
                                     & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                         ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                         : ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                             ? (~ ((QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                   << 1U))
                                             : ((QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                << 1U))))),33);
        tracep->chgBit(oldp+3526,((1U & ((0x80000000U 
                                          & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                             ^ vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b))
                                          ? ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                              >> 0x1fU) 
                                             ^ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                          : (~ (IData)(
                                                       (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 0x20U)))))));
        tracep->chgIData(oldp+3527,(((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                      ? ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                          ? ((0xffffff00U 
                                              & ((IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                          >> 2U)) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                   >> 0x10U)))
                                          : ((0xffff0000U 
                                              & ((IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                          >> 2U)) 
                                                 << 0x10U)) 
                                             | (0xffffU 
                                                & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                   >> 8U))))
                                      : ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                          ? ((0xff000000U 
                                              & ((IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                          >> 2U)) 
                                                 << 0x18U)) 
                                             | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q)
                                          : (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                     >> 2U))))),32);
        tracep->chgIData(oldp+3528,(((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                      ? ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                          ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                              ? ((0xffff0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                            >> 9U))))) 
                                                     << 0x10U)) 
                                                 | ((0xff00U 
                                                     & ((IData)(
                                                                (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                 >> 2U)) 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                          >> 0x10U))))
                                              : ((0xff00U 
                                                  & ((IData)(
                                                             (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                              >> 2U)) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                       >> 0x10U))))
                                          : ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                              ? ((0xffff0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                            >> 0x21U))))) 
                                                     << 0x10U)) 
                                                 | (0xffffU 
                                                    & (IData)(
                                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                               >> 0x12U))))
                                              : (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                            >> 0x12U)))))
                                      : ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                          ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                              ? ((0xffff0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                            >> 0x19U))))) 
                                                     << 0x10U)) 
                                                 | (0xffffU 
                                                    & (IData)(
                                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                               >> 0xaU))))
                                              : (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                            >> 0xaU))))
                                          : ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                              ? ((0xffff0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                            >> 0x11U))))) 
                                                     << 0x10U)) 
                                                 | (0xffffU 
                                                    & (IData)(
                                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                               >> 2U))))
                                              : (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                            >> 2U))))))),32);
        tracep->chgIData(oldp+3529,(((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                      ? ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                          ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                              ? ((0xffffff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                            >> 0x21U))))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (IData)(
                                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                               >> 0x1aU))))
                                              : (0xffU 
                                                 & (IData)(
                                                           (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                            >> 0x1aU))))
                                          : ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                              ? ((0xffffff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                            >> 0x19U))))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (IData)(
                                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                               >> 0x12U))))
                                              : (0xffU 
                                                 & (IData)(
                                                           (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                            >> 0x12U)))))
                                      : ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                          ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                              ? ((0xffffff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                            >> 0x11U))))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (IData)(
                                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                               >> 0xaU))))
                                              : (0xffU 
                                                 & (IData)(
                                                           (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                            >> 0xaU))))
                                          : ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                              ? ((0xffffff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                            >> 9U))))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (IData)(
                                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                               >> 2U))))
                                              : (0xffU 
                                                 & (IData)(
                                                           (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                            >> 2U))))))),32);
        tracep->chgIData(oldp+3530,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0]),32);
        tracep->chgIData(oldp+3531,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1]),32);
        tracep->chgCData(oldp+3532,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we),2);
        tracep->chgIData(oldp+3533,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtvec_init)
                                      ? 0x20000001U
                                      : (1U | (0xffffff00U 
                                               & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)))),32);
        tracep->chgIData(oldp+3534,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip),18);
        tracep->chgCData(oldp+3535,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_d),3);
        tracep->chgBit(oldp+3536,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en));
        tracep->chgCData(oldp+3537,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
                                      ? (5U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                      : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),3);
        tracep->chgBit(oldp+3538,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr));
        tracep->chgBit(oldp+3539,(((3U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 8U)) > (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
        tracep->chgBit(oldp+3540,(((3U == (3U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                 >> 0xaU))) 
                                   & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))));
        tracep->chgBit(oldp+3541,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                         & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))))));
        tracep->chgBit(oldp+3542,((1U & ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 2U) & 
                                         (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 2U))))));
        tracep->chgCData(oldp+3543,(vlTOPp->soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q),8);
        tracep->chgCData(oldp+3544,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)
                                      ? (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be)
                                      : 0xfU)),4);
        tracep->chgBit(oldp+3545,(vlTOPp->soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q));
        tracep->chgIData(oldp+3546,(vlTOPp->gpio_i),32);
        tracep->chgIData(oldp+3547,(vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_q),32);
        tracep->chgIData(oldp+3548,((((~ vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_q) 
                                      & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
                                     & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[4U])),32);
        tracep->chgIData(oldp+3549,(((vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_q 
                                      & (~ vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d)) 
                                     & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[3U])),32);
        tracep->chgIData(oldp+3550,(((~ vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
                                     & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[1U])),32);
        tracep->chgIData(oldp+3551,((vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d 
                                     & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[2U])),32);
        tracep->chgIData(oldp+3552,(((((((~ vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_q) 
                                         & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
                                        & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[4U]) 
                                       | ((vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_q 
                                           & (~ vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d)) 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[3U])) 
                                      | ((~ vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
                                         & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[1U])) 
                                     | (vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d 
                                        & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[2U]))),32);
        tracep->chgIData(oldp+3553,((vlTOPp->soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event 
                                     | ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                         << 0x15U) 
                                        | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                           >> 0xbU)))),32);
        tracep->chgBit(oldp+3554,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re));
        tracep->chgBit(oldp+3555,((1U & ((IData)((vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)) 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [1U][0U]))));
        tracep->chgBit(oldp+3556,(((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                                   & (0U != (3U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][2U] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [1U][1U] 
                                                      >> 5U)))))));
        tracep->chgBit(oldp+3557,((1U & (~ ((((0U == 
                                               (7U 
                                                & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][2U] 
                                                   >> 0x12U))) 
                                              | (1U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [1U][2U] 
                                                     >> 0x12U)))) 
                                             | (4U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][2U] 
                                                    >> 0x12U)))) 
                                            & (((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                                & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                               & (((4U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [1U][2U] 
                                                        >> 0x12U))) 
                                                   | (1U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                          [1U][2U] 
                                                          >> 0x12U)))) 
                                                  | (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))))));
        tracep->chgBit(oldp+3558,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
        tracep->chgBit(oldp+3559,((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                    & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                   & (((4U == (7U & 
                                               (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][2U] 
                                                >> 0x12U))) 
                                       | (1U == (7U 
                                                 & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][2U] 
                                                    >> 0x12U)))) 
                                      | (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))));
        tracep->chgBit(oldp+3560,((1U & ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                            >> 0x15U)))));
        tracep->chgIData(oldp+3561,((((0x200000U & 
                                       vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U])
                                       ? ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
                                           << 0xaU) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                             >> 0x16U))
                                       : vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q) 
                                     & ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we)
                                         ? (~ ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][1U] 
                                                << 0x1fU) 
                                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][0U] 
                                                  >> 1U)))
                                         : 0xffffffffU))),32);
        tracep->chgBit(oldp+3562,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__qe));
        tracep->chgBit(oldp+3563,((1U & vlTOPp->gpio_i)));
        tracep->chgBit(oldp+3564,((1U & ((1U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q)
                                          : vlTOPp->gpio_i))));
        tracep->chgBit(oldp+3565,((1U & (vlTOPp->gpio_i 
                                         >> 1U))));
        tracep->chgBit(oldp+3566,((1U & ((2U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 1U)))));
        tracep->chgBit(oldp+3567,((1U & (vlTOPp->gpio_i 
                                         >> 2U))));
        tracep->chgBit(oldp+3568,((1U & ((4U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 2U)))));
        tracep->chgBit(oldp+3569,((1U & (vlTOPp->gpio_i 
                                         >> 3U))));
        tracep->chgBit(oldp+3570,((1U & ((8U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 3U)))));
        tracep->chgBit(oldp+3571,((1U & (vlTOPp->gpio_i 
                                         >> 4U))));
        tracep->chgBit(oldp+3572,((1U & ((0x10U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 4U)))));
        tracep->chgBit(oldp+3573,((1U & (vlTOPp->gpio_i 
                                         >> 5U))));
        tracep->chgBit(oldp+3574,((1U & ((0x20U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 5U)))));
        tracep->chgBit(oldp+3575,((1U & (vlTOPp->gpio_i 
                                         >> 6U))));
        tracep->chgBit(oldp+3576,((1U & ((0x40U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 6U)))));
        tracep->chgBit(oldp+3577,((1U & (vlTOPp->gpio_i 
                                         >> 7U))));
        tracep->chgBit(oldp+3578,((1U & ((0x80U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 7U)))));
        tracep->chgBit(oldp+3579,((1U & (vlTOPp->gpio_i 
                                         >> 8U))));
        tracep->chgBit(oldp+3580,((1U & ((0x100U & 
                                          vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 8U)))));
        tracep->chgBit(oldp+3581,((1U & (vlTOPp->gpio_i 
                                         >> 9U))));
        tracep->chgBit(oldp+3582,((1U & ((0x200U & 
                                          vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 9U)))));
        tracep->chgBit(oldp+3583,((1U & (vlTOPp->gpio_i 
                                         >> 0xaU))));
        tracep->chgBit(oldp+3584,((1U & ((0x400U & 
                                          vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xaU)))));
        tracep->chgBit(oldp+3585,((1U & (vlTOPp->gpio_i 
                                         >> 0xbU))));
        tracep->chgBit(oldp+3586,((1U & ((0x800U & 
                                          vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xbU)))));
        tracep->chgBit(oldp+3587,((1U & (vlTOPp->gpio_i 
                                         >> 0xcU))));
        tracep->chgBit(oldp+3588,((1U & ((0x1000U & 
                                          vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xcU)))));
        tracep->chgBit(oldp+3589,((1U & (vlTOPp->gpio_i 
                                         >> 0xdU))));
        tracep->chgBit(oldp+3590,((1U & ((0x2000U & 
                                          vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xdU)))));
        tracep->chgBit(oldp+3591,((1U & (vlTOPp->gpio_i 
                                         >> 0xeU))));
        tracep->chgBit(oldp+3592,((1U & ((0x4000U & 
                                          vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xeU)))));
        tracep->chgBit(oldp+3593,((1U & (vlTOPp->gpio_i 
                                         >> 0xfU))));
        tracep->chgBit(oldp+3594,((1U & ((0x8000U & 
                                          vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xfU)))));
        tracep->chgBit(oldp+3595,((1U & (vlTOPp->gpio_i 
                                         >> 0x10U))));
        tracep->chgBit(oldp+3596,((1U & ((0x10000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x10U)))));
        tracep->chgBit(oldp+3597,((1U & (vlTOPp->gpio_i 
                                         >> 0x11U))));
        tracep->chgBit(oldp+3598,((1U & ((0x20000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x11U)))));
        tracep->chgBit(oldp+3599,((1U & (vlTOPp->gpio_i 
                                         >> 0x12U))));
        tracep->chgBit(oldp+3600,((1U & ((0x40000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x12U)))));
        tracep->chgBit(oldp+3601,((1U & (vlTOPp->gpio_i 
                                         >> 0x13U))));
        tracep->chgBit(oldp+3602,((1U & ((0x80000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x13U)))));
        tracep->chgBit(oldp+3603,((1U & (vlTOPp->gpio_i 
                                         >> 0x14U))));
        tracep->chgBit(oldp+3604,((1U & ((0x100000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x14U)))));
        tracep->chgBit(oldp+3605,((1U & (vlTOPp->gpio_i 
                                         >> 0x15U))));
        tracep->chgBit(oldp+3606,((1U & ((0x200000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x15U)))));
        tracep->chgBit(oldp+3607,((1U & (vlTOPp->gpio_i 
                                         >> 0x16U))));
        tracep->chgBit(oldp+3608,((1U & ((0x400000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x16U)))));
        tracep->chgBit(oldp+3609,((1U & (vlTOPp->gpio_i 
                                         >> 0x17U))));
        tracep->chgBit(oldp+3610,((1U & ((0x800000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x17U)))));
        tracep->chgBit(oldp+3611,((1U & (vlTOPp->gpio_i 
                                         >> 0x18U))));
        tracep->chgBit(oldp+3612,((1U & ((0x1000000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x18U)))));
        tracep->chgBit(oldp+3613,((1U & (vlTOPp->gpio_i 
                                         >> 0x19U))));
        tracep->chgBit(oldp+3614,((1U & ((0x2000000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x19U)))));
        tracep->chgBit(oldp+3615,((1U & (vlTOPp->gpio_i 
                                         >> 0x1aU))));
        tracep->chgBit(oldp+3616,((1U & ((0x4000000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1aU)))));
        tracep->chgBit(oldp+3617,((1U & (vlTOPp->gpio_i 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+3618,((1U & ((0x8000000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1bU)))));
        tracep->chgBit(oldp+3619,((1U & (vlTOPp->gpio_i 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+3620,((1U & ((0x10000000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1cU)))));
        tracep->chgBit(oldp+3621,((1U & (vlTOPp->gpio_i 
                                         >> 0x1dU))));
        tracep->chgBit(oldp+3622,((1U & ((0x20000000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1dU)))));
        tracep->chgBit(oldp+3623,((1U & (vlTOPp->gpio_i 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+3624,((1U & ((0x40000000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1eU)))));
        tracep->chgBit(oldp+3625,((1U & (vlTOPp->gpio_i 
                                         >> 0x1fU))));
        tracep->chgBit(oldp+3626,((1U & ((0x80000000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1fU)))));
        tracep->chgBit(oldp+3627,(vlTOPp->soc_top__DOT__iccm__DOT__req));
        tracep->chgIData(oldp+3628,(vlTOPp->soc_top__DOT__iccm__DOT__rdata),32);
        tracep->chgBit(oldp+3629,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o));
        tracep->chgIData(oldp+3630,(((IData)(vlTOPp->rst_ni)
                                      ? vlTOPp->soc_top__DOT__iccm__DOT__rdata
                                      : 0U)),32);
        tracep->chgBit(oldp+3631,((1U & ((vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                          >> 0x15U) 
                                         & (IData)(vlTOPp->soc_top__DOT__iccm_to_xbar)))));
        tracep->chgBit(oldp+3632,(((IData)(vlTOPp->soc_top__DOT__iccm__DOT__req) 
                                   & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o)))));
        tracep->chgBit(oldp+3633,(((IData)((0x800U 
                                            == (0x1c00U 
                                                & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                   & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))));
        tracep->chgBit(oldp+3634,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid));
        tracep->chgBit(oldp+3635,((1U & ((~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                         & ((1U == 
                                             (3U & 
                                              ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU)))
                                             ? ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                | ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xaU))
                                             : ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xaU))))));
        tracep->chgIData(oldp+3636,((((IData)(vlTOPp->rst_ni)
                                       ? vlTOPp->soc_top__DOT__iccm__DOT__rdata
                                       : 0U) & vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask)),32);
        tracep->chgBit(oldp+3637,((((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk) 
                                    & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk)) 
                                   & (((4U == (7U & 
                                               (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                >> 0x12U))) 
                                       | (1U == (7U 
                                                 & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                    >> 0x12U)))) 
                                      | (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk)))));
        tracep->chgBit(oldp+3638,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk));
        tracep->chgSData(oldp+3639,(((((4U != (7U & 
                                               (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                >> 0x12U)))
                                        ? 0U : 1U) 
                                      << 0xbU) | (((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error) 
                                                   << 0xaU) 
                                                  | (0x3ffU 
                                                     & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                        >> 5U))))),13);
        tracep->chgCData(oldp+3640,(((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 2U : (3U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (1U 
                                                    & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(2U) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->chgBit(oldp+3641,(((~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))));
        tracep->chgSData(oldp+3642,(((0x19U >= (0x1fU 
                                                & ((IData)(0xdU) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                      ? (0x1fffU & 
                                         (vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                          >> (0x1fU 
                                              & ((IData)(0xdU) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                      : 0U)),13);
        tracep->chgCData(oldp+3643,(((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 2U : (3U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (1U 
                                                    & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(2U) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->chgBit(oldp+3644,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->chgBit(oldp+3645,(((~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid))));
        tracep->chgCData(oldp+3646,(((9U >= (0xfU & 
                                             ((IData)(5U) 
                                              * (1U 
                                                 & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                      ? (0x1fU & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                      : 0U)),5);
        tracep->chgCData(oldp+3647,(((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 2U : (3U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (1U 
                                                    & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(2U) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->chgBit(oldp+3648,(((~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                   & ((IData)((0x800U 
                                               == (0x1c00U 
                                                   & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                      & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack)))));
        tracep->chgQData(oldp+3649,(((0x41U >= (0x7fU 
                                                & ((IData)(0x21U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                      ? (0x1ffffffffULL 
                                         & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x21U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 ((IData)(2U) 
                                                                  + 
                                                                  (3U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (1U 
                                                                        & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U)))])) 
                                                 << 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                            | (((QData)((IData)(
                                                                vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                ((IData)(1U) 
                                                                 + 
                                                                 (3U 
                                                                  & (((IData)(0x21U) 
                                                                      * 
                                                                      (1U 
                                                                       & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                     >> 5U)))])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  (3U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (1U 
                                                                        & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))))
                                      : 0ULL)),33);
        tracep->chgQData(oldp+3651,((0x1ffffffffULL 
                                     & (((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                         & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid))
                                         ? ((QData)((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword)) 
                                            << 1U) : 
                                        ((0x41U >= 
                                          (0x7fU & 
                                           ((IData)(0x21U) 
                                            * (1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x21U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (3U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (1U 
                                                                         & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (3U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (1U 
                                                                        & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U)))])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                   (3U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (1U 
                                                                         & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U))])) 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                          : 0ULL)))),33);
        tracep->chgIData(oldp+3653,(vlTOPp->soc_top__DOT__dccm__DOT__rdata),32);
        tracep->chgBit(oldp+3654,((1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [0U][2U] 
                                          >> 0x15U) 
                                         & (IData)(vlTOPp->soc_top__DOT__dccm_to_xbar)))));
        tracep->chgBit(oldp+3655,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack));
        tracep->chgBit(oldp+3656,(((IData)((0x800U 
                                            == (0x1c00U 
                                                & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                   & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))));
        tracep->chgBit(oldp+3657,((1U & ((~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                         & ((1U == 
                                             (3U & 
                                              ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU)))
                                             ? ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                | ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xaU))
                                             : ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xaU))))));
        tracep->chgIData(oldp+3658,((vlTOPp->soc_top__DOT__dccm__DOT__rdata 
                                     & vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rmask)),32);
        tracep->chgIData(oldp+3659,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__unnamedblk1__DOT__i),32);
        tracep->chgBit(oldp+3660,((((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk) 
                                    & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk)) 
                                   & (((4U == (7U & 
                                               (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [0U][2U] 
                                                >> 0x12U))) 
                                       | (1U == (7U 
                                                 & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [0U][2U] 
                                                    >> 0x12U)))) 
                                      | (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk)))));
        tracep->chgSData(oldp+3661,(((((4U != (7U & 
                                               (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [0U][2U] 
                                                >> 0x12U)))
                                        ? 0U : 1U) 
                                      << 0xbU) | (((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error) 
                                                   << 0xaU) 
                                                  | (0x3ffU 
                                                     & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [0U][2U] 
                                                        >> 5U))))),13);
        tracep->chgCData(oldp+3662,(((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->chgBit(oldp+3663,(((~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))));
        tracep->chgSData(oldp+3664,(((0x33U >= (0x3fU 
                                                & ((IData)(0xdU) 
                                                   * 
                                                   (3U 
                                                    & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                      ? (0x1fffU & (IData)(
                                                           (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(0xdU) 
                                                                * 
                                                                (3U 
                                                                 & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                      : 0U)),13);
        tracep->chgCData(oldp+3665,(((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->chgBit(oldp+3666,(((~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))));
        tracep->chgCData(oldp+3667,(((0x13U >= (0x1fU 
                                                & ((IData)(5U) 
                                                   * 
                                                   (3U 
                                                    & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                      ? (0x1fU & (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                      : 0U)),5);
        tracep->chgCData(oldp+3668,(((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->chgBit(oldp+3669,(((~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                   & ((IData)((0x800U 
                                               == (0x1c00U 
                                                   & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                      & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack)))));
        tracep->chgQData(oldp+3670,(((0x83U >= (0xffU 
                                                & ((IData)(0x21U) 
                                                   * 
                                                   (3U 
                                                    & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                      ? (0x1ffffffffULL 
                                         & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x21U) 
                                                  * 
                                                  (3U 
                                                   & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 ((IData)(2U) 
                                                                  + 
                                                                  (7U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U)))])) 
                                                 << 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                            | (((QData)((IData)(
                                                                vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                ((IData)(1U) 
                                                                 + 
                                                                 (7U 
                                                                  & (((IData)(0x21U) 
                                                                      * 
                                                                      (3U 
                                                                       & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                     >> 5U)))])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  (7U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))))
                                      : 0ULL)),33);
        tracep->chgQData(oldp+3672,((0x1ffffffffULL 
                                     & (((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                         & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))
                                         ? ((QData)((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
                                            << 1U) : 
                                        ((0x83U >= 
                                          (0xffU & 
                                           ((IData)(0x21U) 
                                            * (3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x21U) 
                                                   * 
                                                   (3U 
                                                    & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (7U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (3U 
                                                                         & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (7U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U)))])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                   (7U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (3U 
                                                                         & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U))])) 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                          : 0ULL)))),33);
        tracep->chgIData(oldp+3674,(vlTOPp->soc_top__DOT__intr_controller__DOT__le),32);
        tracep->chgIData(oldp+3675,(vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0]),32);
        tracep->chgIData(oldp+3676,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set),32);
        tracep->chgIData(oldp+3677,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next),32);
        tracep->chgCData(oldp+3678,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio7__q),3);
        tracep->chgQData(oldp+3679,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit),38);
        tracep->chgBit(oldp+3681,((1U & ((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)) 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [9U][0U]))));
        tracep->chgIData(oldp+3682,(vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                    [0U]),32);
        tracep->chgQData(oldp+3683,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree),63);
        tracep->chgBit(oldp+3685,((((7U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
                                    > vlTOPp->soc_top__DOT__intr_controller__DOT__threshold
                                    [0U]) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))));
        tracep->chgCData(oldp+3686,(((1U & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))
                                      ? (0x3fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U])
                                      : 0U)),6);
        tracep->chgBit(oldp+3687,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3688,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3689,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3690,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3691,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3692,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3693,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3694,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3695,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3696,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3697,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3698,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3699,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3700,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3701,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3702,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3703,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3704,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3705,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3706,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3707,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3708,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3709,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3710,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3711,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3712,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3713,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3714,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3715,((1U & ((IData)((vlTOPp->soc_top__DOT__tsen1_to_xbar 
                                                  >> 0x33U)) 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [6U][0U]))));
        tracep->chgIData(oldp+3716,(vlTOPp->soc_top__DOT__u_tempsense__DOT__rdata),32);
        tracep->chgBit(oldp+3717,(vlTOPp->soc_top__DOT__u_tempsense__DOT__error));
        tracep->chgBit(oldp+3718,((1U & ((((IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__wr_req) 
                                           & (0U != 
                                              (3U & 
                                               ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [6U][2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [6U][1U] 
                                                   >> 5U))))) 
                                          | (IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__malformed_meta_err)) 
                                         | (~ ((((0U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [6U][2U] 
                                                      >> 0x12U))) 
                                                 | (1U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [6U][2U] 
                                                        >> 0x12U)))) 
                                                | (4U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                       [6U][2U] 
                                                       >> 0x12U)))) 
                                               & (((IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                                   & (IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                                  & (((4U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                           [6U][2U] 
                                                           >> 0x12U))) 
                                                      | (1U 
                                                         == 
                                                         (7U 
                                                          & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                             [6U][2U] 
                                                             >> 0x12U)))) 
                                                     | (IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk)))))))));
        tracep->chgBit(oldp+3719,(((IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__wr_req) 
                                   & (0U != (3U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [6U][2U] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [6U][1U] 
                                                      >> 5U)))))));
        tracep->chgCData(oldp+3720,(vlTOPp->soc_top__DOT__u_tempsense__DOT__reqid),8);
        tracep->chgBit(oldp+3721,(((IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__a_ack) 
                                   & (4U == (7U & (
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [6U][2U] 
                                                   >> 0x12U))))));
    }
}
