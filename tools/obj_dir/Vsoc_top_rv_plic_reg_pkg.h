// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsoc_top.h for the primary calling header

#ifndef VERILATED_VSOC_TOP_RV_PLIC_REG_PKG_H_
#define VERILATED_VSOC_TOP_RV_PLIC_REG_PKG_H_  // guard

#include "verilated_heavy.h"
#include "verilated_threads.h"

//==========

class Vsoc_top__Syms;
class Vsoc_top_VerilatedVcd;


//----------

VL_MODULE(Vsoc_top_rv_plic_reg_pkg) {
  public:
    
    // INTERNAL VARIABLES
  private:
    Vsoc_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    // Begin mtask footprint all: 
    CData/*3:0*/ __PVT__RV_PLIC_PERMIT[38];
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsoc_top_rv_plic_reg_pkg);  ///< Copying not allowed
  public:
    Vsoc_top_rv_plic_reg_pkg(const char* name = "TOP");
    ~Vsoc_top_rv_plic_reg_pkg();
    
    // INTERNAL METHODS
    void __Vconfigure(Vsoc_top__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__rv_plic_reg_pkg__1(Vsoc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
