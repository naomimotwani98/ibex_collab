// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsoc_top.h for the primary calling header

#ifndef _VSOC_TOP_GPIO_REG_PKG_H_
#define _VSOC_TOP_GPIO_REG_PKG_H_  // guard

#include "verilated_heavy.h"
#include "verilated_threads.h"

//==========

class Vsoc_top__Syms;
class Vsoc_top_VerilatedVcd;


//----------

VL_MODULE(Vsoc_top_gpio_reg_pkg) {
  public:
    
    // INTERNAL VARIABLES
  private:
    Vsoc_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    // Begin mtask footprint all: 
    CData/*3:0*/ __PVT__GPIO_PERMIT[15];
    
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsoc_top_gpio_reg_pkg);  ///< Copying not allowed
  public:
    Vsoc_top_gpio_reg_pkg(const char* name = "TOP");
    ~Vsoc_top_gpio_reg_pkg();
    
    // INTERNAL METHODS
    void __Vconfigure(Vsoc_top__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__gpio_reg_pkg__1(Vsoc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
