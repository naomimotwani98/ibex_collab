// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsoc_top__Syms.h"
#include "Vsoc_top.h"
#include "Vsoc_top_rv_plic_reg_pkg.h"
#include "Vsoc_top_gpio_reg_pkg.h"



// FUNCTIONS
Vsoc_top__Syms::~Vsoc_top__Syms()
{
}

Vsoc_top__Syms::Vsoc_top__Syms(VerilatedContext* contextp, Vsoc_top* topp, const char* namep)
    // Setup locals
    : VerilatedSyms{contextp}
    , __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__gpio_reg_pkg(Verilated::catName(topp->name(), "gpio_reg_pkg"))
    , TOP__rv_plic_reg_pkg(Verilated::catName(topp->name(), "rv_plic_reg_pkg"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__gpio_reg_pkg = &TOP__gpio_reg_pkg;
    TOPp->__PVT__rv_plic_reg_pkg = &TOP__rv_plic_reg_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__gpio_reg_pkg.__Vconfigure(this, true);
    TOP__rv_plic_reg_pkg.__Vconfigure(this, true);
}
