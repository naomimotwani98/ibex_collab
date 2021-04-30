// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VSOC_TOP__SYMS_H_
#define _VSOC_TOP__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vsoc_top.h"
#include "Vsoc_top_rv_plic_reg_pkg.h"
#include "Vsoc_top_gpio_reg_pkg.h"

// SYMS CLASS
class Vsoc_top__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vsoc_top*                      TOPp;
    Vsoc_top_gpio_reg_pkg          TOP__gpio_reg_pkg;
    Vsoc_top_rv_plic_reg_pkg       TOP__rv_plic_reg_pkg;
    
    // CREATORS
    Vsoc_top__Syms(Vsoc_top* topp, const char* namep);
    ~Vsoc_top__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
