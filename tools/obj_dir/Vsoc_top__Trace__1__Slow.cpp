// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsoc_top__Syms.h"


void Vsoc_top::traceFullSub1(void* userp, VerilatedVcd* tracep) {
    Vsoc_top__Syms* __restrict vlSymsp = static_cast<Vsoc_top__Syms*>(userp);
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+4397,(0U),3);
        tracep->fullCData(oldp+4398,(0U),3);
        tracep->fullCData(oldp+4399,(0U),2);
        tracep->fullCData(oldp+4400,(0U),8);
        tracep->fullBit(oldp+4401,(0U));
        tracep->fullIData(oldp+4402,(0U),32);
        tracep->fullBit(oldp+4403,(0U));
        tracep->fullBit(oldp+4404,(1U));
    }
}
