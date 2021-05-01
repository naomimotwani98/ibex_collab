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
    WData/*95:0*/ __Vtemp1895[3];
    WData/*95:0*/ __Vtemp1911[3];
    WData/*95:0*/ __Vtemp1927[3];
    WData/*95:0*/ __Vtemp1943[3];
    WData/*95:0*/ __Vtemp1959[3];
    WData/*95:0*/ __Vtemp1975[3];
    WData/*95:0*/ __Vtemp1991[3];
    WData/*95:0*/ __Vtemp2007[3];
    WData/*95:0*/ __Vtemp2023[3];
    WData/*95:0*/ __Vtemp2039[3];
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
            tracep->chgBit(oldp+129,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q));
            tracep->chgCData(oldp+130,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__dev_select_outstanding),4);
            tracep->chgCData(oldp+131,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_opcode),3);
            tracep->chgCData(oldp+132,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_source),8);
            tracep->chgCData(oldp+133,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_size),2);
            tracep->chgIData(oldp+134,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q),32);
            tracep->chgBit(oldp+135,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__outstanding));
            tracep->chgBit(oldp+136,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__qe));
            tracep->chgCData(oldp+137,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio10__q),3);
            tracep->chgBit(oldp+138,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__qe));
            tracep->chgBit(oldp+139,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__qe));
            tracep->chgBit(oldp+140,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__qe));
            tracep->chgBit(oldp+141,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__qe));
            tracep->chgBit(oldp+142,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__qe));
            tracep->chgBit(oldp+143,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__qe));
            tracep->chgBit(oldp+144,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__qe));
            tracep->chgBit(oldp+145,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__qe));
            tracep->chgBit(oldp+146,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__qe));
            tracep->chgBit(oldp+147,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__qe));
            tracep->chgBit(oldp+148,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__qe));
            tracep->chgBit(oldp+149,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__qe));
            tracep->chgBit(oldp+150,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__qe));
            tracep->chgBit(oldp+151,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__qe));
            tracep->chgBit(oldp+152,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__qe));
            tracep->chgBit(oldp+153,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__qe));
            tracep->chgBit(oldp+154,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__qe));
            tracep->chgBit(oldp+155,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__qe));
            tracep->chgBit(oldp+156,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__qe));
            tracep->chgBit(oldp+157,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__qe));
            tracep->chgBit(oldp+158,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__qe));
            tracep->chgBit(oldp+159,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__qe));
            tracep->chgBit(oldp+160,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__qe));
            tracep->chgBit(oldp+161,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__qe));
            tracep->chgBit(oldp+162,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__qe));
            tracep->chgBit(oldp+163,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__qe));
            tracep->chgBit(oldp+164,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__qe));
            tracep->chgBit(oldp+165,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__qe));
            tracep->chgBit(oldp+166,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__qe));
            tracep->chgBit(oldp+167,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__qe));
            tracep->chgBit(oldp+168,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__qe));
            tracep->chgBit(oldp+169,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__qe));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgWData(oldp+170,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q),68);
            tracep->chgBit(oldp+173,((0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
            tracep->chgQData(oldp+174,((((QData)((IData)(
                                                         ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                                           << 0x1eU) 
                                                          | (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                                             >> 2U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U])))),64);
            tracep->chgIData(oldp+176,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U]),32);
            tracep->chgCData(oldp+177,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q),3);
            tracep->chgCData(oldp+178,((3U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U])),2);
            tracep->chgBit(oldp+179,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
            tracep->chgCData(oldp+180,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgIData(oldp+181,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q),32);
            tracep->chgIData(oldp+182,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q),32);
            tracep->chgIData(oldp+183,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q),32);
            tracep->chgBit(oldp+184,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_9__q));
            tracep->chgBit(oldp+185,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_10__q));
            tracep->chgBit(oldp+186,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_17__q));
            tracep->chgBit(oldp+187,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_18__q));
            tracep->chgCData(oldp+188,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio2__q),3);
            tracep->chgCData(oldp+189,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio8__q),3);
            tracep->chgCData(oldp+190,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio9__q),3);
            tracep->chgCData(oldp+191,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q),3);
            tracep->chgCData(oldp+192,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q),3);
            tracep->chgCData(oldp+193,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q),3);
            tracep->chgCData(oldp+194,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q),3);
            tracep->chgCData(oldp+195,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q),3);
            tracep->chgBit(oldp+196,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_7__q));
            tracep->chgCData(oldp+197,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_threshold0__q),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgSData(oldp+198,((0x1fffU & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage))),13);
            tracep->chgSData(oldp+199,((0x1fffU & (IData)(
                                                          (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                           >> 0xdU)))),13);
            tracep->chgSData(oldp+200,((0x1fffU & (IData)(
                                                          (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                           >> 0x1aU)))),13);
            tracep->chgSData(oldp+201,((0x1fffU & (IData)(
                                                          (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                           >> 0x27U)))),13);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            tracep->chgBit(oldp+202,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+203,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+204,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+205,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+206,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+207,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+208,((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                >> 2U))),32);
            tracep->chgBit(oldp+209,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 1U)))));
            tracep->chgBit(oldp+210,((1U & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h))));
            tracep->chgBit(oldp+211,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_1__q));
            tracep->chgBit(oldp+212,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_2__q));
            tracep->chgBit(oldp+213,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_3__q));
            tracep->chgBit(oldp+214,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_4__q));
            tracep->chgBit(oldp+215,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_5__q));
            tracep->chgBit(oldp+216,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_6__q));
            tracep->chgBit(oldp+217,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_7__q));
            tracep->chgBit(oldp+218,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_8__q));
            tracep->chgBit(oldp+219,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_20__q));
            tracep->chgBit(oldp+220,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_21__q));
            tracep->chgBit(oldp+221,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_27__q));
            tracep->chgBit(oldp+222,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_28__q));
            tracep->chgBit(oldp+223,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_29__q));
            tracep->chgBit(oldp+224,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_30__q));
            tracep->chgBit(oldp+225,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_4__q));
            tracep->chgBit(oldp+226,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_5__q));
            tracep->chgBit(oldp+227,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_6__q));
            tracep->chgBit(oldp+228,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_8__q));
            tracep->chgBit(oldp+229,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_9__q));
            tracep->chgBit(oldp+230,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_10__q));
            tracep->chgBit(oldp+231,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_11__q));
            tracep->chgBit(oldp+232,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_16__q));
            tracep->chgBit(oldp+233,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_17__q));
            tracep->chgBit(oldp+234,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_msip0__q));
            tracep->chgBit(oldp+235,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding));
            tracep->chgIData(oldp+236,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rdata),32);
            tracep->chgBit(oldp+237,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__error));
            tracep->chgCData(oldp+238,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqid),8);
            tracep->chgCData(oldp+239,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqsz),2);
            tracep->chgCData(oldp+240,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rspop),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[6U])) {
            tracep->chgBit(oldp+241,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_0__q));
            tracep->chgBit(oldp+242,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_13__q));
            tracep->chgBit(oldp+243,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_14__q));
            tracep->chgBit(oldp+244,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_15__q));
            tracep->chgBit(oldp+245,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_16__q));
            tracep->chgBit(oldp+246,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_19__q));
            tracep->chgBit(oldp+247,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_22__q));
            tracep->chgBit(oldp+248,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_23__q));
            tracep->chgBit(oldp+249,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_24__q));
            tracep->chgBit(oldp+250,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_25__q));
            tracep->chgBit(oldp+251,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_26__q));
            tracep->chgBit(oldp+252,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_0__q));
            tracep->chgBit(oldp+253,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_2__q));
            tracep->chgBit(oldp+254,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_3__q));
            tracep->chgBit(oldp+255,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_12__q));
            tracep->chgBit(oldp+256,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_13__q));
            tracep->chgBit(oldp+257,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_14__q));
            tracep->chgBit(oldp+258,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_15__q));
            tracep->chgBit(oldp+259,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_18__q));
            tracep->chgBit(oldp+260,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_19__q));
            tracep->chgBit(oldp+261,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_20__q));
            tracep->chgBit(oldp+262,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_21__q));
            tracep->chgBit(oldp+263,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_22__q));
            tracep->chgBit(oldp+264,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_23__q));
            tracep->chgBit(oldp+265,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_24__q));
            tracep->chgBit(oldp+266,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_25__q));
            tracep->chgBit(oldp+267,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_26__q));
            tracep->chgBit(oldp+268,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_27__q));
            tracep->chgBit(oldp+269,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_28__q));
            tracep->chgBit(oldp+270,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_29__q));
            tracep->chgBit(oldp+271,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_30__q));
            tracep->chgBit(oldp+272,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_31__q));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[7U])) {
            tracep->chgIData(oldp+273,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q),32);
            tracep->chgIData(oldp+274,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q),32);
            tracep->chgCData(oldp+275,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqid),8);
            tracep->chgCData(oldp+276,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqsz),2);
            tracep->chgBit(oldp+277,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_11__q));
            tracep->chgBit(oldp+278,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_12__q));
            tracep->chgBit(oldp+279,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_31__q));
            tracep->chgCData(oldp+280,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio0__q),3);
            tracep->chgCData(oldp+281,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio1__q),3);
            tracep->chgCData(oldp+282,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio3__q),3);
            tracep->chgCData(oldp+283,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio4__q),3);
            tracep->chgCData(oldp+284,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio5__q),3);
            tracep->chgCData(oldp+285,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio6__q),3);
            tracep->chgCData(oldp+286,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q),3);
            tracep->chgCData(oldp+287,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio12__q),3);
            tracep->chgCData(oldp+288,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio13__q),3);
            tracep->chgCData(oldp+289,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio14__q),3);
            tracep->chgCData(oldp+290,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q),3);
            tracep->chgCData(oldp+291,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio16__q),3);
            tracep->chgCData(oldp+292,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q),3);
            tracep->chgCData(oldp+293,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q),3);
            tracep->chgCData(oldp+294,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q),3);
            tracep->chgCData(oldp+295,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q),3);
            tracep->chgCData(oldp+296,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q),3);
            tracep->chgCData(oldp+297,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q),3);
            tracep->chgCData(oldp+298,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q),3);
            tracep->chgCData(oldp+299,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q),3);
            tracep->chgCData(oldp+300,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio29__q),3);
            tracep->chgCData(oldp+301,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio30__q),3);
            tracep->chgBit(oldp+302,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_1__q));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[8U])) {
            tracep->chgCData(oldp+303,((0x1fU & vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage)),5);
            tracep->chgCData(oldp+304,((0x1fU & (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                 >> 5U))),5);
            tracep->chgCData(oldp+305,((0x1fU & (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                 >> 0xaU))),5);
            tracep->chgCData(oldp+306,((0x1fU & (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                 >> 0xfU))),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[9U])) {
            tracep->chgIData(oldp+307,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rdata),32);
            tracep->chgBit(oldp+308,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__error));
            tracep->chgCData(oldp+309,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rspop),3);
            tracep->chgCData(oldp+310,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
            tracep->chgCData(oldp+311,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
            tracep->chgBit(oldp+312,((1U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                            >> 2U))));
            tracep->chgBit(oldp+313,((1U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 2U))));
            tracep->chgCData(oldp+314,((3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
            tracep->chgCData(oldp+315,((3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
            tracep->chgCData(oldp+316,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
            tracep->chgCData(oldp+317,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
            tracep->chgBit(oldp+318,((1U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                            >> 2U))));
            tracep->chgBit(oldp+319,((1U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 2U))));
            tracep->chgCData(oldp+320,((3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
            tracep->chgCData(oldp+321,((3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
            tracep->chgCData(oldp+322,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
            tracep->chgBit(oldp+323,((1U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 2U))));
            tracep->chgCData(oldp+324,((3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xaU])) {
            tracep->chgCData(oldp+325,(vlTOPp->soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q),8);
            tracep->chgBit(oldp+326,(vlTOPp->soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q));
            tracep->chgBit(oldp+327,(vlTOPp->soc_top__DOT__dccm__DOT__rvalid));
            tracep->chgQData(oldp+328,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[0U]))))),33);
            tracep->chgQData(oldp+330,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                            << 0x3fU) 
                                           | (((QData)((IData)(
                                                               vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                               << 0x1fU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                                 >> 1U))))),33);
            tracep->chgQData(oldp+332,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[4U])) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                               << 0x1eU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                                 >> 2U))))),33);
            tracep->chgQData(oldp+334,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[4U])) 
                                            << 0x1dU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                              >> 3U)))),33);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xbU])) {
            tracep->chgCData(oldp+336,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
            tracep->chgBit(oldp+337,((1U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                            >> 2U))));
            tracep->chgCData(oldp+338,((3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xcU])) {
            tracep->chgBit(oldp+339,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+340,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+341,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+342,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+343,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+344,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+345,((IData)((vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                >> 2U))),32);
            tracep->chgBit(oldp+346,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 1U)))));
            tracep->chgBit(oldp+347,((1U & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h))));
            tracep->chgBit(oldp+348,((1U & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+349,((1U & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+350,((1U & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+351,((1U & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+352,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+353,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+354,((1U & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+355,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+356,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+357,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+358,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xdU])) {
            tracep->chgBit(oldp+359,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_rsp_pending));
            tracep->chgCData(oldp+360,((3U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+361,((1U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                            >> 0xaU))));
            tracep->chgCData(oldp+362,((3U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                              >> 8U))),2);
            tracep->chgCData(oldp+363,((0xffU & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o))),8);
            tracep->chgBit(oldp+364,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid));
            tracep->chgCData(oldp+365,((0xfU & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                >> 1U))),4);
            tracep->chgBit(oldp+366,((1U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o))));
            tracep->chgSData(oldp+367,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
            tracep->chgCData(oldp+368,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0xdU] | vlTOPp->__Vm_traceActivity
                         [0xeU]))) {
            tracep->chgBit(oldp+369,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+370,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+371,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+372,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+373,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+374,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+375,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+376,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+377,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                   [0U]))));
            tracep->chgBit(oldp+378,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+379,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+380,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+381,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+382,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+383,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+384,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+385,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+386,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                   [1U]))));
            tracep->chgBit(oldp+387,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [2U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+388,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [2U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+389,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [2U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+390,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [2U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+391,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                         [2U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+392,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [2U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+393,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                [2U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+394,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [2U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+395,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                   [2U]))));
            tracep->chgBit(oldp+396,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [3U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+397,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [3U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+398,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [3U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+399,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [3U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+400,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                         [3U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+401,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [3U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+402,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                [3U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+403,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [3U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+404,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                   [3U]))));
            tracep->chgBit(oldp+405,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [4U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+406,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [4U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+407,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [4U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+408,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [4U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+409,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                         [4U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+410,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [4U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+411,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                [4U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+412,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [4U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+413,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                   [4U]))));
            tracep->chgBit(oldp+414,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [5U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+415,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [5U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+416,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [5U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+417,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [5U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+418,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                         [5U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+419,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [5U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+420,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                [5U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+421,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [5U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+422,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                   [5U]))));
            tracep->chgBit(oldp+423,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [6U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+424,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [6U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+425,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [6U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+426,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [6U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+427,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                         [6U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+428,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [6U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+429,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                [6U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+430,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [6U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+431,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                   [6U]))));
            tracep->chgBit(oldp+432,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [7U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+433,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [7U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+434,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [7U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+435,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [7U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+436,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                         [7U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+437,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [7U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+438,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                [7U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+439,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [7U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+440,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                   [7U]))));
            tracep->chgBit(oldp+441,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [8U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+442,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [8U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+443,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [8U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+444,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [8U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+445,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                         [8U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+446,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [8U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+447,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                [8U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+448,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [8U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+449,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                   [8U]))));
            tracep->chgBit(oldp+450,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [9U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+451,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [9U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+452,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [9U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+453,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [9U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+454,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                         [9U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+455,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [9U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+456,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                [9U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+457,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [9U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+458,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                   [9U]))));
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0xdU] | vlTOPp->__Vm_traceActivity
                          [0xeU]) | vlTOPp->__Vm_traceActivity
                         [0x45U]))) {
            tracep->chgBit(oldp+459,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+460,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+461,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+462,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+463,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+464,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+465,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+466,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+467,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xeU])) {
            tracep->chgBit(oldp+468,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__dccm_to_xbar 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+469,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__dccm_to_xbar 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+470,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__dccm_to_xbar 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+471,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__dccm_to_xbar 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+472,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__dccm_to_xbar 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+473,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__dccm_to_xbar 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+474,((IData)((vlTOPp->soc_top__DOT__dccm_to_xbar 
                                                >> 2U))),32);
            tracep->chgBit(oldp+475,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__dccm_to_xbar 
                                                    >> 1U)))));
            tracep->chgBit(oldp+476,((1U & (IData)(vlTOPp->soc_top__DOT__dccm_to_xbar))));
            tracep->chgBit(oldp+477,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+478,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+479,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+480,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+481,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+482,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+483,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+484,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+485,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [0U]))));
            tracep->chgBit(oldp+486,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+487,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+488,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+489,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+490,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+491,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+492,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+493,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+494,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [1U]))));
            tracep->chgBit(oldp+495,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [2U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+496,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [2U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+497,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [2U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+498,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [2U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+499,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                         [2U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+500,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [2U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+501,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [2U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+502,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [2U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+503,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [2U]))));
            tracep->chgBit(oldp+504,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [3U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+505,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [3U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+506,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [3U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+507,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [3U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+508,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                         [3U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+509,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [3U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+510,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [3U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+511,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [3U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+512,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [3U]))));
            tracep->chgBit(oldp+513,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [4U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+514,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [4U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+515,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [4U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+516,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [4U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+517,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                         [4U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+518,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [4U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+519,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [4U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+520,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [4U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+521,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [4U]))));
            tracep->chgBit(oldp+522,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [5U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+523,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [5U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+524,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [5U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+525,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [5U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+526,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                         [5U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+527,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [5U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+528,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [5U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+529,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [5U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+530,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [5U]))));
            tracep->chgBit(oldp+531,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [6U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+532,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [6U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+533,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [6U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+534,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [6U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+535,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                         [6U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+536,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [6U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+537,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [6U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+538,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [6U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+539,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [6U]))));
            tracep->chgBit(oldp+540,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [7U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+541,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [7U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+542,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [7U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+543,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [7U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+544,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                         [7U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+545,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [7U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+546,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [7U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+547,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [7U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+548,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [7U]))));
            tracep->chgBit(oldp+549,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [8U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+550,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [8U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+551,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [8U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+552,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [8U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+553,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                         [8U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+554,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [8U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+555,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [8U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+556,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [8U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+557,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [8U]))));
            tracep->chgBit(oldp+558,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [9U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+559,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [9U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+560,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [9U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+561,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [9U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+562,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                         [9U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+563,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [9U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+564,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [9U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+565,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [9U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+566,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [9U]))));
            tracep->chgBit(oldp+567,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+568,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+569,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+570,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+571,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+572,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+573,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+574,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+575,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+576,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+577,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+578,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+579,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+580,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+581,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+582,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+583,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+584,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [0U]))));
            tracep->chgBit(oldp+585,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [0U]))));
            tracep->chgBit(oldp+586,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+587,((((QData)((IData)(
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
            tracep->chgBit(oldp+589,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+590,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+591,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+592,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+593,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+594,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+595,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+596,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+597,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+598,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+599,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+600,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+601,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+602,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+603,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+604,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+605,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+606,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [1U]))));
            tracep->chgBit(oldp+607,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [1U]))));
            tracep->chgBit(oldp+608,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+609,((((QData)((IData)(
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
            tracep->chgBit(oldp+611,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+612,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+613,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+614,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+615,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+616,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+617,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+618,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+619,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+620,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [2U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+621,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [2U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+622,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [2U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+623,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [2U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+624,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                         [2U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+625,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [2U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+626,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [2U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+627,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [2U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+628,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [2U]))));
            tracep->chgBit(oldp+629,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [2U]))));
            tracep->chgBit(oldp+630,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [2U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+631,((((QData)((IData)(
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
            tracep->chgBit(oldp+633,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+634,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+635,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+636,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+637,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+638,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+639,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+640,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+641,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+642,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [3U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+643,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [3U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+644,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [3U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+645,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [3U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+646,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                         [3U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+647,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [3U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+648,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [3U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+649,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [3U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+650,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [3U]))));
            tracep->chgBit(oldp+651,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [3U]))));
            tracep->chgBit(oldp+652,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [3U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+653,((((QData)((IData)(
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
            tracep->chgBit(oldp+655,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+656,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+657,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+658,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+659,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+660,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+661,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+662,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+663,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+664,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [4U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+665,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [4U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+666,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [4U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+667,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [4U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+668,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                         [4U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+669,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [4U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+670,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [4U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+671,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [4U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+672,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [4U]))));
            tracep->chgBit(oldp+673,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [4U]))));
            tracep->chgBit(oldp+674,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [4U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+675,((((QData)((IData)(
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
            tracep->chgBit(oldp+677,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+678,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+679,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+680,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+681,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+682,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+683,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+684,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+685,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+686,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [5U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+687,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [5U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+688,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [5U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+689,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [5U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+690,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                         [5U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+691,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [5U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+692,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [5U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+693,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [5U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+694,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [5U]))));
            tracep->chgBit(oldp+695,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [5U]))));
            tracep->chgBit(oldp+696,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [5U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+697,((((QData)((IData)(
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
            tracep->chgBit(oldp+699,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+700,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+701,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+702,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+703,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+704,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+705,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+706,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+707,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+708,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [6U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+709,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [6U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+710,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [6U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+711,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [6U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+712,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                         [6U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+713,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [6U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+714,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [6U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+715,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [6U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+716,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [6U]))));
            tracep->chgBit(oldp+717,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [6U]))));
            tracep->chgBit(oldp+718,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [6U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+719,((((QData)((IData)(
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
            tracep->chgBit(oldp+721,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+722,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+723,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+724,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+725,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+726,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+727,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+728,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+729,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+730,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [7U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+731,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [7U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+732,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [7U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+733,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [7U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+734,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                         [7U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+735,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [7U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+736,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [7U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+737,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [7U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+738,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [7U]))));
            tracep->chgBit(oldp+739,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [7U]))));
            tracep->chgBit(oldp+740,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [7U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+741,((((QData)((IData)(
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
            tracep->chgBit(oldp+743,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+744,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+745,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+746,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+747,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+748,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+749,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+750,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+751,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+752,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [8U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+753,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [8U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+754,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [8U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+755,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [8U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+756,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                         [8U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+757,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [8U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+758,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [8U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+759,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [8U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+760,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [8U]))));
            tracep->chgBit(oldp+761,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [8U]))));
            tracep->chgBit(oldp+762,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [8U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+763,((((QData)((IData)(
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
            tracep->chgBit(oldp+765,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+766,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+767,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+768,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+769,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+770,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+771,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+772,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+773,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+774,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [9U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+775,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [9U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+776,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [9U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+777,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [9U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+778,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                         [9U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+779,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [9U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+780,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [9U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+781,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [9U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+782,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [9U]))));
            tracep->chgBit(oldp+783,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [9U]))));
            tracep->chgBit(oldp+784,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [9U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+785,((((QData)((IData)(
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
            tracep->chgBit(oldp+787,((1U & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))));
            tracep->chgIData(oldp+788,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword),32);
            tracep->chgIData(oldp+789,((IData)((vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                                >> 1U))),32);
            tracep->chgBit(oldp+790,((1U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o))));
            tracep->chgBit(oldp+791,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid));
            tracep->chgIData(oldp+792,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rmask),32);
            tracep->chgIData(oldp+793,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword),32);
            tracep->chgQData(oldp+794,(((QData)((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
                                        << 1U)),33);
            tracep->chgQData(oldp+796,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
            tracep->chgBit(oldp+798,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+799,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0xeU] | vlTOPp->__Vm_traceActivity
                         [0x45U]))) {
            tracep->chgBit(oldp+800,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+801,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+802,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+803,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+804,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+805,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+806,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+807,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+808,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                   [0U]))));
            tracep->chgBit(oldp+809,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+810,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+811,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+812,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+813,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+814,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+815,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+816,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+817,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                   [1U]))));
            tracep->chgBit(oldp+818,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [2U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+819,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [2U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+820,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [2U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+821,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [2U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+822,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                         [2U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+823,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [2U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+824,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                [2U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+825,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [2U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+826,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                   [2U]))));
            tracep->chgBit(oldp+827,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [3U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+828,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [3U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+829,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [3U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+830,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [3U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+831,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                         [3U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+832,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [3U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+833,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                [3U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+834,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [3U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+835,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                   [3U]))));
            tracep->chgBit(oldp+836,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [4U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+837,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [4U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+838,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [4U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+839,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [4U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+840,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                         [4U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+841,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [4U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+842,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                [4U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+843,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [4U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+844,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                   [4U]))));
            tracep->chgBit(oldp+845,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [5U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+846,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [5U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+847,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [5U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+848,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [5U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+849,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                         [5U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+850,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [5U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+851,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                [5U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+852,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [5U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+853,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                   [5U]))));
            tracep->chgBit(oldp+854,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [6U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+855,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [6U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+856,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [6U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+857,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [6U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+858,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                         [6U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+859,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [6U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+860,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                [6U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+861,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [6U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+862,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                   [6U]))));
            tracep->chgBit(oldp+863,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [7U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+864,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [7U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+865,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [7U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+866,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [7U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+867,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                         [7U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+868,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [7U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+869,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                [7U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+870,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [7U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+871,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                   [7U]))));
            tracep->chgBit(oldp+872,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [8U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+873,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [8U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+874,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [8U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+875,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [8U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+876,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                         [8U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+877,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [8U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+878,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                [8U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+879,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [8U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+880,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                   [8U]))));
            tracep->chgBit(oldp+881,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [9U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+882,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [9U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+883,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [9U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+884,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [9U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+885,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                         [9U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+886,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [9U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+887,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                [9U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+888,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [9U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+889,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                   [9U]))));
            tracep->chgBit(oldp+890,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+891,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [0xaU] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+892,((7U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [0xaU] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+893,((3U & (IData)(
                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                      [0xaU] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+894,((0xffU & (IData)(
                                                        (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                         [0xaU] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+895,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+896,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                [0xaU] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+897,((1U & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [0xaU] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+898,((1U & (IData)(
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                   [0xaU]))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xfU])) {
            tracep->chgBit(oldp+899,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_enable__DOT__qe));
            tracep->chgBit(oldp+900,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_rising__DOT__qe));
            tracep->chgBit(oldp+901,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_falling__DOT__qe));
            tracep->chgBit(oldp+902,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_lvlhigh__DOT__qe));
            tracep->chgBit(oldp+903,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_lvllow__DOT__qe));
            tracep->chgBit(oldp+904,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__qe));
            tracep->chgCData(oldp+905,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio7__q),3);
            tracep->chgBit(oldp+906,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_1__DOT__qe));
            tracep->chgBit(oldp+907,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_2__DOT__qe));
            tracep->chgBit(oldp+908,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_3__DOT__qe));
            tracep->chgBit(oldp+909,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_4__DOT__qe));
            tracep->chgBit(oldp+910,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_5__DOT__qe));
            tracep->chgBit(oldp+911,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_6__DOT__qe));
            tracep->chgBit(oldp+912,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_7__DOT__qe));
            tracep->chgBit(oldp+913,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_8__DOT__qe));
            tracep->chgBit(oldp+914,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_9__DOT__qe));
            tracep->chgBit(oldp+915,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_10__DOT__qe));
            tracep->chgBit(oldp+916,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_11__DOT__qe));
            tracep->chgBit(oldp+917,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_12__DOT__qe));
            tracep->chgBit(oldp+918,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_14__DOT__qe));
            tracep->chgBit(oldp+919,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_15__DOT__qe));
            tracep->chgBit(oldp+920,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_16__DOT__qe));
            tracep->chgBit(oldp+921,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_29__DOT__qe));
            tracep->chgBit(oldp+922,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_30__DOT__qe));
            tracep->chgBit(oldp+923,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_31__DOT__qe));
            tracep->chgBit(oldp+924,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio14__DOT__qe));
            tracep->chgBit(oldp+925,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio15__DOT__qe));
            tracep->chgBit(oldp+926,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio16__DOT__qe));
            tracep->chgBit(oldp+927,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio18__DOT__qe));
            tracep->chgBit(oldp+928,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_1__DOT__qe));
            tracep->chgBit(oldp+929,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_2__DOT__qe));
            tracep->chgBit(oldp+930,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_3__DOT__qe));
            tracep->chgBit(oldp+931,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_4__DOT__qe));
            tracep->chgBit(oldp+932,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_18__DOT__qe));
            tracep->chgBit(oldp+933,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_19__DOT__qe));
            tracep->chgBit(oldp+934,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_20__DOT__qe));
            tracep->chgBit(oldp+935,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_21__DOT__qe));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0xfU] | vlTOPp->__Vm_traceActivity
                         [0x32U]))) {
            tracep->chgBit(oldp+936,((1U & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U])));
            tracep->chgBit(oldp+937,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+938,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+939,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+940,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+941,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+942,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+943,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+944,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+945,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+946,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+947,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+948,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+949,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+950,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+951,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+952,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+953,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+954,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+955,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+956,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x1fU))));
            tracep->chgBit(oldp+957,((1U & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U])));
            tracep->chgBit(oldp+958,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                            >> 1U))));
            tracep->chgBit(oldp+959,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                            >> 2U))));
            tracep->chgBit(oldp+960,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                            >> 3U))));
            tracep->chgBit(oldp+961,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                            >> 4U))));
            tracep->chgBit(oldp+962,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                            >> 5U))));
            tracep->chgBit(oldp+963,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                            >> 6U))));
            tracep->chgBit(oldp+964,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                            >> 7U))));
            tracep->chgBit(oldp+965,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                            >> 8U))));
            tracep->chgBit(oldp+966,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                            >> 9U))));
            tracep->chgBit(oldp+967,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+968,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+969,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                               << 0x17U) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                 >> 9U)))),3);
            tracep->chgCData(oldp+970,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                               << 0x1aU) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                 >> 6U)))),3);
            tracep->chgCData(oldp+971,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                               << 0x1dU) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                 >> 3U)))),3);
            tracep->chgCData(oldp+972,((7U & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U])),3);
            tracep->chgCData(oldp+973,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                               << 3U) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                 >> 0x1dU)))),3);
            tracep->chgCData(oldp+974,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                               << 6U) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                 >> 0x1aU)))),3);
            tracep->chgCData(oldp+975,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                               << 9U) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                 >> 0x17U)))),3);
            tracep->chgCData(oldp+976,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                               << 0xcU) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                 >> 0x14U)))),3);
            tracep->chgCData(oldp+977,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                               << 0xfU) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                 >> 0x11U)))),3);
            tracep->chgCData(oldp+978,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                               << 0x12U) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                 >> 0xeU)))),3);
            tracep->chgCData(oldp+979,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                               << 0x15U) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                 >> 0xbU)))),3);
            tracep->chgCData(oldp+980,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                 >> 8U)))),3);
            tracep->chgCData(oldp+981,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                               << 0x1bU) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                 >> 5U)))),3);
            tracep->chgCData(oldp+982,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                               << 0x1eU) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                 >> 2U)))),3);
            tracep->chgCData(oldp+983,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               << 1U) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                 >> 0x1fU)))),3);
            tracep->chgCData(oldp+984,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               << 4U) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                 >> 0x1cU)))),3);
            tracep->chgCData(oldp+985,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               << 7U) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                 >> 0x19U)))),3);
            tracep->chgCData(oldp+986,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               << 0xaU) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                 >> 0x16U)))),3);
            tracep->chgCData(oldp+987,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               << 0xdU) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                 >> 0x13U)))),3);
            tracep->chgCData(oldp+988,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               << 0x10U) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                 >> 0x10U)))),3);
            tracep->chgCData(oldp+989,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               << 0x13U) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                 >> 0xdU)))),3);
            tracep->chgCData(oldp+990,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               << 0x16U) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                 >> 0xaU)))),3);
            tracep->chgCData(oldp+991,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               << 0x19U) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                 >> 7U)))),3);
            tracep->chgCData(oldp+992,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               << 0x1cU) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                 >> 4U)))),3);
            tracep->chgCData(oldp+993,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               << 0x1fU) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                 >> 1U)))),3);
            tracep->chgCData(oldp+994,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               << 2U) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                 >> 0x1eU)))),3);
            tracep->chgCData(oldp+995,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               << 5U) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                 >> 0x1bU)))),3);
            tracep->chgCData(oldp+996,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               << 8U) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                 >> 0x18U)))),3);
            tracep->chgCData(oldp+997,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               << 0xbU) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                 >> 0x15U)))),3);
            tracep->chgCData(oldp+998,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               << 0xeU) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                 >> 0x12U)))),3);
            tracep->chgCData(oldp+999,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               << 0x11U) 
                                              | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                 >> 0xfU)))),3);
            tracep->chgCData(oldp+1000,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                << 0x14U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                  >> 0xcU)))),3);
            tracep->chgBit(oldp+1001,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1002,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1003,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1004,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1005,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1006,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1007,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1008,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1009,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1010,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1011,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1012,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1013,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1014,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1015,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1016,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1017,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1018,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1019,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1020,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+1021,((1U & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U])));
            tracep->chgBit(oldp+1022,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1023,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1024,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1025,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1026,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1027,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1028,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1029,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1030,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1031,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1032,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1033,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                << 0x17U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                                  >> 9U)))),3);
            tracep->chgCData(oldp+1034,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                                     >> 3U)))),6);
            tracep->chgBit(oldp+1035,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1036,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1037,((1U & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U])));
            tracep->chgBit(oldp+1038,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1039,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 2U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x10U])) {
            tracep->chgWData(oldp+1040,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg),1024);
            tracep->chgWData(oldp+1072,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q),992);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x11U])) {
            tracep->chgCData(oldp+1103,((0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xfU))),5);
            tracep->chgCData(oldp+1104,((0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x14U))),5);
            tracep->chgCData(oldp+1105,((0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 7U))),5);
            tracep->chgIData(oldp+1106,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id),32);
            tracep->chgIData(oldp+1107,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id),32);
            tracep->chgBit(oldp+1108,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_is_compressed_id));
            tracep->chgBit(oldp+1109,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err));
            tracep->chgBit(oldp+1110,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_c_insn_id));
            tracep->chgIData(oldp+1111,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_id),32);
            tracep->chgIData(oldp+1112,(((0xfffff000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                            >> 0x1fU)))) 
                                             << 0xcU)) 
                                         | (0xfffU 
                                            & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x14U)))),32);
            tracep->chgIData(oldp+1113,(((0xfffff000U 
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
            tracep->chgIData(oldp+1114,(((0xffffe000U 
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
            tracep->chgIData(oldp+1115,((0xfffff000U 
                                         & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)),32);
            tracep->chgIData(oldp+1116,(((0xfff00000U 
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
            tracep->chgIData(oldp+1117,((0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xfU))),32);
            tracep->chgSData(oldp+1118,(((0x3e0U & 
                                          (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                           >> 0xaU)) 
                                         | (0x1fU & 
                                            (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                             >> 7U)))),10);
            tracep->chgCData(oldp+1119,((0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x1bU))),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x12U])) {
            tracep->chgBit(oldp+1120,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
            tracep->chgIData(oldp+1121,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q),32);
            tracep->chgBit(oldp+1122,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q));
            tracep->chgCData(oldp+1123,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),4);
            tracep->chgCData(oldp+1124,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
            tracep->chgCData(oldp+1125,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q),2);
            tracep->chgBit(oldp+1126,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q));
            tracep->chgBit(oldp+1127,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x13U])) {
            tracep->chgBit(oldp+1128,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we));
            tracep->chgBit(oldp+1129,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__icache_inval));
            tracep->chgBit(oldp+1130,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle));
            tracep->chgCData(oldp+1131,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator),6);
            tracep->chgBit(oldp+1132,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__mult_sel_ex));
            tracep->chgBit(oldp+1133,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex));
            tracep->chgCData(oldp+1134,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator),2);
            tracep->chgCData(oldp+1135,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode),2);
            tracep->chgBit(oldp+1136,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_access));
            tracep->chgCData(oldp+1137,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type),2);
            tracep->chgBit(oldp+1138,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext));
            tracep->chgBit(oldp+1139,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn));
            tracep->chgBit(oldp+1140,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn));
            tracep->chgBit(oldp+1141,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec));
            tracep->chgBit(oldp+1142,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec));
            tracep->chgBit(oldp+1143,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec));
            tracep->chgBit(oldp+1144,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec));
            tracep->chgBit(oldp+1145,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec));
            tracep->chgBit(oldp+1146,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec));
            tracep->chgBit(oldp+1147,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec));
            tracep->chgBit(oldp+1148,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec));
            tracep->chgBit(oldp+1149,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run));
            tracep->chgBit(oldp+1150,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel));
            tracep->chgBit(oldp+1151,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we));
            tracep->chgBit(oldp+1152,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec));
            tracep->chgBit(oldp+1153,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec));
            tracep->chgCData(oldp+1154,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec),2);
            tracep->chgBit(oldp+1155,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec));
            tracep->chgBit(oldp+1156,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
            tracep->chgCData(oldp+1157,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec),3);
            tracep->chgBit(oldp+1158,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec));
            tracep->chgBit(oldp+1159,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
            tracep->chgCData(oldp+1160,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
            tracep->chgCData(oldp+1161,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode),7);
            tracep->chgCData(oldp+1162,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu),7);
            tracep->chgBit(oldp+1163,((8U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))));
            tracep->chgBit(oldp+1164,(((3U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                       | (6U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))));
            tracep->chgBit(oldp+1165,(((4U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                       | (7U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))));
            tracep->chgBit(oldp+1166,((0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x14U])) {
            tracep->chgBit(oldp+1167,(vlTOPp->soc_top__DOT__u_top__DOT__data_req));
            tracep->chgBit(oldp+1168,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req));
            tracep->chgBit(oldp+1169,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__data_req_out));
            tracep->chgIData(oldp+1170,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b),32);
            tracep->chgCData(oldp+1171,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
            tracep->chgCData(oldp+1172,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel),3);
            tracep->chgBit(oldp+1173,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel));
            tracep->chgBit(oldp+1174,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x15U])) {
            tracep->chgCData(oldp+1175,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1176,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1177,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1178,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1179,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1180,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1181,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1182,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1183,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1184,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1185,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1186,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1187,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1188,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1189,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1190,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1191,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1192,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1193,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1194,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1195,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1196,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1197,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1198,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1199,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1200,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1201,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1202,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1203,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1204,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1205,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1206,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1207,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1208,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1209,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1210,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1211,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1212,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1213,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1214,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1215,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1216,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1217,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1218,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1219,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1220,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1221,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1222,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+1223,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_13__DOT__qe));
            tracep->chgBit(oldp+1224,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio17__DOT__qe));
            tracep->chgBit(oldp+1225,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_0__DOT__qe));
            tracep->chgBit(oldp+1226,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_22__DOT__qe));
            tracep->chgBit(oldp+1227,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_23__DOT__qe));
            tracep->chgBit(oldp+1228,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_24__DOT__qe));
            tracep->chgBit(oldp+1229,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_25__DOT__qe));
            tracep->chgBit(oldp+1230,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__qe));
            tracep->chgBit(oldp+1231,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_27__DOT__qe));
            tracep->chgBit(oldp+1232,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_28__DOT__qe));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x16U])) {
            tracep->chgCData(oldp+1233,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1234,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1235,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1236,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1237,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1238,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1239,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1240,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1241,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1242,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1243,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1244,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1245,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1246,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1247,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1248,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1249,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1250,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1251,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1252,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1253,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1254,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1255,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1256,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1257,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1258,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1259,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1260,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1261,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1262,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1263,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1264,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x17U])) {
            tracep->chgBit(oldp+1265,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_q));
            tracep->chgIData(oldp+1266,(vlTOPp->soc_top__DOT__intr_controller__DOT__ip),32);
            tracep->chgBit(oldp+1267,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__q));
            tracep->chgBit(oldp+1268,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__q));
            tracep->chgBit(oldp+1269,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__q));
            tracep->chgBit(oldp+1270,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__q));
            tracep->chgCData(oldp+1271,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_id_q),6);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x18U])) {
            tracep->chgBit(oldp+1272,((1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                             >> 1U))));
            tracep->chgBit(oldp+1273,((1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                             >> 2U))));
            tracep->chgCData(oldp+1274,((7U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1275,((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q))));
            tracep->chgBit(oldp+1276,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q));
            tracep->chgBit(oldp+1277,((1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             >> 5U))));
            tracep->chgIData(oldp+1278,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+1279,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q),32);
            tracep->chgBit(oldp+1280,((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))));
            tracep->chgCData(oldp+1281,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q),2);
            tracep->chgCData(oldp+1282,((3U & ((2U 
                                                & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                                                ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                   >> 2U)
                                                : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)))),2);
            tracep->chgBit(oldp+1283,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
            tracep->chgBit(oldp+1284,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 2U))));
            tracep->chgBit(oldp+1285,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1286,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1287,((0xffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)),8);
            tracep->chgBit(oldp+1288,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                                       & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)))));
            tracep->chgBit(oldp+1289,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q));
            tracep->chgBit(oldp+1290,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q));
            tracep->chgBit(oldp+1291,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q));
            tracep->chgBit(oldp+1292,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q));
            tracep->chgBit(oldp+1293,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q));
            tracep->chgBit(oldp+1294,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q));
            tracep->chgBit(oldp+1295,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q));
            tracep->chgBit(oldp+1296,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q));
            tracep->chgCData(oldp+1297,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q),2);
            tracep->chgIData(oldp+1298,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q),24);
            tracep->chgBit(oldp+1299,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q));
            tracep->chgBit(oldp+1300,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q));
            tracep->chgCData(oldp+1301,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+1302,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q),18);
            tracep->chgIData(oldp+1303,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+1304,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+1305,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+1306,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+1307,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+1308,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+1309,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+1310,((0xfffffff8U 
                                         | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),32);
            tracep->chgCData(oldp+1311,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q),3);
            tracep->chgCData(oldp+1312,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q),6);
            tracep->chgQData(oldp+1313,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q),64);
            tracep->chgQData(oldp+1315,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q),64);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x19U])) {
            tracep->chgBit(oldp+1317,((0U != vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)));
            tracep->chgIData(oldp+1318,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs),18);
            tracep->chgCData(oldp+1319,(((0x4000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                          ? 0xeU : 
                                         ((0x2000U 
                                           & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                           ? 0xdU : 
                                          ((0x1000U 
                                            & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                            ? 0xcU : 
                                           ((0x800U 
                                             & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                             ? 0xbU
                                             : ((0x400U 
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
            tracep->chgBit(oldp+1320,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs 
                                             >> 0x10U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1aU])) {
            tracep->chgIData(oldp+1321,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q),32);
            tracep->chgBit(oldp+1322,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set));
            tracep->chgBit(oldp+1323,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
            tracep->chgBit(oldp+1324,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug));
            tracep->chgBit(oldp+1325,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err));
            tracep->chgBit(oldp+1326,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid));
            tracep->chgCData(oldp+1327,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q),6);
            tracep->chgQData(oldp+1328,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0]),64);
            tracep->chgQData(oldp+1330,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[1]),64);
            tracep->chgQData(oldp+1332,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[2]),64);
            tracep->chgQData(oldp+1334,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[3]),64);
            tracep->chgQData(oldp+1336,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[4]),64);
            tracep->chgQData(oldp+1338,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[5]),64);
            tracep->chgQData(oldp+1340,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[6]),64);
            tracep->chgQData(oldp+1342,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[7]),64);
            tracep->chgQData(oldp+1344,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[8]),64);
            tracep->chgQData(oldp+1346,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[9]),64);
            tracep->chgQData(oldp+1348,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[10]),64);
            tracep->chgQData(oldp+1350,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[11]),64);
            tracep->chgQData(oldp+1352,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[12]),64);
            tracep->chgQData(oldp+1354,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[13]),64);
            tracep->chgQData(oldp+1356,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[14]),64);
            tracep->chgQData(oldp+1358,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[15]),64);
            tracep->chgQData(oldp+1360,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[16]),64);
            tracep->chgQData(oldp+1362,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[17]),64);
            tracep->chgQData(oldp+1364,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[18]),64);
            tracep->chgQData(oldp+1366,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[19]),64);
            tracep->chgQData(oldp+1368,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[20]),64);
            tracep->chgQData(oldp+1370,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[21]),64);
            tracep->chgQData(oldp+1372,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[22]),64);
            tracep->chgQData(oldp+1374,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[23]),64);
            tracep->chgQData(oldp+1376,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[24]),64);
            tracep->chgQData(oldp+1378,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[25]),64);
            tracep->chgQData(oldp+1380,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[26]),64);
            tracep->chgQData(oldp+1382,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[27]),64);
            tracep->chgQData(oldp+1384,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[28]),64);
            tracep->chgQData(oldp+1386,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[29]),64);
            tracep->chgQData(oldp+1388,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[30]),64);
            tracep->chgQData(oldp+1390,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[31]),64);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1bU])) {
            tracep->chgCData(oldp+1392,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op),2);
            tracep->chgBit(oldp+1393,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_valid));
            tracep->chgBit(oldp+1394,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set));
            tracep->chgBit(oldp+1395,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw));
            tracep->chgBit(oldp+1396,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id));
            tracep->chgBit(oldp+1397,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw));
            tracep->chgBit(oldp+1398,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec));
            tracep->chgBit(oldp+1399,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec));
            tracep->chgBit(oldp+1400,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec));
            tracep->chgBit(oldp+1401,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio));
            tracep->chgBit(oldp+1402,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio));
            tracep->chgBit(oldp+1403,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio));
            tracep->chgBit(oldp+1404,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio));
            tracep->chgBit(oldp+1405,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio));
            tracep->chgBit(oldp+1406,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio));
            tracep->chgBit(oldp+1407,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
            tracep->chgBit(oldp+1408,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn));
            tracep->chgBit(oldp+1409,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn));
            tracep->chgBit(oldp+1410,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn));
            tracep->chgBit(oldp+1411,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn));
            tracep->chgBit(oldp+1412,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn));
            tracep->chgBit(oldp+1413,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid));
            tracep->chgCData(oldp+1414,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d),2);
            tracep->chgBit(oldp+1415,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1cU])) {
            tracep->chgCData(oldp+1416,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+1417,((1U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+1418,((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgCData(oldp+1419,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+1420,((1U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+1421,((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgCData(oldp+1422,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+1423,((1U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+1424,((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1dU])) {
            tracep->chgBit(oldp+1425,(vlTOPp->soc_top__DOT__iccm__DOT__instr_valid));
            tracep->chgSData(oldp+1426,((0x1fffU & vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage)),13);
            tracep->chgSData(oldp+1427,((0x1fffU & 
                                         (vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                          >> 0xdU))),13);
            tracep->chgCData(oldp+1428,((0x1fU & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage))),5);
            tracep->chgCData(oldp+1429,((0x1fU & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                                  >> 5U))),5);
            tracep->chgQData(oldp+1430,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[0U]))))),33);
            tracep->chgQData(oldp+1432,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                             << 0x1fU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                               >> 1U)))),33);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1eU])) {
            tracep->chgCData(oldp+1434,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgBit(oldp+1435,((1U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+1436,((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgCData(oldp+1437,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgBit(oldp+1438,((1U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+1439,((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgCData(oldp+1440,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgBit(oldp+1441,((1U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+1442,((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1fU])) {
            tracep->chgBit(oldp+1443,((1U & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+1444,((1U & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+1445,((1U & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+1446,((1U & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+1447,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+1448,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+1449,((1U & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+1450,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+1451,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+1452,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+1453,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x20U])) {
            tracep->chgCData(oldp+1454,((3U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU))),2);
            tracep->chgBit(oldp+1455,((1U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                             >> 0xaU))));
            tracep->chgCData(oldp+1456,((3U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 8U))),2);
            tracep->chgCData(oldp+1457,((0xffU & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o))),8);
            tracep->chgBit(oldp+1458,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid));
            tracep->chgCData(oldp+1459,((0xfU & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                 >> 1U))),4);
            tracep->chgBit(oldp+1460,((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o))));
            tracep->chgSData(oldp+1461,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
            tracep->chgCData(oldp+1462,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x21U])) {
            tracep->chgBit(oldp+1463,((1U & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))));
            tracep->chgIData(oldp+1464,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask),32);
            tracep->chgBit(oldp+1465,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+1466,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x22U])) {
            tracep->chgBit(oldp+1467,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__iccm_to_xbar 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1468,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__iccm_to_xbar 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1469,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__iccm_to_xbar 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1470,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__iccm_to_xbar 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1471,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__iccm_to_xbar 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1472,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__iccm_to_xbar 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1473,((IData)((vlTOPp->soc_top__DOT__iccm_to_xbar 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1474,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__iccm_to_xbar 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1475,((1U & (IData)(vlTOPp->soc_top__DOT__iccm_to_xbar))));
            tracep->chgIData(oldp+1476,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword),32);
            tracep->chgIData(oldp+1477,((IData)((vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                                 >> 1U))),32);
            tracep->chgBit(oldp+1478,((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o))));
            tracep->chgIData(oldp+1479,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword),32);
            tracep->chgQData(oldp+1480,(((QData)((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword)) 
                                         << 1U)),33);
            tracep->chgQData(oldp+1482,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x23U])) {
            tracep->chgSData(oldp+1484,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_c_id),16);
            tracep->chgWData(oldp+1485,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q),96);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x24U])) {
            tracep->chgBit(oldp+1488,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_q));
            tracep->chgCData(oldp+1489,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q),2);
            tracep->chgCData(oldp+1490,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q),2);
            tracep->chgCData(oldp+1491,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_q),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x25U])) {
            tracep->chgCData(oldp+1492,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id),2);
            tracep->chgBit(oldp+1493,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_req_int));
            tracep->chgCData(oldp+1494,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x26U])) {
            tracep->chgBit(oldp+1495,((1U & vlTOPp->soc_top__DOT__u_top__DOT____Vcellout__u_core__crash_dump_o[0U])));
            tracep->chgWData(oldp+1496,(vlTOPp->soc_top__DOT__u_top__DOT____Vcellout__u_core__crash_dump_o),128);
            tracep->chgBit(oldp+1500,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_id));
            tracep->chgBit(oldp+1501,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_mret_id));
            tracep->chgBit(oldp+1502,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_dret_id));
            tracep->chgBit(oldp+1503,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
            tracep->chgBit(oldp+1504,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x27U])) {
            tracep->chgIData(oldp+1505,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc),32);
            tracep->chgIData(oldp+1506,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc),32);
            tracep->chgIData(oldp+1507,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a),32);
            tracep->chgIData(oldp+1508,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b),32);
            tracep->chgQData(oldp+1509,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b),33);
            tracep->chgQData(oldp+1511,((0x1ffffffffULL 
                                         & (~ ((QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                               << 1U)))),33);
            tracep->chgCData(oldp+1513,((0x3fU & ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)))),6);
            tracep->chgCData(oldp+1514,(((0x10U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0xfU 
                                                                & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                                   >> 0x18U))))) 
                                                   << 4U)) 
                                         | (0xfU & 
                                            (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                             >> 0x18U)))),5);
            tracep->chgCData(oldp+1515,((0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                  >> 0x10U))),5);
            tracep->chgIData(oldp+1516,((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                         | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+1517,((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                         & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+1518,((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                         ^ vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgBit(oldp+1519,((1U & (((IData)(0x20U) 
                                              - (0x1fU 
                                                 & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                             >> 5U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x28U])) {
            tracep->chgCData(oldp+1520,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be),4);
            tracep->chgIData(oldp+1521,((0xfffffffcU 
                                         & ((IData)(
                                                    (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 3U)) 
                                            << 2U))),32);
            tracep->chgIData(oldp+1522,((IData)((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                 >> 1U))),32);
            tracep->chgQData(oldp+1523,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext),34);
            tracep->chgBit(oldp+1525,((0U == (IData)(
                                                     (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 1U)))));
            tracep->chgCData(oldp+1526,(((2U & ((IData)(
                                                        (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 0x21U)) 
                                                << 1U)) 
                                         | (1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)))),2);
            tracep->chgCData(oldp+1527,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                       >> 1U)))),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x29U])) {
            tracep->chgBit(oldp+1528,((1U & (vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1529,((7U & (vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1530,((7U & (vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1531,((3U & (vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1532,((0xffU & (vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1533,(((vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__lsu_to_xbar[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1534,((0xfU & ((vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__lsu_to_xbar[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1535,(((vlTOPp->soc_top__DOT__lsu_to_xbar[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__lsu_to_xbar[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1536,((1U & vlTOPp->soc_top__DOT__lsu_to_xbar[0U])));
            tracep->chgCData(oldp+1537,(vlTOPp->soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10),4);
            tracep->chgCData(oldp+1538,((0xfU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])),4);
            tracep->chgBit(oldp+1539,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1540,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1541,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1542,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1543,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1544,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1545,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1546,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1547,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U])));
            tracep->chgBit(oldp+1548,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hold_all_requests));
            tracep->chgBit(oldp+1549,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1550,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1551,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1552,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1553,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1554,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1555,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1556,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1557,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [0U][0U])));
            tracep->chgBit(oldp+1558,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1559,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1560,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1561,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1562,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1563,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1564,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1565,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1566,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [1U][0U])));
            tracep->chgBit(oldp+1567,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1568,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1569,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1570,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1571,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1572,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1573,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1574,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1575,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [2U][0U])));
            tracep->chgBit(oldp+1576,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1577,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1578,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1579,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1580,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1581,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1582,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1583,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1584,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [3U][0U])));
            tracep->chgBit(oldp+1585,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1586,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1587,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1588,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1589,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1590,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1591,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1592,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1593,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [4U][0U])));
            tracep->chgBit(oldp+1594,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1595,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1596,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1597,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1598,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1599,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1600,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1601,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1602,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [5U][0U])));
            tracep->chgBit(oldp+1603,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1604,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1605,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1606,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1607,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1608,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1609,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1610,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1611,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [6U][0U])));
            tracep->chgBit(oldp+1612,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1613,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1614,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1615,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1616,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1617,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1618,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1619,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1620,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [7U][0U])));
            tracep->chgBit(oldp+1621,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1622,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1623,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1624,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1625,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1626,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1627,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1628,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1629,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [8U][0U])));
            tracep->chgBit(oldp+1630,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [9U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1631,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [9U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1632,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [9U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1633,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [9U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1634,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [9U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1635,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [9U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1636,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1637,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1638,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [9U][0U])));
            tracep->chgBit(oldp+1639,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [0xaU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1640,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1641,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1642,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1643,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [0xaU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1644,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [0xaU][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [0xaU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1645,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [0xaU][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [0xaU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1646,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [0xaU][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [0xaU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1647,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [0xaU][0U])));
            tracep->chgBit(oldp+1648,((1U & (vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                             >> 0x15U))));
            tracep->chgWData(oldp+1649,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i),88);
            tracep->chgBit(oldp+1652,((1U & vlTOPp->soc_top__DOT__lsu_to_xbar[0U])));
            tracep->chgBit(oldp+1653,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [0xaU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1654,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1655,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1656,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1657,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [0xaU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1658,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [0xaU][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [0xaU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1659,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [0xaU][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [0xaU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1660,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [0xaU][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [0xaU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1661,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [0xaU][0U])));
            tracep->chgBit(oldp+1662,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1663,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1664,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1665,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1666,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1667,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1668,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1669,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1670,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [0U][0U])));
            tracep->chgBit(oldp+1671,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [0U][2U] 
                                             >> 0x15U))));
            __Vtemp1895[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [0U][0U]);
            __Vtemp1895[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [0U][1U]) | (0xfffffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [0U][1U]));
            __Vtemp1895[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [0U][2U]) | (0x1ffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [0U][2U]));
            tracep->chgWData(oldp+1672,(__Vtemp1895),85);
            tracep->chgBit(oldp+1675,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [0U][0U])));
            tracep->chgBit(oldp+1676,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1677,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1678,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1679,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1680,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1681,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1682,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1683,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1684,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [1U][0U])));
            tracep->chgBit(oldp+1685,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [1U][2U] 
                                             >> 0x15U))));
            __Vtemp1911[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [1U][0U]);
            __Vtemp1911[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [1U][1U]) | (0xfffffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [1U][1U]));
            __Vtemp1911[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [1U][2U]) | (0x1ffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [1U][2U]));
            tracep->chgWData(oldp+1686,(__Vtemp1911),85);
            tracep->chgBit(oldp+1689,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [1U][0U])));
            tracep->chgBit(oldp+1690,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1691,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1692,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1693,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1694,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1695,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1696,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1697,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1698,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [2U][0U])));
            tracep->chgBit(oldp+1699,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [2U][2U] 
                                             >> 0x15U))));
            __Vtemp1927[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [2U][0U]);
            __Vtemp1927[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [2U][1U]) | (0xfffffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [2U][1U]));
            __Vtemp1927[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [2U][2U]) | (0x1ffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [2U][2U]));
            tracep->chgWData(oldp+1700,(__Vtemp1927),85);
            tracep->chgBit(oldp+1703,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [2U][0U])));
            tracep->chgBit(oldp+1704,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1705,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1706,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1707,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1708,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1709,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1710,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1711,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1712,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [3U][0U])));
            tracep->chgBit(oldp+1713,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [3U][2U] 
                                             >> 0x15U))));
            __Vtemp1943[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [3U][0U]);
            __Vtemp1943[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [3U][1U]) | (0xfffffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [3U][1U]));
            __Vtemp1943[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [3U][2U]) | (0x1ffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [3U][2U]));
            tracep->chgWData(oldp+1714,(__Vtemp1943),85);
            tracep->chgBit(oldp+1717,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [3U][0U])));
            tracep->chgBit(oldp+1718,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1719,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1720,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1721,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1722,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1723,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1724,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1725,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1726,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [4U][0U])));
            tracep->chgBit(oldp+1727,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [4U][2U] 
                                             >> 0x15U))));
            __Vtemp1959[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [4U][0U]);
            __Vtemp1959[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [4U][1U]) | (0xfffffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [4U][1U]));
            __Vtemp1959[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [4U][2U]) | (0x1ffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [4U][2U]));
            tracep->chgWData(oldp+1728,(__Vtemp1959),85);
            tracep->chgBit(oldp+1731,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [4U][0U])));
            tracep->chgBit(oldp+1732,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1733,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1734,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1735,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1736,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1737,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1738,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1739,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1740,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [5U][0U])));
            tracep->chgBit(oldp+1741,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [5U][2U] 
                                             >> 0x15U))));
            __Vtemp1975[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [5U][0U]);
            __Vtemp1975[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [5U][1U]) | (0xfffffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [5U][1U]));
            __Vtemp1975[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [5U][2U]) | (0x1ffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [5U][2U]));
            tracep->chgWData(oldp+1742,(__Vtemp1975),85);
            tracep->chgBit(oldp+1745,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [5U][0U])));
            tracep->chgBit(oldp+1746,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1747,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1748,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1749,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1750,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1751,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1752,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1753,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1754,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [6U][0U])));
            tracep->chgBit(oldp+1755,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [6U][2U] 
                                             >> 0x15U))));
            __Vtemp1991[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [6U][0U]);
            __Vtemp1991[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [6U][1U]) | (0xfffffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [6U][1U]));
            __Vtemp1991[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [6U][2U]) | (0x1ffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [6U][2U]));
            tracep->chgWData(oldp+1756,(__Vtemp1991),85);
            tracep->chgBit(oldp+1759,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [6U][0U])));
            tracep->chgBit(oldp+1760,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1761,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1762,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1763,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1764,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1765,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1766,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1767,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1768,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [7U][0U])));
            tracep->chgBit(oldp+1769,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [7U][2U] 
                                             >> 0x15U))));
            __Vtemp2007[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [7U][0U]);
            __Vtemp2007[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [7U][1U]) | (0xfffffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [7U][1U]));
            __Vtemp2007[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [7U][2U]) | (0x1ffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [7U][2U]));
            tracep->chgWData(oldp+1770,(__Vtemp2007),85);
            tracep->chgBit(oldp+1773,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [7U][0U])));
            tracep->chgBit(oldp+1774,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1775,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1776,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1777,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1778,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1779,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1780,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1781,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1782,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [8U][0U])));
            tracep->chgBit(oldp+1783,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [8U][2U] 
                                             >> 0x15U))));
            __Vtemp2023[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [8U][0U]);
            __Vtemp2023[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [8U][1U]) | (0xfffffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [8U][1U]));
            __Vtemp2023[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [8U][2U]) | (0x1ffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [8U][2U]));
            tracep->chgWData(oldp+1784,(__Vtemp2023),85);
            tracep->chgBit(oldp+1787,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [8U][0U])));
            tracep->chgBit(oldp+1788,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [9U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1789,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [9U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1790,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [9U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1791,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [9U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1792,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [9U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1793,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [9U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1794,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1795,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1796,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [9U][0U])));
            tracep->chgBit(oldp+1797,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [9U][2U] 
                                             >> 0x15U))));
            __Vtemp2039[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [9U][0U]);
            __Vtemp2039[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [9U][1U]) | (0xfffffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [9U][1U]));
            __Vtemp2039[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [9U][2U]) | (0x1ffffeU 
                                             & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [9U][2U]));
            tracep->chgWData(oldp+1798,(__Vtemp2039),85);
            tracep->chgBit(oldp+1801,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [9U][0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2aU])) {
            tracep->chgBit(oldp+1802,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1803,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1804,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1805,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1806,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1807,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1808,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1809,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1810,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1811,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1812,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1813,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1814,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1815,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1816,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1817,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1818,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1819,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2bU])) {
            tracep->chgBit(oldp+1820,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1821,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1822,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1823,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1824,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1825,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1826,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1827,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1828,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1829,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1830,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1831,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1832,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1833,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1834,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1835,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1836,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1837,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2cU])) {
            tracep->chgBit(oldp+1838,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1839,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1840,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1841,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1842,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1843,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1844,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1845,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1846,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1847,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1848,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1849,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1850,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1851,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1852,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1853,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1854,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1855,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2dU])) {
            tracep->chgBit(oldp+1856,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1857,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1858,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1859,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1860,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1861,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1862,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1863,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1864,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1865,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1866,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1867,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1868,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1869,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1870,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1871,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1872,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1873,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2eU])) {
            tracep->chgBit(oldp+1874,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1875,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1876,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1877,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1878,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1879,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1880,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1881,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1882,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1883,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1884,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1885,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1886,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1887,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1888,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1889,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1890,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1891,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2fU])) {
            tracep->chgBit(oldp+1892,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1893,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1894,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1895,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1896,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1897,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1898,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1899,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1900,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [0U][0U])));
            tracep->chgBit(oldp+1901,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1902,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1903,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1904,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1905,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1906,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1907,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1908,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1909,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [1U][0U])));
            tracep->chgBit(oldp+1910,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1911,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1912,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1913,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1914,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1915,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1916,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1917,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1918,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [9U][0U])));
            tracep->chgBit(oldp+1919,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1920,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1921,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1922,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1923,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1924,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1925,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1926,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1927,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [2U][0U])));
            tracep->chgBit(oldp+1928,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1929,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1930,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1931,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1932,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1933,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1934,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1935,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1936,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [3U][0U])));
            tracep->chgBit(oldp+1937,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1938,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1939,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1940,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1941,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1942,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1943,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1944,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1945,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [4U][0U])));
            tracep->chgBit(oldp+1946,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1947,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1948,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1949,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1950,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1951,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1952,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1953,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1954,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [5U][0U])));
            tracep->chgBit(oldp+1955,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1956,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1957,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1958,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1959,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1960,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1961,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1962,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1963,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [6U][0U])));
            tracep->chgBit(oldp+1964,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1965,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1966,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1967,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1968,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1969,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1970,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1971,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1972,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [7U][0U])));
            tracep->chgBit(oldp+1973,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1974,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1975,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1976,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1977,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1978,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1979,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1980,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1981,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [8U][0U])));
            tracep->chgBit(oldp+1982,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1983,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1984,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1985,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1986,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1987,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1988,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1989,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1990,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [0U][0U])));
            tracep->chgBit(oldp+1991,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1992,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1993,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1994,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1995,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1996,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1997,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1998,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1999,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [1U][0U])));
            tracep->chgBit(oldp+2000,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2001,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2002,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2003,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2004,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2005,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2006,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2007,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2008,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [2U][0U])));
            tracep->chgBit(oldp+2009,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2010,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2011,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2012,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2013,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2014,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2015,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2016,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2017,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [3U][0U])));
            tracep->chgBit(oldp+2018,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2019,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2020,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2021,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2022,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2023,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2024,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2025,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2026,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [4U][0U])));
            tracep->chgBit(oldp+2027,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2028,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2029,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2030,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2031,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2032,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2033,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2034,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2035,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [5U][0U])));
            tracep->chgBit(oldp+2036,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2037,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2038,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2039,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2040,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2041,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2042,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2043,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2044,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [6U][0U])));
            tracep->chgBit(oldp+2045,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2046,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2047,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2048,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2049,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2050,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2051,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2052,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2053,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [7U][0U])));
            tracep->chgBit(oldp+2054,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2055,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2056,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2057,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2058,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2059,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2060,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2061,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2062,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [8U][0U])));
            tracep->chgBit(oldp+2063,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2064,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2065,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2066,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2067,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2068,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2069,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2070,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2071,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [9U][0U])));
            tracep->chgBit(oldp+2072,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2073,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2074,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2075,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2076,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2077,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2078,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2079,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2080,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [0U][0U])));
            tracep->chgBit(oldp+2081,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2082,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2083,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2084,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2085,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2086,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2087,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2088,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2089,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [1U][0U])));
            tracep->chgBit(oldp+2090,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2091,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2092,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2093,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2094,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2095,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2096,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2097,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2098,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [2U][0U])));
            tracep->chgBit(oldp+2099,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2100,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2101,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2102,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2103,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2104,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2105,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2106,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2107,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [3U][0U])));
            tracep->chgBit(oldp+2108,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2109,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2110,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2111,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2112,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2113,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2114,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2115,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2116,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [4U][0U])));
            tracep->chgBit(oldp+2117,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2118,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2119,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2120,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2121,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2122,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2123,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2124,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2125,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [5U][0U])));
            tracep->chgBit(oldp+2126,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2127,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2128,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2129,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2130,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2131,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2132,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2133,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2134,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [6U][0U])));
            tracep->chgBit(oldp+2135,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2136,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2137,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2138,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2139,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2140,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2141,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2142,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2143,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [7U][0U])));
            tracep->chgBit(oldp+2144,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2145,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2146,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2147,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2148,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2149,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2150,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2151,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2152,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [8U][0U])));
            tracep->chgBit(oldp+2153,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [9U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2154,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [9U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2155,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [9U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2156,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [9U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2157,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [9U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2158,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [9U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2159,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2160,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2161,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [9U][0U])));
            tracep->chgCData(oldp+2162,((0x3cU & ((
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][2U] 
                                                   << 0x1bU) 
                                                  | (0x7fffffcU 
                                                     & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [1U][1U] 
                                                        >> 5U))))),6);
            tracep->chgIData(oldp+2163,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgCData(oldp+2164,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgSData(oldp+2165,((0x3ffU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [1U][0U] 
                                                      >> 1U)))),10);
            tracep->chgSData(oldp+2166,((0xfc00U | 
                                         (0x3ffU & 
                                          ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][1U] 
                                            << 0x15U) 
                                           | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][0U] 
                                              >> 0xbU))))),16);
            tracep->chgSData(oldp+2167,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [1U][1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [1U][0U] 
                                             >> 1U)))),16);
            tracep->chgSData(oldp+2168,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [1U][1U] 
                                           << 0xfU) 
                                          | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [1U][0U] 
                                             >> 0x11U)))),16);
            tracep->chgBit(oldp+2169,((((0U == (7U 
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
            tracep->chgBit(oldp+2170,((0U == (7U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2171,((1U == (7U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2172,((4U == (7U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0x12U)))));
            tracep->chgCData(oldp+2173,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [1U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [1U][1U] 
                                                        >> 5U)))))),4);
            tracep->chgSData(oldp+2174,((0x3ffU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [1U][0U] 
                                                      >> 1U)))),16);
            tracep->chgCData(oldp+2175,(((4U != (7U 
                                                 & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [0U][2U] 
                                                    >> 0x12U)))
                                          ? 0U : 1U)),2);
            tracep->chgCData(oldp+2176,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2177,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgCData(oldp+2178,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgBit(oldp+2179,((((0U == (7U 
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
            tracep->chgBit(oldp+2180,((0U == (7U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2181,((1U == (7U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2182,((4U == (7U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0x12U)))));
            tracep->chgCData(oldp+2183,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [0U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [0U][1U] 
                                                        >> 5U)))))),4);
            tracep->chgCData(oldp+2184,((0x1eU & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [0U][1U])),5);
            tracep->chgSData(oldp+2185,((0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))),9);
            tracep->chgIData(oldp+2186,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgCData(oldp+2187,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgBit(oldp+2188,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2189,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 2U))));
            tracep->chgBit(oldp+2190,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 3U))));
            tracep->chgBit(oldp+2191,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 4U))));
            tracep->chgBit(oldp+2192,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 5U))));
            tracep->chgBit(oldp+2193,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 6U))));
            tracep->chgBit(oldp+2194,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 7U))));
            tracep->chgBit(oldp+2195,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 8U))));
            tracep->chgBit(oldp+2196,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 9U))));
            tracep->chgBit(oldp+2197,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2198,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2199,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2200,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2201,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2202,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2203,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2204,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2205,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2206,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2207,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2208,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2209,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2210,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2211,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2212,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2213,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2214,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2215,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2216,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2217,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2218,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2219,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [9U][1U])));
            tracep->chgCData(oldp+2220,((7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                << 0x1fU) 
                                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][0U] 
                                                  >> 1U)))),3);
            tracep->chgCData(oldp+2221,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [9U][1U] 
                                                   << 0x1fU) 
                                                  | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [9U][0U] 
                                                     >> 1U)))),6);
            tracep->chgBit(oldp+2222,((((0U == (7U 
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
            tracep->chgBit(oldp+2223,((0U == (7U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2224,((1U == (7U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2225,((4U == (7U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0x12U)))));
            tracep->chgCData(oldp+2226,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [9U][1U] 
                                                        >> 5U)))))),4);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x2fU] | vlTOPp->__Vm_traceActivity
                         [0x31U]))) {
            tracep->chgBit(oldp+2227,(((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                                       & (0U != (3U 
                                                 & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [1U][2U] 
                                                     << 0x1bU) 
                                                    | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                       [1U][1U] 
                                                       >> 5U)))))));
            tracep->chgBit(oldp+2228,((1U & (~ ((((0U 
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
            tracep->chgBit(oldp+2229,((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                        & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                       & (((4U == (7U 
                                                   & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [1U][2U] 
                                                      >> 0x12U))) 
                                           | (1U == 
                                              (7U & 
                                               (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][2U] 
                                                >> 0x12U)))) 
                                          | (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))));
            tracep->chgBit(oldp+2230,((((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk) 
                                        & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk)) 
                                       & (((4U == (7U 
                                                   & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [0U][2U] 
                                                      >> 0x12U))) 
                                           | (1U == 
                                              (7U & 
                                               (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [0U][2U] 
                                                >> 0x12U)))) 
                                          | (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk)))));
            tracep->chgSData(oldp+2231,(((((4U != (7U 
                                                   & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [0U][2U] 
                                                      >> 0x12U)))
                                            ? 0U : 1U) 
                                          << 0xbU) 
                                         | (((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error) 
                                             << 0xaU) 
                                            | (0x3ffU 
                                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  >> 5U))))),13);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x2fU] | vlTOPp->__Vm_traceActivity
                         [0x4aU]))) {
            tracep->chgBit(oldp+2232,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 3U))));
            tracep->chgBit(oldp+2233,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 4U))));
            tracep->chgBit(oldp+2234,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 5U))));
            tracep->chgBit(oldp+2235,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 6U))));
            tracep->chgBit(oldp+2236,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 7U))));
            tracep->chgBit(oldp+2237,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 8U))));
            tracep->chgBit(oldp+2238,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 9U))));
            tracep->chgBit(oldp+2239,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xaU))));
            tracep->chgBit(oldp+2240,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xbU))));
            tracep->chgBit(oldp+2241,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xcU))));
            tracep->chgBit(oldp+2242,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xdU))));
            tracep->chgBit(oldp+2243,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xeU))));
            tracep->chgBit(oldp+2244,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xfU))));
            tracep->chgBit(oldp+2245,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x10U))));
            tracep->chgBit(oldp+2246,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x19U))));
            tracep->chgBit(oldp+2247,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1aU))));
            tracep->chgBit(oldp+2248,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1bU))));
            tracep->chgBit(oldp+2249,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1cU))));
            tracep->chgBit(oldp+2250,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1dU))));
            tracep->chgBit(oldp+2251,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1eU))));
            tracep->chgBit(oldp+2252,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1fU))));
            tracep->chgBit(oldp+2253,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we) 
                                       & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [9U][1U])));
            tracep->chgCData(oldp+2254,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio3_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2255,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio6_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2256,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio8_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2257,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio9_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2258,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio10_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2259,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio11_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2260,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio12_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2261,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio14_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2262,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio15_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2263,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio16_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2264,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio17_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2265,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio18_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2266,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio23_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2267,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio26_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2268,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio27_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2269,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio28_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2270,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio29_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2271,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio30_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2272,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio31_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgBit(oldp+2273,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 1U))));
            tracep->chgBit(oldp+2274,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 2U))));
            tracep->chgBit(oldp+2275,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 3U))));
            tracep->chgBit(oldp+2276,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 4U))));
            tracep->chgBit(oldp+2277,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 5U))));
            tracep->chgBit(oldp+2278,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xaU))));
            tracep->chgBit(oldp+2279,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xdU))));
            tracep->chgBit(oldp+2280,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xeU))));
            tracep->chgBit(oldp+2281,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xfU))));
            tracep->chgBit(oldp+2282,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x10U))));
            tracep->chgBit(oldp+2283,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x11U))));
            tracep->chgBit(oldp+2284,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x12U))));
            tracep->chgBit(oldp+2285,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x13U))));
            tracep->chgBit(oldp+2286,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x14U))));
            tracep->chgBit(oldp+2287,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x15U))));
            tracep->chgBit(oldp+2288,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x16U))));
            tracep->chgBit(oldp+2289,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x17U))));
            tracep->chgBit(oldp+2290,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x18U))));
            tracep->chgBit(oldp+2291,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x19U))));
            tracep->chgBit(oldp+2292,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1aU))));
            tracep->chgBit(oldp+2293,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1bU))));
            tracep->chgBit(oldp+2294,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1cU))));
            tracep->chgBit(oldp+2295,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1dU))));
            tracep->chgBit(oldp+2296,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1eU))));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x2fU] | vlTOPp->__Vm_traceActivity
                         [0x55U]))) {
            tracep->chgBit(oldp+2297,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 1U))));
            tracep->chgBit(oldp+2298,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 2U))));
            tracep->chgBit(oldp+2299,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x11U))));
            tracep->chgBit(oldp+2300,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x12U))));
            tracep->chgBit(oldp+2301,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x13U))));
            tracep->chgBit(oldp+2302,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x14U))));
            tracep->chgBit(oldp+2303,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x15U))));
            tracep->chgBit(oldp+2304,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x16U))));
            tracep->chgBit(oldp+2305,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x17U))));
            tracep->chgBit(oldp+2306,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x18U))));
            tracep->chgCData(oldp+2307,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio0_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2308,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio1_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2309,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio2_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2310,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio4_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2311,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio5_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2312,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio13_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2313,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio19_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2314,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio20_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2315,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio21_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2316,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio22_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2317,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio24_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2318,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio25_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgBit(oldp+2319,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 6U))));
            tracep->chgBit(oldp+2320,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 7U))));
            tracep->chgBit(oldp+2321,((1U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we)
                                              ? (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [9U][0U] 
                                                 >> 8U)
                                              : (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__d)))));
            tracep->chgBit(oldp+2322,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 9U))));
            tracep->chgBit(oldp+2323,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xbU))));
            tracep->chgBit(oldp+2324,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xcU))));
            tracep->chgBit(oldp+2325,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1fU))));
            tracep->chgBit(oldp+2326,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we) 
                                       & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [9U][1U])));
            tracep->chgCData(oldp+2327,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we)
                                          ? (7U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgBit(oldp+2328,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we) 
                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 1U))));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x2fU] | vlTOPp->__Vm_traceActivity
                         [0x59U]))) {
            tracep->chgIData(oldp+2329,(((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we)
                                          ? ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgIData(oldp+2330,(((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we)
                                          ? ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgIData(oldp+2331,(((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we)
                                          ? ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgIData(oldp+2332,(((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we)
                                          ? ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgIData(oldp+2333,(((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we)
                                          ? ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgIData(oldp+2334,(((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__ctrl_en_input_filter_we)
                                          ? ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][0U] 
                                                >> 1U))
                                          : 0U)),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x30U])) {
            tracep->chgBit(oldp+2335,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we));
            tracep->chgBit(oldp+2336,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re));
            tracep->chgBit(oldp+2337,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
            tracep->chgBit(oldp+2338,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
            tracep->chgBit(oldp+2339,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
            tracep->chgBit(oldp+2340,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
            tracep->chgBit(oldp+2341,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+2342,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+2343,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x31U])) {
            tracep->chgBit(oldp+2344,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we));
            tracep->chgBit(oldp+2345,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re));
            tracep->chgBit(oldp+2346,(((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re) 
                                         | (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))))) 
                                       | (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))));
            tracep->chgBit(oldp+2347,((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re) 
                                        | (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)))))));
            tracep->chgBit(oldp+2348,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err));
            tracep->chgBit(oldp+2349,(((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 2U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2350,(((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 4U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2351,((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 4U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+2352,(((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 5U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2353,((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 5U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+2354,(((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 6U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2355,((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 6U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+2356,(((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 7U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2357,((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 7U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+2358,(((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 8U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2359,((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 8U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+2360,(((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 9U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2361,((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 9U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgSData(oldp+2362,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit),15);
            tracep->chgBit(oldp+2363,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
            tracep->chgBit(oldp+2364,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
            tracep->chgBit(oldp+2365,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
            tracep->chgBit(oldp+2366,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
            tracep->chgBit(oldp+2367,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+2368,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+2369,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk));
            tracep->chgBit(oldp+2370,(vlTOPp->soc_top__DOT__dccm__DOT__we));
            tracep->chgBit(oldp+2371,(vlTOPp->soc_top__DOT__dccm__DOT__req));
            tracep->chgSData(oldp+2372,(vlTOPp->soc_top__DOT__dccm__DOT__addr),12);
            tracep->chgIData(oldp+2373,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+2374,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int),32);
            tracep->chgCData(oldp+2375,(vlTOPp->soc_top__DOT__dccm__DOT__data_we),4);
            tracep->chgBit(oldp+2376,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack));
            tracep->chgBit(oldp+2377,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error));
            tracep->chgBit(oldp+2378,(((IData)(vlTOPp->soc_top__DOT__dccm__DOT__req) 
                                       & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__we)))));
            tracep->chgBit(oldp+2379,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error));
            tracep->chgIData(oldp+2380,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int),32);
            tracep->chgIData(oldp+2381,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+2382,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__unnamedblk1__DOT__i),32);
            tracep->chgBit(oldp+2383,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+2384,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+2385,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk));
            tracep->chgBit(oldp+2386,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+2387,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x33U])) {
            tracep->chgCData(oldp+2388,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[0]),3);
            tracep->chgCData(oldp+2389,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[1]),3);
            tracep->chgCData(oldp+2390,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[2]),3);
            tracep->chgCData(oldp+2391,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[3]),3);
            tracep->chgCData(oldp+2392,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[4]),3);
            tracep->chgCData(oldp+2393,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[5]),3);
            tracep->chgCData(oldp+2394,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[6]),3);
            tracep->chgCData(oldp+2395,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[7]),3);
            tracep->chgCData(oldp+2396,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[8]),3);
            tracep->chgCData(oldp+2397,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[9]),3);
            tracep->chgCData(oldp+2398,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[10]),3);
            tracep->chgCData(oldp+2399,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[11]),3);
            tracep->chgCData(oldp+2400,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[12]),3);
            tracep->chgCData(oldp+2401,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[13]),3);
            tracep->chgCData(oldp+2402,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[14]),3);
            tracep->chgCData(oldp+2403,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[15]),3);
            tracep->chgCData(oldp+2404,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[16]),3);
            tracep->chgCData(oldp+2405,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[17]),3);
            tracep->chgCData(oldp+2406,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[18]),3);
            tracep->chgCData(oldp+2407,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[19]),3);
            tracep->chgCData(oldp+2408,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[20]),3);
            tracep->chgCData(oldp+2409,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[21]),3);
            tracep->chgCData(oldp+2410,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[22]),3);
            tracep->chgCData(oldp+2411,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[23]),3);
            tracep->chgCData(oldp+2412,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[24]),3);
            tracep->chgCData(oldp+2413,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[25]),3);
            tracep->chgCData(oldp+2414,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[26]),3);
            tracep->chgCData(oldp+2415,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[27]),3);
            tracep->chgCData(oldp+2416,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[28]),3);
            tracep->chgCData(oldp+2417,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[29]),3);
            tracep->chgCData(oldp+2418,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[30]),3);
            tracep->chgCData(oldp+2419,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[31]),3);
            tracep->chgCData(oldp+2420,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0]),3);
            tracep->chgCData(oldp+2421,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[1]),3);
            tracep->chgCData(oldp+2422,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[2]),3);
            tracep->chgCData(oldp+2423,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[3]),3);
            tracep->chgCData(oldp+2424,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[4]),3);
            tracep->chgCData(oldp+2425,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[5]),3);
            tracep->chgCData(oldp+2426,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[6]),3);
            tracep->chgCData(oldp+2427,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[7]),3);
            tracep->chgCData(oldp+2428,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[8]),3);
            tracep->chgCData(oldp+2429,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[9]),3);
            tracep->chgCData(oldp+2430,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[10]),3);
            tracep->chgCData(oldp+2431,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[11]),3);
            tracep->chgCData(oldp+2432,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[12]),3);
            tracep->chgCData(oldp+2433,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[13]),3);
            tracep->chgCData(oldp+2434,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[14]),3);
            tracep->chgCData(oldp+2435,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[15]),3);
            tracep->chgCData(oldp+2436,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[16]),3);
            tracep->chgCData(oldp+2437,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[17]),3);
            tracep->chgCData(oldp+2438,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[18]),3);
            tracep->chgCData(oldp+2439,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[19]),3);
            tracep->chgCData(oldp+2440,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[20]),3);
            tracep->chgCData(oldp+2441,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[21]),3);
            tracep->chgCData(oldp+2442,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[22]),3);
            tracep->chgCData(oldp+2443,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[23]),3);
            tracep->chgCData(oldp+2444,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[24]),3);
            tracep->chgCData(oldp+2445,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[25]),3);
            tracep->chgCData(oldp+2446,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[26]),3);
            tracep->chgCData(oldp+2447,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[27]),3);
            tracep->chgCData(oldp+2448,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[28]),3);
            tracep->chgCData(oldp+2449,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[29]),3);
            tracep->chgCData(oldp+2450,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[30]),3);
            tracep->chgCData(oldp+2451,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[31]),3);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x33U] | vlTOPp->__Vm_traceActivity
                         [0x35U]))) {
            tracep->chgCData(oldp+2452,((7U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U])),3);
            tracep->chgCData(oldp+2453,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0x1dU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 3U)))),3);
            tracep->chgCData(oldp+2454,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0x1aU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 6U)))),3);
            tracep->chgCData(oldp+2455,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0x17U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 9U)))),3);
            tracep->chgCData(oldp+2456,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0x14U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0xcU)))),3);
            tracep->chgCData(oldp+2457,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0x11U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0xfU)))),3);
            tracep->chgCData(oldp+2458,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0xeU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x12U)))),3);
            tracep->chgCData(oldp+2459,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0xbU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x15U)))),3);
            tracep->chgCData(oldp+2460,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 8U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x18U)))),3);
            tracep->chgCData(oldp+2461,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 5U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x1bU)))),3);
            tracep->chgCData(oldp+2462,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 2U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x1eU)))),3);
            tracep->chgCData(oldp+2463,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 1U)))),3);
            tracep->chgCData(oldp+2464,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x1cU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 4U)))),3);
            tracep->chgCData(oldp+2465,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x19U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 7U)))),3);
            tracep->chgCData(oldp+2466,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x16U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0xaU)))),3);
            tracep->chgCData(oldp+2467,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x13U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0xdU)))),3);
            tracep->chgCData(oldp+2468,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x10U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x10U)))),3);
            tracep->chgCData(oldp+2469,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0xdU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x13U)))),3);
            tracep->chgCData(oldp+2470,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0xaU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x16U)))),3);
            tracep->chgCData(oldp+2471,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 7U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x19U)))),3);
            tracep->chgCData(oldp+2472,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 4U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x1cU)))),3);
            tracep->chgCData(oldp+2473,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 1U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x1fU)))),3);
            tracep->chgCData(oldp+2474,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0x1eU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 2U)))),3);
            tracep->chgCData(oldp+2475,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0x1bU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 5U)))),3);
            tracep->chgCData(oldp+2476,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0x18U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 8U)))),3);
            tracep->chgCData(oldp+2477,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0x15U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0xbU)))),3);
            tracep->chgCData(oldp+2478,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0x12U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0xeU)))),3);
            tracep->chgCData(oldp+2479,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0xfU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x11U)))),3);
            tracep->chgCData(oldp+2480,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0xcU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x14U)))),3);
            tracep->chgCData(oldp+2481,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 9U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x17U)))),3);
            tracep->chgCData(oldp+2482,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 6U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x1aU)))),3);
            tracep->chgCData(oldp+2483,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 3U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x1dU)))),3);
            tracep->chgCData(oldp+2484,((7U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U])),3);
            tracep->chgCData(oldp+2485,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0x1dU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 3U)))),3);
            tracep->chgCData(oldp+2486,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0x1aU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 6U)))),3);
            tracep->chgCData(oldp+2487,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0x17U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 9U)))),3);
            tracep->chgCData(oldp+2488,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0x14U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0xcU)))),3);
            tracep->chgCData(oldp+2489,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0x11U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0xfU)))),3);
            tracep->chgCData(oldp+2490,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0xeU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x12U)))),3);
            tracep->chgCData(oldp+2491,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0xbU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x15U)))),3);
            tracep->chgCData(oldp+2492,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 8U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x18U)))),3);
            tracep->chgCData(oldp+2493,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 5U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x1bU)))),3);
            tracep->chgCData(oldp+2494,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 2U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x1eU)))),3);
            tracep->chgCData(oldp+2495,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x1fU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 1U)))),3);
            tracep->chgCData(oldp+2496,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x1cU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 4U)))),3);
            tracep->chgCData(oldp+2497,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x19U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 7U)))),3);
            tracep->chgCData(oldp+2498,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x16U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0xaU)))),3);
            tracep->chgCData(oldp+2499,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x13U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0xdU)))),3);
            tracep->chgCData(oldp+2500,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x10U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x10U)))),3);
            tracep->chgCData(oldp+2501,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0xdU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x13U)))),3);
            tracep->chgCData(oldp+2502,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0xaU) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x16U)))),3);
            tracep->chgCData(oldp+2503,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 7U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x19U)))),3);
            tracep->chgCData(oldp+2504,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 4U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x1cU)))),3);
            tracep->chgCData(oldp+2505,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 1U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x1fU)))),3);
            tracep->chgCData(oldp+2506,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 2U))),3);
            tracep->chgCData(oldp+2507,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 5U))),3);
            tracep->chgCData(oldp+2508,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 8U))),3);
            tracep->chgCData(oldp+2509,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0xbU))),3);
            tracep->chgCData(oldp+2510,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0xeU))),3);
            tracep->chgCData(oldp+2511,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0x11U))),3);
            tracep->chgCData(oldp+2512,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0x14U))),3);
            tracep->chgCData(oldp+2513,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0x17U))),3);
            tracep->chgCData(oldp+2514,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0x1aU))),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x34U])) {
            tracep->chgCData(oldp+2515,((0x3fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U])),6);
            tracep->chgCData(oldp+2516,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                     >> 6U)))),6);
            tracep->chgCData(oldp+2517,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                   << 0x14U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                     >> 0xcU)))),6);
            tracep->chgCData(oldp+2518,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                     >> 0x12U)))),6);
            tracep->chgCData(oldp+2519,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                   << 8U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                     >> 0x18U)))),6);
            tracep->chgCData(oldp+2520,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                   << 2U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                     >> 0x1eU)))),6);
            tracep->chgCData(oldp+2521,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                     >> 4U)))),6);
            tracep->chgCData(oldp+2522,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                     >> 0xaU)))),6);
            tracep->chgCData(oldp+2523,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                     >> 0x10U)))),6);
            tracep->chgCData(oldp+2524,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                     >> 0x16U)))),6);
            tracep->chgCData(oldp+2525,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                   << 4U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                     >> 0x1cU)))),6);
            tracep->chgCData(oldp+2526,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                     >> 2U)))),6);
            tracep->chgCData(oldp+2527,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                     >> 8U)))),6);
            tracep->chgCData(oldp+2528,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                     >> 0xeU)))),6);
            tracep->chgCData(oldp+2529,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                     >> 0x14U)))),6);
            tracep->chgCData(oldp+2530,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                   << 6U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                     >> 0x1aU)))),6);
            tracep->chgCData(oldp+2531,((0x3fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U])),6);
            tracep->chgCData(oldp+2532,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                     >> 6U)))),6);
            tracep->chgCData(oldp+2533,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                   << 0x14U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                     >> 0xcU)))),6);
            tracep->chgCData(oldp+2534,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                     >> 0x12U)))),6);
            tracep->chgCData(oldp+2535,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                   << 8U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                     >> 0x18U)))),6);
            tracep->chgCData(oldp+2536,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                   << 2U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                     >> 0x1eU)))),6);
            tracep->chgCData(oldp+2537,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                     >> 4U)))),6);
            tracep->chgCData(oldp+2538,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                     >> 0xaU)))),6);
            tracep->chgCData(oldp+2539,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                     >> 0x10U)))),6);
            tracep->chgCData(oldp+2540,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                     >> 0x16U)))),6);
            tracep->chgCData(oldp+2541,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                   << 4U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                     >> 0x1cU)))),6);
            tracep->chgCData(oldp+2542,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                     >> 2U)))),6);
            tracep->chgCData(oldp+2543,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                     >> 8U)))),6);
            tracep->chgCData(oldp+2544,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                     >> 0xeU)))),6);
            tracep->chgCData(oldp+2545,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                     >> 0x14U)))),6);
            tracep->chgCData(oldp+2546,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                   << 6U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                     >> 0x1aU)))),6);
            tracep->chgCData(oldp+2547,((0x3fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U])),6);
            tracep->chgCData(oldp+2548,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                     >> 6U)))),6);
            tracep->chgCData(oldp+2549,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                   << 0x14U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                     >> 0xcU)))),6);
            tracep->chgCData(oldp+2550,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                     >> 0x12U)))),6);
            tracep->chgCData(oldp+2551,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                   << 8U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                     >> 0x18U)))),6);
            tracep->chgCData(oldp+2552,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                   << 2U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                     >> 0x1eU)))),6);
            tracep->chgCData(oldp+2553,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                     >> 4U)))),6);
            tracep->chgCData(oldp+2554,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                     >> 0xaU)))),6);
            tracep->chgCData(oldp+2555,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                     >> 0x10U)))),6);
            tracep->chgCData(oldp+2556,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                     >> 0x16U)))),6);
            tracep->chgCData(oldp+2557,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                   << 4U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                     >> 0x1cU)))),6);
            tracep->chgCData(oldp+2558,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                     >> 2U)))),6);
            tracep->chgCData(oldp+2559,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                     >> 8U)))),6);
            tracep->chgCData(oldp+2560,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                     >> 0xeU)))),6);
            tracep->chgCData(oldp+2561,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                     >> 0x14U)))),6);
            tracep->chgCData(oldp+2562,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                   << 6U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                     >> 0x1aU)))),6);
            tracep->chgCData(oldp+2563,((0x3fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U])),6);
            tracep->chgCData(oldp+2564,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                     >> 6U)))),6);
            tracep->chgCData(oldp+2565,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                   << 0x14U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                     >> 0xcU)))),6);
            tracep->chgCData(oldp+2566,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                   << 0xeU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                     >> 0x12U)))),6);
            tracep->chgCData(oldp+2567,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                   << 8U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                     >> 0x18U)))),6);
            tracep->chgCData(oldp+2568,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                   << 2U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                     >> 0x1eU)))),6);
            tracep->chgCData(oldp+2569,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                     >> 4U)))),6);
            tracep->chgCData(oldp+2570,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                   << 0x16U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                     >> 0xaU)))),6);
            tracep->chgCData(oldp+2571,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                   << 0x10U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                     >> 0x10U)))),6);
            tracep->chgCData(oldp+2572,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                   << 0xaU) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                     >> 0x16U)))),6);
            tracep->chgCData(oldp+2573,((0x3fU & ((
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                   << 4U) 
                                                  | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                     >> 0x1cU)))),6);
            tracep->chgCData(oldp+2574,((0x3fU & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                  >> 2U))),6);
            tracep->chgCData(oldp+2575,((0x3fU & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                  >> 8U))),6);
            tracep->chgCData(oldp+2576,((0x3fU & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                  >> 0xeU))),6);
            tracep->chgCData(oldp+2577,((0x3fU & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                  >> 0x14U))),6);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x36U])) {
            tracep->chgCData(oldp+2578,(vlTOPp->soc_top__DOT__intr_controller__DOT__irq_id_o[0]),5);
            tracep->chgBit(oldp+2579,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 7U))));
            tracep->chgBit(oldp+2580,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 6U))));
            tracep->chgBit(oldp+2581,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 9U))));
            tracep->chgBit(oldp+2582,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 8U))));
            tracep->chgBit(oldp+2583,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2584,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2585,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2586,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2587,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2588,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2589,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2590,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2591,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2592,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2593,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2594,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2595,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2596,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2597,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2598,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2599,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2600,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2601,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2602,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2603,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2604,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2605,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2606,((1U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U])));
            tracep->chgBit(oldp+2607,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 3U))));
            tracep->chgBit(oldp+2608,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 2U))));
            tracep->chgBit(oldp+2609,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 5U))));
            tracep->chgBit(oldp+2610,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 4U))));
            tracep->chgBit(oldp+2611,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 7U))));
            tracep->chgBit(oldp+2612,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 6U))));
            tracep->chgBit(oldp+2613,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 9U))));
            tracep->chgBit(oldp+2614,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 8U))));
            tracep->chgBit(oldp+2615,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2616,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2617,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2618,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2619,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2620,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2621,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2622,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2623,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2624,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2625,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2626,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2627,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2628,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2629,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2630,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2631,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2632,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2633,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2634,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2635,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2636,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2637,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2638,((1U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U])));
            tracep->chgBit(oldp+2639,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 3U))));
            tracep->chgBit(oldp+2640,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 2U))));
            tracep->chgBit(oldp+2641,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 5U))));
            tracep->chgBit(oldp+2642,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 4U))));
            tracep->chgCData(oldp+2643,((0x3fU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U])),6);
            tracep->chgCData(oldp+2644,(vlTOPp->soc_top__DOT__intr_controller__DOT__claim_id[0]),5);
            tracep->chgCData(oldp+2645,(vlTOPp->soc_top__DOT__intr_controller__DOT__cc_id[0]),5);
            tracep->chgBit(oldp+2646,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__q));
            tracep->chgBit(oldp+2647,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__q));
            tracep->chgBit(oldp+2648,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__q));
            tracep->chgBit(oldp+2649,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__q));
            tracep->chgBit(oldp+2650,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__q));
            tracep->chgBit(oldp+2651,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__q));
            tracep->chgBit(oldp+2652,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__q));
            tracep->chgBit(oldp+2653,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__q));
            tracep->chgBit(oldp+2654,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__q));
            tracep->chgBit(oldp+2655,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__q));
            tracep->chgBit(oldp+2656,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__q));
            tracep->chgBit(oldp+2657,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__q));
            tracep->chgBit(oldp+2658,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__q));
            tracep->chgBit(oldp+2659,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__q));
            tracep->chgBit(oldp+2660,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__q));
            tracep->chgBit(oldp+2661,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__q));
            tracep->chgBit(oldp+2662,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__q));
            tracep->chgBit(oldp+2663,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__q));
            tracep->chgBit(oldp+2664,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__q));
            tracep->chgBit(oldp+2665,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__q));
            tracep->chgBit(oldp+2666,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__q));
            tracep->chgBit(oldp+2667,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__q));
            tracep->chgBit(oldp+2668,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__q));
            tracep->chgBit(oldp+2669,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__q));
            tracep->chgBit(oldp+2670,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__q));
            tracep->chgBit(oldp+2671,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__q));
            tracep->chgBit(oldp+2672,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__q));
            tracep->chgBit(oldp+2673,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__q));
            tracep->chgCData(oldp+2674,((0x3fU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U])),6);
            tracep->chgBit(oldp+2675,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 6U))));
            tracep->chgBit(oldp+2676,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 7U))));
            tracep->chgBit(oldp+2677,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 8U))));
            tracep->chgBit(oldp+2678,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 9U))));
            tracep->chgBit(oldp+2679,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2680,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2681,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2682,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2683,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2684,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2685,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2686,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2687,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2688,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2689,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2690,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2691,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2692,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2693,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2694,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2695,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2696,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2697,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2698,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2699,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2700,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2701,((1U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U])));
            tracep->chgBit(oldp+2702,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2703,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 2U))));
            tracep->chgBit(oldp+2704,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 3U))));
            tracep->chgBit(oldp+2705,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 4U))));
            tracep->chgBit(oldp+2706,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 5U))));
            tracep->chgBit(oldp+2707,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 6U))));
            tracep->chgBit(oldp+2708,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 7U))));
            tracep->chgBit(oldp+2709,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 8U))));
            tracep->chgBit(oldp+2710,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 9U))));
            tracep->chgBit(oldp+2711,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2712,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2713,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2714,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2715,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2716,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2717,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2718,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2719,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2720,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2721,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2722,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2723,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2724,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2725,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2726,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2727,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2728,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2729,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2730,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2731,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2732,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2733,((1U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U])));
            tracep->chgBit(oldp+2734,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2735,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 2U))));
            tracep->chgBit(oldp+2736,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 3U))));
            tracep->chgBit(oldp+2737,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 4U))));
            tracep->chgBit(oldp+2738,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 5U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x37U])) {
            tracep->chgIData(oldp+2739,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q),32);
            tracep->chgBit(oldp+2740,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2741,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2742,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2743,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2744,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2745,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2746,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2747,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2748,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2749,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2750,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2751,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2752,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2753,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2754,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2755,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2756,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2757,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2758,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2759,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2760,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2761,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2762,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2763,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2764,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2765,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2766,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2767,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2768,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2769,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2770,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgIData(oldp+2771,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__ia),32);
            tracep->chgIData(oldp+2772,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q),32);
            tracep->chgBit(oldp+2773,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_23__DOT__qe));
            tracep->chgBit(oldp+2774,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_24__DOT__qe));
            tracep->chgBit(oldp+2775,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_25__DOT__qe));
            tracep->chgBit(oldp+2776,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_26__DOT__qe));
            tracep->chgBit(oldp+2777,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_27__DOT__qe));
            tracep->chgBit(oldp+2778,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_28__DOT__qe));
            tracep->chgBit(oldp+2779,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio6__DOT__qe));
            tracep->chgBit(oldp+2780,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio8__DOT__qe));
            tracep->chgBit(oldp+2781,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio9__DOT__qe));
            tracep->chgBit(oldp+2782,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio10__DOT__qe));
            tracep->chgBit(oldp+2783,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio11__DOT__qe));
            tracep->chgBit(oldp+2784,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio12__DOT__qe));
            tracep->chgBit(oldp+2785,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio26__DOT__qe));
            tracep->chgBit(oldp+2786,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio27__DOT__qe));
            tracep->chgBit(oldp+2787,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio28__DOT__qe));
            tracep->chgBit(oldp+2788,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio29__DOT__qe));
            tracep->chgBit(oldp+2789,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio30__DOT__qe));
            tracep->chgBit(oldp+2790,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio31__DOT__qe));
            tracep->chgBit(oldp+2791,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_12__DOT__qe));
            tracep->chgBit(oldp+2792,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_13__DOT__qe));
            tracep->chgBit(oldp+2793,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_14__DOT__qe));
            tracep->chgBit(oldp+2794,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_15__DOT__qe));
            tracep->chgBit(oldp+2795,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_16__DOT__qe));
            tracep->chgBit(oldp+2796,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_17__DOT__qe));
            tracep->chgBit(oldp+2797,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_29__DOT__qe));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x38U])) {
            tracep->chgCData(oldp+2798,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2799,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2800,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2801,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2802,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2803,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2804,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2805,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2806,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2807,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2808,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2809,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2810,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2811,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2812,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2813,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x39U])) {
            tracep->chgQData(oldp+2814,(((QData)((IData)(vlTOPp->soc_top__DOT__intr_gpio)) 
                                         << 1U)),33);
            tracep->chgIData(oldp+2816,(vlTOPp->soc_top__DOT__intr_gpio),32);
            tracep->chgIData(oldp+2817,((0xfffffffeU 
                                         & (vlTOPp->soc_top__DOT__intr_gpio 
                                            << 1U))),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3aU])) {
            tracep->chgCData(oldp+2818,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_mux_id),3);
            tracep->chgCData(oldp+2819,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_cause),3);
            tracep->chgBit(oldp+2820,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save));
            tracep->chgBit(oldp+2821,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_load));
            tracep->chgBit(oldp+2822,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_store));
            tracep->chgBit(oldp+2823,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q));
            tracep->chgCData(oldp+2824,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_d),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3bU])) {
            tracep->chgCData(oldp+2825,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause),6);
            tracep->chgBit(oldp+2826,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause));
            tracep->chgBit(oldp+2827,((1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause) 
                                             >> 5U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3cU])) {
            tracep->chgSData(oldp+2828,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr),12);
            tracep->chgBit(oldp+2829,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_branch));
            tracep->chgCData(oldp+2830,((0x1fU & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))),5);
            tracep->chgCData(oldp+2831,((7U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                               >> 5U))),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3dU])) {
            tracep->chgBit(oldp+2832,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set));
            tracep->chgBit(oldp+2833,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec));
            tracep->chgBit(oldp+2834,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec) 
                                       & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3eU])) {
            tracep->chgBit(oldp+2835,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id));
            tracep->chgBit(oldp+2836,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_jump));
            tracep->chgBit(oldp+2837,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_tbranch));
            tracep->chgBit(oldp+2838,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id));
            tracep->chgBit(oldp+2839,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
            tracep->chgBit(oldp+2840,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
            tracep->chgBit(oldp+2841,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3fU])) {
            tracep->chgWData(oldp+2842,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex),68);
            tracep->chgCData(oldp+2845,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_we_ex),2);
            tracep->chgBit(oldp+2846,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result));
            tracep->chgBit(oldp+2847,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_spec));
            tracep->chgBit(oldp+2848,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d));
            tracep->chgIData(oldp+2849,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result),32);
            tracep->chgWData(oldp+2850,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d),68);
            tracep->chgCData(oldp+2853,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we),2);
            tracep->chgIData(oldp+2854,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev),32);
            tracep->chgBit(oldp+2855,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed));
            tracep->chgBit(oldp+2856,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left));
            tracep->chgCData(oldp+2857,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt),6);
            tracep->chgIData(oldp+2858,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand),32);
            tracep->chgQData(oldp+2859,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed),33);
            tracep->chgQData(oldp+2861,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext),33);
            tracep->chgBit(oldp+2863,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext));
            tracep->chgIData(oldp+2864,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result),32);
            tracep->chgIData(oldp+2865,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev),32);
            tracep->chgIData(oldp+2866,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result),32);
            tracep->chgQData(oldp+2867,((0x7ffffffffULL 
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
            tracep->chgQData(oldp+2869,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum),34);
            tracep->chgBit(oldp+2871,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a));
            tracep->chgBit(oldp+2872,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b));
            tracep->chgQData(oldp+2873,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d),34);
            tracep->chgQData(oldp+2875,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d),34);
            tracep->chgQData(oldp+2877,((0x3ffffffffULL 
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
            tracep->chgBit(oldp+2879,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a));
            tracep->chgBit(oldp+2880,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b));
            tracep->chgBit(oldp+2881,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal));
            tracep->chgBit(oldp+2882,((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                                        ^ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)) 
                                       & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)))));
            tracep->chgIData(oldp+2883,(((IData)(1U) 
                                         << (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))),32);
            tracep->chgIData(oldp+2884,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q),32);
            tracep->chgIData(oldp+2885,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q),32);
            tracep->chgIData(oldp+2886,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d),32);
            tracep->chgIData(oldp+2887,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d),32);
            tracep->chgIData(oldp+2888,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d),32);
            tracep->chgIData(oldp+2889,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder),32);
            tracep->chgQData(oldp+2890,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient),33);
            tracep->chgCData(oldp+2892,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q),5);
            tracep->chgCData(oldp+2893,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d),5);
            tracep->chgBit(oldp+2894,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                                       | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal))));
            tracep->chgBit(oldp+2895,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold));
            tracep->chgBit(oldp+2896,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold));
            tracep->chgBit(oldp+2897,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d));
            tracep->chgBit(oldp+2898,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q));
            tracep->chgBit(oldp+2899,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal));
            tracep->chgBit(oldp+2900,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal));
            tracep->chgCData(oldp+2901,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d),3);
            tracep->chgBit(oldp+2902,((1U & (IData)(
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
            tracep->chgSData(oldp+2903,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a),16);
            tracep->chgSData(oldp+2904,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b),16);
            tracep->chgBit(oldp+2905,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x40U])) {
            tracep->chgIData(oldp+2906,((0xfffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__cio_gpio_q)),20);
            tracep->chgIData(oldp+2907,(vlTOPp->soc_top__DOT__gpio_32__DOT__cio_gpio_q),32);
            tracep->chgIData(oldp+2908,(vlTOPp->soc_top__DOT__gpio_32__DOT__cio_gpio_en_q),32);
            tracep->chgIData(oldp+2909,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__q),32);
            tracep->chgBit(oldp+2910,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_state__DOT__qe));
            tracep->chgBit(oldp+2911,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2912,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2913,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2914,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_20__DOT__qe));
            tracep->chgBit(oldp+2915,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio3__DOT__qe));
            tracep->chgBit(oldp+2916,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio23__DOT__qe));
            tracep->chgBit(oldp+2917,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_9__DOT__qe));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x41U])) {
            tracep->chgBit(oldp+2918,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__xbar_to_ifu 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2919,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__xbar_to_ifu 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2920,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__xbar_to_ifu 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2921,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__xbar_to_ifu 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2922,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__xbar_to_ifu 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2923,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__xbar_to_ifu 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2924,((IData)((vlTOPp->soc_top__DOT__xbar_to_ifu 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2925,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__xbar_to_ifu 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2926,((1U & (IData)(vlTOPp->soc_top__DOT__xbar_to_ifu))));
            tracep->chgBit(oldp+2927,((1U & (IData)(vlTOPp->soc_top__DOT__xbar_to_ifu))));
            tracep->chgBit(oldp+2928,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__xbar_to_ifu 
                                                     >> 0x33U)))));
            tracep->chgIData(oldp+2929,((IData)((vlTOPp->soc_top__DOT__xbar_to_ifu 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2930,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__xbar_to_ifu 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2931,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw));
            tracep->chgIData(oldp+2932,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata),32);
            tracep->chgBit(oldp+2933,((3U != (3U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
            tracep->chgBit(oldp+2934,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err));
            tracep->chgBit(oldp+2935,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err));
            tracep->chgBit(oldp+2936,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid));
            tracep->chgCData(oldp+2937,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed),3);
            tracep->chgIData(oldp+2938,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata),32);
            tracep->chgBit(oldp+2939,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
            tracep->chgBit(oldp+2940,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
            tracep->chgBit(oldp+2941,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
            tracep->chgBit(oldp+2942,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed));
            tracep->chgCData(oldp+2943,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2944,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d))));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x42U] | vlTOPp->__Vm_traceActivity
                         [0x4cU]))) {
            tracep->chgIData(oldp+2945,(((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
                                          << 0xaU) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                            >> 0x16U))),32);
            tracep->chgBit(oldp+2946,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                             >> 0x15U))));
            tracep->chgIData(oldp+2947,(((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                          << 0xbU) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                            >> 0x15U))),32);
            tracep->chgBit(oldp+2948,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                             >> 0x14U))));
            tracep->chgIData(oldp+2949,(((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                          << 0xcU) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                            >> 0x14U))),32);
            tracep->chgSData(oldp+2950,((0x3ffU & (
                                                   (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                      >> 0xaU)))),10);
            tracep->chgSData(oldp+2951,((0x3ffU & vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U])),10);
            tracep->chgSData(oldp+2952,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                           << 0x10U) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[3U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+2953,((0xffffU & 
                                         vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[3U])),16);
            tracep->chgIData(oldp+2954,(vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[2U]),32);
            tracep->chgSData(oldp+2955,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+2956,((0xffffU & 
                                         vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[1U])),16);
            tracep->chgSData(oldp+2957,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[0U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+2958,((0xffffU & 
                                         vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[0U])),16);
            tracep->chgIData(oldp+2959,(((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                          << 0xcU) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                            >> 0x14U))),32);
            tracep->chgSData(oldp+2960,((0x3ffU & (
                                                   (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                      >> 0xaU)))),10);
            tracep->chgSData(oldp+2961,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                           << 0x10U) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[3U] 
                                             >> 0x10U)))),16);
            tracep->chgIData(oldp+2962,(vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[2U]),32);
            tracep->chgSData(oldp+2963,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+2964,((0xffffU & 
                                         vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[1U])),16);
            tracep->chgSData(oldp+2965,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[0U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+2966,((0xffffU & 
                                         vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[0U])),16);
            tracep->chgBit(oldp+2967,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                             >> 0x15U))));
            tracep->chgIData(oldp+2968,(((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
                                          << 0xaU) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                            >> 0x16U))),32);
            tracep->chgBit(oldp+2969,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                             >> 0x14U))));
            tracep->chgIData(oldp+2970,(((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                          << 0xbU) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                            >> 0x15U))),32);
            tracep->chgSData(oldp+2971,((0x3ffU & (
                                                   (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                      >> 0xaU)))),16);
            tracep->chgSData(oldp+2972,((0x3ffU & vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U])),16);
            tracep->chgSData(oldp+2973,((0xffffU & 
                                         vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[3U])),16);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x43U])) {
            tracep->chgBit(oldp+2974,((1U & (vlTOPp->soc_top__DOT__ifu_to_xbar[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2975,((7U & (vlTOPp->soc_top__DOT__ifu_to_xbar[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2976,((7U & (vlTOPp->soc_top__DOT__ifu_to_xbar[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2977,((3U & (vlTOPp->soc_top__DOT__ifu_to_xbar[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2978,((0xffU & (vlTOPp->soc_top__DOT__ifu_to_xbar[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2979,(((vlTOPp->soc_top__DOT__ifu_to_xbar[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__ifu_to_xbar[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2980,((0xfU & ((vlTOPp->soc_top__DOT__ifu_to_xbar[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__ifu_to_xbar[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2981,(((vlTOPp->soc_top__DOT__ifu_to_xbar[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__ifu_to_xbar[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2982,((1U & vlTOPp->soc_top__DOT__ifu_to_xbar[0U])));
            tracep->chgBit(oldp+2983,(vlTOPp->soc_top__DOT__u_top__DOT__instr_req));
            tracep->chgIData(oldp+2984,((0xfffffffcU 
                                         & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr)),32);
            tracep->chgBit(oldp+2985,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req));
            tracep->chgBit(oldp+2986,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtvec_init));
            tracep->chgIData(oldp+2987,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n),32);
            tracep->chgBit(oldp+2988,((1U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)));
            tracep->chgIData(oldp+2989,((0xfffffffeU 
                                         & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)),32);
            tracep->chgBit(oldp+2990,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
            tracep->chgBit(oldp+2991,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
            tracep->chgCData(oldp+2992,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n),2);
            tracep->chgIData(oldp+2993,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x44U])) {
            tracep->chgBit(oldp+2994,((1U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2995,((7U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2996,((7U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2997,((3U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2998,((0xffU & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2999,(((vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3000,((0xfU & ((vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3001,(((vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__xbar_to_iccm[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3002,((1U & vlTOPp->soc_top__DOT__xbar_to_iccm[0U])));
            tracep->chgCData(oldp+3003,(((4U != (7U 
                                                 & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                    >> 0x12U)))
                                          ? 0U : 1U)),2);
            tracep->chgCData(oldp+3004,((3U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3005,((0xffU & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                  >> 5U))),8);
            tracep->chgCData(oldp+3006,((0xfU & ((vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                                    >> 1U)))),4);
            tracep->chgBit(oldp+3007,((((0U == (7U 
                                                & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                     >> 0x12U)))) 
                                       | (4U == (7U 
                                                 & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                    >> 0x12U))))));
            tracep->chgBit(oldp+3008,((0U == (7U & 
                                              (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+3009,((1U == (7U & 
                                              (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+3010,((4U == (7U & 
                                              (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0x12U)))));
            tracep->chgCData(oldp+3011,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                                        >> 5U)))))),4);
            tracep->chgCData(oldp+3012,((0x1eU & vlTOPp->soc_top__DOT__xbar_to_iccm[1U])),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x45U])) {
            tracep->chgBit(oldp+3013,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3014,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3015,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3016,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3017,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3018,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3019,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3020,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3021,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h))));
            tracep->chgBit(oldp+3022,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h))));
            tracep->chgBit(oldp+3023,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                     >> 0x33U)))));
            tracep->chgIData(oldp+3024,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3025,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3026,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err));
            tracep->chgBit(oldp+3027,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err));
            tracep->chgIData(oldp+3028,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int),32);
            tracep->chgBit(oldp+3029,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid));
            tracep->chgBit(oldp+3030,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err) 
                                       | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err))));
            tracep->chgCData(oldp+3031,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d),2);
            tracep->chgBit(oldp+3032,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv));
            tracep->chgBit(oldp+3033,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump));
            tracep->chgBit(oldp+3034,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done));
            tracep->chgBit(oldp+3035,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err) 
                                       | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err))));
            tracep->chgBit(oldp+3036,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err));
            tracep->chgBit(oldp+3037,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en));
            tracep->chgCData(oldp+3038,((0x3fU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)),6);
            tracep->chgIData(oldp+3039,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int),32);
            tracep->chgBit(oldp+3040,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 1U))));
            tracep->chgBit(oldp+3041,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 2U))));
            tracep->chgCData(oldp+3042,((7U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 3U))),3);
            tracep->chgBit(oldp+3043,((1U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
            tracep->chgBit(oldp+3044,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3045,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3046,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3047,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3048,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3049,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3050,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3051,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3052,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i))));
            tracep->chgBit(oldp+3053,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3054,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3055,((7U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3056,((3U & (IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3057,((0xffU & (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3058,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3059,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3060,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3061,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p))));
            tracep->chgBit(oldp+3062,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hfifo_reqready));
            tracep->chgBit(oldp+3063,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i))));
            tracep->chgBit(oldp+3064,((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+3065,((((QData)((IData)(
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
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x46U])) {
            tracep->chgBit(oldp+3067,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op_en));
            tracep->chgBit(oldp+3068,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done));
            tracep->chgBit(oldp+3069,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_instr_ret_wb));
            tracep->chgBit(oldp+3070,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch));
            tracep->chgBit(oldp+3071,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id));
            tracep->chgBit(oldp+3072,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int));
            tracep->chgBit(oldp+3073,(vlTOPp->soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_d));
            tracep->chgBit(oldp+3074,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__accept_t_req));
            tracep->chgBit(oldp+3075,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__accept_t_rsp));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x47U])) {
            tracep->chgIData(oldp+3076,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc),32);
            tracep->chgIData(oldp+3077,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d),18);
            tracep->chgIData(oldp+3078,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d),32);
            tracep->chgCData(oldp+3079,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d),6);
            tracep->chgIData(oldp+3080,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d),32);
            tracep->chgIData(oldp+3081,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x48U])) {
            tracep->chgBit(oldp+3082,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err));
            tracep->chgCData(oldp+3083,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n),2);
            tracep->chgCData(oldp+3084,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n),2);
            tracep->chgBit(oldp+3085,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two));
            tracep->chgBit(oldp+3086,(vlTOPp->soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_d));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x49U])) {
            tracep->chgIData(oldp+3087,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb),32);
            tracep->chgIData(oldp+3088,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext),32);
            tracep->chgBit(oldp+3089,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d));
            tracep->chgBit(oldp+3090,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update));
            tracep->chgBit(oldp+3091,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update));
            tracep->chgBit(oldp+3092,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update));
            tracep->chgBit(oldp+3093,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
            tracep->chgBit(oldp+3094,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d));
            tracep->chgBit(oldp+3095,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d));
            tracep->chgCData(oldp+3096,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns),3);
            tracep->chgIData(oldp+3097,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec),31);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4aU])) {
            tracep->chgIData(oldp+3098,(vlTOPp->soc_top__DOT__intr_controller__DOT__claim),32);
            tracep->chgCData(oldp+3099,(vlTOPp->soc_top__DOT__intr_controller__DOT__complete_id[0]),5);
            tracep->chgIData(oldp+3100,(vlTOPp->soc_top__DOT__intr_controller__DOT__complete),32);
            tracep->chgCData(oldp+3101,(vlTOPp->soc_top__DOT__intr_controller__DOT__threshold[0]),3);
            tracep->chgBit(oldp+3102,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we));
            tracep->chgBit(oldp+3103,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we));
            tracep->chgBit(oldp+3104,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we));
            tracep->chgBit(oldp+3105,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we));
            tracep->chgBit(oldp+3106,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we));
            tracep->chgBit(oldp+3107,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we));
            tracep->chgBit(oldp+3108,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we));
            tracep->chgBit(oldp+3109,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we));
            tracep->chgBit(oldp+3110,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we));
            tracep->chgBit(oldp+3111,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we));
            tracep->chgBit(oldp+3112,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we));
            tracep->chgBit(oldp+3113,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we));
            tracep->chgBit(oldp+3114,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we));
            tracep->chgBit(oldp+3115,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we));
            tracep->chgBit(oldp+3116,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we));
            tracep->chgBit(oldp+3117,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we));
            tracep->chgBit(oldp+3118,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we));
            tracep->chgBit(oldp+3119,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we));
            tracep->chgBit(oldp+3120,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we));
            tracep->chgBit(oldp+3121,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we));
            tracep->chgBit(oldp+3122,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we));
            tracep->chgBit(oldp+3123,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we));
            tracep->chgBit(oldp+3124,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio3_we));
            tracep->chgBit(oldp+3125,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio6_we));
            tracep->chgBit(oldp+3126,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio8_we));
            tracep->chgBit(oldp+3127,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio9_we));
            tracep->chgBit(oldp+3128,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio10_we));
            tracep->chgBit(oldp+3129,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio11_we));
            tracep->chgBit(oldp+3130,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio12_we));
            tracep->chgBit(oldp+3131,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio14_we));
            tracep->chgBit(oldp+3132,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio15_we));
            tracep->chgBit(oldp+3133,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio16_we));
            tracep->chgBit(oldp+3134,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio17_we));
            tracep->chgBit(oldp+3135,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio18_we));
            tracep->chgBit(oldp+3136,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio23_we));
            tracep->chgBit(oldp+3137,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio26_we));
            tracep->chgBit(oldp+3138,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio27_we));
            tracep->chgBit(oldp+3139,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio28_we));
            tracep->chgBit(oldp+3140,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio29_we));
            tracep->chgBit(oldp+3141,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio30_we));
            tracep->chgBit(oldp+3142,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio31_we));
            tracep->chgBit(oldp+3143,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we));
            tracep->chgBit(oldp+3144,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we));
            tracep->chgBit(oldp+3145,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we));
            tracep->chgBit(oldp+3146,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we));
            tracep->chgBit(oldp+3147,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we));
            tracep->chgBit(oldp+3148,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we));
            tracep->chgBit(oldp+3149,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we));
            tracep->chgBit(oldp+3150,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we));
            tracep->chgBit(oldp+3151,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we));
            tracep->chgBit(oldp+3152,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we));
            tracep->chgBit(oldp+3153,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we));
            tracep->chgBit(oldp+3154,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we));
            tracep->chgBit(oldp+3155,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we));
            tracep->chgBit(oldp+3156,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we));
            tracep->chgBit(oldp+3157,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we));
            tracep->chgBit(oldp+3158,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we));
            tracep->chgBit(oldp+3159,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we));
            tracep->chgBit(oldp+3160,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we));
            tracep->chgBit(oldp+3161,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we));
            tracep->chgBit(oldp+3162,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we));
            tracep->chgBit(oldp+3163,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we));
            tracep->chgBit(oldp+3164,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we));
            tracep->chgBit(oldp+3165,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we));
            tracep->chgBit(oldp+3166,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we));
            tracep->chgCData(oldp+3167,(vlTOPp->soc_top__DOT__intr_controller__DOT__threshold
                                        [0U]),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4bU])) {
            tracep->chgIData(oldp+3168,(((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                          << 0x15U) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                            >> 0xbU))),32);
            tracep->chgIData(oldp+3169,(((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                          << 0x15U) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                            >> 0xbU))),32);
            tracep->chgIData(oldp+3170,(((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                          << 0x15U) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                            >> 0xbU))),32);
            tracep->chgBit(oldp+3171,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                             >> 0xaU))));
            tracep->chgIData(oldp+3172,(((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                          << 0x16U) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                            >> 0xaU))),32);
            tracep->chgBit(oldp+3173,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                             >> 9U))));
            tracep->chgSData(oldp+3174,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                           << 7U) | 
                                          (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                           >> 0x19U)))),16);
            tracep->chgBit(oldp+3175,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                             >> 0x18U))));
            tracep->chgSData(oldp+3176,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                           << 0x18U) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                             >> 8U)))),16);
            tracep->chgBit(oldp+3177,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                             >> 7U))));
            tracep->chgSData(oldp+3178,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                           << 9U) | 
                                          (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                           >> 0x17U)))),16);
            tracep->chgBit(oldp+3179,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                             >> 0x16U))));
            tracep->chgSData(oldp+3180,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                           << 0x1aU) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                             >> 6U)))),16);
            tracep->chgBit(oldp+3181,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                             >> 5U))));
            tracep->chgIData(oldp+3182,(((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                          << 0x1bU) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                            >> 5U))),32);
            tracep->chgBit(oldp+3183,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                             >> 4U))));
            tracep->chgSData(oldp+3184,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                           << 0xcU) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                             >> 0x14U)))),16);
            tracep->chgBit(oldp+3185,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                             >> 0x13U))));
            tracep->chgSData(oldp+3186,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                           << 0x1dU) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                             >> 3U)))),16);
            tracep->chgBit(oldp+3187,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                             >> 2U))));
            tracep->chgSData(oldp+3188,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                           << 0xeU) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                             >> 0x12U)))),16);
            tracep->chgBit(oldp+3189,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                             >> 0x11U))));
            tracep->chgSData(oldp+3190,((0xffffU & 
                                         ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                           << 0x1fU) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                             >> 1U)))),16);
            tracep->chgBit(oldp+3191,((1U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[5U])));
            tracep->chgIData(oldp+3192,(vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[4U]),32);
            tracep->chgIData(oldp+3193,(vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[3U]),32);
            tracep->chgIData(oldp+3194,(vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[2U]),32);
            tracep->chgIData(oldp+3195,(vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[1U]),32);
            tracep->chgIData(oldp+3196,(vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U]),32);
            tracep->chgIData(oldp+3197,(((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                          << 0x15U) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                            >> 0xbU))),32);
            tracep->chgIData(oldp+3198,(((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                          << 0x15U) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                            >> 0xbU))),32);
            tracep->chgBit(oldp+3199,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                             >> 0xaU))));
            tracep->chgIData(oldp+3200,(((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                          << 0x15U) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                            >> 0xbU))),32);
            tracep->chgBit(oldp+3201,((1U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])));
            tracep->chgBit(oldp+3202,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 1U))));
            tracep->chgBit(oldp+3203,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 2U))));
            tracep->chgBit(oldp+3204,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 3U))));
            tracep->chgBit(oldp+3205,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 4U))));
            tracep->chgBit(oldp+3206,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 5U))));
            tracep->chgBit(oldp+3207,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 6U))));
            tracep->chgBit(oldp+3208,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 7U))));
            tracep->chgBit(oldp+3209,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 8U))));
            tracep->chgBit(oldp+3210,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 9U))));
            tracep->chgBit(oldp+3211,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+3212,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+3213,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+3214,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+3215,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+3216,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+3217,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+3218,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+3219,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+3220,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+3221,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+3222,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+3223,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+3224,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+3225,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+3226,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+3227,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+3228,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+3229,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+3230,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+3231,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+3232,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x1fU))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4cU])) {
            tracep->chgIData(oldp+3233,(vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d),32);
            tracep->chgBit(oldp+3234,((0U != vlTOPp->soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event)));
            tracep->chgIData(oldp+3235,(vlTOPp->soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event),32);
            tracep->chgIData(oldp+3236,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4dU])) {
            tracep->chgCData(oldp+3237,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d),6);
            tracep->chgBit(oldp+3238,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en));
            tracep->chgBit(oldp+3239,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en));
            tracep->chgIData(oldp+3240,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d),32);
            tracep->chgBit(oldp+3241,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4eU])) {
            tracep->chgBit(oldp+3242,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en));
            tracep->chgBit(oldp+3243,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en));
            tracep->chgBit(oldp+3244,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en));
            tracep->chgBit(oldp+3245,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en));
            tracep->chgBit(oldp+3246,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en));
            tracep->chgBit(oldp+3247,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en));
            tracep->chgBit(oldp+3248,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en));
            tracep->chgBit(oldp+3249,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_we));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4fU])) {
            tracep->chgBit(oldp+3250,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en));
            tracep->chgBit(oldp+3251,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en));
            tracep->chgIData(oldp+3252,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we),32);
            tracep->chgIData(oldp+3253,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we),32);
            tracep->chgBit(oldp+3254,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 1U))));
            tracep->chgBit(oldp+3255,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 1U))));
            tracep->chgIData(oldp+3256,((0x1fffffffU 
                                         & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            >> 3U))),29);
            tracep->chgIData(oldp+3257,((0x1fffffffU 
                                         & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            >> 3U))),29);
            tracep->chgBit(oldp+3258,((1U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)));
            tracep->chgBit(oldp+3259,((1U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we)));
            tracep->chgBit(oldp+3260,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 2U))));
            tracep->chgBit(oldp+3261,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 2U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x50U])) {
            tracep->chgBit(oldp+3262,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready));
            tracep->chgBit(oldp+3263,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_pipe_flush));
            tracep->chgBit(oldp+3264,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if));
            tracep->chgBit(oldp+3265,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id));
            tracep->chgBit(oldp+3266,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req));
            tracep->chgBit(oldp+3267,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush));
            tracep->chgIData(oldp+3268,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr),32);
            tracep->chgBit(oldp+3269,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                             >> 1U))));
            tracep->chgIData(oldp+3270,((0x1fffffffU 
                                         & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                            >> 3U))),29);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x51U])) {
            tracep->chgBit(oldp+3271,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d));
            tracep->chgCData(oldp+3272,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d),3);
            tracep->chgCData(oldp+3273,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped),3);
            tracep->chgBit(oldp+3274,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x52U])) {
            tracep->chgQData(oldp+3275,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_upd),64);
            tracep->chgQData(oldp+3277,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load),64);
            tracep->chgBit(oldp+3279,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we));
            tracep->chgQData(oldp+3280,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d),64);
            tracep->chgQData(oldp+3282,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_upd),64);
            tracep->chgQData(oldp+3284,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load),64);
            tracep->chgBit(oldp+3286,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we));
            tracep->chgQData(oldp+3287,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d),64);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x53U])) {
            tracep->chgBit(oldp+3289,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q));
            tracep->chgCData(oldp+3290,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+3291,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+3292,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+3293,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+3294,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+3295,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+3296,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+3297,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+3298,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+3299,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+3300,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+3301,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+3302,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+3303,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+3304,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_0__DOT__qe));
            tracep->chgBit(oldp+3305,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_17__DOT__qe));
            tracep->chgBit(oldp+3306,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_18__DOT__qe));
            tracep->chgBit(oldp+3307,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_19__DOT__qe));
            tracep->chgBit(oldp+3308,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_21__DOT__qe));
            tracep->chgBit(oldp+3309,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_22__DOT__qe));
            tracep->chgBit(oldp+3310,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio0__DOT__qe));
            tracep->chgBit(oldp+3311,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio1__DOT__qe));
            tracep->chgBit(oldp+3312,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio2__DOT__qe));
            tracep->chgBit(oldp+3313,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio4__DOT__qe));
            tracep->chgBit(oldp+3314,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio5__DOT__qe));
            tracep->chgBit(oldp+3315,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__qe));
            tracep->chgBit(oldp+3316,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio13__DOT__qe));
            tracep->chgBit(oldp+3317,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio19__DOT__qe));
            tracep->chgBit(oldp+3318,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio20__DOT__qe));
            tracep->chgBit(oldp+3319,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio21__DOT__qe));
            tracep->chgBit(oldp+3320,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio22__DOT__qe));
            tracep->chgBit(oldp+3321,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio24__DOT__qe));
            tracep->chgBit(oldp+3322,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio25__DOT__qe));
            tracep->chgBit(oldp+3323,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_5__DOT__qe));
            tracep->chgBit(oldp+3324,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_6__DOT__qe));
            tracep->chgBit(oldp+3325,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__qe));
            tracep->chgBit(oldp+3326,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_8__DOT__qe));
            tracep->chgBit(oldp+3327,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_10__DOT__qe));
            tracep->chgBit(oldp+3328,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_11__DOT__qe));
            tracep->chgBit(oldp+3329,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_30__DOT__qe));
            tracep->chgBit(oldp+3330,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_31__DOT__qe));
            tracep->chgBit(oldp+3331,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_threshold0__DOT__qe));
            tracep->chgBit(oldp+3332,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_msip0__DOT__qe));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x54U])) {
            tracep->chgCData(oldp+3333,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+3334,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+3335,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+3336,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+3337,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+3338,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+3339,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+3340,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+3341,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+3342,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+3343,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+3344,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+3345,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+3346,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x55U])) {
            tracep->chgBit(oldp+3347,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we));
            tracep->chgBit(oldp+3348,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we));
            tracep->chgBit(oldp+3349,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we));
            tracep->chgBit(oldp+3350,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we));
            tracep->chgBit(oldp+3351,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we));
            tracep->chgBit(oldp+3352,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we));
            tracep->chgBit(oldp+3353,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we));
            tracep->chgBit(oldp+3354,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we));
            tracep->chgBit(oldp+3355,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we));
            tracep->chgBit(oldp+3356,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we));
            tracep->chgBit(oldp+3357,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio0_we));
            tracep->chgBit(oldp+3358,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio1_we));
            tracep->chgBit(oldp+3359,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio2_we));
            tracep->chgBit(oldp+3360,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio4_we));
            tracep->chgBit(oldp+3361,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio5_we));
            tracep->chgBit(oldp+3362,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio13_we));
            tracep->chgBit(oldp+3363,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio19_we));
            tracep->chgBit(oldp+3364,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio20_we));
            tracep->chgBit(oldp+3365,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio21_we));
            tracep->chgBit(oldp+3366,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio22_we));
            tracep->chgBit(oldp+3367,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio24_we));
            tracep->chgBit(oldp+3368,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio25_we));
            tracep->chgBit(oldp+3369,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we));
            tracep->chgBit(oldp+3370,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we));
            tracep->chgBit(oldp+3371,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we));
            tracep->chgBit(oldp+3372,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we));
            tracep->chgBit(oldp+3373,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we));
            tracep->chgBit(oldp+3374,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we));
            tracep->chgBit(oldp+3375,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we));
            tracep->chgBit(oldp+3376,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we));
            tracep->chgBit(oldp+3377,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we));
            tracep->chgBit(oldp+3378,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x56U])) {
            tracep->chgBit(oldp+3379,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err));
            tracep->chgIData(oldp+3380,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed),32);
            tracep->chgBit(oldp+3381,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn));
            tracep->chgWData(oldp+3382,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d),96);
            tracep->chgCData(oldp+3385,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d),3);
            tracep->chgBit(oldp+3386,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack));
            tracep->chgBit(oldp+3387,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x57U])) {
            tracep->chgSData(oldp+3388,(vlTOPp->soc_top__DOT__iccm__DOT__addr),12);
            tracep->chgIData(oldp+3389,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int),32);
            tracep->chgIData(oldp+3390,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int),32);
            tracep->chgIData(oldp+3391,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__unnamedblk1__DOT__i),32);
            tracep->chgBit(oldp+3392,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+3393,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x58U])) {
            tracep->chgIData(oldp+3394,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int),32);
            tracep->chgBit(oldp+3395,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error));
            tracep->chgBit(oldp+3396,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error));
            tracep->chgIData(oldp+3397,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x59U])) {
            tracep->chgBit(oldp+3398,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we));
            tracep->chgBit(oldp+3399,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we));
            tracep->chgBit(oldp+3400,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we));
            tracep->chgBit(oldp+3401,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we));
            tracep->chgBit(oldp+3402,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we));
            tracep->chgBit(oldp+3403,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we));
            tracep->chgBit(oldp+3404,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__ctrl_en_input_filter_we));
            tracep->chgBit(oldp+3405,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgIData(oldp+3406,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next),32);
        }
        tracep->chgBit(oldp+3407,(vlTOPp->clk_i));
        tracep->chgBit(oldp+3408,(vlTOPp->rst_ni));
        tracep->chgIData(oldp+3409,(vlTOPp->gpio_i),20);
        tracep->chgIData(oldp+3410,(vlTOPp->gpio_o),20);
        tracep->chgBit(oldp+3411,((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                            & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                               | (0U 
                                                  != vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)))))));
        tracep->chgIData(oldp+3412,(((1U & (IData)(
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
        tracep->chgBit(oldp+3413,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk));
        tracep->chgBit(oldp+3414,((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ctrl_busy) 
                                    | ((0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                       | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))) 
                                   | (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))));
        tracep->chgBit(oldp+3415,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                   & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                      | (0U != vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)))));
        tracep->chgBit(oldp+3416,((0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))));
        tracep->chgBit(oldp+3417,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
        tracep->chgBit(oldp+3418,((1U & (((((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                                            & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec))) 
                                           & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn))) 
                                          & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id))) 
                                         & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))))));
        tracep->chgBit(oldp+3419,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err_plus2));
        tracep->chgIData(oldp+3420,((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                     << 1U)),32);
        tracep->chgBit(oldp+3421,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear));
        tracep->chgBit(oldp+3422,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req));
        tracep->chgBit(oldp+3423,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ctrl_busy));
        tracep->chgBit(oldp+3424,(((0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                   | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))));
        tracep->chgBit(oldp+3425,(((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                     & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                    & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                   & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec))));
        tracep->chgBit(oldp+3426,(((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                     & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                    & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                   & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec))));
        tracep->chgBit(oldp+3427,(((((0U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                                     & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                >> 0x33U))) 
                                    & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err))) 
                                   & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)))));
        tracep->chgIData(oldp+3428,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                      ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                          ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int
                                          : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex)
                                      : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex)),32);
        tracep->chgBit(oldp+3429,((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw) 
                                    & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec)) 
                                   & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id)))));
        tracep->chgIData(oldp+3430,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex),32);
        tracep->chgBit(oldp+3431,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                   & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec))));
        tracep->chgBit(oldp+3432,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                   & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec))));
        tracep->chgBit(oldp+3433,((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) 
                                    | (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                                   & (0U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns)))));
        tracep->chgBit(oldp+3434,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_if));
        tracep->chgIData(oldp+3435,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtval),32);
        tracep->chgBit(oldp+3436,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_instr_ret_wb) 
                                   & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_is_compressed_id))));
        tracep->chgBit(oldp+3437,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready) 
                                   & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
        tracep->chgBit(oldp+3438,((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                    & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)) 
                                   & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid)))));
        tracep->chgBit(oldp+3439,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
                                   & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec))));
        tracep->chgBit(oldp+3440,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
                                   & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec))));
        tracep->chgBit(oldp+3441,(((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw) 
                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready)) 
                                    & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set))) 
                                   | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                      & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear))))));
        tracep->chgBit(oldp+3442,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                         & ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                             ? (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                                 >> 1U) 
                                                & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                             : (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                                 & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                                & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))))));
        tracep->chgIData(oldp+3443,(((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id))
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
        tracep->chgBit(oldp+3444,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw) 
                                   & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err)))));
        tracep->chgBit(oldp+3445,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                                   & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)))));
        tracep->chgBit(oldp+3446,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q));
        tracep->chgCData(oldp+3447,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                      ? (1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n) 
                                               >> 1U))
                                      : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n))),2);
        tracep->chgCData(oldp+3448,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                      ? (1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n) 
                                               >> 1U))
                                      : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n))),2);
        tracep->chgCData(oldp+3449,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                      ? (1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n) 
                                               >> 1U))
                                      : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n))),2);
        tracep->chgIData(oldp+3450,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q),32);
        tracep->chgBit(oldp+3451,((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                    & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
                                   & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)))));
        tracep->chgIData(oldp+3452,((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                       ? (0xfffffffeU 
                                          & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                       : (0xfffffffcU 
                                          & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
                                     + (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                         & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
                                        << 2U))),32);
        tracep->chgIData(oldp+3453,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q),32);
        tracep->chgBit(oldp+3454,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set) 
                                   | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                      & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))))));
        tracep->chgIData(oldp+3455,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                      ? (0xfffffffeU 
                                         & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                      : 0U)),32);
        tracep->chgBit(oldp+3456,((1U & (~ (IData)(
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                         >> 1U) 
                                                        | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev)))))))));
        tracep->chgCData(oldp+3457,((3U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                           >> 1U))),2);
        tracep->chgIData(oldp+3458,((0xfffffffeU & 
                                     ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                       + ((2U & ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                 << 1U)) 
                                          | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))) 
                                      << 1U))),32);
        tracep->chgCData(oldp+3459,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q),3);
        tracep->chgCData(oldp+3460,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q),3);
        tracep->chgCData(oldp+3461,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry),3);
        tracep->chgCData(oldp+3462,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en),3);
        tracep->chgIData(oldp+3463,(((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
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
        tracep->chgBit(oldp+3464,((1U & ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                          ? ((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                               >> 1U) 
                                              & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))) 
                                             | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                                          : (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                              & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                                             | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                                & ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                                   | (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)))))))));
        tracep->chgBit(oldp+3465,((1U & ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                          ? (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                              >> 1U) 
                                             & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                          : (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                              & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                             & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))))));
        tracep->chgBit(oldp+3466,((1U & (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                          >> 1U) | 
                                         ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                          & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid))))));
        tracep->chgIData(oldp+3467,((0x7fffffffU & 
                                     (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                      + ((2U & ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                << 1U)) 
                                         | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))))),31);
        tracep->chgIData(oldp+3468,((0x7fffffffU & 
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
        tracep->chgIData(oldp+3469,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q),31);
        tracep->chgBit(oldp+3470,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set) 
                                   | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready) 
                                      & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw)))));
        tracep->chgBit(oldp+3471,(0U));
        tracep->chgBit(oldp+3472,(((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                                     | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw)) 
                                    | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
                                   & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear)))));
        tracep->chgBit(oldp+3473,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                   & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec) 
                                      & ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid)) 
                                         | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle))))));
        tracep->chgIData(oldp+3474,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                      ? 0U : (0x1fU 
                                              & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0xfU)))),32);
        tracep->chgBit(oldp+3475,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req) 
                                   | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec))));
        tracep->chgCData(oldp+3476,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),4);
        tracep->chgBit(oldp+3477,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
                                   & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))));
        tracep->chgBit(oldp+3478,(((3U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                   & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                      | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                         & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn))))));
        tracep->chgBit(oldp+3479,(((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                     | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)) 
                                    | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d)) 
                                   | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err) 
                                      | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err)))));
        tracep->chgBit(oldp+3480,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
                                   | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush))));
        tracep->chgBit(oldp+3481,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq));
        tracep->chgIData(oldp+3482,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex)
                                      ? ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                          << 0x1eU) 
                                         | (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                            >> 2U))
                                      : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))),32);
        tracep->chgQData(oldp+3483,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a),33);
        tracep->chgBit(oldp+3485,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid) 
                                   | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid))));
        tracep->chgQData(oldp+3486,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                      ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                      : (1ULL | ((QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                                 << 1U)))),33);
        tracep->chgQData(oldp+3488,((0x1ffffffffULL 
                                     & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                         ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                         : ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                             ? (~ ((QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                   << 1U))
                                             : ((QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                << 1U))))),33);
        tracep->chgBit(oldp+3490,((1U & ((0x80000000U 
                                          & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                             ^ vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b))
                                          ? ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                              >> 0x1fU) 
                                             ^ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                          : (~ (IData)(
                                                       (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 0x20U)))))));
        tracep->chgIData(oldp+3491,(((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
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
        tracep->chgIData(oldp+3492,(((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
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
        tracep->chgIData(oldp+3493,(((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
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
        tracep->chgIData(oldp+3494,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0]),32);
        tracep->chgIData(oldp+3495,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1]),32);
        tracep->chgCData(oldp+3496,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we),2);
        tracep->chgIData(oldp+3497,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtvec_init)
                                      ? 0x20000001U
                                      : (1U | (0xffffff00U 
                                               & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)))),32);
        tracep->chgIData(oldp+3498,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip),18);
        tracep->chgCData(oldp+3499,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q),3);
        tracep->chgCData(oldp+3500,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
                                      ? (5U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                      : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),3);
        tracep->chgBit(oldp+3501,(((3U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 8U)) > (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
        tracep->chgBit(oldp+3502,(((3U == (3U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                 >> 0xaU))) 
                                   & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))));
        tracep->chgBit(oldp+3503,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                         & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))))));
        tracep->chgBit(oldp+3504,((1U & ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 2U) & 
                                         (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 2U))))));
        tracep->chgCData(oldp+3505,(vlTOPp->soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q),8);
        tracep->chgCData(oldp+3506,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)
                                      ? (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be)
                                      : 0xfU)),4);
        tracep->chgBit(oldp+3507,(vlTOPp->soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q));
        tracep->chgIData(oldp+3508,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__num_req_outstanding),17);
        tracep->chgBit(oldp+3509,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_req_pending));
        tracep->chgIData(oldp+3510,(vlTOPp->gpio_i),32);
        tracep->chgIData(oldp+3511,(vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_q),32);
        tracep->chgIData(oldp+3512,((((~ vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_q) 
                                      & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
                                     & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[4U])),32);
        tracep->chgIData(oldp+3513,(((vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_q 
                                      & (~ vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d)) 
                                     & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[3U])),32);
        tracep->chgIData(oldp+3514,(((~ vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
                                     & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[1U])),32);
        tracep->chgIData(oldp+3515,((vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d 
                                     & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[2U])),32);
        tracep->chgIData(oldp+3516,(((((((~ vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_q) 
                                         & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
                                        & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[4U]) 
                                       | ((vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_q 
                                           & (~ vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d)) 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[3U])) 
                                      | ((~ vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
                                         & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[1U])) 
                                     | (vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d 
                                        & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[2U]))),32);
        tracep->chgIData(oldp+3517,((vlTOPp->soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event 
                                     | ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                         << 0x15U) 
                                        | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                           >> 0xbU)))),32);
        tracep->chgBit(oldp+3518,((1U & ((IData)((vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)) 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [1U][0U]))));
        tracep->chgBit(oldp+3519,((1U & ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                            >> 0x15U)))));
        tracep->chgIData(oldp+3520,((((0x200000U & 
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
        tracep->chgBit(oldp+3521,((1U & vlTOPp->gpio_i)));
        tracep->chgBit(oldp+3522,((1U & ((1U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q)
                                          : vlTOPp->gpio_i))));
        tracep->chgBit(oldp+3523,((1U & (vlTOPp->gpio_i 
                                         >> 1U))));
        tracep->chgBit(oldp+3524,((1U & ((2U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 1U)))));
        tracep->chgBit(oldp+3525,((1U & (vlTOPp->gpio_i 
                                         >> 2U))));
        tracep->chgBit(oldp+3526,((1U & ((4U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 2U)))));
        tracep->chgBit(oldp+3527,((1U & (vlTOPp->gpio_i 
                                         >> 3U))));
        tracep->chgBit(oldp+3528,((1U & ((8U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 3U)))));
        tracep->chgBit(oldp+3529,((1U & (vlTOPp->gpio_i 
                                         >> 4U))));
        tracep->chgBit(oldp+3530,((1U & ((0x10U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 4U)))));
        tracep->chgBit(oldp+3531,((1U & (vlTOPp->gpio_i 
                                         >> 5U))));
        tracep->chgBit(oldp+3532,((1U & ((0x20U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 5U)))));
        tracep->chgBit(oldp+3533,((1U & (vlTOPp->gpio_i 
                                         >> 6U))));
        tracep->chgBit(oldp+3534,((1U & ((0x40U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 6U)))));
        tracep->chgBit(oldp+3535,((1U & (vlTOPp->gpio_i 
                                         >> 7U))));
        tracep->chgBit(oldp+3536,((1U & ((0x80U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 7U)))));
        tracep->chgBit(oldp+3537,((1U & (vlTOPp->gpio_i 
                                         >> 8U))));
        tracep->chgBit(oldp+3538,((1U & ((0x100U & 
                                          vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 8U)))));
        tracep->chgBit(oldp+3539,((1U & (vlTOPp->gpio_i 
                                         >> 9U))));
        tracep->chgBit(oldp+3540,((1U & ((0x200U & 
                                          vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 9U)))));
        tracep->chgBit(oldp+3541,((1U & (vlTOPp->gpio_i 
                                         >> 0xaU))));
        tracep->chgBit(oldp+3542,((1U & ((0x400U & 
                                          vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xaU)))));
        tracep->chgBit(oldp+3543,((1U & (vlTOPp->gpio_i 
                                         >> 0xbU))));
        tracep->chgBit(oldp+3544,((1U & ((0x800U & 
                                          vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xbU)))));
        tracep->chgBit(oldp+3545,((1U & (vlTOPp->gpio_i 
                                         >> 0xcU))));
        tracep->chgBit(oldp+3546,((1U & ((0x1000U & 
                                          vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xcU)))));
        tracep->chgBit(oldp+3547,((1U & (vlTOPp->gpio_i 
                                         >> 0xdU))));
        tracep->chgBit(oldp+3548,((1U & ((0x2000U & 
                                          vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xdU)))));
        tracep->chgBit(oldp+3549,((1U & (vlTOPp->gpio_i 
                                         >> 0xeU))));
        tracep->chgBit(oldp+3550,((1U & ((0x4000U & 
                                          vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xeU)))));
        tracep->chgBit(oldp+3551,((1U & (vlTOPp->gpio_i 
                                         >> 0xfU))));
        tracep->chgBit(oldp+3552,((1U & ((0x8000U & 
                                          vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xfU)))));
        tracep->chgBit(oldp+3553,((1U & (vlTOPp->gpio_i 
                                         >> 0x10U))));
        tracep->chgBit(oldp+3554,((1U & ((0x10000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x10U)))));
        tracep->chgBit(oldp+3555,((1U & (vlTOPp->gpio_i 
                                         >> 0x11U))));
        tracep->chgBit(oldp+3556,((1U & ((0x20000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x11U)))));
        tracep->chgBit(oldp+3557,((1U & (vlTOPp->gpio_i 
                                         >> 0x12U))));
        tracep->chgBit(oldp+3558,((1U & ((0x40000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x12U)))));
        tracep->chgBit(oldp+3559,((1U & (vlTOPp->gpio_i 
                                         >> 0x13U))));
        tracep->chgBit(oldp+3560,((1U & ((0x80000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x13U)))));
        tracep->chgBit(oldp+3561,((1U & (vlTOPp->gpio_i 
                                         >> 0x14U))));
        tracep->chgBit(oldp+3562,((1U & ((0x100000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x14U)))));
        tracep->chgBit(oldp+3563,((1U & (vlTOPp->gpio_i 
                                         >> 0x15U))));
        tracep->chgBit(oldp+3564,((1U & ((0x200000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x15U)))));
        tracep->chgBit(oldp+3565,((1U & (vlTOPp->gpio_i 
                                         >> 0x16U))));
        tracep->chgBit(oldp+3566,((1U & ((0x400000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x16U)))));
        tracep->chgBit(oldp+3567,((1U & (vlTOPp->gpio_i 
                                         >> 0x17U))));
        tracep->chgBit(oldp+3568,((1U & ((0x800000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x17U)))));
        tracep->chgBit(oldp+3569,((1U & (vlTOPp->gpio_i 
                                         >> 0x18U))));
        tracep->chgBit(oldp+3570,((1U & ((0x1000000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x18U)))));
        tracep->chgBit(oldp+3571,((1U & (vlTOPp->gpio_i 
                                         >> 0x19U))));
        tracep->chgBit(oldp+3572,((1U & ((0x2000000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x19U)))));
        tracep->chgBit(oldp+3573,((1U & (vlTOPp->gpio_i 
                                         >> 0x1aU))));
        tracep->chgBit(oldp+3574,((1U & ((0x4000000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1aU)))));
        tracep->chgBit(oldp+3575,((1U & (vlTOPp->gpio_i 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+3576,((1U & ((0x8000000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1bU)))));
        tracep->chgBit(oldp+3577,((1U & (vlTOPp->gpio_i 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+3578,((1U & ((0x10000000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1cU)))));
        tracep->chgBit(oldp+3579,((1U & (vlTOPp->gpio_i 
                                         >> 0x1dU))));
        tracep->chgBit(oldp+3580,((1U & ((0x20000000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1dU)))));
        tracep->chgBit(oldp+3581,((1U & (vlTOPp->gpio_i 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+3582,((1U & ((0x40000000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1eU)))));
        tracep->chgBit(oldp+3583,((1U & (vlTOPp->gpio_i 
                                         >> 0x1fU))));
        tracep->chgBit(oldp+3584,((1U & ((0x80000000U 
                                          & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1fU)))));
        tracep->chgBit(oldp+3585,(vlTOPp->soc_top__DOT__iccm__DOT__req));
        tracep->chgIData(oldp+3586,(vlTOPp->soc_top__DOT__iccm__DOT__rdata),32);
        tracep->chgBit(oldp+3587,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o));
        tracep->chgIData(oldp+3588,(((IData)(vlTOPp->rst_ni)
                                      ? vlTOPp->soc_top__DOT__iccm__DOT__rdata
                                      : 0U)),32);
        tracep->chgBit(oldp+3589,((1U & ((vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                          >> 0x15U) 
                                         & (IData)(vlTOPp->soc_top__DOT__iccm_to_xbar)))));
        tracep->chgBit(oldp+3590,(((IData)(vlTOPp->soc_top__DOT__iccm__DOT__req) 
                                   & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o)))));
        tracep->chgBit(oldp+3591,(((IData)((0x800U 
                                            == (0x1c00U 
                                                & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                   & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))));
        tracep->chgBit(oldp+3592,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid));
        tracep->chgBit(oldp+3593,((1U & ((~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                         & ((1U == 
                                             (3U & 
                                              ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU)))
                                             ? ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                | ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xaU))
                                             : ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xaU))))));
        tracep->chgIData(oldp+3594,((((IData)(vlTOPp->rst_ni)
                                       ? vlTOPp->soc_top__DOT__iccm__DOT__rdata
                                       : 0U) & vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask)),32);
        tracep->chgBit(oldp+3595,((((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk) 
                                    & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk)) 
                                   & (((4U == (7U & 
                                               (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                >> 0x12U))) 
                                       | (1U == (7U 
                                                 & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                    >> 0x12U)))) 
                                      | (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk)))));
        tracep->chgBit(oldp+3596,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk));
        tracep->chgSData(oldp+3597,(((((4U != (7U & 
                                               (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                >> 0x12U)))
                                        ? 0U : 1U) 
                                      << 0xbU) | (((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error) 
                                                   << 0xaU) 
                                                  | (0x3ffU 
                                                     & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                        >> 5U))))),13);
        tracep->chgCData(oldp+3598,(((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
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
        tracep->chgBit(oldp+3599,(((~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))));
        tracep->chgSData(oldp+3600,(((0x19U >= (0x1fU 
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
        tracep->chgCData(oldp+3601,(((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
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
        tracep->chgBit(oldp+3602,(((~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid))));
        tracep->chgCData(oldp+3603,(((9U >= (0xfU & 
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
        tracep->chgCData(oldp+3604,(((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
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
        tracep->chgBit(oldp+3605,(((~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                   & ((IData)((0x800U 
                                               == (0x1c00U 
                                                   & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                      & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack)))));
        tracep->chgQData(oldp+3606,(((0x41U >= (0x7fU 
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
        tracep->chgQData(oldp+3608,((0x1ffffffffULL 
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
        tracep->chgIData(oldp+3610,(vlTOPp->soc_top__DOT__dccm__DOT__rdata),32);
        tracep->chgBit(oldp+3611,((1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [0U][2U] 
                                          >> 0x15U) 
                                         & (IData)(vlTOPp->soc_top__DOT__dccm_to_xbar)))));
        tracep->chgBit(oldp+3612,(((IData)((0x800U 
                                            == (0x1c00U 
                                                & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                   & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))));
        tracep->chgBit(oldp+3613,((1U & ((~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                         & ((1U == 
                                             (3U & 
                                              ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU)))
                                             ? ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                | ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xaU))
                                             : ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xaU))))));
        tracep->chgIData(oldp+3614,((vlTOPp->soc_top__DOT__dccm__DOT__rdata 
                                     & vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rmask)),32);
        tracep->chgCData(oldp+3615,(((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
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
        tracep->chgBit(oldp+3616,(((~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))));
        tracep->chgSData(oldp+3617,(((0x33U >= (0x3fU 
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
        tracep->chgCData(oldp+3618,(((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
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
        tracep->chgBit(oldp+3619,(((~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))));
        tracep->chgCData(oldp+3620,(((0x13U >= (0x1fU 
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
        tracep->chgCData(oldp+3621,(((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
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
        tracep->chgBit(oldp+3622,(((~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                   & ((IData)((0x800U 
                                               == (0x1c00U 
                                                   & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                      & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack)))));
        tracep->chgQData(oldp+3623,(((0x83U >= (0xffU 
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
        tracep->chgQData(oldp+3625,((0x1ffffffffULL 
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
        tracep->chgIData(oldp+3627,(vlTOPp->soc_top__DOT__intr_controller__DOT__le),32);
        tracep->chgIData(oldp+3628,(vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0]),32);
        tracep->chgIData(oldp+3629,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set),32);
        tracep->chgBit(oldp+3630,(((((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re) 
                                     | (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)((0U 
                                                  != vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit)))) 
                                   | (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err))));
        tracep->chgBit(oldp+3631,((((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re) 
                                    | (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                   & (~ (IData)((0U 
                                                 != vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit))))));
        tracep->chgBit(oldp+3632,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err));
        tracep->chgBit(oldp+3633,((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                             >> 9U)) 
                                    & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                   & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)))));
        tracep->chgBit(oldp+3634,((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                             >> 0x24U)) 
                                    & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                   & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)))));
        tracep->chgBit(oldp+3635,(((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                            >> 0x24U)) 
                                   & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re))));
        tracep->chgQData(oldp+3636,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit),38);
        tracep->chgBit(oldp+3638,((1U & ((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)) 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [9U][0U]))));
        tracep->chgBit(oldp+3639,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                                   & (0U != (3U & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][1U] 
                                                      >> 5U)))))));
        tracep->chgBit(oldp+3640,((1U & (~ ((((0U == 
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
        tracep->chgBit(oldp+3641,((((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                    & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                   & (((4U == (7U & 
                                               (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][2U] 
                                                >> 0x12U))) 
                                       | (1U == (7U 
                                                 & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    >> 0x12U)))) 
                                      | (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))));
        tracep->chgIData(oldp+3642,(vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                    [0U]),32);
        tracep->chgQData(oldp+3643,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree),63);
        tracep->chgBit(oldp+3645,((((7U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
                                    > vlTOPp->soc_top__DOT__intr_controller__DOT__threshold
                                    [0U]) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))));
        tracep->chgCData(oldp+3646,(((1U & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))
                                      ? (0x3fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U])
                                      : 0U)),6);
        tracep->chgBit(oldp+3647,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3648,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3649,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3650,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3651,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3652,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3653,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3654,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3655,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3656,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3657,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3658,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3659,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3660,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3661,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3662,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3663,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3664,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3665,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3666,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3667,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3668,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3669,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3670,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3671,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3672,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3673,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3674,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3675,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3676,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3677,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel));
    }
}
