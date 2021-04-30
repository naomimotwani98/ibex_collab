// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsoc_top__Syms.h"


//======================

void Vsoc_top::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vsoc_top* t = (Vsoc_top*)userthis;
    Vsoc_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vsoc_top::traceChgThis(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    IData/*31:0*/ __Vilp;
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [1U]))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [1U]) | vlTOPp->__Vm_traceActivity
                         [0x3eU]))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [3U]))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [3U]) | vlTOPp->__Vm_traceActivity
                          [4U]) | vlTOPp->__Vm_traceActivity
                         [0x41U]))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [3U]) | vlTOPp->__Vm_traceActivity
                         [9U]))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [3U]) | vlTOPp->__Vm_traceActivity
                          [9U]) | vlTOPp->__Vm_traceActivity
                         [0x3bU]))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [3U]) | vlTOPp->__Vm_traceActivity
                         [0x1bU]))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [3U]) | vlTOPp->__Vm_traceActivity
                          [0x1bU]) | vlTOPp->__Vm_traceActivity
                         [0x47U]))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((((vlTOPp->__Vm_traceActivity
                            [0U] | vlTOPp->__Vm_traceActivity
                            [3U]) | vlTOPp->__Vm_traceActivity
                           [0x36U]) | vlTOPp->__Vm_traceActivity
                          [0x3bU]) | vlTOPp->__Vm_traceActivity
                         [0x3dU]))) {
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((((vlTOPp->__Vm_traceActivity
                            [0U] | vlTOPp->__Vm_traceActivity
                            [4U]) | vlTOPp->__Vm_traceActivity
                           [6U]) | vlTOPp->__Vm_traceActivity
                          [7U]) | vlTOPp->__Vm_traceActivity
                         [0x41U]))) {
            vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((((vlTOPp->__Vm_traceActivity
                            [0U] | vlTOPp->__Vm_traceActivity
                            [4U]) | vlTOPp->__Vm_traceActivity
                           [7U]) | vlTOPp->__Vm_traceActivity
                          [0x19U]) | vlTOPp->__Vm_traceActivity
                         [0x35U]))) {
            vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((((vlTOPp->__Vm_traceActivity
                            [0U] | vlTOPp->__Vm_traceActivity
                            [4U]) | vlTOPp->__Vm_traceActivity
                           [0x18U]) | vlTOPp->__Vm_traceActivity
                          [0x22U]) | vlTOPp->__Vm_traceActivity
                         [0x41U]))) {
            vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [4U]) | vlTOPp->__Vm_traceActivity
                          [0x18U]) | vlTOPp->__Vm_traceActivity
                         [0x41U]))) {
            vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((((vlTOPp->__Vm_traceActivity
                             [0U] | vlTOPp->__Vm_traceActivity
                             [4U]) | vlTOPp->__Vm_traceActivity
                            [0x33U]) | vlTOPp->__Vm_traceActivity
                           [0x3dU]) | vlTOPp->__Vm_traceActivity
                          [0x5aU]) | vlTOPp->__Vm_traceActivity
                         [0x5bU]))) {
            vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [4U]) | vlTOPp->__Vm_traceActivity
                         [0x5aU]))) {
            vlTOPp->traceChgThis__17(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [5U]) | vlTOPp->__Vm_traceActivity
                         [9U]))) {
            vlTOPp->traceChgThis__18(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [6U]))) {
            vlTOPp->traceChgThis__19(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [7U]))) {
            vlTOPp->traceChgThis__20(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [7U]) | vlTOPp->__Vm_traceActivity
                          [0x19U]) | vlTOPp->__Vm_traceActivity
                         [0x35U]))) {
            vlTOPp->traceChgThis__21(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [7U]) | vlTOPp->__Vm_traceActivity
                          [0x1aU]) | vlTOPp->__Vm_traceActivity
                         [0x41U]))) {
            vlTOPp->traceChgThis__22(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [7U]) | vlTOPp->__Vm_traceActivity
                         [0x1bU]))) {
            vlTOPp->traceChgThis__23(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [7U]) | vlTOPp->__Vm_traceActivity
                          [0x35U]) | vlTOPp->__Vm_traceActivity
                         [0x47U]))) {
            vlTOPp->traceChgThis__24(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [9U]))) {
            vlTOPp->traceChgThis__25(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((((vlTOPp->__Vm_traceActivity
                             [0U] | vlTOPp->__Vm_traceActivity
                             [0xaU]) | vlTOPp->__Vm_traceActivity
                            [0xbU]) | vlTOPp->__Vm_traceActivity
                           [0xdU]) | vlTOPp->__Vm_traceActivity
                          [0xfU]) | vlTOPp->__Vm_traceActivity
                         [0x11U]))) {
            vlTOPp->traceChgThis__26(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((((vlTOPp->__Vm_traceActivity
                             [0U] | vlTOPp->__Vm_traceActivity
                             [0xaU]) | vlTOPp->__Vm_traceActivity
                            [0xbU]) | vlTOPp->__Vm_traceActivity
                           [0xdU]) | vlTOPp->__Vm_traceActivity
                          [0xfU]) | vlTOPp->__Vm_traceActivity
                         [0x12U]))) {
            vlTOPp->traceChgThis__27(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [0xaU]) | vlTOPp->__Vm_traceActivity
                          [0xcU]) | vlTOPp->__Vm_traceActivity
                         [0xdU]))) {
            vlTOPp->traceChgThis__28(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0xdU]))) {
            vlTOPp->traceChgThis__29(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0xdU]) | vlTOPp->__Vm_traceActivity
                         [0xfU]))) {
            vlTOPp->traceChgThis__30(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [0xdU]) | vlTOPp->__Vm_traceActivity
                          [0xfU]) | vlTOPp->__Vm_traceActivity
                         [0x11U]))) {
            vlTOPp->traceChgThis__31(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [0xdU]) | vlTOPp->__Vm_traceActivity
                          [0xfU]) | vlTOPp->__Vm_traceActivity
                         [0x13U]))) {
            vlTOPp->traceChgThis__32(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0xdU]) | vlTOPp->__Vm_traceActivity
                         [0x11U]))) {
            vlTOPp->traceChgThis__33(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0xdU]) | vlTOPp->__Vm_traceActivity
                         [0x15U]))) {
            vlTOPp->traceChgThis__34(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0xeU]) | vlTOPp->__Vm_traceActivity
                         [0x10U]))) {
            vlTOPp->traceChgThis__35(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0xfU]))) {
            vlTOPp->traceChgThis__36(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [0xfU]) | vlTOPp->__Vm_traceActivity
                          [0x10U]) | vlTOPp->__Vm_traceActivity
                         [0x11U]))) {
            vlTOPp->traceChgThis__37(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [0xfU]) | vlTOPp->__Vm_traceActivity
                          [0x10U]) | vlTOPp->__Vm_traceActivity
                         [0x15U]))) {
            vlTOPp->traceChgThis__38(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0xfU]) | vlTOPp->__Vm_traceActivity
                         [0x11U]))) {
            vlTOPp->traceChgThis__39(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0xfU]) | vlTOPp->__Vm_traceActivity
                         [0x15U]))) {
            vlTOPp->traceChgThis__40(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x10U]))) {
            vlTOPp->traceChgThis__41(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x11U]))) {
            vlTOPp->traceChgThis__42(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x12U]))) {
            vlTOPp->traceChgThis__43(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x13U]))) {
            vlTOPp->traceChgThis__44(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x14U]))) {
            vlTOPp->traceChgThis__45(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x15U]))) {
            vlTOPp->traceChgThis__46(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [0x18U]) | vlTOPp->__Vm_traceActivity
                          [0x22U]) | vlTOPp->__Vm_traceActivity
                         [0x41U]))) {
            vlTOPp->traceChgThis__47(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x19U]) | vlTOPp->__Vm_traceActivity
                         [0x41U]))) {
            vlTOPp->traceChgThis__48(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x1aU]))) {
            vlTOPp->traceChgThis__49(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x1aU]) | vlTOPp->__Vm_traceActivity
                         [0x28U]))) {
            vlTOPp->traceChgThis__50(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [0x1aU]) | vlTOPp->__Vm_traceActivity
                          [0x35U]) | vlTOPp->__Vm_traceActivity
                         [0x47U]))) {
            vlTOPp->traceChgThis__51(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x1bU]))) {
            vlTOPp->traceChgThis__52(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x1bU]) | vlTOPp->__Vm_traceActivity
                         [0x1cU]))) {
            vlTOPp->traceChgThis__53(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x1bU]) | vlTOPp->__Vm_traceActivity
                         [0x28U]))) {
            vlTOPp->traceChgThis__54(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x1cU]))) {
            vlTOPp->traceChgThis__55(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x1dU]))) {
            vlTOPp->traceChgThis__56(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x1eU]))) {
            vlTOPp->traceChgThis__57(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x1fU]))) {
            vlTOPp->traceChgThis__58(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x20U]))) {
            vlTOPp->traceChgThis__59(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x21U]))) {
            vlTOPp->traceChgThis__60(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x22U]))) {
            vlTOPp->traceChgThis__61(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x22U]) | vlTOPp->__Vm_traceActivity
                         [0x30U]))) {
            vlTOPp->traceChgThis__62(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x22U]) | vlTOPp->__Vm_traceActivity
                         [0x35U]))) {
            vlTOPp->traceChgThis__63(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x23U]) | vlTOPp->__Vm_traceActivity
                         [0x43U]))) {
            vlTOPp->traceChgThis__64(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x25U]))) {
            vlTOPp->traceChgThis__65(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [0x26U]) | vlTOPp->__Vm_traceActivity
                          [0x28U]) | vlTOPp->__Vm_traceActivity
                         [0x5bU]))) {
            vlTOPp->traceChgThis__66(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x26U]) | vlTOPp->__Vm_traceActivity
                         [0x3bU]))) {
            vlTOPp->traceChgThis__67(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x27U]))) {
            vlTOPp->traceChgThis__68(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x28U]))) {
            vlTOPp->traceChgThis__69(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x28U]) | vlTOPp->__Vm_traceActivity
                         [0x41U]))) {
            vlTOPp->traceChgThis__70(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((((vlTOPp->__Vm_traceActivity
                             [0U] | vlTOPp->__Vm_traceActivity
                             [0x29U]) | vlTOPp->__Vm_traceActivity
                            [0x3eU]) | vlTOPp->__Vm_traceActivity
                           [0x5eU]) | vlTOPp->__Vm_traceActivity
                          [0x63U]) | vlTOPp->__Vm_traceActivity
                         [0x67U]))) {
            vlTOPp->traceChgThis__71(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x2aU]))) {
            vlTOPp->traceChgThis__72(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x2bU]))) {
            vlTOPp->traceChgThis__73(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x2bU]) | vlTOPp->__Vm_traceActivity
                         [0x3eU]))) {
            vlTOPp->traceChgThis__74(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x2bU]) | vlTOPp->__Vm_traceActivity
                         [0x41U]))) {
            vlTOPp->traceChgThis__75(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [0x2cU]) | vlTOPp->__Vm_traceActivity
                          [0x33U]) | vlTOPp->__Vm_traceActivity
                         [0x38U]))) {
            vlTOPp->traceChgThis__76(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [0x2cU]) | vlTOPp->__Vm_traceActivity
                          [0x35U]) | vlTOPp->__Vm_traceActivity
                         [0x48U]))) {
            vlTOPp->traceChgThis__77(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x2cU]) | vlTOPp->__Vm_traceActivity
                         [0x5aU]))) {
            vlTOPp->traceChgThis__78(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((((vlTOPp->__Vm_traceActivity
                            [0U] | vlTOPp->__Vm_traceActivity
                            [0x2dU]) | vlTOPp->__Vm_traceActivity
                           [0x2eU]) | vlTOPp->__Vm_traceActivity
                          [0x33U]) | vlTOPp->__Vm_traceActivity
                         [0x3dU]))) {
            vlTOPp->traceChgThis__79(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x2eU]))) {
            vlTOPp->traceChgThis__80(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x2eU]) | vlTOPp->__Vm_traceActivity
                         [0x30U]))) {
            vlTOPp->traceChgThis__81(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [0x2eU]) | vlTOPp->__Vm_traceActivity
                          [0x33U]) | vlTOPp->__Vm_traceActivity
                         [0x3dU]))) {
            vlTOPp->traceChgThis__82(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x2eU]) | vlTOPp->__Vm_traceActivity
                         [0x3dU]))) {
            vlTOPp->traceChgThis__83(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [0x2fU]) | vlTOPp->__Vm_traceActivity
                          [0x33U]) | vlTOPp->__Vm_traceActivity
                         [0x3dU]))) {
            vlTOPp->traceChgThis__84(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((((vlTOPp->__Vm_traceActivity
                            [0U] | vlTOPp->__Vm_traceActivity
                            [0x2fU]) | vlTOPp->__Vm_traceActivity
                           [0x38U]) | vlTOPp->__Vm_traceActivity
                          [0x39U]) | vlTOPp->__Vm_traceActivity
                         [0x3dU]))) {
            vlTOPp->traceChgThis__85(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x2fU]) | vlTOPp->__Vm_traceActivity
                         [0x3dU]))) {
            vlTOPp->traceChgThis__86(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x30U]))) {
            vlTOPp->traceChgThis__87(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x30U]) | vlTOPp->__Vm_traceActivity
                         [0x35U]))) {
            vlTOPp->traceChgThis__88(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [0x30U]) | vlTOPp->__Vm_traceActivity
                          [0x35U]) | vlTOPp->__Vm_traceActivity
                         [0x41U]))) {
            vlTOPp->traceChgThis__89(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x30U]) | vlTOPp->__Vm_traceActivity
                         [0x5aU]))) {
            vlTOPp->traceChgThis__90(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x33U]))) {
            vlTOPp->traceChgThis__91(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x33U]) | vlTOPp->__Vm_traceActivity
                         [0x3dU]))) {
            vlTOPp->traceChgThis__92(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [0x33U]) | vlTOPp->__Vm_traceActivity
                          [0x3dU]) | vlTOPp->__Vm_traceActivity
                         [0x5aU]))) {
            vlTOPp->traceChgThis__93(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x34U]))) {
            vlTOPp->traceChgThis__94(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x35U]))) {
            vlTOPp->traceChgThis__95(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x35U]) | vlTOPp->__Vm_traceActivity
                         [0x3dU]))) {
            vlTOPp->traceChgThis__96(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x36U]) | vlTOPp->__Vm_traceActivity
                         [0x3dU]))) {
            vlTOPp->traceChgThis__97(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [0x37U]) | vlTOPp->__Vm_traceActivity
                          [0x38U]) | vlTOPp->__Vm_traceActivity
                         [0x3dU]))) {
            vlTOPp->traceChgThis__98(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x38U]))) {
            vlTOPp->traceChgThis__99(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [0x38U]) | vlTOPp->__Vm_traceActivity
                          [0x39U]) | vlTOPp->__Vm_traceActivity
                         [0x3dU]))) {
            vlTOPp->traceChgThis__100(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x38U]) | vlTOPp->__Vm_traceActivity
                         [0x3bU]))) {
            vlTOPp->traceChgThis__101(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x38U]) | vlTOPp->__Vm_traceActivity
                         [0x3dU]))) {
            vlTOPp->traceChgThis__102(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x3aU]))) {
            vlTOPp->traceChgThis__103(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x3bU]))) {
            vlTOPp->traceChgThis__104(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x3dU]))) {
            vlTOPp->traceChgThis__105(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x3dU]) | vlTOPp->__Vm_traceActivity
                         [0x5bU]))) {
            vlTOPp->traceChgThis__106(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x3eU]))) {
            vlTOPp->traceChgThis__107(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x3eU]) | vlTOPp->__Vm_traceActivity
                         [0x40U]))) {
            vlTOPp->traceChgThis__108(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x3eU]) | vlTOPp->__Vm_traceActivity
                         [0x42U]))) {
            vlTOPp->traceChgThis__109(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x3eU]) | vlTOPp->__Vm_traceActivity
                         [0x60U]))) {
            vlTOPp->traceChgThis__110(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x3eU]) | vlTOPp->__Vm_traceActivity
                         [0x63U]))) {
            vlTOPp->traceChgThis__111(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x3eU]) | vlTOPp->__Vm_traceActivity
                         [0x64U]))) {
            vlTOPp->traceChgThis__112(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x3eU]) | vlTOPp->__Vm_traceActivity
                         [0x66U]))) {
            vlTOPp->traceChgThis__113(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x3fU]))) {
            vlTOPp->traceChgThis__114(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x3fU]) | vlTOPp->__Vm_traceActivity
                         [0x40U]))) {
            vlTOPp->traceChgThis__115(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [0x3fU]) | vlTOPp->__Vm_traceActivity
                          [0x40U]) | vlTOPp->__Vm_traceActivity
                         [0x43U]))) {
            vlTOPp->traceChgThis__116(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x40U]))) {
            vlTOPp->traceChgThis__117(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x41U]))) {
            vlTOPp->traceChgThis__118(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x42U]))) {
            vlTOPp->traceChgThis__119(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [0x42U]) | vlTOPp->__Vm_traceActivity
                          [0x65U]) | vlTOPp->__Vm_traceActivity
                         [0x67U]))) {
            vlTOPp->traceChgThis__120(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x42U]) | vlTOPp->__Vm_traceActivity
                         [0x67U]))) {
            vlTOPp->traceChgThis__121(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x43U]))) {
            vlTOPp->traceChgThis__122(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x44U]))) {
            vlTOPp->traceChgThis__123(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((((vlTOPp->__Vm_traceActivity
                             [0U] | vlTOPp->__Vm_traceActivity
                             [0x44U]) | vlTOPp->__Vm_traceActivity
                            [0x46U]) | vlTOPp->__Vm_traceActivity
                           [0x57U]) | vlTOPp->__Vm_traceActivity
                          [0x59U]) | vlTOPp->__Vm_traceActivity
                         [0x60U]))) {
            vlTOPp->traceChgThis__124(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x44U]) | vlTOPp->__Vm_traceActivity
                         [0x59U]))) {
            vlTOPp->traceChgThis__125(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x45U]))) {
            vlTOPp->traceChgThis__126(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x46U]))) {
            vlTOPp->traceChgThis__127(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x46U]) | vlTOPp->__Vm_traceActivity
                         [0x57U]))) {
            vlTOPp->traceChgThis__128(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [0x46U]) | vlTOPp->__Vm_traceActivity
                          [0x57U]) | vlTOPp->__Vm_traceActivity
                         [0x58U]))) {
            vlTOPp->traceChgThis__129(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x47U]))) {
            vlTOPp->traceChgThis__130(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x48U]))) {
            vlTOPp->traceChgThis__131(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x49U]))) {
            vlTOPp->traceChgThis__132(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x4aU]))) {
            vlTOPp->traceChgThis__133(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x4bU]))) {
            vlTOPp->traceChgThis__134(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x4cU]))) {
            vlTOPp->traceChgThis__135(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x4dU]))) {
            vlTOPp->traceChgThis__136(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x4eU]))) {
            vlTOPp->traceChgThis__137(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x4fU]))) {
            vlTOPp->traceChgThis__138(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x50U]))) {
            vlTOPp->traceChgThis__139(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x51U]))) {
            vlTOPp->traceChgThis__140(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x52U]))) {
            vlTOPp->traceChgThis__141(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x53U]))) {
            vlTOPp->traceChgThis__142(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x54U]))) {
            vlTOPp->traceChgThis__143(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x55U]))) {
            vlTOPp->traceChgThis__144(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x56U]))) {
            vlTOPp->traceChgThis__145(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x58U]))) {
            vlTOPp->traceChgThis__146(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x5aU]))) {
            vlTOPp->traceChgThis__147(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x5bU]))) {
            vlTOPp->traceChgThis__148(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x5dU]))) {
            vlTOPp->traceChgThis__149(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
                           [0U] | vlTOPp->__Vm_traceActivity
                           [0x5eU]) | vlTOPp->__Vm_traceActivity
                          [0x63U]) | vlTOPp->__Vm_traceActivity
                         [0x67U]))) {
            vlTOPp->traceChgThis__150(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0U] | vlTOPp->__Vm_traceActivity
                          [0x5eU]) | vlTOPp->__Vm_traceActivity
                         [0x67U]))) {
            vlTOPp->traceChgThis__151(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x5fU]))) {
            vlTOPp->traceChgThis__152(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x60U]))) {
            vlTOPp->traceChgThis__153(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x62U]))) {
            vlTOPp->traceChgThis__154(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x63U]))) {
            vlTOPp->traceChgThis__155(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x64U]))) {
            vlTOPp->traceChgThis__156(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x66U]))) {
            vlTOPp->traceChgThis__157(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x67U]))) {
            vlTOPp->traceChgThis__158(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            vlTOPp->traceChgThis__159(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            vlTOPp->traceChgThis__160(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            vlTOPp->traceChgThis__161(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            vlTOPp->traceChgThis__162(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            vlTOPp->traceChgThis__163(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[8U])) {
            vlTOPp->traceChgThis__164(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xaU])) {
            vlTOPp->traceChgThis__165(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0xaU] | vlTOPp->__Vm_traceActivity
                         [0xbU]))) {
            vlTOPp->traceChgThis__166(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xbU])) {
            vlTOPp->traceChgThis__167(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xcU])) {
            vlTOPp->traceChgThis__168(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xeU])) {
            vlTOPp->traceChgThis__169(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x16U])) {
            vlTOPp->traceChgThis__170(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x17U])) {
            vlTOPp->traceChgThis__171(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x18U])) {
            vlTOPp->traceChgThis__172(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x19U])) {
            vlTOPp->traceChgThis__173(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x22U])) {
            vlTOPp->traceChgThis__174(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x23U])) {
            vlTOPp->traceChgThis__175(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x24U])) {
            vlTOPp->traceChgThis__176(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x26U])) {
            vlTOPp->traceChgThis__177(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x29U])) {
            vlTOPp->traceChgThis__178(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2bU])) {
            vlTOPp->traceChgThis__179(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2cU])) {
            vlTOPp->traceChgThis__180(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2dU])) {
            vlTOPp->traceChgThis__181(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2eU])) {
            vlTOPp->traceChgThis__182(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2fU])) {
            vlTOPp->traceChgThis__183(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x31U])) {
            vlTOPp->traceChgThis__184(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x32U])) {
            vlTOPp->traceChgThis__185(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x36U])) {
            vlTOPp->traceChgThis__186(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x37U])) {
            vlTOPp->traceChgThis__187(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x38U])) {
            vlTOPp->traceChgThis__188(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x39U])) {
            vlTOPp->traceChgThis__189(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3cU])) {
            vlTOPp->traceChgThis__190(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x5cU])) {
            vlTOPp->traceChgThis__191(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x5fU])) {
            vlTOPp->traceChgThis__192(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x61U])) {
            vlTOPp->traceChgThis__193(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x65U])) {
            vlTOPp->traceChgThis__194(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__195(vlSymsp, vcdp, code);
    }
    // Final
    __Vilp = 0U;
    while ((__Vilp <= 0x67U)) {
        vlTOPp->__Vm_traceActivity[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

void Vsoc_top::traceChgThis__2(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgArray(c+1,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr),136);
        vcdp->chgBus(c+41,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg),24);
        vcdp->chgBus(c+49,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__pmp_req_err),2);
        vcdp->chgBit(c+57,((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__pmp_req_err))));
        vcdp->chgBit(c+65,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_alu));
        vcdp->chgBus(c+73,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev),32);
        vcdp->chgBit(c+81,((1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__pmp_req_err) 
                                  >> 1U))));
        vcdp->chgBus(c+89,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0]),32);
        vcdp->chgBus(c+90,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1]),32);
        vcdp->chgBus(c+91,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2]),32);
        vcdp->chgBus(c+92,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3]),32);
        vcdp->chgBus(c+93,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4]),32);
        vcdp->chgBus(c+94,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5]),32);
        vcdp->chgBus(c+95,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6]),32);
        vcdp->chgBus(c+96,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7]),32);
        vcdp->chgBus(c+97,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8]),32);
        vcdp->chgBus(c+98,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9]),32);
        vcdp->chgBus(c+99,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[10]),32);
        vcdp->chgBus(c+100,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[11]),32);
        vcdp->chgBus(c+101,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[12]),32);
        vcdp->chgBus(c+102,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[13]),32);
        vcdp->chgBus(c+103,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[14]),32);
        vcdp->chgBus(c+104,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[15]),32);
        vcdp->chgBus(c+217,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0]),8);
        vcdp->chgBus(c+218,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1]),8);
        vcdp->chgBus(c+219,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2]),8);
        vcdp->chgBus(c+220,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3]),8);
        vcdp->chgBus(c+221,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4]),8);
        vcdp->chgBus(c+222,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5]),8);
        vcdp->chgBus(c+223,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6]),8);
        vcdp->chgBus(c+224,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7]),8);
        vcdp->chgBus(c+225,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8]),8);
        vcdp->chgBus(c+226,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9]),8);
        vcdp->chgBus(c+227,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[10]),8);
        vcdp->chgBus(c+228,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[11]),8);
        vcdp->chgBus(c+229,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[12]),8);
        vcdp->chgBus(c+230,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[13]),8);
        vcdp->chgBus(c+231,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[14]),8);
        vcdp->chgBus(c+232,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[15]),8);
        vcdp->chgBus(c+345,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0]),32);
        vcdp->chgBus(c+346,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[1]),32);
        vcdp->chgBus(c+347,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[2]),32);
        vcdp->chgBus(c+348,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[3]),32);
        vcdp->chgBus(c+349,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[4]),32);
        vcdp->chgBus(c+350,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[5]),32);
        vcdp->chgBus(c+351,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[6]),32);
        vcdp->chgBus(c+352,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[7]),32);
        vcdp->chgBus(c+353,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[8]),32);
        vcdp->chgBus(c+354,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[9]),32);
        vcdp->chgBus(c+355,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[10]),32);
        vcdp->chgBus(c+356,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[11]),32);
        vcdp->chgBus(c+357,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[12]),32);
        vcdp->chgBus(c+358,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[13]),32);
        vcdp->chgBus(c+359,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[14]),32);
        vcdp->chgBus(c+360,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[15]),32);
        vcdp->chgBus(c+361,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[16]),32);
        vcdp->chgBus(c+362,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[17]),32);
        vcdp->chgBus(c+363,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[18]),32);
        vcdp->chgBus(c+364,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[19]),32);
        vcdp->chgBus(c+365,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[20]),32);
        vcdp->chgBus(c+366,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[21]),32);
        vcdp->chgBus(c+367,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[22]),32);
        vcdp->chgBus(c+368,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[23]),32);
        vcdp->chgBus(c+369,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[24]),32);
        vcdp->chgBus(c+370,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[25]),32);
        vcdp->chgBus(c+371,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[26]),32);
        vcdp->chgBus(c+372,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[27]),32);
        vcdp->chgBus(c+373,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[28]),32);
        vcdp->chgBus(c+374,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[29]),32);
        vcdp->chgBus(c+375,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[30]),32);
        vcdp->chgBus(c+376,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[31]),32);
        vcdp->chgBus(c+601,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d),6);
        vcdp->chgBus(c+609,(vlTOPp->soc_top__DOT__iccm__DOT__addr),12);
        vcdp->chgBit(c+617,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o));
        vcdp->chgBus(c+625,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int),32);
        vcdp->chgBus(c+633,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int),32);
        vcdp->chgBit(c+641,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error));
        vcdp->chgBit(c+649,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error));
        vcdp->chgBus(c+657,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int),32);
        vcdp->chgBus(c+665,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int),32);
        vcdp->chgBus(c+673,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__unnamedblk1__DOT__i),32);
        vcdp->chgBit(c+681,((((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk) 
                              & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk)) 
                             & (((4U == (7U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0x12U))) 
                                 | (1U == (7U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                 >> 0x12U)))) 
                                | (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk)))));
        vcdp->chgBit(c+689,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk));
        vcdp->chgBit(c+697,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk));
        vcdp->chgBit(c+705,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk));
        vcdp->chgBus(c+713,(((((4U != (7U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                             >> 0x12U)))
                                ? 0U : 1U) << 0xbU) 
                             | (((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error) 
                                 << 0xaU) | (0x3ffU 
                                             & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                >> 5U))))),13);
        vcdp->chgBit(c+721,(vlTOPp->soc_top__DOT__dccm__DOT__we));
        vcdp->chgBus(c+729,(vlTOPp->soc_top__DOT__dccm__DOT__addr),12);
        vcdp->chgBus(c+737,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int),32);
        vcdp->chgBus(c+745,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int),32);
        vcdp->chgBus(c+753,(vlTOPp->soc_top__DOT__dccm__DOT__data_we),4);
        vcdp->chgBit(c+761,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error));
        vcdp->chgBit(c+769,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error));
        vcdp->chgBus(c+777,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int),32);
        vcdp->chgBus(c+785,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int),32);
        vcdp->chgBus(c+793,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__unnamedblk1__DOT__i),32);
        vcdp->chgBit(c+801,((((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk) 
                              & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk)) 
                             & (((4U == (7U & (vlTOPp->soc_top__DOT__xbar_to_dccm[2U] 
                                               >> 0x12U))) 
                                 | (1U == (7U & (vlTOPp->soc_top__DOT__xbar_to_dccm[2U] 
                                                 >> 0x12U)))) 
                                | (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk)))));
        vcdp->chgBit(c+809,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk));
        vcdp->chgBit(c+817,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk));
        vcdp->chgBit(c+825,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk));
        vcdp->chgBus(c+833,(((((4U != (7U & (vlTOPp->soc_top__DOT__xbar_to_dccm[2U] 
                                             >> 0x12U)))
                                ? 0U : 1U) << 0xbU) 
                             | (((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error) 
                                 << 0xaU) | (0x3ffU 
                                             & (vlTOPp->soc_top__DOT__xbar_to_dccm[2U] 
                                                >> 5U))))),13);
        vcdp->chgBus(c+841,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0]),4);
        vcdp->chgBus(c+842,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[1]),4);
        vcdp->chgBus(c+843,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[2]),4);
        vcdp->chgBus(c+844,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[3]),4);
        vcdp->chgBus(c+845,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[4]),4);
        vcdp->chgBus(c+846,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[5]),4);
        vcdp->chgBus(c+847,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[6]),4);
        vcdp->chgBus(c+848,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[7]),4);
        vcdp->chgBus(c+849,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[8]),4);
        vcdp->chgBus(c+850,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[9]),4);
        vcdp->chgBus(c+851,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[10]),4);
        vcdp->chgBus(c+852,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[11]),4);
        vcdp->chgBus(c+853,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[12]),4);
        vcdp->chgBus(c+854,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[13]),4);
        vcdp->chgBus(c+855,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[14]),4);
        vcdp->chgBus(c+856,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[15]),4);
        vcdp->chgBus(c+857,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[16]),4);
        vcdp->chgBus(c+858,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[17]),4);
        vcdp->chgBus(c+859,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[18]),4);
        vcdp->chgBus(c+860,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[19]),4);
        vcdp->chgBus(c+861,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[20]),4);
        vcdp->chgBus(c+862,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[21]),4);
        vcdp->chgBus(c+863,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[22]),4);
        vcdp->chgBus(c+864,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[23]),4);
        vcdp->chgBus(c+865,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[24]),4);
        vcdp->chgBus(c+866,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[25]),4);
        vcdp->chgBus(c+867,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[26]),4);
        vcdp->chgBus(c+868,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[27]),4);
        vcdp->chgBus(c+869,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[28]),4);
        vcdp->chgBus(c+870,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[29]),4);
        vcdp->chgBus(c+871,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[30]),4);
        vcdp->chgBus(c+872,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[31]),4);
        vcdp->chgBus(c+873,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[32]),4);
        vcdp->chgBus(c+874,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[33]),4);
        vcdp->chgBus(c+875,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[34]),4);
        vcdp->chgBus(c+876,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[35]),4);
        vcdp->chgBus(c+877,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[36]),4);
        vcdp->chgBus(c+878,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[37]),4);
        vcdp->chgBus(c+1145,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[0]),4);
        vcdp->chgBus(c+1146,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[1]),4);
        vcdp->chgBus(c+1147,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[2]),4);
        vcdp->chgBus(c+1148,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[3]),4);
        vcdp->chgBus(c+1149,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[4]),4);
        vcdp->chgBus(c+1150,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[5]),4);
        vcdp->chgBus(c+1151,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[6]),4);
        vcdp->chgBus(c+1152,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[7]),4);
        vcdp->chgBus(c+1153,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[8]),4);
        vcdp->chgBus(c+1154,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[9]),4);
        vcdp->chgBus(c+1155,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[10]),4);
        vcdp->chgBus(c+1156,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[11]),4);
        vcdp->chgBus(c+1157,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[12]),4);
        vcdp->chgBus(c+1158,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[13]),4);
        vcdp->chgBus(c+1159,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[14]),4);
    }
}

void Vsoc_top::traceChgThis__3(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1265,((1U & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                            >> 0x33U)))));
        vcdp->chgBus(c+1273,((7U & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                            >> 0x30U)))),3);
        vcdp->chgBus(c+1281,((7U & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                            >> 0x2dU)))),3);
        vcdp->chgBus(c+1289,((3U & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                            >> 0x2bU)))),2);
        vcdp->chgBus(c+1297,((0xffU & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+1305,((1U & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                            >> 0x22U)))));
        vcdp->chgBus(c+1313,((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                      >> 2U))),32);
        vcdp->chgBit(c+1321,((1U & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                            >> 1U)))));
        vcdp->chgBit(c+1329,((1U & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h))));
    }
}

void Vsoc_top::traceChgThis__4(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1337,((1U & ((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                             >> 0x33U)) 
                                    & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                    [9U][0U]))));
    }
}

void Vsoc_top::traceChgThis__5(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1345,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__lsu_addr_incr_req));
        vcdp->chgQuad(c+1353,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b),33);
        vcdp->chgQuad(c+1369,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a),33);
    }
}

void Vsoc_top::traceChgThis__6(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1385,(((((0U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                                & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                           >> 0x33U))) 
                               & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_or_pmp_err))) 
                              & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q)))));
    }
}

void Vsoc_top::traceChgThis__7(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1393,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__lsu_addr_incr_req) 
                              | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec))));
    }
}

void Vsoc_top::traceChgThis__8(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1401,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__div_sel_ex)
                               ? ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                   << 0x1eU) | (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                                >> 2U))
                               : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))),32);
    }
}

void Vsoc_top::traceChgThis__9(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+1409,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                                ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                : (VL_ULL(1) | ((QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                                << 1U)))),33);
        vcdp->chgQuad(c+1425,((VL_ULL(0x1ffffffff) 
                               & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                                   ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                   : ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                       ? (~ ((QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                             << 1U))
                                       : ((QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                          << 1U))))),33);
    }
}

void Vsoc_top::traceChgThis__10(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1441,((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req) 
                               | (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                              & (0U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_ns)))));
    }
}

void Vsoc_top::traceChgThis__11(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1449,((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ctrl_busy) 
                               | ((0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                  | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))) 
                              | (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))));
    }
}

void Vsoc_top::traceChgThis__12(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1457,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                              & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec) 
                                 & ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__lsu_resp_valid)) 
                                    | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle))))));
    }
}

void Vsoc_top::traceChgThis__13(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1465,(((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_fetch_err))) 
                               & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__illegal_insn_id))) 
                              & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a_dec))));
        vcdp->chgBit(c+1473,(((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_fetch_err))) 
                               & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__illegal_insn_id))) 
                              & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b_dec))));
    }
}

void Vsoc_top::traceChgThis__14(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1481,(((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                               ? ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                   ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                       ? ((0xffff0000U 
                                           & (VL_NEGATE_I((IData)(
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
                                                & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                   >> 0x10U))))
                                       : ((0xff00U 
                                           & ((IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                       >> 2U)) 
                                              << 8U)) 
                                          | (0xffU 
                                             & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                >> 0x10U))))
                                   : ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                       ? ((0xffff0000U 
                                           & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                              >> 0x21U))))) 
                                              << 0x10U)) 
                                          | (0xffffU 
                                             & (IData)(
                                                       (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                        >> 0x12U))))
                                       : (0xffffU & (IData)(
                                                            (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                             >> 0x12U)))))
                               : ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                   ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                       ? ((0xffff0000U 
                                           & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                              >> 0x19U))))) 
                                              << 0x10U)) 
                                          | (0xffffU 
                                             & (IData)(
                                                       (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                        >> 0xaU))))
                                       : (0xffffU & (IData)(
                                                            (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                             >> 0xaU))))
                                   : ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                       ? ((0xffff0000U 
                                           & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                              >> 0x11U))))) 
                                              << 0x10U)) 
                                          | (0xffffU 
                                             & (IData)(
                                                       (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                        >> 2U))))
                                       : (0xffffU & (IData)(
                                                            (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                             >> 2U))))))),32);
    }
}

void Vsoc_top::traceChgThis__15(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1489,(((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                               ? ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                   ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                       ? ((0xffffff00U 
                                           & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                              >> 0x21U))))) 
                                              << 8U)) 
                                          | (0xffU 
                                             & (IData)(
                                                       (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                        >> 0x1aU))))
                                       : (0xffU & (IData)(
                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                           >> 0x1aU))))
                                   : ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                       ? ((0xffffff00U 
                                           & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                              >> 0x19U))))) 
                                              << 8U)) 
                                          | (0xffU 
                                             & (IData)(
                                                       (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                        >> 0x12U))))
                                       : (0xffU & (IData)(
                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                           >> 0x12U)))))
                               : ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                   ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                       ? ((0xffffff00U 
                                           & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                              >> 0x11U))))) 
                                              << 8U)) 
                                          | (0xffU 
                                             & (IData)(
                                                       (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                        >> 0xaU))))
                                       : (0xffU & (IData)(
                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                           >> 0xaU))))
                                   : ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                       ? ((0xffffff00U 
                                           & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                              >> 9U))))) 
                                              << 8U)) 
                                          | (0xffU 
                                             & (IData)(
                                                       (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                        >> 2U))))
                                       : (0xffU & (IData)(
                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                           >> 2U))))))),32);
    }
}

void Vsoc_top::traceChgThis__16(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1497,(((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw) 
                                & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_in_ready)) 
                               & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__pc_set))) 
                              | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                 & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_valid_clear))))));
    }
}

void Vsoc_top::traceChgThis__17(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1505,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_in_ready) 
                              & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
    }
}

void Vsoc_top::traceChgThis__18(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1513,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                               ? 0U : (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0xfU)))),32);
    }
}

void Vsoc_top::traceChgThis__19(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1521,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle));
    }
}

void Vsoc_top::traceChgThis__20(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1529,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we));
        vcdp->chgBit(c+1537,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__icache_inval));
        vcdp->chgBus(c+1545,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator),2);
        vcdp->chgBus(c+1553,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode),2);
        vcdp->chgBit(c+1561,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__csr_access));
        vcdp->chgBus(c+1569,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type),2);
        vcdp->chgBit(c+1577,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_sign_ext));
        vcdp->chgBit(c+1585,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn));
        vcdp->chgBit(c+1593,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn));
        vcdp->chgBit(c+1601,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec));
        vcdp->chgBit(c+1609,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec));
        vcdp->chgBit(c+1617,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec));
        vcdp->chgBit(c+1625,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec));
        vcdp->chgBit(c+1633,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec));
        vcdp->chgBit(c+1641,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec));
        vcdp->chgBit(c+1649,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec));
        vcdp->chgBit(c+1657,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel));
        vcdp->chgBit(c+1665,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we));
        vcdp->chgBit(c+1673,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a_dec));
        vcdp->chgBit(c+1681,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b_dec));
        vcdp->chgBit(c+1689,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec));
        vcdp->chgBit(c+1697,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
        vcdp->chgBus(c+1705,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
        vcdp->chgBus(c+1713,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode),7);
        vcdp->chgBit(c+1721,((0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode))));
    }
}

void Vsoc_top::traceChgThis__21(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1729,((1U & (((((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                                       & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec))) 
                                      & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn))) 
                                     & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id))) 
                                    & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_fetch_err))))));
    }
}

void Vsoc_top::traceChgThis__22(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1737,((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                               & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec)) 
                              & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__lsu_resp_valid)))));
    }
}

void Vsoc_top::traceChgThis__23(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1745,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we)
                               ? (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be)
                               : 0xfU)),4);
    }
}

void Vsoc_top::traceChgThis__24(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1753,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                               ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                   ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int
                                   : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__result_ex)
                               : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__result_ex)),32);
    }
}

void Vsoc_top::traceChgThis__25(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1761,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator),6);
        vcdp->chgBit(c+1769,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__mult_sel_ex));
        vcdp->chgBit(c+1777,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__div_sel_ex));
        vcdp->chgBus(c+1785,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec),2);
        vcdp->chgBit(c+1793,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec));
        vcdp->chgBit(c+1801,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
        vcdp->chgBus(c+1809,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec),3);
        vcdp->chgBus(c+1817,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu),7);
        vcdp->chgBit(c+1825,((8U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))));
        vcdp->chgBit(c+1833,(((3U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                              | (6U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))));
        vcdp->chgBit(c+1841,(((4U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                              | (7U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))));
    }
}

void Vsoc_top::traceChgThis__26(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+1849,((VL_ULL(0x1ffffffff) 
                               & (((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                   & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid))
                                   ? ((QData)((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword)) 
                                      << 1U) : ((0x41U 
                                                 >= 
                                                 (0x7fU 
                                                  & ((IData)(0x21U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                 ? 
                                                (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                   ? VL_ULL(0)
                                                   : 
                                                  ((QData)((IData)(
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
                                                 : VL_ULL(0))))),33);
    }
}

void Vsoc_top::traceChgThis__27(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+1865,((VL_ULL(0x1ffffffff) 
                               & (((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                   & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))
                                   ? ((QData)((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
                                      << 1U) : ((0x83U 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(0x21U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                 ? 
                                                (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                   ? VL_ULL(0)
                                                   : 
                                                  ((QData)((IData)(
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
                                                 : VL_ULL(0))))),33);
    }
}

void Vsoc_top::traceChgThis__28(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1881,(((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
                               ? 2U : (3U & (((1U & 
                                               ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                >> 1U)) 
                                              == (1U 
                                                  & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 1U)))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                 - 
                                                 (1U 
                                                  & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                              : (((IData)(2U) 
                                                  - 
                                                  (1U 
                                                   & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                 + 
                                                 (1U 
                                                  & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        vcdp->chgBus(c+1889,(((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
                               ? 2U : (3U & (((1U & 
                                               ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                >> 1U)) 
                                              == (1U 
                                                  & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 1U)))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                 - 
                                                 (1U 
                                                  & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                              : (((IData)(2U) 
                                                  - 
                                                  (1U 
                                                   & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                 + 
                                                 (1U 
                                                  & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        vcdp->chgBus(c+1897,(((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
                               ? 2U : (3U & (((1U & 
                                               ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                >> 1U)) 
                                              == (1U 
                                                  & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 1U)))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                 - 
                                                 (1U 
                                                  & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                              : (((IData)(2U) 
                                                  - 
                                                  (1U 
                                                   & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                 + 
                                                 (1U 
                                                  & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        vcdp->chgBus(c+1905,(((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
                               ? 4U : (7U & (((1U & 
                                               ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                >> 2U)) 
                                              == (1U 
                                                  & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 2U)))
                                              ? ((3U 
                                                  & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                 - 
                                                 (3U 
                                                  & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                              : (((IData)(4U) 
                                                  - 
                                                  (3U 
                                                   & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                 + 
                                                 (3U 
                                                  & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        vcdp->chgBus(c+1913,(((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
                               ? 4U : (7U & (((1U & 
                                               ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                >> 2U)) 
                                              == (1U 
                                                  & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 2U)))
                                              ? ((3U 
                                                  & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                 - 
                                                 (3U 
                                                  & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                              : (((IData)(4U) 
                                                  - 
                                                  (3U 
                                                   & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                 + 
                                                 (3U 
                                                  & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        vcdp->chgBus(c+1921,(((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
                               ? 4U : (7U & (((1U & 
                                               ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                >> 2U)) 
                                              == (1U 
                                                  & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 2U)))
                                              ? ((3U 
                                                  & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                 - 
                                                 (3U 
                                                  & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                              : (((IData)(4U) 
                                                  - 
                                                  (3U 
                                                   & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                 + 
                                                 (3U 
                                                  & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
    }
}

void Vsoc_top::traceChgThis__29(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1929,((1U & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)))));
        vcdp->chgBit(c+1937,((1U & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        vcdp->chgBit(c+1945,((1U & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
        vcdp->chgBit(c+1953,((1U & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
        vcdp->chgBit(c+1961,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        vcdp->chgBit(c+1969,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full));
        vcdp->chgBit(c+1977,((1U & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        vcdp->chgBit(c+1985,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        vcdp->chgBit(c+1993,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
        vcdp->chgBit(c+2001,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        vcdp->chgBit(c+2009,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
        vcdp->chgBit(c+2017,((1U & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)))));
        vcdp->chgBit(c+2025,((1U & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        vcdp->chgBit(c+2033,((1U & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
        vcdp->chgBit(c+2041,((1U & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
        vcdp->chgBit(c+2049,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        vcdp->chgBit(c+2057,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full));
        vcdp->chgBit(c+2065,((1U & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        vcdp->chgBit(c+2073,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        vcdp->chgBit(c+2081,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
        vcdp->chgBit(c+2089,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        vcdp->chgBit(c+2097,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
    }
}

void Vsoc_top::traceChgThis__30(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2105,(((~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                              & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid))));
        vcdp->chgBit(c+2113,(((~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                              & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))));
    }
}

void Vsoc_top::traceChgThis__31(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2121,((1U & ((~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                    & ((1U == (3U & 
                                               ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xbU)))
                                        ? ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                           | ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                              >> 0xaU))
                                        : ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                           >> 0xaU))))));
    }
}

void Vsoc_top::traceChgThis__32(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2129,((1U & ((~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                    & ((1U == (3U & 
                                               ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xbU)))
                                        ? ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                           | ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                              >> 0xaU))
                                        : ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                           >> 0xaU))))));
    }
}

void Vsoc_top::traceChgThis__33(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2137,(((~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                              & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))));
    }
}

void Vsoc_top::traceChgThis__34(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2145,(((~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                              & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))));
    }
}

void Vsoc_top::traceChgThis__35(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2153,((vlTOPp->soc_top__DOT__dccm__DOT__rdata 
                              & vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rmask)),32);
    }
}

void Vsoc_top::traceChgThis__36(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2161,(vlTOPp->soc_top__DOT__iccm__DOT__req));
        vcdp->chgBus(c+2169,((3U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                    >> 0xbU))),2);
        vcdp->chgBit(c+2177,((1U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                    >> 0xaU))));
        vcdp->chgBus(c+2185,((3U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                    >> 8U))),2);
        vcdp->chgBus(c+2193,((0xffU & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o))),8);
        vcdp->chgBit(c+2201,(((IData)(vlTOPp->soc_top__DOT__iccm__DOT__req) 
                              & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o)))));
        vcdp->chgBit(c+2209,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid));
        vcdp->chgBus(c+2217,((0xfU & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                      >> 1U))),4);
        vcdp->chgBit(c+2225,((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o))));
        vcdp->chgBus(c+2233,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
        vcdp->chgBus(c+2241,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
        vcdp->chgBit(c+2249,(vlTOPp->soc_top__DOT__dccm__DOT__req));
        vcdp->chgBus(c+2257,((3U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                    >> 0xbU))),2);
        vcdp->chgBit(c+2265,((1U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                    >> 0xaU))));
        vcdp->chgBus(c+2273,((3U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                    >> 8U))),2);
        vcdp->chgBus(c+2281,((0xffU & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o))),8);
        vcdp->chgBit(c+2289,(((IData)(vlTOPp->soc_top__DOT__dccm__DOT__req) 
                              & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__we)))));
        vcdp->chgBit(c+2297,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid));
        vcdp->chgBus(c+2305,((0xfU & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                      >> 1U))),4);
        vcdp->chgBit(c+2313,((1U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o))));
        vcdp->chgBus(c+2321,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
        vcdp->chgBus(c+2329,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
    }
}

void Vsoc_top::traceChgThis__37(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2337,(((~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                              & (((1U == (3U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xbU))) 
                                  & (~ ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                        >> 0xaU))) 
                                 & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack)))));
    }
}

void Vsoc_top::traceChgThis__38(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2345,(((~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                              & (((1U == (3U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xbU))) 
                                  & (~ ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                        >> 0xaU))) 
                                 & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack)))));
    }
}

void Vsoc_top::traceChgThis__39(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2353,((((1U == (3U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                             >> 0xbU))) 
                               & (~ ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                     >> 0xaU))) & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))));
    }
}

void Vsoc_top::traceChgThis__40(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2361,((((1U == (3U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                             >> 0xbU))) 
                               & (~ ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                     >> 0xaU))) & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))));
    }
}

void Vsoc_top::traceChgThis__41(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2369,((1U & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))));
        vcdp->chgBus(c+2377,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask),32);
        vcdp->chgBit(c+2385,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        vcdp->chgBit(c+2393,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        vcdp->chgBit(c+2401,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
        vcdp->chgBit(c+2409,((1U & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))));
        vcdp->chgBus(c+2417,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rmask),32);
        vcdp->chgBit(c+2425,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        vcdp->chgBit(c+2433,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        vcdp->chgBit(c+2441,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
    }
}

void Vsoc_top::traceChgThis__42(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2449,((1U & (IData)((vlTOPp->soc_top__DOT__iccm_to_xbar 
                                            >> 0x33U)))));
        vcdp->chgBus(c+2457,((7U & (IData)((vlTOPp->soc_top__DOT__iccm_to_xbar 
                                            >> 0x30U)))),3);
        vcdp->chgBus(c+2465,((7U & (IData)((vlTOPp->soc_top__DOT__iccm_to_xbar 
                                            >> 0x2dU)))),3);
        vcdp->chgBus(c+2473,((3U & (IData)((vlTOPp->soc_top__DOT__iccm_to_xbar 
                                            >> 0x2bU)))),2);
        vcdp->chgBus(c+2481,((0xffU & (IData)((vlTOPp->soc_top__DOT__iccm_to_xbar 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+2489,((1U & (IData)((vlTOPp->soc_top__DOT__iccm_to_xbar 
                                            >> 0x22U)))));
        vcdp->chgBus(c+2497,((IData)((vlTOPp->soc_top__DOT__iccm_to_xbar 
                                      >> 2U))),32);
        vcdp->chgBit(c+2505,((1U & (IData)((vlTOPp->soc_top__DOT__iccm_to_xbar 
                                            >> 1U)))));
        vcdp->chgBit(c+2513,((1U & (IData)(vlTOPp->soc_top__DOT__iccm_to_xbar))));
        vcdp->chgBit(c+2521,((1U & ((vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                     >> 0x15U) & (IData)(vlTOPp->soc_top__DOT__iccm_to_xbar)))));
        vcdp->chgBit(c+2529,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack));
        vcdp->chgBus(c+2537,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword),32);
        vcdp->chgBus(c+2545,((IData)((vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                      >> 1U))),32);
        vcdp->chgBit(c+2553,((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o))));
        vcdp->chgBus(c+2561,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword),32);
        vcdp->chgBit(c+2569,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        vcdp->chgQuad(c+2577,(((QData)((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword)) 
                               << 1U)),33);
        vcdp->chgQuad(c+2593,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
    }
}

void Vsoc_top::traceChgThis__43(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2609,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid));
        vcdp->chgBus(c+2617,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword),32);
        vcdp->chgBit(c+2625,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid));
        vcdp->chgBus(c+2633,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword),32);
        vcdp->chgQuad(c+2641,(((QData)((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
                               << 1U)),33);
    }
}

void Vsoc_top::traceChgThis__44(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2657,((IData)((vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                      >> 1U))),32);
        vcdp->chgBit(c+2665,((1U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o))));
        vcdp->chgQuad(c+2673,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
    }
}

void Vsoc_top::traceChgThis__45(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2689,((1U & (IData)((vlTOPp->soc_top__DOT__dccm_to_xbar 
                                            >> 0x33U)))));
        vcdp->chgBus(c+2697,((7U & (IData)((vlTOPp->soc_top__DOT__dccm_to_xbar 
                                            >> 0x30U)))),3);
        vcdp->chgBus(c+2705,((7U & (IData)((vlTOPp->soc_top__DOT__dccm_to_xbar 
                                            >> 0x2dU)))),3);
        vcdp->chgBus(c+2713,((3U & (IData)((vlTOPp->soc_top__DOT__dccm_to_xbar 
                                            >> 0x2bU)))),2);
        vcdp->chgBus(c+2721,((0xffU & (IData)((vlTOPp->soc_top__DOT__dccm_to_xbar 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+2729,((1U & (IData)((vlTOPp->soc_top__DOT__dccm_to_xbar 
                                            >> 0x22U)))));
        vcdp->chgBus(c+2737,((IData)((vlTOPp->soc_top__DOT__dccm_to_xbar 
                                      >> 2U))),32);
        vcdp->chgBit(c+2745,((1U & (IData)((vlTOPp->soc_top__DOT__dccm_to_xbar 
                                            >> 1U)))));
        vcdp->chgBit(c+2753,((1U & (IData)(vlTOPp->soc_top__DOT__dccm_to_xbar))));
        vcdp->chgBit(c+2761,((1U & ((vlTOPp->soc_top__DOT__xbar_to_dccm[2U] 
                                     >> 0x15U) & (IData)(vlTOPp->soc_top__DOT__dccm_to_xbar)))));
    }
}

void Vsoc_top::traceChgThis__46(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2769,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack));
        vcdp->chgBit(c+2777,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
    }
}

void Vsoc_top::traceChgThis__47(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2785,(((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                               ? ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                   ? ((0xffffff00U 
                                       & ((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                   >> 2U)) 
                                          << 8U)) | 
                                      (0xffU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                >> 0x10U)))
                                   : ((0xffff0000U 
                                       & ((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                   >> 2U)) 
                                          << 0x10U)) 
                                      | (0xffffU & 
                                         (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                          >> 8U))))
                               : ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                   ? ((0xff000000U 
                                       & ((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                   >> 2U)) 
                                          << 0x18U)) 
                                      | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q)
                                   : (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                              >> 2U))))),32);
    }
}

void Vsoc_top::traceChgThis__48(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2793,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__perf_instr_ret_wb) 
                              & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id))));
    }
}

void Vsoc_top::traceChgThis__49(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2801,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec));
        vcdp->chgBit(c+2809,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_run));
    }
}

void Vsoc_top::traceChgThis__50(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2817,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                              & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec))));
        vcdp->chgBit(c+2825,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                              & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec))));
    }
}

void Vsoc_top::traceChgThis__51(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2833,((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw) 
                               & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec)) 
                              & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id)))));
    }
}

void Vsoc_top::traceChgThis__52(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2841,((1U & (vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                    >> 0x15U))));
        vcdp->chgBus(c+2849,((7U & (vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                    >> 0x12U))),3);
        vcdp->chgBus(c+2857,((7U & (vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                    >> 0xfU))),3);
        vcdp->chgBus(c+2865,((3U & (vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                    >> 0xdU))),2);
        vcdp->chgBus(c+2873,((0xffU & (vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                       >> 5U))),8);
        vcdp->chgBus(c+2881,(((vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                               << 0x1bU) | (vlTOPp->soc_top__DOT__lsu_to_xbar[1U] 
                                            >> 5U))),32);
        vcdp->chgBus(c+2889,((0xfU & ((vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                       << 0x1fU) | 
                                      (vlTOPp->soc_top__DOT__lsu_to_xbar[1U] 
                                       >> 1U)))),4);
        vcdp->chgBus(c+2897,(((vlTOPp->soc_top__DOT__lsu_to_xbar[1U] 
                               << 0x1fU) | (vlTOPp->soc_top__DOT__lsu_to_xbar[0U] 
                                            >> 1U))),32);
        vcdp->chgBit(c+2905,((1U & vlTOPp->soc_top__DOT__lsu_to_xbar[0U])));
        vcdp->chgBit(c+2913,(vlTOPp->soc_top__DOT__u_top__DOT__data_req));
        vcdp->chgBus(c+2921,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be),4);
        vcdp->chgBus(c+2929,((0xfffffffcU & ((IData)(
                                                     (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 3U)) 
                                             << 2U))),32);
        vcdp->chgBus(c+2937,(((1U & (IData)((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                             >> 2U)))
                               ? ((1U & (IData)((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                 >> 1U)))
                                   ? ((0xff000000U 
                                       & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc_i 
                                          << 0x18U)) 
                                      | (0xffffffU 
                                         & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc_i 
                                            >> 8U)))
                                   : ((0xffff0000U 
                                       & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc_i 
                                          << 0x10U)) 
                                      | (0xffffU & 
                                         (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc_i 
                                          >> 0x10U))))
                               : ((1U & (IData)((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                 >> 1U)))
                                   ? ((0xffffff00U 
                                       & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc_i 
                                          << 8U)) | 
                                      (0xffU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc_i 
                                                >> 0x18U)))
                                   : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc_i))),32);
        vcdp->chgBus(c+2945,((IData)((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                      >> 1U))),32);
        vcdp->chgBus(c+2953,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a),32);
        vcdp->chgBus(c+2961,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b),32);
        vcdp->chgBit(c+2969,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req));
        vcdp->chgBit(c+2977,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__data_req_out));
        vcdp->chgBus(c+2985,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b),32);
        vcdp->chgBus(c+2993,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
        vcdp->chgBus(c+3001,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel),3);
        vcdp->chgQuad(c+3009,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext),34);
        vcdp->chgBit(c+3025,((0U == (IData)((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                             >> 1U)))));
        vcdp->chgBit(c+3033,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel));
        vcdp->chgQuad(c+3041,((VL_ULL(0x1ffffffff) 
                               & (~ ((QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                     << 1U)))),33);
        vcdp->chgBit(c+3057,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate));
        vcdp->chgBus(c+3065,((0x3fU & ((IData)(0x20U) 
                                       - (0x1fU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)))),6);
        vcdp->chgBus(c+3073,(((0x10U & ((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                        >> 0x18U))))) 
                                        << 4U)) | (0xfU 
                                                   & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                      >> 0x18U)))),5);
        vcdp->chgBus(c+3081,((0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b 
                                       >> 0x10U))),5);
        vcdp->chgBus(c+3089,((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                              | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
        vcdp->chgBus(c+3097,((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                              & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
        vcdp->chgBus(c+3105,((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                              ^ vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
        vcdp->chgBit(c+3113,((1U & (((IData)(0x20U) 
                                     - (0x1fU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                    >> 5U))));
        vcdp->chgBus(c+3121,(((2U & ((IData)((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                              >> 0x21U)) 
                                     << 1U)) | (1U 
                                                & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext)))),2);
        vcdp->chgBus(c+3129,((3U & (IData)((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                            >> 1U)))),2);
        vcdp->chgBit(c+3137,((1U & (vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                    >> 0x15U))));
        vcdp->chgBus(c+3145,((7U & (vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                    >> 0x12U))),3);
        vcdp->chgBus(c+3153,((7U & (vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                    >> 0xfU))),3);
        vcdp->chgBus(c+3161,((3U & (vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                    >> 0xdU))),2);
        vcdp->chgBus(c+3169,((0xffU & (vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                       >> 5U))),8);
        vcdp->chgBus(c+3177,(((vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                               << 0x1bU) | (vlTOPp->soc_top__DOT__lsu_to_xbar[1U] 
                                            >> 5U))),32);
        vcdp->chgBus(c+3185,((0xfU & ((vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                       << 0x1fU) | 
                                      (vlTOPp->soc_top__DOT__lsu_to_xbar[1U] 
                                       >> 1U)))),4);
        vcdp->chgBus(c+3193,(((vlTOPp->soc_top__DOT__lsu_to_xbar[1U] 
                               << 0x1fU) | (vlTOPp->soc_top__DOT__lsu_to_xbar[0U] 
                                            >> 1U))),32);
        vcdp->chgBit(c+3201,((1U & vlTOPp->soc_top__DOT__lsu_to_xbar[0U])));
        vcdp->chgBit(c+3209,((1U & (vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                    >> 0x15U))));
        vcdp->chgBit(c+3217,((1U & vlTOPp->soc_top__DOT__lsu_to_xbar[0U])));
    }
}

void Vsoc_top::traceChgThis__53(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3225,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                    >> 0x15U))));
        vcdp->chgBus(c+3233,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                    >> 0x12U))),3);
        vcdp->chgBus(c+3241,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                    >> 0xfU))),3);
        vcdp->chgBus(c+3249,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                    >> 0xdU))),2);
        vcdp->chgBus(c+3257,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                       >> 5U))),8);
        vcdp->chgBus(c+3265,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                               << 0x1bU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U] 
                                            >> 5U))),32);
        vcdp->chgBus(c+3273,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                       << 0x1fU) | 
                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U] 
                                       >> 1U)))),4);
        vcdp->chgBus(c+3281,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U] 
                               << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U] 
                                            >> 1U))),32);
        vcdp->chgBit(c+3289,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U])));
    }
}

void Vsoc_top::traceChgThis__54(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3297,((1U & ((0x80000000U & 
                                     (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                      ^ vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b))
                                     ? ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                         >> 0x1fU) 
                                        ^ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                     : (~ (IData)((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                   >> 0x20U)))))));
    }
}

void Vsoc_top::traceChgThis__55(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp1767[3];
    WData/*95:0*/ __Vtemp1783[3];
    WData/*95:0*/ __Vtemp1799[3];
    WData/*95:0*/ __Vtemp1815[3];
    WData/*95:0*/ __Vtemp1831[3];
    WData/*95:0*/ __Vtemp1847[3];
    WData/*95:0*/ __Vtemp1863[3];
    WData/*95:0*/ __Vtemp1879[3];
    WData/*95:0*/ __Vtemp1895[3];
    WData/*95:0*/ __Vtemp1911[3];
    // Body
    {
        vcdp->chgBus(c+3305,(vlTOPp->soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10),4);
        vcdp->chgBus(c+3313,((0xfU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])),4);
        vcdp->chgBit(c+3321,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hold_all_requests));
        vcdp->chgBit(c+3329,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [0U][2U] >> 0x15U))));
        vcdp->chgBus(c+3337,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [0U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+3345,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [0U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+3353,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [0U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+3361,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [0U][2U] >> 5U))),8);
        vcdp->chgBus(c+3369,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [0U][2U] << 0x1bU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [0U][1U] >> 5U))),32);
        vcdp->chgBus(c+3377,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [0U][2U] << 0x1fU) 
                                      | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [0U][1U] >> 1U)))),4);
        vcdp->chgBus(c+3385,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [0U][1U] << 0x1fU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [0U][0U] >> 1U))),32);
        vcdp->chgBit(c+3393,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [0U][0U])));
        vcdp->chgBit(c+3401,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [1U][2U] >> 0x15U))));
        vcdp->chgBus(c+3409,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [1U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+3417,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [1U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+3425,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [1U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+3433,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [1U][2U] >> 5U))),8);
        vcdp->chgBus(c+3441,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [1U][2U] << 0x1bU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [1U][1U] >> 5U))),32);
        vcdp->chgBus(c+3449,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [1U][2U] << 0x1fU) 
                                      | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [1U][1U] >> 1U)))),4);
        vcdp->chgBus(c+3457,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [1U][1U] << 0x1fU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [1U][0U] >> 1U))),32);
        vcdp->chgBit(c+3465,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [1U][0U])));
        vcdp->chgBit(c+3473,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [2U][2U] >> 0x15U))));
        vcdp->chgBus(c+3481,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [2U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+3489,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [2U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+3497,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [2U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+3505,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [2U][2U] >> 5U))),8);
        vcdp->chgBus(c+3513,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [2U][2U] << 0x1bU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [2U][1U] >> 5U))),32);
        vcdp->chgBus(c+3521,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [2U][2U] << 0x1fU) 
                                      | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [2U][1U] >> 1U)))),4);
        vcdp->chgBus(c+3529,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [2U][1U] << 0x1fU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [2U][0U] >> 1U))),32);
        vcdp->chgBit(c+3537,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [2U][0U])));
        vcdp->chgBit(c+3545,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [3U][2U] >> 0x15U))));
        vcdp->chgBus(c+3553,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [3U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+3561,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [3U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+3569,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [3U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+3577,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [3U][2U] >> 5U))),8);
        vcdp->chgBus(c+3585,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [3U][2U] << 0x1bU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [3U][1U] >> 5U))),32);
        vcdp->chgBus(c+3593,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [3U][2U] << 0x1fU) 
                                      | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [3U][1U] >> 1U)))),4);
        vcdp->chgBus(c+3601,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [3U][1U] << 0x1fU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [3U][0U] >> 1U))),32);
        vcdp->chgBit(c+3609,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [3U][0U])));
        vcdp->chgBit(c+3617,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [4U][2U] >> 0x15U))));
        vcdp->chgBus(c+3625,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [4U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+3633,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [4U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+3641,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [4U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+3649,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [4U][2U] >> 5U))),8);
        vcdp->chgBus(c+3657,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [4U][2U] << 0x1bU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [4U][1U] >> 5U))),32);
        vcdp->chgBus(c+3665,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [4U][2U] << 0x1fU) 
                                      | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [4U][1U] >> 1U)))),4);
        vcdp->chgBus(c+3673,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [4U][1U] << 0x1fU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [4U][0U] >> 1U))),32);
        vcdp->chgBit(c+3681,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [4U][0U])));
        vcdp->chgBit(c+3689,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [5U][2U] >> 0x15U))));
        vcdp->chgBus(c+3697,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [5U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+3705,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [5U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+3713,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [5U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+3721,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [5U][2U] >> 5U))),8);
        vcdp->chgBus(c+3729,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [5U][2U] << 0x1bU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [5U][1U] >> 5U))),32);
        vcdp->chgBus(c+3737,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [5U][2U] << 0x1fU) 
                                      | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [5U][1U] >> 1U)))),4);
        vcdp->chgBus(c+3745,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [5U][1U] << 0x1fU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [5U][0U] >> 1U))),32);
        vcdp->chgBit(c+3753,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [5U][0U])));
        vcdp->chgBit(c+3761,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [6U][2U] >> 0x15U))));
        vcdp->chgBus(c+3769,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [6U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+3777,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [6U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+3785,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [6U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+3793,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [6U][2U] >> 5U))),8);
        vcdp->chgBus(c+3801,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [6U][2U] << 0x1bU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [6U][1U] >> 5U))),32);
        vcdp->chgBus(c+3809,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [6U][2U] << 0x1fU) 
                                      | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [6U][1U] >> 1U)))),4);
        vcdp->chgBus(c+3817,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [6U][1U] << 0x1fU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [6U][0U] >> 1U))),32);
        vcdp->chgBit(c+3825,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [6U][0U])));
        vcdp->chgBit(c+3833,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [7U][2U] >> 0x15U))));
        vcdp->chgBus(c+3841,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [7U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+3849,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [7U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+3857,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [7U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+3865,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [7U][2U] >> 5U))),8);
        vcdp->chgBus(c+3873,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [7U][2U] << 0x1bU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [7U][1U] >> 5U))),32);
        vcdp->chgBus(c+3881,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [7U][2U] << 0x1fU) 
                                      | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [7U][1U] >> 1U)))),4);
        vcdp->chgBus(c+3889,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [7U][1U] << 0x1fU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [7U][0U] >> 1U))),32);
        vcdp->chgBit(c+3897,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [7U][0U])));
        vcdp->chgBit(c+3905,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [8U][2U] >> 0x15U))));
        vcdp->chgBus(c+3913,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [8U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+3921,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [8U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+3929,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [8U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+3937,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [8U][2U] >> 5U))),8);
        vcdp->chgBus(c+3945,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [8U][2U] << 0x1bU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [8U][1U] >> 5U))),32);
        vcdp->chgBus(c+3953,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [8U][2U] << 0x1fU) 
                                      | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [8U][1U] >> 1U)))),4);
        vcdp->chgBus(c+3961,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [8U][1U] << 0x1fU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [8U][0U] >> 1U))),32);
        vcdp->chgBit(c+3969,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [8U][0U])));
        vcdp->chgBit(c+3977,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [9U][2U] >> 0x15U))));
        vcdp->chgBus(c+3985,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [9U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+3993,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [9U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+4001,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [9U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+4009,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [9U][2U] >> 5U))),8);
        vcdp->chgBus(c+4017,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [9U][2U] << 0x1bU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [9U][1U] >> 5U))),32);
        vcdp->chgBus(c+4025,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [9U][2U] << 0x1fU) 
                                      | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [9U][1U] >> 1U)))),4);
        vcdp->chgBus(c+4033,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [9U][1U] << 0x1fU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [9U][0U] >> 1U))),32);
        vcdp->chgBit(c+4041,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [9U][0U])));
        vcdp->chgBit(c+4049,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [0xaU][2U] >> 0x15U))));
        vcdp->chgBus(c+4057,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [0xaU][2U] >> 0x12U))),3);
        vcdp->chgBus(c+4065,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [0xaU][2U] >> 0xfU))),3);
        vcdp->chgBus(c+4073,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [0xaU][2U] >> 0xdU))),2);
        vcdp->chgBus(c+4081,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [0xaU][2U] >> 5U))),8);
        vcdp->chgBus(c+4089,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [0xaU][2U] << 0x1bU) 
                              | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                 [0xaU][1U] >> 5U))),32);
        vcdp->chgBus(c+4097,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [0xaU][2U] << 0x1fU) 
                                      | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [0xaU][1U] 
                                         >> 1U)))),4);
        vcdp->chgBus(c+4105,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [0xaU][1U] << 0x1fU) 
                              | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                 [0xaU][0U] >> 1U))),32);
        vcdp->chgBit(c+4113,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [0xaU][0U])));
        vcdp->chgArray(c+4121,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i),88);
        vcdp->chgBit(c+4145,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [0xaU][2U] >> 0x15U))));
        vcdp->chgBus(c+4153,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [0xaU][2U] >> 0x12U))),3);
        vcdp->chgBus(c+4161,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [0xaU][2U] >> 0xfU))),3);
        vcdp->chgBus(c+4169,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [0xaU][2U] >> 0xdU))),2);
        vcdp->chgBus(c+4177,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [0xaU][2U] >> 5U))),8);
        vcdp->chgBus(c+4185,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [0xaU][2U] << 0x1bU) 
                              | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                 [0xaU][1U] >> 5U))),32);
        vcdp->chgBus(c+4193,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [0xaU][2U] << 0x1fU) 
                                      | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [0xaU][1U] 
                                         >> 1U)))),4);
        vcdp->chgBus(c+4201,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [0xaU][1U] << 0x1fU) 
                              | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                 [0xaU][0U] >> 1U))),32);
        vcdp->chgBit(c+4209,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [0xaU][0U])));
        vcdp->chgBit(c+4217,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [0U][2U] >> 0x15U))));
        vcdp->chgBus(c+4225,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [0U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+4233,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [0U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+4241,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [0U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+4249,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [0U][2U] >> 5U))),8);
        vcdp->chgBus(c+4257,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [0U][2U] << 0x1bU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [0U][1U] >> 5U))),32);
        vcdp->chgBus(c+4265,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [0U][2U] << 0x1fU) 
                                      | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [0U][1U] >> 1U)))),4);
        vcdp->chgBus(c+4273,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [0U][1U] << 0x1fU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [0U][0U] >> 1U))),32);
        vcdp->chgBit(c+4281,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [0U][0U])));
        vcdp->chgBit(c+4289,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [0U][2U] >> 0x15U))));
        __Vtemp1767[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                           [0U][0U]);
        __Vtemp1767[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [0U][1U]) | (0xfffffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [0U][1U]));
        __Vtemp1767[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [0U][2U]) | (0x1ffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [0U][2U]));
        vcdp->chgArray(c+4297,(__Vtemp1767),85);
        vcdp->chgBit(c+4321,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [0U][0U])));
        vcdp->chgBit(c+4329,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [1U][2U] >> 0x15U))));
        vcdp->chgBus(c+4337,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [1U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+4345,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [1U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+4353,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [1U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+4361,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [1U][2U] >> 5U))),8);
        vcdp->chgBus(c+4369,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [1U][2U] << 0x1bU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [1U][1U] >> 5U))),32);
        vcdp->chgBus(c+4377,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [1U][2U] << 0x1fU) 
                                      | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [1U][1U] >> 1U)))),4);
        vcdp->chgBus(c+4385,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [1U][1U] << 0x1fU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [1U][0U] >> 1U))),32);
        vcdp->chgBit(c+4393,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [1U][0U])));
        vcdp->chgBit(c+4401,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [1U][2U] >> 0x15U))));
        __Vtemp1783[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                           [1U][0U]);
        __Vtemp1783[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [1U][1U]) | (0xfffffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [1U][1U]));
        __Vtemp1783[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [1U][2U]) | (0x1ffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [1U][2U]));
        vcdp->chgArray(c+4409,(__Vtemp1783),85);
        vcdp->chgBit(c+4433,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [1U][0U])));
        vcdp->chgBit(c+4441,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [2U][2U] >> 0x15U))));
        vcdp->chgBus(c+4449,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [2U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+4457,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [2U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+4465,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [2U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+4473,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [2U][2U] >> 5U))),8);
        vcdp->chgBus(c+4481,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [2U][2U] << 0x1bU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [2U][1U] >> 5U))),32);
        vcdp->chgBus(c+4489,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [2U][2U] << 0x1fU) 
                                      | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [2U][1U] >> 1U)))),4);
        vcdp->chgBus(c+4497,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [2U][1U] << 0x1fU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [2U][0U] >> 1U))),32);
        vcdp->chgBit(c+4505,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [2U][0U])));
        vcdp->chgBit(c+4513,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [2U][2U] >> 0x15U))));
        __Vtemp1799[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                           [2U][0U]);
        __Vtemp1799[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [2U][1U]) | (0xfffffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [2U][1U]));
        __Vtemp1799[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [2U][2U]) | (0x1ffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [2U][2U]));
        vcdp->chgArray(c+4521,(__Vtemp1799),85);
        vcdp->chgBit(c+4545,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [2U][0U])));
        vcdp->chgBit(c+4553,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [3U][2U] >> 0x15U))));
        vcdp->chgBus(c+4561,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [3U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+4569,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [3U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+4577,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [3U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+4585,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [3U][2U] >> 5U))),8);
        vcdp->chgBus(c+4593,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [3U][2U] << 0x1bU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [3U][1U] >> 5U))),32);
        vcdp->chgBus(c+4601,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [3U][2U] << 0x1fU) 
                                      | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [3U][1U] >> 1U)))),4);
        vcdp->chgBus(c+4609,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [3U][1U] << 0x1fU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [3U][0U] >> 1U))),32);
        vcdp->chgBit(c+4617,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [3U][0U])));
        vcdp->chgBit(c+4625,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [3U][2U] >> 0x15U))));
        __Vtemp1815[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                           [3U][0U]);
        __Vtemp1815[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [3U][1U]) | (0xfffffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [3U][1U]));
        __Vtemp1815[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [3U][2U]) | (0x1ffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [3U][2U]));
        vcdp->chgArray(c+4633,(__Vtemp1815),85);
        vcdp->chgBit(c+4657,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [3U][0U])));
        vcdp->chgBit(c+4665,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [4U][2U] >> 0x15U))));
        vcdp->chgBus(c+4673,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [4U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+4681,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [4U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+4689,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [4U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+4697,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [4U][2U] >> 5U))),8);
        vcdp->chgBus(c+4705,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [4U][2U] << 0x1bU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [4U][1U] >> 5U))),32);
        vcdp->chgBus(c+4713,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [4U][2U] << 0x1fU) 
                                      | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [4U][1U] >> 1U)))),4);
        vcdp->chgBus(c+4721,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [4U][1U] << 0x1fU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [4U][0U] >> 1U))),32);
        vcdp->chgBit(c+4729,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [4U][0U])));
        vcdp->chgBit(c+4737,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [4U][2U] >> 0x15U))));
        __Vtemp1831[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                           [4U][0U]);
        __Vtemp1831[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [4U][1U]) | (0xfffffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [4U][1U]));
        __Vtemp1831[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [4U][2U]) | (0x1ffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [4U][2U]));
        vcdp->chgArray(c+4745,(__Vtemp1831),85);
        vcdp->chgBit(c+4769,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [4U][0U])));
        vcdp->chgBit(c+4777,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [5U][2U] >> 0x15U))));
        vcdp->chgBus(c+4785,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [5U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+4793,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [5U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+4801,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [5U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+4809,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [5U][2U] >> 5U))),8);
        vcdp->chgBus(c+4817,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [5U][2U] << 0x1bU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [5U][1U] >> 5U))),32);
        vcdp->chgBus(c+4825,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [5U][2U] << 0x1fU) 
                                      | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [5U][1U] >> 1U)))),4);
        vcdp->chgBus(c+4833,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [5U][1U] << 0x1fU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [5U][0U] >> 1U))),32);
        vcdp->chgBit(c+4841,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [5U][0U])));
        vcdp->chgBit(c+4849,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [5U][2U] >> 0x15U))));
        __Vtemp1847[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                           [5U][0U]);
        __Vtemp1847[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [5U][1U]) | (0xfffffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [5U][1U]));
        __Vtemp1847[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [5U][2U]) | (0x1ffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [5U][2U]));
        vcdp->chgArray(c+4857,(__Vtemp1847),85);
        vcdp->chgBit(c+4881,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [5U][0U])));
        vcdp->chgBit(c+4889,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [6U][2U] >> 0x15U))));
        vcdp->chgBus(c+4897,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [6U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+4905,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [6U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+4913,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [6U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+4921,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [6U][2U] >> 5U))),8);
        vcdp->chgBus(c+4929,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [6U][2U] << 0x1bU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [6U][1U] >> 5U))),32);
        vcdp->chgBus(c+4937,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [6U][2U] << 0x1fU) 
                                      | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [6U][1U] >> 1U)))),4);
        vcdp->chgBus(c+4945,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [6U][1U] << 0x1fU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [6U][0U] >> 1U))),32);
        vcdp->chgBit(c+4953,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [6U][0U])));
        vcdp->chgBit(c+4961,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [6U][2U] >> 0x15U))));
        __Vtemp1863[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                           [6U][0U]);
        __Vtemp1863[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [6U][1U]) | (0xfffffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [6U][1U]));
        __Vtemp1863[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [6U][2U]) | (0x1ffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [6U][2U]));
        vcdp->chgArray(c+4969,(__Vtemp1863),85);
        vcdp->chgBit(c+4993,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [6U][0U])));
        vcdp->chgBit(c+5001,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [7U][2U] >> 0x15U))));
        vcdp->chgBus(c+5009,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [7U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+5017,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [7U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+5025,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [7U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+5033,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [7U][2U] >> 5U))),8);
        vcdp->chgBus(c+5041,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [7U][2U] << 0x1bU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [7U][1U] >> 5U))),32);
        vcdp->chgBus(c+5049,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [7U][2U] << 0x1fU) 
                                      | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [7U][1U] >> 1U)))),4);
        vcdp->chgBus(c+5057,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [7U][1U] << 0x1fU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [7U][0U] >> 1U))),32);
        vcdp->chgBit(c+5065,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [7U][0U])));
        vcdp->chgBit(c+5073,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [7U][2U] >> 0x15U))));
        __Vtemp1879[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                           [7U][0U]);
        __Vtemp1879[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [7U][1U]) | (0xfffffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [7U][1U]));
        __Vtemp1879[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [7U][2U]) | (0x1ffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [7U][2U]));
        vcdp->chgArray(c+5081,(__Vtemp1879),85);
        vcdp->chgBit(c+5105,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [7U][0U])));
        vcdp->chgBit(c+5113,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [8U][2U] >> 0x15U))));
        vcdp->chgBus(c+5121,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [8U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+5129,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [8U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+5137,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [8U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+5145,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [8U][2U] >> 5U))),8);
        vcdp->chgBus(c+5153,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [8U][2U] << 0x1bU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [8U][1U] >> 5U))),32);
        vcdp->chgBus(c+5161,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [8U][2U] << 0x1fU) 
                                      | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [8U][1U] >> 1U)))),4);
        vcdp->chgBus(c+5169,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [8U][1U] << 0x1fU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [8U][0U] >> 1U))),32);
        vcdp->chgBit(c+5177,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [8U][0U])));
        vcdp->chgBit(c+5185,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [8U][2U] >> 0x15U))));
        __Vtemp1895[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                           [8U][0U]);
        __Vtemp1895[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [8U][1U]) | (0xfffffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [8U][1U]));
        __Vtemp1895[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [8U][2U]) | (0x1ffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [8U][2U]));
        vcdp->chgArray(c+5193,(__Vtemp1895),85);
        vcdp->chgBit(c+5217,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [8U][0U])));
        vcdp->chgBit(c+5225,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [9U][2U] >> 0x15U))));
        vcdp->chgBus(c+5233,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [9U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+5241,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [9U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+5249,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [9U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+5257,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [9U][2U] >> 5U))),8);
        vcdp->chgBus(c+5265,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [9U][2U] << 0x1bU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [9U][1U] >> 5U))),32);
        vcdp->chgBus(c+5273,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [9U][2U] << 0x1fU) 
                                      | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [9U][1U] >> 1U)))),4);
        vcdp->chgBus(c+5281,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [9U][1U] << 0x1fU) | 
                              (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [9U][0U] >> 1U))),32);
        vcdp->chgBit(c+5289,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [9U][0U])));
        vcdp->chgBit(c+5297,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                    [9U][2U] >> 0x15U))));
        __Vtemp1911[0U] = (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                           [9U][0U]);
        __Vtemp1911[1U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [9U][1U]) | (0xfffffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [9U][1U]));
        __Vtemp1911[2U] = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [9U][2U]) | (0x1ffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [9U][2U]));
        vcdp->chgArray(c+5305,(__Vtemp1911),85);
        vcdp->chgBit(c+5329,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                              [9U][0U])));
    }
}

void Vsoc_top::traceChgThis__56(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+5337,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0x15U))));
        vcdp->chgBus(c+5345,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0x12U))),3);
        vcdp->chgBus(c+5353,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0xfU))),3);
        vcdp->chgBus(c+5361,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0xdU))),2);
        vcdp->chgBus(c+5369,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                       >> 5U))),8);
        vcdp->chgBus(c+5377,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                               << 0x1bU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
        vcdp->chgBus(c+5385,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                       << 0x1fU) | 
                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                       >> 1U)))),4);
        vcdp->chgBus(c+5393,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                               << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
        vcdp->chgBit(c+5401,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U])));
        vcdp->chgBit(c+5409,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0x15U))));
        vcdp->chgBus(c+5417,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0x12U))),3);
        vcdp->chgBus(c+5425,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0xfU))),3);
        vcdp->chgBus(c+5433,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0xdU))),2);
        vcdp->chgBus(c+5441,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                       >> 5U))),8);
        vcdp->chgBus(c+5449,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                               << 0x1bU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
        vcdp->chgBus(c+5457,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                       << 0x1fU) | 
                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                                       >> 1U)))),4);
        vcdp->chgBus(c+5465,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                               << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
        vcdp->chgBit(c+5473,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U])));
    }
}

void Vsoc_top::traceChgThis__57(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+5481,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0x15U))));
        vcdp->chgBus(c+5489,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0x12U))),3);
        vcdp->chgBus(c+5497,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0xfU))),3);
        vcdp->chgBus(c+5505,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0xdU))),2);
        vcdp->chgBus(c+5513,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                       >> 5U))),8);
        vcdp->chgBus(c+5521,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                               << 0x1bU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
        vcdp->chgBus(c+5529,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                       << 0x1fU) | 
                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                                       >> 1U)))),4);
        vcdp->chgBus(c+5537,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                               << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
        vcdp->chgBit(c+5545,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U])));
        vcdp->chgBit(c+5553,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0x15U))));
        vcdp->chgBus(c+5561,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0x12U))),3);
        vcdp->chgBus(c+5569,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0xfU))),3);
        vcdp->chgBus(c+5577,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0xdU))),2);
        vcdp->chgBus(c+5585,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                       >> 5U))),8);
        vcdp->chgBus(c+5593,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                               << 0x1bU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
        vcdp->chgBus(c+5601,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                       << 0x1fU) | 
                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                                       >> 1U)))),4);
        vcdp->chgBus(c+5609,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                               << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
        vcdp->chgBit(c+5617,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U])));
    }
}

void Vsoc_top::traceChgThis__58(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+5625,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0x15U))));
        vcdp->chgBus(c+5633,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0x12U))),3);
        vcdp->chgBus(c+5641,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0xfU))),3);
        vcdp->chgBus(c+5649,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0xdU))),2);
        vcdp->chgBus(c+5657,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                       >> 5U))),8);
        vcdp->chgBus(c+5665,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                               << 0x1bU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
        vcdp->chgBus(c+5673,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                       << 0x1fU) | 
                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                                       >> 1U)))),4);
        vcdp->chgBus(c+5681,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                               << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
        vcdp->chgBit(c+5689,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U])));
        vcdp->chgBit(c+5697,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0x15U))));
        vcdp->chgBus(c+5705,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0x12U))),3);
        vcdp->chgBus(c+5713,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0xfU))),3);
        vcdp->chgBus(c+5721,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0xdU))),2);
        vcdp->chgBus(c+5729,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                       >> 5U))),8);
        vcdp->chgBus(c+5737,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                               << 0x1bU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
        vcdp->chgBus(c+5745,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                       << 0x1fU) | 
                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                                       >> 1U)))),4);
        vcdp->chgBus(c+5753,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                               << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
        vcdp->chgBit(c+5761,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U])));
    }
}

void Vsoc_top::traceChgThis__59(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+5769,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0x15U))));
        vcdp->chgBus(c+5777,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0x12U))),3);
        vcdp->chgBus(c+5785,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0xfU))),3);
        vcdp->chgBus(c+5793,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0xdU))),2);
        vcdp->chgBus(c+5801,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                       >> 5U))),8);
        vcdp->chgBus(c+5809,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                               << 0x1bU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
        vcdp->chgBus(c+5817,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                       << 0x1fU) | 
                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                                       >> 1U)))),4);
        vcdp->chgBus(c+5825,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                               << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
        vcdp->chgBit(c+5833,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U])));
        vcdp->chgBit(c+5841,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0x15U))));
        vcdp->chgBus(c+5849,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0x12U))),3);
        vcdp->chgBus(c+5857,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0xfU))),3);
        vcdp->chgBus(c+5865,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0xdU))),2);
        vcdp->chgBus(c+5873,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                       >> 5U))),8);
        vcdp->chgBus(c+5881,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                               << 0x1bU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
        vcdp->chgBus(c+5889,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                       << 0x1fU) | 
                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                                       >> 1U)))),4);
        vcdp->chgBus(c+5897,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                               << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
        vcdp->chgBit(c+5905,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U])));
    }
}

void Vsoc_top::traceChgThis__60(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+5913,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0x15U))));
        vcdp->chgBus(c+5921,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0x12U))),3);
        vcdp->chgBus(c+5929,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0xfU))),3);
        vcdp->chgBus(c+5937,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0xdU))),2);
        vcdp->chgBus(c+5945,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                       >> 5U))),8);
        vcdp->chgBus(c+5953,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                               << 0x1bU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
        vcdp->chgBus(c+5961,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                       << 0x1fU) | 
                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                       >> 1U)))),4);
        vcdp->chgBus(c+5969,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                               << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
        vcdp->chgBit(c+5977,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U])));
        vcdp->chgBit(c+5985,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0x15U))));
        vcdp->chgBus(c+5993,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0x12U))),3);
        vcdp->chgBus(c+6001,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0xfU))),3);
        vcdp->chgBus(c+6009,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                    >> 0xdU))),2);
        vcdp->chgBus(c+6017,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                       >> 5U))),8);
        vcdp->chgBus(c+6025,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                               << 0x1bU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
        vcdp->chgBus(c+6033,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                       << 0x1fU) | 
                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                                       >> 1U)))),4);
        vcdp->chgBus(c+6041,(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                               << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
        vcdp->chgBit(c+6049,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U])));
    }
}

void Vsoc_top::traceChgThis__61(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+6057,((0U != vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__irqs)));
        vcdp->chgBus(c+6065,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__irqs),18);
        vcdp->chgBit(c+6073,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
        vcdp->chgBit(c+6081,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
        vcdp->chgBit(c+6089,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug));
        vcdp->chgBit(c+6097,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq));
        vcdp->chgBus(c+6105,(((0x4000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                               ? 0xeU : ((0x2000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                          ? 0xdU : 
                                         ((0x1000U 
                                           & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                           ? 0xcU : 
                                          ((0x800U 
                                            & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                            ? 0xbU : 
                                           ((0x400U 
                                             & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                             ? 0xaU
                                             : ((0x200U 
                                                 & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                 ? 9U
                                                 : 
                                                ((0x100U 
                                                  & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                  ? 8U
                                                  : 
                                                 ((0x80U 
                                                   & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                   ? 7U
                                                   : 
                                                  ((0x40U 
                                                    & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                    ? 6U
                                                    : 
                                                   ((0x20U 
                                                     & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                     ? 5U
                                                     : 
                                                    ((0x10U 
                                                      & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                      ? 4U
                                                      : 
                                                     ((8U 
                                                       & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                       ? 3U
                                                       : 
                                                      ((4U 
                                                        & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                        ? 2U
                                                        : 
                                                       ((2U 
                                                         & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                         ? 1U
                                                         : 0U))))))))))))))),4);
        vcdp->chgBit(c+6113,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__irqs 
                                    >> 0x10U))));
        vcdp->chgBit(c+6121,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err));
        vcdp->chgBus(c+6129,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip),18);
    }
}

void Vsoc_top::traceChgThis__62(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+6137,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
                              & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))));
        vcdp->chgBit(c+6145,(((3U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                              & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                 | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                    & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn))))));
    }
}

void Vsoc_top::traceChgThis__63(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+6153,(((3U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                     >> 8U)) > (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
    }
}

void Vsoc_top::traceChgThis__64(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+6161,((1U & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U])));
        vcdp->chgBit(c+6169,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                    >> 0xcU))));
        vcdp->chgBit(c+6177,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                    >> 0xdU))));
        vcdp->chgBit(c+6185,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                    >> 0xeU))));
        vcdp->chgBit(c+6193,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                    >> 0xfU))));
        vcdp->chgBit(c+6201,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                    >> 0x10U))));
        vcdp->chgBit(c+6209,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                    >> 0x11U))));
        vcdp->chgBit(c+6217,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                    >> 0x12U))));
        vcdp->chgBit(c+6225,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                    >> 0x13U))));
        vcdp->chgBit(c+6233,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                    >> 0x14U))));
        vcdp->chgBit(c+6241,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                    >> 0x15U))));
        vcdp->chgBit(c+6249,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                    >> 0x16U))));
        vcdp->chgBit(c+6257,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                    >> 0x17U))));
        vcdp->chgBit(c+6265,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                    >> 0x18U))));
        vcdp->chgBit(c+6273,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                    >> 0x19U))));
        vcdp->chgBit(c+6281,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                    >> 0x1aU))));
        vcdp->chgBit(c+6289,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                    >> 0x1bU))));
        vcdp->chgBit(c+6297,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                    >> 0x1cU))));
        vcdp->chgBit(c+6305,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                    >> 0x1dU))));
        vcdp->chgBit(c+6313,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                    >> 0x1eU))));
        vcdp->chgBit(c+6321,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                    >> 0x1fU))));
        vcdp->chgBit(c+6329,((1U & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U])));
        vcdp->chgBit(c+6337,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                    >> 1U))));
        vcdp->chgBit(c+6345,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                    >> 2U))));
        vcdp->chgBit(c+6353,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                    >> 3U))));
        vcdp->chgBit(c+6361,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                    >> 4U))));
        vcdp->chgBit(c+6369,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                    >> 5U))));
        vcdp->chgBit(c+6377,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                    >> 6U))));
        vcdp->chgBit(c+6385,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                    >> 7U))));
        vcdp->chgBit(c+6393,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                    >> 8U))));
        vcdp->chgBit(c+6401,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                    >> 9U))));
        vcdp->chgBit(c+6409,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                    >> 0xaU))));
        vcdp->chgBit(c+6417,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                    >> 0xbU))));
        vcdp->chgBus(c+6425,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                     << 0x17U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                  >> 9U)))),3);
        vcdp->chgBus(c+6433,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                     << 0x1aU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                  >> 6U)))),3);
        vcdp->chgBus(c+6441,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                     << 0x1dU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                  >> 3U)))),3);
        vcdp->chgBus(c+6449,((7U & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U])),3);
        vcdp->chgBus(c+6457,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                     << 3U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x1dU)))),3);
        vcdp->chgBus(c+6465,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                     << 6U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x1aU)))),3);
        vcdp->chgBus(c+6473,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                     << 9U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x17U)))),3);
        vcdp->chgBus(c+6481,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                     << 0xcU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                 >> 0x14U)))),3);
        vcdp->chgBus(c+6489,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                     << 0xfU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                 >> 0x11U)))),3);
        vcdp->chgBus(c+6497,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                     << 0x12U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 0xeU)))),3);
        vcdp->chgBus(c+6505,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                     << 0x15U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 0xbU)))),3);
        vcdp->chgBus(c+6513,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                     << 0x18U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 8U)))),3);
        vcdp->chgBus(c+6521,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                     << 0x1bU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 5U)))),3);
        vcdp->chgBus(c+6529,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                     << 0x1eU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 2U)))),3);
        vcdp->chgBus(c+6537,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                     << 1U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x1fU)))),3);
        vcdp->chgBus(c+6545,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                     << 4U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x1cU)))),3);
        vcdp->chgBus(c+6553,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                     << 7U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x19U)))),3);
        vcdp->chgBus(c+6561,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                     << 0xaU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                 >> 0x16U)))),3);
        vcdp->chgBus(c+6569,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                     << 0xdU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                 >> 0x13U)))),3);
        vcdp->chgBus(c+6577,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                     << 0x10U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0x10U)))),3);
        vcdp->chgBus(c+6585,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                     << 0x13U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0xdU)))),3);
        vcdp->chgBus(c+6593,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                     << 0x16U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0xaU)))),3);
        vcdp->chgBus(c+6601,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                     << 0x19U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 7U)))),3);
        vcdp->chgBus(c+6609,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                     << 0x1cU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 4U)))),3);
        vcdp->chgBus(c+6617,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                     << 0x1fU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 1U)))),3);
        vcdp->chgBus(c+6625,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                     << 2U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x1eU)))),3);
        vcdp->chgBus(c+6633,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                     << 5U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x1bU)))),3);
        vcdp->chgBus(c+6641,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                     << 8U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x18U)))),3);
        vcdp->chgBus(c+6649,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                     << 0xbU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                 >> 0x15U)))),3);
        vcdp->chgBus(c+6657,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                     << 0xeU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                 >> 0x12U)))),3);
        vcdp->chgBus(c+6665,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                     << 0x11U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                  >> 0xfU)))),3);
        vcdp->chgBus(c+6673,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                     << 0x14U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                  >> 0xcU)))),3);
        vcdp->chgBit(c+6681,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                    >> 0xcU))));
        vcdp->chgBit(c+6689,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                    >> 0xdU))));
        vcdp->chgBit(c+6697,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                    >> 0xeU))));
        vcdp->chgBit(c+6705,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                    >> 0xfU))));
        vcdp->chgBit(c+6713,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                    >> 0x10U))));
        vcdp->chgBit(c+6721,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                    >> 0x11U))));
        vcdp->chgBit(c+6729,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                    >> 0x12U))));
        vcdp->chgBit(c+6737,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                    >> 0x13U))));
        vcdp->chgBit(c+6745,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                    >> 0x14U))));
        vcdp->chgBit(c+6753,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                    >> 0x15U))));
        vcdp->chgBit(c+6761,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                    >> 0x16U))));
        vcdp->chgBit(c+6769,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                    >> 0x17U))));
        vcdp->chgBit(c+6777,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                    >> 0x18U))));
        vcdp->chgBit(c+6785,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                    >> 0x19U))));
        vcdp->chgBit(c+6793,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                    >> 0x1aU))));
        vcdp->chgBit(c+6801,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                    >> 0x1bU))));
        vcdp->chgBit(c+6809,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                    >> 0x1cU))));
        vcdp->chgBit(c+6817,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                    >> 0x1dU))));
        vcdp->chgBit(c+6825,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                    >> 0x1eU))));
        vcdp->chgBit(c+6833,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                    >> 0x1fU))));
        vcdp->chgBit(c+6841,((1U & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U])));
        vcdp->chgBit(c+6849,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                    >> 1U))));
        vcdp->chgBit(c+6857,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                    >> 2U))));
        vcdp->chgBit(c+6865,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                    >> 3U))));
        vcdp->chgBit(c+6873,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                    >> 4U))));
        vcdp->chgBit(c+6881,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                    >> 5U))));
        vcdp->chgBit(c+6889,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                    >> 6U))));
        vcdp->chgBit(c+6897,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                    >> 7U))));
        vcdp->chgBit(c+6905,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                    >> 8U))));
        vcdp->chgBit(c+6913,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                    >> 9U))));
        vcdp->chgBit(c+6921,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                    >> 0xaU))));
        vcdp->chgBit(c+6929,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                    >> 0xbU))));
        vcdp->chgBus(c+6937,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                     << 0x17U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                                  >> 9U)))),3);
        vcdp->chgBus(c+6945,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                        << 0x1dU) | 
                                       (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                        >> 3U)))),6);
        vcdp->chgBit(c+6953,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                    >> 2U))));
        vcdp->chgBit(c+6961,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                    >> 1U))));
        vcdp->chgBit(c+6969,((1U & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U])));
        vcdp->chgBit(c+6977,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                    >> 1U))));
        vcdp->chgBit(c+6985,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                    >> 2U))));
    }
}

void Vsoc_top::traceChgThis__65(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+6993,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+7001,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+7009,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+7017,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+7025,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+7033,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+7041,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+7049,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+7057,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+7065,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+7073,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+7081,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+7089,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+7097,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+7105,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+7113,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+7121,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+7129,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+7137,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+7145,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+7153,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+7161,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+7169,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+7177,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+7185,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+7193,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+7201,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+7209,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d))));
    }
}

void Vsoc_top::traceChgThis__66(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+7217,(((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                                | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set_raw)) 
                               | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
                              & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_valid_clear)))));
    }
}

void Vsoc_top::traceChgThis__67(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+7225,((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                               ^ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)) 
                              & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)))));
    }
}

void Vsoc_top::traceChgThis__68(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+7233,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+7241,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d))));
    }
}

void Vsoc_top::traceChgThis__69(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+7249,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result));
        vcdp->chgBit(c+7257,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__perf_jump));
        vcdp->chgBit(c+7265,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__perf_branch));
        vcdp->chgBit(c+7273,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__perf_tbranch));
        vcdp->chgBit(c+7281,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__perf_load));
        vcdp->chgBit(c+7289,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__perf_store));
        vcdp->chgBit(c+7297,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_set));
        vcdp->chgBit(c+7305,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set));
        vcdp->chgBit(c+7313,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set_raw));
        vcdp->chgBit(c+7321,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec));
        vcdp->chgBit(c+7329,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec));
        vcdp->chgBit(c+7337,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec));
        vcdp->chgBit(c+7345,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed));
        vcdp->chgBit(c+7353,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left));
        vcdp->chgBus(c+7361,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt),6);
        vcdp->chgBit(c+7369,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold));
    }
}

void Vsoc_top::traceChgThis__70(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+7377,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv) 
                              & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec))));
        vcdp->chgBit(c+7385,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv) 
                              & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec))));
    }
}

void Vsoc_top::traceChgThis__71(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+7393,((((0x200000U & vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U])
                                ? ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
                                    << 0xaU) | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                                >> 0x16U))
                                : vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q) 
                              & ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we)
                                  ? (~ ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [1U][1U] << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [1U][0U] 
                                           >> 1U)))
                                  : 0xffffffffU))),32);
    }
}

void Vsoc_top::traceChgThis__72(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+7401,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+7409,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d))));
    }
}

void Vsoc_top::traceChgThis__73(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+7417,((1U & (IData)((vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                            >> 0x33U)))));
        vcdp->chgBus(c+7425,((7U & (IData)((vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                            >> 0x30U)))),3);
        vcdp->chgBus(c+7433,((7U & (IData)((vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                            >> 0x2dU)))),3);
        vcdp->chgBus(c+7441,((3U & (IData)((vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                            >> 0x2bU)))),2);
        vcdp->chgBus(c+7449,((0xffU & (IData)((vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+7457,((1U & (IData)((vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                            >> 0x22U)))));
        vcdp->chgBus(c+7465,((IData)((vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                      >> 2U))),32);
        vcdp->chgBit(c+7473,((1U & (IData)((vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                            >> 1U)))));
        vcdp->chgBit(c+7481,((1U & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h))));
        vcdp->chgBit(c+7489,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [0U] >> 0x33U)))));
        vcdp->chgBus(c+7497,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [0U] >> 0x30U)))),3);
        vcdp->chgBus(c+7505,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [0U] >> 0x2dU)))),3);
        vcdp->chgBus(c+7513,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [0U] >> 0x2bU)))),2);
        vcdp->chgBus(c+7521,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                               [0U] 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+7529,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [0U] >> 0x22U)))));
        vcdp->chgBus(c+7537,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                      [0U] >> 2U))),32);
        vcdp->chgBit(c+7545,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [0U] >> 1U)))));
        vcdp->chgBit(c+7553,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                           [0U]))));
        vcdp->chgBit(c+7561,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [1U] >> 0x33U)))));
        vcdp->chgBus(c+7569,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [1U] >> 0x30U)))),3);
        vcdp->chgBus(c+7577,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [1U] >> 0x2dU)))),3);
        vcdp->chgBus(c+7585,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [1U] >> 0x2bU)))),2);
        vcdp->chgBus(c+7593,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                               [1U] 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+7601,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [1U] >> 0x22U)))));
        vcdp->chgBus(c+7609,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                      [1U] >> 2U))),32);
        vcdp->chgBit(c+7617,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [1U] >> 1U)))));
        vcdp->chgBit(c+7625,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                           [1U]))));
        vcdp->chgBit(c+7633,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [2U] >> 0x33U)))));
        vcdp->chgBus(c+7641,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [2U] >> 0x30U)))),3);
        vcdp->chgBus(c+7649,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [2U] >> 0x2dU)))),3);
        vcdp->chgBus(c+7657,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [2U] >> 0x2bU)))),2);
        vcdp->chgBus(c+7665,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                               [2U] 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+7673,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [2U] >> 0x22U)))));
        vcdp->chgBus(c+7681,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                      [2U] >> 2U))),32);
        vcdp->chgBit(c+7689,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [2U] >> 1U)))));
        vcdp->chgBit(c+7697,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                           [2U]))));
        vcdp->chgBit(c+7705,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [3U] >> 0x33U)))));
        vcdp->chgBus(c+7713,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [3U] >> 0x30U)))),3);
        vcdp->chgBus(c+7721,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [3U] >> 0x2dU)))),3);
        vcdp->chgBus(c+7729,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [3U] >> 0x2bU)))),2);
        vcdp->chgBus(c+7737,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                               [3U] 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+7745,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [3U] >> 0x22U)))));
        vcdp->chgBus(c+7753,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                      [3U] >> 2U))),32);
        vcdp->chgBit(c+7761,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [3U] >> 1U)))));
        vcdp->chgBit(c+7769,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                           [3U]))));
        vcdp->chgBit(c+7777,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [4U] >> 0x33U)))));
        vcdp->chgBus(c+7785,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [4U] >> 0x30U)))),3);
        vcdp->chgBus(c+7793,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [4U] >> 0x2dU)))),3);
        vcdp->chgBus(c+7801,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [4U] >> 0x2bU)))),2);
        vcdp->chgBus(c+7809,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                               [4U] 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+7817,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [4U] >> 0x22U)))));
        vcdp->chgBus(c+7825,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                      [4U] >> 2U))),32);
        vcdp->chgBit(c+7833,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [4U] >> 1U)))));
        vcdp->chgBit(c+7841,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                           [4U]))));
        vcdp->chgBit(c+7849,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [5U] >> 0x33U)))));
        vcdp->chgBus(c+7857,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [5U] >> 0x30U)))),3);
        vcdp->chgBus(c+7865,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [5U] >> 0x2dU)))),3);
        vcdp->chgBus(c+7873,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [5U] >> 0x2bU)))),2);
        vcdp->chgBus(c+7881,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                               [5U] 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+7889,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [5U] >> 0x22U)))));
        vcdp->chgBus(c+7897,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                      [5U] >> 2U))),32);
        vcdp->chgBit(c+7905,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [5U] >> 1U)))));
        vcdp->chgBit(c+7913,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                           [5U]))));
        vcdp->chgBit(c+7921,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [6U] >> 0x33U)))));
        vcdp->chgBus(c+7929,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [6U] >> 0x30U)))),3);
        vcdp->chgBus(c+7937,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [6U] >> 0x2dU)))),3);
        vcdp->chgBus(c+7945,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [6U] >> 0x2bU)))),2);
        vcdp->chgBus(c+7953,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                               [6U] 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+7961,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [6U] >> 0x22U)))));
        vcdp->chgBus(c+7969,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                      [6U] >> 2U))),32);
        vcdp->chgBit(c+7977,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [6U] >> 1U)))));
        vcdp->chgBit(c+7985,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                           [6U]))));
        vcdp->chgBit(c+7993,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [7U] >> 0x33U)))));
        vcdp->chgBus(c+8001,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [7U] >> 0x30U)))),3);
        vcdp->chgBus(c+8009,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [7U] >> 0x2dU)))),3);
        vcdp->chgBus(c+8017,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [7U] >> 0x2bU)))),2);
        vcdp->chgBus(c+8025,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                               [7U] 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+8033,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [7U] >> 0x22U)))));
        vcdp->chgBus(c+8041,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                      [7U] >> 2U))),32);
        vcdp->chgBit(c+8049,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [7U] >> 1U)))));
        vcdp->chgBit(c+8057,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                           [7U]))));
        vcdp->chgBit(c+8065,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [8U] >> 0x33U)))));
        vcdp->chgBus(c+8073,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [8U] >> 0x30U)))),3);
        vcdp->chgBus(c+8081,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [8U] >> 0x2dU)))),3);
        vcdp->chgBus(c+8089,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [8U] >> 0x2bU)))),2);
        vcdp->chgBus(c+8097,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                               [8U] 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+8105,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [8U] >> 0x22U)))));
        vcdp->chgBus(c+8113,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                      [8U] >> 2U))),32);
        vcdp->chgBit(c+8121,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [8U] >> 1U)))));
        vcdp->chgBit(c+8129,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                           [8U]))));
        vcdp->chgBit(c+8137,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [9U] >> 0x33U)))));
        vcdp->chgBus(c+8145,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [9U] >> 0x30U)))),3);
        vcdp->chgBus(c+8153,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [9U] >> 0x2dU)))),3);
        vcdp->chgBus(c+8161,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [9U] >> 0x2bU)))),2);
        vcdp->chgBus(c+8169,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                               [9U] 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+8177,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [9U] >> 0x22U)))));
        vcdp->chgBus(c+8185,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                      [9U] >> 2U))),32);
        vcdp->chgBit(c+8193,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                            [9U] >> 1U)))));
        vcdp->chgBit(c+8201,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                           [9U]))));
        vcdp->chgBit(c+8209,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [0U] >> 0x33U)))));
        vcdp->chgBus(c+8217,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [0U] >> 0x30U)))),3);
        vcdp->chgBus(c+8225,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [0U] >> 0x2dU)))),3);
        vcdp->chgBus(c+8233,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [0U] >> 0x2bU)))),2);
        vcdp->chgBus(c+8241,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                               [0U] 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+8249,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [0U] >> 0x22U)))));
        vcdp->chgBus(c+8257,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                      [0U] >> 2U))),32);
        vcdp->chgBit(c+8265,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [0U] >> 1U)))));
        vcdp->chgBit(c+8273,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [0U]))));
        vcdp->chgBit(c+8281,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [1U] >> 0x33U)))));
        vcdp->chgBus(c+8289,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [1U] >> 0x30U)))),3);
        vcdp->chgBus(c+8297,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [1U] >> 0x2dU)))),3);
        vcdp->chgBus(c+8305,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [1U] >> 0x2bU)))),2);
        vcdp->chgBus(c+8313,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                               [1U] 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+8321,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [1U] >> 0x22U)))));
        vcdp->chgBus(c+8329,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                      [1U] >> 2U))),32);
        vcdp->chgBit(c+8337,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [1U] >> 1U)))));
        vcdp->chgBit(c+8345,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [1U]))));
        vcdp->chgBit(c+8353,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [2U] >> 0x33U)))));
        vcdp->chgBus(c+8361,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [2U] >> 0x30U)))),3);
        vcdp->chgBus(c+8369,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [2U] >> 0x2dU)))),3);
        vcdp->chgBus(c+8377,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [2U] >> 0x2bU)))),2);
        vcdp->chgBus(c+8385,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                               [2U] 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+8393,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [2U] >> 0x22U)))));
        vcdp->chgBus(c+8401,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                      [2U] >> 2U))),32);
        vcdp->chgBit(c+8409,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [2U] >> 1U)))));
        vcdp->chgBit(c+8417,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [2U]))));
        vcdp->chgBit(c+8425,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [3U] >> 0x33U)))));
        vcdp->chgBus(c+8433,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [3U] >> 0x30U)))),3);
        vcdp->chgBus(c+8441,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [3U] >> 0x2dU)))),3);
        vcdp->chgBus(c+8449,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [3U] >> 0x2bU)))),2);
        vcdp->chgBus(c+8457,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                               [3U] 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+8465,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [3U] >> 0x22U)))));
        vcdp->chgBus(c+8473,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                      [3U] >> 2U))),32);
        vcdp->chgBit(c+8481,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [3U] >> 1U)))));
        vcdp->chgBit(c+8489,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [3U]))));
        vcdp->chgBit(c+8497,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [4U] >> 0x33U)))));
        vcdp->chgBus(c+8505,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [4U] >> 0x30U)))),3);
        vcdp->chgBus(c+8513,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [4U] >> 0x2dU)))),3);
        vcdp->chgBus(c+8521,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [4U] >> 0x2bU)))),2);
        vcdp->chgBus(c+8529,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                               [4U] 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+8537,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [4U] >> 0x22U)))));
        vcdp->chgBus(c+8545,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                      [4U] >> 2U))),32);
        vcdp->chgBit(c+8553,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [4U] >> 1U)))));
        vcdp->chgBit(c+8561,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [4U]))));
        vcdp->chgBit(c+8569,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [5U] >> 0x33U)))));
        vcdp->chgBus(c+8577,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [5U] >> 0x30U)))),3);
        vcdp->chgBus(c+8585,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [5U] >> 0x2dU)))),3);
        vcdp->chgBus(c+8593,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [5U] >> 0x2bU)))),2);
        vcdp->chgBus(c+8601,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                               [5U] 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+8609,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [5U] >> 0x22U)))));
        vcdp->chgBus(c+8617,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                      [5U] >> 2U))),32);
        vcdp->chgBit(c+8625,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [5U] >> 1U)))));
        vcdp->chgBit(c+8633,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [5U]))));
        vcdp->chgBit(c+8641,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [6U] >> 0x33U)))));
        vcdp->chgBus(c+8649,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [6U] >> 0x30U)))),3);
        vcdp->chgBus(c+8657,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [6U] >> 0x2dU)))),3);
        vcdp->chgBus(c+8665,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [6U] >> 0x2bU)))),2);
        vcdp->chgBus(c+8673,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                               [6U] 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+8681,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [6U] >> 0x22U)))));
        vcdp->chgBus(c+8689,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                      [6U] >> 2U))),32);
        vcdp->chgBit(c+8697,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [6U] >> 1U)))));
        vcdp->chgBit(c+8705,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [6U]))));
        vcdp->chgBit(c+8713,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [7U] >> 0x33U)))));
        vcdp->chgBus(c+8721,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [7U] >> 0x30U)))),3);
        vcdp->chgBus(c+8729,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [7U] >> 0x2dU)))),3);
        vcdp->chgBus(c+8737,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [7U] >> 0x2bU)))),2);
        vcdp->chgBus(c+8745,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                               [7U] 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+8753,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [7U] >> 0x22U)))));
        vcdp->chgBus(c+8761,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                      [7U] >> 2U))),32);
        vcdp->chgBit(c+8769,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [7U] >> 1U)))));
        vcdp->chgBit(c+8777,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [7U]))));
        vcdp->chgBit(c+8785,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [8U] >> 0x33U)))));
        vcdp->chgBus(c+8793,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [8U] >> 0x30U)))),3);
        vcdp->chgBus(c+8801,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [8U] >> 0x2dU)))),3);
        vcdp->chgBus(c+8809,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [8U] >> 0x2bU)))),2);
        vcdp->chgBus(c+8817,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                               [8U] 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+8825,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [8U] >> 0x22U)))));
        vcdp->chgBus(c+8833,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                      [8U] >> 2U))),32);
        vcdp->chgBit(c+8841,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [8U] >> 1U)))));
        vcdp->chgBit(c+8849,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [8U]))));
        vcdp->chgBit(c+8857,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [9U] >> 0x33U)))));
        vcdp->chgBus(c+8865,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [9U] >> 0x30U)))),3);
        vcdp->chgBus(c+8873,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [9U] >> 0x2dU)))),3);
        vcdp->chgBus(c+8881,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [9U] >> 0x2bU)))),2);
        vcdp->chgBus(c+8889,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                               [9U] 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+8897,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [9U] >> 0x22U)))));
        vcdp->chgBus(c+8905,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                      [9U] >> 2U))),32);
        vcdp->chgBit(c+8913,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [9U] >> 1U)))));
        vcdp->chgBit(c+8921,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [9U]))));
        vcdp->chgBit(c+8929,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x33U)))));
        vcdp->chgBus(c+8937,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x30U)))),3);
        vcdp->chgBus(c+8945,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x2dU)))),3);
        vcdp->chgBus(c+8953,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x2bU)))),2);
        vcdp->chgBus(c+8961,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+8969,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x22U)))));
        vcdp->chgBus(c+8977,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                      >> 2U))),32);
        vcdp->chgBit(c+8985,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                            >> 1U)))));
        vcdp->chgBit(c+8993,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o))));
        vcdp->chgBit(c+9001,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [0U] >> 0x33U)))));
        vcdp->chgBus(c+9009,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [0U] >> 0x30U)))),3);
        vcdp->chgBus(c+9017,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [0U] >> 0x2dU)))),3);
        vcdp->chgBus(c+9025,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [0U] >> 0x2bU)))),2);
        vcdp->chgBus(c+9033,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                               [0U] 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+9041,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [0U] >> 0x22U)))));
        vcdp->chgBus(c+9049,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                      [0U] >> 2U))),32);
        vcdp->chgBit(c+9057,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [0U] >> 1U)))));
        vcdp->chgBit(c+9065,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [0U]))));
        vcdp->chgBit(c+9073,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [0U]))));
        vcdp->chgBit(c+9081,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [0U] >> 0x33U)))));
        vcdp->chgQuad(c+9089,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(
                                                           (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                            [0U] 
                                                            >> 0x22U))))) 
                                << 0x22U) | (((QData)((IData)(
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
        vcdp->chgBit(c+9105,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x33U)))));
        vcdp->chgBus(c+9113,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x30U)))),3);
        vcdp->chgBus(c+9121,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x2dU)))),3);
        vcdp->chgBus(c+9129,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x2bU)))),2);
        vcdp->chgBus(c+9137,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+9145,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x22U)))));
        vcdp->chgBus(c+9153,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                      >> 2U))),32);
        vcdp->chgBit(c+9161,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                            >> 1U)))));
        vcdp->chgBit(c+9169,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o))));
        vcdp->chgBit(c+9177,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [1U] >> 0x33U)))));
        vcdp->chgBus(c+9185,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [1U] >> 0x30U)))),3);
        vcdp->chgBus(c+9193,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [1U] >> 0x2dU)))),3);
        vcdp->chgBus(c+9201,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [1U] >> 0x2bU)))),2);
        vcdp->chgBus(c+9209,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                               [1U] 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+9217,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [1U] >> 0x22U)))));
        vcdp->chgBus(c+9225,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                      [1U] >> 2U))),32);
        vcdp->chgBit(c+9233,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [1U] >> 1U)))));
        vcdp->chgBit(c+9241,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [1U]))));
        vcdp->chgBit(c+9249,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [1U]))));
        vcdp->chgBit(c+9257,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [1U] >> 0x33U)))));
        vcdp->chgQuad(c+9265,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(
                                                           (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                            [1U] 
                                                            >> 0x22U))))) 
                                << 0x22U) | (((QData)((IData)(
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
        vcdp->chgBit(c+9281,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x33U)))));
        vcdp->chgBus(c+9289,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x30U)))),3);
        vcdp->chgBus(c+9297,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x2dU)))),3);
        vcdp->chgBus(c+9305,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x2bU)))),2);
        vcdp->chgBus(c+9313,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+9321,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x22U)))));
        vcdp->chgBus(c+9329,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                      >> 2U))),32);
        vcdp->chgBit(c+9337,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                            >> 1U)))));
        vcdp->chgBit(c+9345,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o))));
        vcdp->chgBit(c+9353,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [2U] >> 0x33U)))));
        vcdp->chgBus(c+9361,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [2U] >> 0x30U)))),3);
        vcdp->chgBus(c+9369,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [2U] >> 0x2dU)))),3);
        vcdp->chgBus(c+9377,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [2U] >> 0x2bU)))),2);
        vcdp->chgBus(c+9385,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                               [2U] 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+9393,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [2U] >> 0x22U)))));
        vcdp->chgBus(c+9401,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                      [2U] >> 2U))),32);
        vcdp->chgBit(c+9409,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [2U] >> 1U)))));
        vcdp->chgBit(c+9417,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [2U]))));
        vcdp->chgBit(c+9425,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [2U]))));
        vcdp->chgBit(c+9433,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [2U] >> 0x33U)))));
        vcdp->chgQuad(c+9441,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(
                                                           (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                            [2U] 
                                                            >> 0x22U))))) 
                                << 0x22U) | (((QData)((IData)(
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
        vcdp->chgBit(c+9457,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x33U)))));
        vcdp->chgBus(c+9465,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x30U)))),3);
        vcdp->chgBus(c+9473,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x2dU)))),3);
        vcdp->chgBus(c+9481,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x2bU)))),2);
        vcdp->chgBus(c+9489,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+9497,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x22U)))));
        vcdp->chgBus(c+9505,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                      >> 2U))),32);
        vcdp->chgBit(c+9513,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                            >> 1U)))));
        vcdp->chgBit(c+9521,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o))));
        vcdp->chgBit(c+9529,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [3U] >> 0x33U)))));
        vcdp->chgBus(c+9537,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [3U] >> 0x30U)))),3);
        vcdp->chgBus(c+9545,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [3U] >> 0x2dU)))),3);
        vcdp->chgBus(c+9553,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [3U] >> 0x2bU)))),2);
        vcdp->chgBus(c+9561,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                               [3U] 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+9569,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [3U] >> 0x22U)))));
        vcdp->chgBus(c+9577,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                      [3U] >> 2U))),32);
        vcdp->chgBit(c+9585,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [3U] >> 1U)))));
        vcdp->chgBit(c+9593,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [3U]))));
        vcdp->chgBit(c+9601,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [3U]))));
        vcdp->chgBit(c+9609,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [3U] >> 0x33U)))));
        vcdp->chgQuad(c+9617,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(
                                                           (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                            [3U] 
                                                            >> 0x22U))))) 
                                << 0x22U) | (((QData)((IData)(
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
        vcdp->chgBit(c+9633,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x33U)))));
        vcdp->chgBus(c+9641,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x30U)))),3);
        vcdp->chgBus(c+9649,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x2dU)))),3);
        vcdp->chgBus(c+9657,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x2bU)))),2);
        vcdp->chgBus(c+9665,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+9673,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x22U)))));
        vcdp->chgBus(c+9681,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                      >> 2U))),32);
        vcdp->chgBit(c+9689,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                            >> 1U)))));
        vcdp->chgBit(c+9697,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o))));
        vcdp->chgBit(c+9705,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [4U] >> 0x33U)))));
        vcdp->chgBus(c+9713,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [4U] >> 0x30U)))),3);
        vcdp->chgBus(c+9721,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [4U] >> 0x2dU)))),3);
        vcdp->chgBus(c+9729,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [4U] >> 0x2bU)))),2);
        vcdp->chgBus(c+9737,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                               [4U] 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+9745,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [4U] >> 0x22U)))));
        vcdp->chgBus(c+9753,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                      [4U] >> 2U))),32);
        vcdp->chgBit(c+9761,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [4U] >> 1U)))));
        vcdp->chgBit(c+9769,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [4U]))));
        vcdp->chgBit(c+9777,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [4U]))));
        vcdp->chgBit(c+9785,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [4U] >> 0x33U)))));
        vcdp->chgQuad(c+9793,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(
                                                           (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                            [4U] 
                                                            >> 0x22U))))) 
                                << 0x22U) | (((QData)((IData)(
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
        vcdp->chgBit(c+9809,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x33U)))));
        vcdp->chgBus(c+9817,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x30U)))),3);
        vcdp->chgBus(c+9825,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x2dU)))),3);
        vcdp->chgBus(c+9833,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x2bU)))),2);
        vcdp->chgBus(c+9841,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+9849,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x22U)))));
        vcdp->chgBus(c+9857,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                      >> 2U))),32);
        vcdp->chgBit(c+9865,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                            >> 1U)))));
        vcdp->chgBit(c+9873,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o))));
        vcdp->chgBit(c+9881,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [5U] >> 0x33U)))));
        vcdp->chgBus(c+9889,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [5U] >> 0x30U)))),3);
        vcdp->chgBus(c+9897,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [5U] >> 0x2dU)))),3);
        vcdp->chgBus(c+9905,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [5U] >> 0x2bU)))),2);
        vcdp->chgBus(c+9913,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                               [5U] 
                                               >> 0x23U)))),8);
        vcdp->chgBit(c+9921,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [5U] >> 0x22U)))));
        vcdp->chgBus(c+9929,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                      [5U] >> 2U))),32);
        vcdp->chgBit(c+9937,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [5U] >> 1U)))));
        vcdp->chgBit(c+9945,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [5U]))));
        vcdp->chgBit(c+9953,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [5U]))));
        vcdp->chgBit(c+9961,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [5U] >> 0x33U)))));
        vcdp->chgQuad(c+9969,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(
                                                           (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                            [5U] 
                                                            >> 0x22U))))) 
                                << 0x22U) | (((QData)((IData)(
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
        vcdp->chgBit(c+9985,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x33U)))));
        vcdp->chgBus(c+9993,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                            >> 0x30U)))),3);
        vcdp->chgBus(c+10001,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                             >> 0x2dU)))),3);
        vcdp->chgBus(c+10009,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                             >> 0x2bU)))),2);
        vcdp->chgBus(c+10017,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                >> 0x23U)))),8);
        vcdp->chgBit(c+10025,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                             >> 0x22U)))));
        vcdp->chgBus(c+10033,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                       >> 2U))),32);
        vcdp->chgBit(c+10041,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                             >> 1U)))));
        vcdp->chgBit(c+10049,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o))));
        vcdp->chgBit(c+10057,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [6U] >> 0x33U)))));
        vcdp->chgBus(c+10065,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [6U] >> 0x30U)))),3);
        vcdp->chgBus(c+10073,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [6U] >> 0x2dU)))),3);
        vcdp->chgBus(c+10081,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [6U] >> 0x2bU)))),2);
        vcdp->chgBus(c+10089,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [6U] 
                                                >> 0x23U)))),8);
        vcdp->chgBit(c+10097,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [6U] >> 0x22U)))));
        vcdp->chgBus(c+10105,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                       [6U] >> 2U))),32);
        vcdp->chgBit(c+10113,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [6U] >> 1U)))));
        vcdp->chgBit(c+10121,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [6U]))));
        vcdp->chgBit(c+10129,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [6U]))));
        vcdp->chgBit(c+10137,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [6U] >> 0x33U)))));
        vcdp->chgQuad(c+10145,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(
                                                            (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                             [6U] 
                                                             >> 0x22U))))) 
                                 << 0x22U) | (((QData)((IData)(
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
        vcdp->chgBit(c+10161,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                             >> 0x33U)))));
        vcdp->chgBus(c+10169,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                             >> 0x30U)))),3);
        vcdp->chgBus(c+10177,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                             >> 0x2dU)))),3);
        vcdp->chgBus(c+10185,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                             >> 0x2bU)))),2);
        vcdp->chgBus(c+10193,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                >> 0x23U)))),8);
        vcdp->chgBit(c+10201,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                             >> 0x22U)))));
        vcdp->chgBus(c+10209,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                       >> 2U))),32);
        vcdp->chgBit(c+10217,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                             >> 1U)))));
        vcdp->chgBit(c+10225,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o))));
        vcdp->chgBit(c+10233,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [7U] >> 0x33U)))));
        vcdp->chgBus(c+10241,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [7U] >> 0x30U)))),3);
        vcdp->chgBus(c+10249,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [7U] >> 0x2dU)))),3);
        vcdp->chgBus(c+10257,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [7U] >> 0x2bU)))),2);
        vcdp->chgBus(c+10265,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [7U] 
                                                >> 0x23U)))),8);
        vcdp->chgBit(c+10273,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [7U] >> 0x22U)))));
        vcdp->chgBus(c+10281,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                       [7U] >> 2U))),32);
        vcdp->chgBit(c+10289,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [7U] >> 1U)))));
        vcdp->chgBit(c+10297,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [7U]))));
        vcdp->chgBit(c+10305,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [7U]))));
        vcdp->chgBit(c+10313,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [7U] >> 0x33U)))));
        vcdp->chgQuad(c+10321,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(
                                                            (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                             [7U] 
                                                             >> 0x22U))))) 
                                 << 0x22U) | (((QData)((IData)(
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
        vcdp->chgBit(c+10337,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                             >> 0x33U)))));
        vcdp->chgBus(c+10345,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                             >> 0x30U)))),3);
        vcdp->chgBus(c+10353,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                             >> 0x2dU)))),3);
        vcdp->chgBus(c+10361,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                             >> 0x2bU)))),2);
        vcdp->chgBus(c+10369,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                >> 0x23U)))),8);
        vcdp->chgBit(c+10377,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                             >> 0x22U)))));
        vcdp->chgBus(c+10385,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                       >> 2U))),32);
        vcdp->chgBit(c+10393,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                             >> 1U)))));
        vcdp->chgBit(c+10401,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o))));
        vcdp->chgBit(c+10409,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [8U] >> 0x33U)))));
        vcdp->chgBus(c+10417,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [8U] >> 0x30U)))),3);
        vcdp->chgBus(c+10425,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [8U] >> 0x2dU)))),3);
        vcdp->chgBus(c+10433,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [8U] >> 0x2bU)))),2);
        vcdp->chgBus(c+10441,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [8U] 
                                                >> 0x23U)))),8);
        vcdp->chgBit(c+10449,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [8U] >> 0x22U)))));
        vcdp->chgBus(c+10457,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                       [8U] >> 2U))),32);
        vcdp->chgBit(c+10465,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [8U] >> 1U)))));
        vcdp->chgBit(c+10473,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [8U]))));
        vcdp->chgBit(c+10481,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [8U]))));
        vcdp->chgBit(c+10489,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [8U] >> 0x33U)))));
        vcdp->chgQuad(c+10497,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(
                                                            (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                             [8U] 
                                                             >> 0x22U))))) 
                                 << 0x22U) | (((QData)((IData)(
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
        vcdp->chgBit(c+10513,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                             >> 0x33U)))));
        vcdp->chgBus(c+10521,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                             >> 0x30U)))),3);
        vcdp->chgBus(c+10529,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                             >> 0x2dU)))),3);
        vcdp->chgBus(c+10537,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                             >> 0x2bU)))),2);
        vcdp->chgBus(c+10545,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                >> 0x23U)))),8);
        vcdp->chgBit(c+10553,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                             >> 0x22U)))));
        vcdp->chgBus(c+10561,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                       >> 2U))),32);
        vcdp->chgBit(c+10569,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                             >> 1U)))));
        vcdp->chgBit(c+10577,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o))));
        vcdp->chgBit(c+10585,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [9U] >> 0x33U)))));
        vcdp->chgBus(c+10593,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [9U] >> 0x30U)))),3);
        vcdp->chgBus(c+10601,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [9U] >> 0x2dU)))),3);
        vcdp->chgBus(c+10609,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [9U] >> 0x2bU)))),2);
        vcdp->chgBus(c+10617,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [9U] 
                                                >> 0x23U)))),8);
        vcdp->chgBit(c+10625,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [9U] >> 0x22U)))));
        vcdp->chgBus(c+10633,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                       [9U] >> 2U))),32);
        vcdp->chgBit(c+10641,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [9U] >> 1U)))));
        vcdp->chgBit(c+10649,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [9U]))));
        vcdp->chgBit(c+10657,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                            [9U]))));
        vcdp->chgBit(c+10665,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [9U] >> 0x33U)))));
        vcdp->chgQuad(c+10673,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(
                                                            (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                             [9U] 
                                                             >> 0x22U))))) 
                                 << 0x22U) | (((QData)((IData)(
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
    }
}

void Vsoc_top::traceChgThis__74(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+10689,((1U & ((IData)((vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                              >> 0x33U)) 
                                     & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [1U][0U]))));
    }
}

void Vsoc_top::traceChgThis__75(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+10697,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [0U] >> 0x33U)))));
        vcdp->chgBus(c+10705,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [0U] >> 0x30U)))),3);
        vcdp->chgBus(c+10713,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [0U] >> 0x2dU)))),3);
        vcdp->chgBus(c+10721,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [0U] >> 0x2bU)))),2);
        vcdp->chgBus(c+10729,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                [0U] 
                                                >> 0x23U)))),8);
        vcdp->chgBit(c+10737,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [0U] >> 0x22U)))));
        vcdp->chgBus(c+10745,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                       [0U] >> 2U))),32);
        vcdp->chgBit(c+10753,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [0U] >> 1U)))));
        vcdp->chgBit(c+10761,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                            [0U]))));
        vcdp->chgBit(c+10769,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [1U] >> 0x33U)))));
        vcdp->chgBus(c+10777,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [1U] >> 0x30U)))),3);
        vcdp->chgBus(c+10785,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [1U] >> 0x2dU)))),3);
        vcdp->chgBus(c+10793,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [1U] >> 0x2bU)))),2);
        vcdp->chgBus(c+10801,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                [1U] 
                                                >> 0x23U)))),8);
        vcdp->chgBit(c+10809,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [1U] >> 0x22U)))));
        vcdp->chgBus(c+10817,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                       [1U] >> 2U))),32);
        vcdp->chgBit(c+10825,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [1U] >> 1U)))));
        vcdp->chgBit(c+10833,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                            [1U]))));
        vcdp->chgBit(c+10841,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [2U] >> 0x33U)))));
        vcdp->chgBus(c+10849,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [2U] >> 0x30U)))),3);
        vcdp->chgBus(c+10857,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [2U] >> 0x2dU)))),3);
        vcdp->chgBus(c+10865,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [2U] >> 0x2bU)))),2);
        vcdp->chgBus(c+10873,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                [2U] 
                                                >> 0x23U)))),8);
        vcdp->chgBit(c+10881,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [2U] >> 0x22U)))));
        vcdp->chgBus(c+10889,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                       [2U] >> 2U))),32);
        vcdp->chgBit(c+10897,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [2U] >> 1U)))));
        vcdp->chgBit(c+10905,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                            [2U]))));
        vcdp->chgBit(c+10913,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [3U] >> 0x33U)))));
        vcdp->chgBus(c+10921,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [3U] >> 0x30U)))),3);
        vcdp->chgBus(c+10929,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [3U] >> 0x2dU)))),3);
        vcdp->chgBus(c+10937,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [3U] >> 0x2bU)))),2);
        vcdp->chgBus(c+10945,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                [3U] 
                                                >> 0x23U)))),8);
        vcdp->chgBit(c+10953,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [3U] >> 0x22U)))));
        vcdp->chgBus(c+10961,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                       [3U] >> 2U))),32);
        vcdp->chgBit(c+10969,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [3U] >> 1U)))));
        vcdp->chgBit(c+10977,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                            [3U]))));
        vcdp->chgBit(c+10985,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [4U] >> 0x33U)))));
        vcdp->chgBus(c+10993,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [4U] >> 0x30U)))),3);
        vcdp->chgBus(c+11001,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [4U] >> 0x2dU)))),3);
        vcdp->chgBus(c+11009,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [4U] >> 0x2bU)))),2);
        vcdp->chgBus(c+11017,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                [4U] 
                                                >> 0x23U)))),8);
        vcdp->chgBit(c+11025,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [4U] >> 0x22U)))));
        vcdp->chgBus(c+11033,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                       [4U] >> 2U))),32);
        vcdp->chgBit(c+11041,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [4U] >> 1U)))));
        vcdp->chgBit(c+11049,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                            [4U]))));
        vcdp->chgBit(c+11057,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [5U] >> 0x33U)))));
        vcdp->chgBus(c+11065,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [5U] >> 0x30U)))),3);
        vcdp->chgBus(c+11073,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [5U] >> 0x2dU)))),3);
        vcdp->chgBus(c+11081,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [5U] >> 0x2bU)))),2);
        vcdp->chgBus(c+11089,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                [5U] 
                                                >> 0x23U)))),8);
        vcdp->chgBit(c+11097,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [5U] >> 0x22U)))));
        vcdp->chgBus(c+11105,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                       [5U] >> 2U))),32);
        vcdp->chgBit(c+11113,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [5U] >> 1U)))));
        vcdp->chgBit(c+11121,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                            [5U]))));
        vcdp->chgBit(c+11129,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [6U] >> 0x33U)))));
        vcdp->chgBus(c+11137,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [6U] >> 0x30U)))),3);
        vcdp->chgBus(c+11145,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [6U] >> 0x2dU)))),3);
        vcdp->chgBus(c+11153,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [6U] >> 0x2bU)))),2);
        vcdp->chgBus(c+11161,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                [6U] 
                                                >> 0x23U)))),8);
        vcdp->chgBit(c+11169,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [6U] >> 0x22U)))));
        vcdp->chgBus(c+11177,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                       [6U] >> 2U))),32);
        vcdp->chgBit(c+11185,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [6U] >> 1U)))));
        vcdp->chgBit(c+11193,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                            [6U]))));
        vcdp->chgBit(c+11201,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [7U] >> 0x33U)))));
        vcdp->chgBus(c+11209,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [7U] >> 0x30U)))),3);
        vcdp->chgBus(c+11217,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [7U] >> 0x2dU)))),3);
        vcdp->chgBus(c+11225,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [7U] >> 0x2bU)))),2);
        vcdp->chgBus(c+11233,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                [7U] 
                                                >> 0x23U)))),8);
        vcdp->chgBit(c+11241,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [7U] >> 0x22U)))));
        vcdp->chgBus(c+11249,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                       [7U] >> 2U))),32);
        vcdp->chgBit(c+11257,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [7U] >> 1U)))));
        vcdp->chgBit(c+11265,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                            [7U]))));
        vcdp->chgBit(c+11273,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [8U] >> 0x33U)))));
        vcdp->chgBus(c+11281,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [8U] >> 0x30U)))),3);
        vcdp->chgBus(c+11289,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [8U] >> 0x2dU)))),3);
        vcdp->chgBus(c+11297,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [8U] >> 0x2bU)))),2);
        vcdp->chgBus(c+11305,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                [8U] 
                                                >> 0x23U)))),8);
        vcdp->chgBit(c+11313,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [8U] >> 0x22U)))));
        vcdp->chgBus(c+11321,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                       [8U] >> 2U))),32);
        vcdp->chgBit(c+11329,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [8U] >> 1U)))));
        vcdp->chgBit(c+11337,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                            [8U]))));
        vcdp->chgBit(c+11345,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [9U] >> 0x33U)))));
        vcdp->chgBus(c+11353,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [9U] >> 0x30U)))),3);
        vcdp->chgBus(c+11361,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [9U] >> 0x2dU)))),3);
        vcdp->chgBus(c+11369,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [9U] >> 0x2bU)))),2);
        vcdp->chgBus(c+11377,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                [9U] 
                                                >> 0x23U)))),8);
        vcdp->chgBit(c+11385,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [9U] >> 0x22U)))));
        vcdp->chgBus(c+11393,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                       [9U] >> 2U))),32);
        vcdp->chgBit(c+11401,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [9U] >> 1U)))));
        vcdp->chgBit(c+11409,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                            [9U]))));
        vcdp->chgBit(c+11417,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [0xaU] 
                                             >> 0x33U)))));
        vcdp->chgBus(c+11425,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [0xaU] 
                                             >> 0x30U)))),3);
        vcdp->chgBus(c+11433,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [0xaU] 
                                             >> 0x2dU)))),3);
        vcdp->chgBus(c+11441,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [0xaU] 
                                             >> 0x2bU)))),2);
        vcdp->chgBus(c+11449,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                [0xaU] 
                                                >> 0x23U)))),8);
        vcdp->chgBit(c+11457,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [0xaU] 
                                             >> 0x22U)))));
        vcdp->chgBus(c+11465,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                       [0xaU] >> 2U))),32);
        vcdp->chgBit(c+11473,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                             [0xaU] 
                                             >> 1U)))));
        vcdp->chgBit(c+11481,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                            [0xaU]))));
        vcdp->chgBit(c+11489,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                             >> 0x33U)))));
        vcdp->chgBus(c+11497,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                             >> 0x30U)))),3);
        vcdp->chgBus(c+11505,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                             >> 0x2dU)))),3);
        vcdp->chgBus(c+11513,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                             >> 0x2bU)))),2);
        vcdp->chgBus(c+11521,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                >> 0x23U)))),8);
        vcdp->chgBit(c+11529,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                             >> 0x22U)))));
        vcdp->chgBus(c+11537,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                       >> 2U))),32);
        vcdp->chgBit(c+11545,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                             >> 1U)))));
        vcdp->chgBit(c+11553,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o))));
    }
}

void Vsoc_top::traceChgThis__76(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+11561,(((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id))
                                ? ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id))
                                    ? 0x1a110808U : 0x1a110800U)
                                : ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id))
                                    ? ((0xffffff00U 
                                        & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                                       | (0x7cU & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__exc_cause) 
                                                   << 2U)))
                                    : (0xffffff00U 
                                       & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)))),32);
    }
}

void Vsoc_top::traceChgThis__77(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+11569,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
                                ? (5U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),3);
    }
}

void Vsoc_top::traceChgThis__78(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+11577,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                     & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q))))));
        vcdp->chgBit(c+11585,((1U & ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                      >> 2U) & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 2U))))));
    }
}

void Vsoc_top::traceChgThis__79(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+11593,((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__pc_set)
                                 ? (0xfffffffeU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                 : (0xfffffffcU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
                               + (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                   & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
                                  << 2U))),32);
    }
}

void Vsoc_top::traceChgThis__80(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+11601,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid));
        vcdp->chgQuad(c+11609,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0]),64);
        vcdp->chgQuad(c+11611,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[1]),64);
        vcdp->chgQuad(c+11613,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[2]),64);
        vcdp->chgQuad(c+11615,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[3]),64);
        vcdp->chgQuad(c+11617,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[4]),64);
        vcdp->chgQuad(c+11619,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[5]),64);
        vcdp->chgQuad(c+11621,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[6]),64);
        vcdp->chgQuad(c+11623,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[7]),64);
        vcdp->chgQuad(c+11625,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[8]),64);
        vcdp->chgQuad(c+11627,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[9]),64);
        vcdp->chgQuad(c+11629,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[10]),64);
        vcdp->chgQuad(c+11631,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[11]),64);
        vcdp->chgQuad(c+11633,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[12]),64);
        vcdp->chgQuad(c+11635,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[13]),64);
        vcdp->chgQuad(c+11637,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[14]),64);
        vcdp->chgQuad(c+11639,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[15]),64);
        vcdp->chgQuad(c+11641,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[16]),64);
        vcdp->chgQuad(c+11643,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[17]),64);
        vcdp->chgQuad(c+11645,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[18]),64);
        vcdp->chgQuad(c+11647,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[19]),64);
        vcdp->chgQuad(c+11649,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[20]),64);
        vcdp->chgQuad(c+11651,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[21]),64);
        vcdp->chgQuad(c+11653,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[22]),64);
        vcdp->chgQuad(c+11655,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[23]),64);
        vcdp->chgQuad(c+11657,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[24]),64);
        vcdp->chgQuad(c+11659,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[25]),64);
        vcdp->chgQuad(c+11661,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[26]),64);
        vcdp->chgQuad(c+11663,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[27]),64);
        vcdp->chgQuad(c+11665,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[28]),64);
        vcdp->chgQuad(c+11667,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[29]),64);
        vcdp->chgQuad(c+11669,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[30]),64);
        vcdp->chgQuad(c+11671,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[31]),64);
    }
}

void Vsoc_top::traceChgThis__81(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+12121,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid) 
                               | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid))));
    }
}

void Vsoc_top::traceChgThis__82(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+12129,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__pc_set) 
                               | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                  & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))))));
    }
}

void Vsoc_top::traceChgThis__83(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+12137,((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
                               & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)))));
    }
}

void Vsoc_top::traceChgThis__84(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+12145,((0x7fffffffU & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__pc_set)
                                               ? (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__pc_set)
                                                    ? 
                                                   (0xfffffffeU 
                                                    & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                                    : 0U) 
                                                  >> 1U)
                                               : (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                  + 
                                                  ((2U 
                                                    & ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                       << 1U)) 
                                                   | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))))),31);
    }
}

void Vsoc_top::traceChgThis__85(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+12153,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                     & ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                         ? (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                             >> 1U) 
                                            & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                         : (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                             & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                            & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))))));
    }
}

void Vsoc_top::traceChgThis__86(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+12161,((0xfffffffeU & ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                               + ((2U 
                                                   & ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                      << 1U)) 
                                                  | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))) 
                                              << 1U))),32);
        vcdp->chgBus(c+12169,((0x7fffffffU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                              + ((2U 
                                                  & ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                     << 1U)) 
                                                 | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))))),31);
    }
}

void Vsoc_top::traceChgThis__87(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+12177,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__csr_op),2);
        vcdp->chgBit(c+12185,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_valid));
        vcdp->chgBit(c+12193,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio));
        vcdp->chgBit(c+12201,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio));
        vcdp->chgBit(c+12209,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio));
        vcdp->chgBit(c+12217,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio));
        vcdp->chgBit(c+12225,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio));
        vcdp->chgBit(c+12233,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio));
        vcdp->chgBit(c+12241,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn));
        vcdp->chgBit(c+12249,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn));
        vcdp->chgBit(c+12257,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn));
        vcdp->chgBit(c+12265,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn));
        vcdp->chgBit(c+12273,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn));
        vcdp->chgBit(c+12281,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid));
        vcdp->chgBit(c+12289,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wr));
    }
}

void Vsoc_top::traceChgThis__88(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+12297,(((3U == (3U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                             >> 0xaU))) 
                               & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wr))));
    }
}

void Vsoc_top::traceChgThis__89(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+12305,(((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                 | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)) 
                                | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d)) 
                               | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__lsu_store_err) 
                                  | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__lsu_load_err)))));
    }
}

void Vsoc_top::traceChgThis__90(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+12313,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
                               | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush))));
    }
}

void Vsoc_top::traceChgThis__91(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgArray(c+12321,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__crash_dump_o),128);
        vcdp->chgBit(c+12353,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__pc_set));
        vcdp->chgBit(c+12361,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__pc_set_spec));
        vcdp->chgBus(c+12369,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__pc_mux_id),3);
        vcdp->chgBus(c+12377,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__exc_cause),6);
        vcdp->chgBit(c+12385,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_if));
        vcdp->chgBit(c+12393,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_cause));
        vcdp->chgBit(c+12401,((1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__exc_cause) 
                                     >> 5U))));
        vcdp->chgBit(c+12409,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__pc_set_spec) 
                               & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__pc_set)))));
        vcdp->chgBit(c+12417,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id));
    }
}

void Vsoc_top::traceChgThis__92(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+12425,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__pc_set)
                                ? (0xfffffffeU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                : 0U)),32);
        vcdp->chgBit(c+12433,(0U));
    }
}

void Vsoc_top::traceChgThis__93(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+12441,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__pc_set) 
                               | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_in_ready) 
                                  & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw)))));
    }
}

void Vsoc_top::traceChgThis__94(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+12449,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev),32);
        vcdp->chgBus(c+12457,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand),32);
        vcdp->chgQuad(c+12465,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed),33);
        vcdp->chgQuad(c+12481,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext),33);
        vcdp->chgBit(c+12497,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext));
        vcdp->chgBus(c+12505,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result),32);
        vcdp->chgBus(c+12513,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev),32);
    }
}

void Vsoc_top::traceChgThis__95(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+12521,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr),12);
        vcdp->chgBus(c+12529,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int),32);
        vcdp->chgBit(c+12537,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id));
        vcdp->chgBit(c+12545,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__csr_restore_mret_id));
        vcdp->chgBit(c+12553,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__csr_restore_dret_id));
        vcdp->chgBit(c+12561,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__illegal_insn_id));
        vcdp->chgBit(c+12569,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
        vcdp->chgBit(c+12577,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
        vcdp->chgBit(c+12585,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
        vcdp->chgBit(c+12593,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
        vcdp->chgBus(c+12601,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result),32);
        vcdp->chgBus(c+12609,((0x1fU & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))),5);
        vcdp->chgBus(c+12617,((0x3fU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)),6);
        vcdp->chgBus(c+12625,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int),32);
        vcdp->chgBit(c+12633,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr));
        vcdp->chgBus(c+12641,((7U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                     >> 5U))),3);
        vcdp->chgBit(c+12649,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                     >> 1U))));
        vcdp->chgBit(c+12657,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                     >> 2U))));
        vcdp->chgBus(c+12665,((7U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                     >> 3U))),3);
        vcdp->chgBit(c+12673,((1U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    }
}

void Vsoc_top::traceChgThis__96(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+12681,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__csr_mtvec_init)
                                ? 0x20000001U : (1U 
                                                 | (0xffffff00U 
                                                    & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)))),32);
    }
}

void Vsoc_top::traceChgThis__97(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+12689,(((0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                               | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))));
    }
}

void Vsoc_top::traceChgThis__98(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+12697,(((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                ? ((0xffff0000U & (
                                                   vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                                                   << 0x10U)) 
                                   | (0xffffU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                 >> 0x10U)))
                                : ((0xffff0000U & ((IData)(
                                                           (vlTOPp->soc_top__DOT__xbar_to_ifu 
                                                            >> 2U)) 
                                                   << 0x10U)) 
                                   | (0xffffU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                 >> 0x10U))))),32);
    }
}

void Vsoc_top::traceChgThis__99(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+12705,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id),2);
        vcdp->chgBit(c+12713,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_req_int));
        vcdp->chgBus(c+12721,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev),2);
        vcdp->chgBit(c+12729,((1U & (~ (IData)((3U 
                                                == 
                                                (3U 
                                                 & (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                     >> 1U) 
                                                    | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev)))))))));
        vcdp->chgBus(c+12737,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a),16);
        vcdp->chgBus(c+12745,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b),16);
        vcdp->chgBus(c+12753,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_d),3);
    }
}

void Vsoc_top::traceChgThis__100(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+12761,((1U & ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                      ? ((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                           >> 1U) & 
                                          (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))) 
                                         | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                                      : (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                          & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                                         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                            & ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                               | (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)))))))));
        vcdp->chgBit(c+12769,((1U & ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                      ? (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                          >> 1U) & 
                                         (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                      : (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                          & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                         & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))))));
    }
}

void Vsoc_top::traceChgThis__101(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+12777,((VL_ULL(0x7ffffffff) 
                                & (VL_MULS_QQQ(35,35,35, 
                                               (VL_ULL(0x7ffffffff) 
                                                & VL_EXTENDS_QI(35,17, 
                                                                (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                               (VL_ULL(0x7ffffffff) 
                                                & VL_EXTENDS_QI(35,17, 
                                                                (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                   + VL_EXTENDS_QQ(35,34, vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))),35);
        vcdp->chgQuad(c+12793,((VL_ULL(0x3ffffffff) 
                                & ((VL_ULL(0x7ffffffff) 
                                    & VL_MULS_QQQ(35,35,35, 
                                                  (VL_ULL(0x7ffffffff) 
                                                   & VL_EXTENDS_QI(35,17, 
                                                                   (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                     << 0x10U) 
                                                                    | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                  (VL_ULL(0x7ffffffff) 
                                                   & VL_EXTENDS_QI(35,17, 
                                                                   (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                     << 0x10U) 
                                                                    | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                   + (VL_ULL(0x7ffffffff) 
                                      & VL_EXTENDS_QQ(35,34, vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))),34);
        vcdp->chgBit(c+12809,((1U & (IData)((VL_ULL(1) 
                                             & ((VL_MULS_QQQ(35,35,35, 
                                                             (VL_ULL(0x7ffffffff) 
                                                              & VL_EXTENDS_QI(35,17, 
                                                                              (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x10U) 
                                                                               | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                             (VL_ULL(0x7ffffffff) 
                                                              & VL_EXTENDS_QI(35,17, 
                                                                              (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x10U) 
                                                                               | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                                 + 
                                                 VL_EXTENDS_QQ(35,34, vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)) 
                                                >> 0x22U))))));
    }
}

void Vsoc_top::traceChgThis__102(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+12817,((1U & (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                      >> 1U) | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid))))));
    }
}

void Vsoc_top::traceChgThis__103(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+12825,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__debug_cause),3);
        vcdp->chgBit(c+12833,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__debug_csr_save));
    }
}

void Vsoc_top::traceChgThis__104(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgArray(c+12841,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_d_ex),68);
        vcdp->chgBit(c+12865,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ctrl_busy));
        vcdp->chgBus(c+12873,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry),3);
        vcdp->chgArray(c+12881,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d),68);
        vcdp->chgQuad(c+12905,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum),34);
        vcdp->chgBit(c+12921,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a));
        vcdp->chgBit(c+12929,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b));
        vcdp->chgQuad(c+12937,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d),34);
        vcdp->chgQuad(c+12953,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d),34);
        vcdp->chgBit(c+12969,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a));
        vcdp->chgBit(c+12977,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b));
        vcdp->chgBit(c+12985,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal));
        vcdp->chgBus(c+12993,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d),32);
        vcdp->chgBus(c+13001,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d),32);
        vcdp->chgBus(c+13009,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d),32);
        vcdp->chgBus(c+13017,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder),32);
        vcdp->chgQuad(c+13025,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient),33);
        vcdp->chgBus(c+13041,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d),5);
        vcdp->chgBit(c+13049,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d));
        vcdp->chgBus(c+13057,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d),3);
        vcdp->chgBus(c+13065,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d),2);
        vcdp->chgBit(c+13073,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_misaligned_access));
    }
}

void Vsoc_top::traceChgThis__105(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+13081,((1U & (vlTOPp->soc_top__DOT__ifu_to_xbar[2U] 
                                     >> 0x15U))));
        vcdp->chgBus(c+13089,((7U & (vlTOPp->soc_top__DOT__ifu_to_xbar[2U] 
                                     >> 0x12U))),3);
        vcdp->chgBus(c+13097,((7U & (vlTOPp->soc_top__DOT__ifu_to_xbar[2U] 
                                     >> 0xfU))),3);
        vcdp->chgBus(c+13105,((3U & (vlTOPp->soc_top__DOT__ifu_to_xbar[2U] 
                                     >> 0xdU))),2);
        vcdp->chgBus(c+13113,((0xffU & (vlTOPp->soc_top__DOT__ifu_to_xbar[2U] 
                                        >> 5U))),8);
        vcdp->chgBus(c+13121,(((vlTOPp->soc_top__DOT__ifu_to_xbar[2U] 
                                << 0x1bU) | (vlTOPp->soc_top__DOT__ifu_to_xbar[1U] 
                                             >> 5U))),32);
        vcdp->chgBus(c+13129,((0xfU & ((vlTOPp->soc_top__DOT__ifu_to_xbar[2U] 
                                        << 0x1fU) | 
                                       (vlTOPp->soc_top__DOT__ifu_to_xbar[1U] 
                                        >> 1U)))),4);
        vcdp->chgBus(c+13137,(((vlTOPp->soc_top__DOT__ifu_to_xbar[1U] 
                                << 0x1fU) | (vlTOPp->soc_top__DOT__ifu_to_xbar[0U] 
                                             >> 1U))),32);
        vcdp->chgBit(c+13145,((1U & vlTOPp->soc_top__DOT__ifu_to_xbar[0U])));
        vcdp->chgBit(c+13153,((1U & (IData)((vlTOPp->soc_top__DOT__xbar_to_ifu 
                                             >> 0x33U)))));
        vcdp->chgBus(c+13161,((7U & (IData)((vlTOPp->soc_top__DOT__xbar_to_ifu 
                                             >> 0x30U)))),3);
        vcdp->chgBus(c+13169,((7U & (IData)((vlTOPp->soc_top__DOT__xbar_to_ifu 
                                             >> 0x2dU)))),3);
        vcdp->chgBus(c+13177,((3U & (IData)((vlTOPp->soc_top__DOT__xbar_to_ifu 
                                             >> 0x2bU)))),2);
        vcdp->chgBus(c+13185,((0xffU & (IData)((vlTOPp->soc_top__DOT__xbar_to_ifu 
                                                >> 0x23U)))),8);
        vcdp->chgBit(c+13193,((1U & (IData)((vlTOPp->soc_top__DOT__xbar_to_ifu 
                                             >> 0x22U)))));
        vcdp->chgBus(c+13201,((IData)((vlTOPp->soc_top__DOT__xbar_to_ifu 
                                       >> 2U))),32);
        vcdp->chgBit(c+13209,((1U & (IData)((vlTOPp->soc_top__DOT__xbar_to_ifu 
                                             >> 1U)))));
        vcdp->chgBit(c+13217,((1U & (IData)(vlTOPp->soc_top__DOT__xbar_to_ifu))));
        vcdp->chgBit(c+13225,(vlTOPp->soc_top__DOT__u_top__DOT__instr_req));
        vcdp->chgBit(c+13233,((1U & (IData)(vlTOPp->soc_top__DOT__xbar_to_ifu))));
        vcdp->chgBit(c+13241,((1U & (IData)((vlTOPp->soc_top__DOT__xbar_to_ifu 
                                             >> 0x33U)))));
        vcdp->chgBus(c+13249,((0xfffffffcU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr)),32);
        vcdp->chgBus(c+13257,((IData)((vlTOPp->soc_top__DOT__xbar_to_ifu 
                                       >> 2U))),32);
        vcdp->chgBit(c+13265,((1U & (IData)((vlTOPp->soc_top__DOT__xbar_to_ifu 
                                             >> 1U)))));
        vcdp->chgBit(c+13273,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req));
        vcdp->chgBit(c+13281,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__csr_mtvec_init));
        vcdp->chgBus(c+13289,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n),32);
        vcdp->chgBit(c+13297,((1U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)));
        vcdp->chgBit(c+13305,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw));
        vcdp->chgBus(c+13313,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata),32);
        vcdp->chgBit(c+13321,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_err));
        vcdp->chgBus(c+13329,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed),32);
        vcdp->chgBit(c+13337,((3U != (3U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata))));
        vcdp->chgBit(c+13345,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn));
        vcdp->chgBit(c+13353,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw) 
                               & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_err)))));
        vcdp->chgBus(c+13361,((0xfffffffeU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)),32);
        vcdp->chgBit(c+13369,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
        vcdp->chgBit(c+13377,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                               & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)))));
        vcdp->chgBit(c+13385,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
        vcdp->chgBit(c+13393,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err));
        vcdp->chgBit(c+13401,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err));
        vcdp->chgBus(c+13409,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n),2);
        vcdp->chgBus(c+13417,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                ? (1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n) 
                                         >> 1U)) : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n))),2);
        vcdp->chgBus(c+13425,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n),2);
        vcdp->chgBus(c+13433,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                ? (1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n) 
                                         >> 1U)) : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n))),2);
        vcdp->chgBus(c+13441,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n),2);
        vcdp->chgBus(c+13449,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                ? (1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n) 
                                         >> 1U)) : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n))),2);
        vcdp->chgBus(c+13457,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr),32);
        vcdp->chgBit(c+13465,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err));
        vcdp->chgBit(c+13473,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid));
        vcdp->chgArray(c+13481,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d),96);
        vcdp->chgBus(c+13505,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d),3);
        vcdp->chgBus(c+13513,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed),3);
        vcdp->chgBus(c+13521,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata),32);
        vcdp->chgBit(c+13529,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
        vcdp->chgBit(c+13537,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
        vcdp->chgBit(c+13545,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
        vcdp->chgBit(c+13553,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed));
        vcdp->chgBit(c+13561,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two));
        vcdp->chgBit(c+13569,(vlTOPp->soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk2__DOT__source_d));
        vcdp->chgBit(c+13577,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_iccm_o[2U] 
                                     >> 0x15U))));
        vcdp->chgBus(c+13585,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_iccm_o[2U] 
                                     >> 0x12U))),3);
        vcdp->chgBus(c+13593,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_iccm_o[2U] 
                                     >> 0xfU))),3);
        vcdp->chgBus(c+13601,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_iccm_o[2U] 
                                     >> 0xdU))),2);
        vcdp->chgBus(c+13609,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_iccm_o[2U] 
                                        >> 5U))),8);
        vcdp->chgBus(c+13617,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_iccm_o[2U] 
                                << 0x1bU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_iccm_o[1U] 
                                             >> 5U))),32);
        vcdp->chgBus(c+13625,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_iccm_o[2U] 
                                        << 0x1fU) | 
                                       (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_iccm_o[1U] 
                                        >> 1U)))),4);
        vcdp->chgBus(c+13633,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_iccm_o[1U] 
                                << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_iccm_o[0U] 
                                             >> 1U))),32);
        vcdp->chgBit(c+13641,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_iccm_o[0U])));
    }
}

void Vsoc_top::traceChgThis__106(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+13649,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en),3);
    }
}

void Vsoc_top::traceChgThis__107(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+13657,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [1U][2U] >> 0x15U))));
        vcdp->chgBus(c+13665,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [1U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+13673,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [1U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+13681,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [1U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+13689,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [1U][2U] >> 5U))),8);
        vcdp->chgBus(c+13697,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [1U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [1U][1U] >> 5U))),32);
        vcdp->chgBus(c+13705,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [1U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+13713,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [1U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [1U][0U] >> 1U))),32);
        vcdp->chgBit(c+13721,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                               [1U][0U])));
        vcdp->chgBit(c+13729,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][2U] >> 0x15U))));
        vcdp->chgBus(c+13737,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+13745,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+13753,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+13761,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [9U][2U] >> 5U))),8);
        vcdp->chgBus(c+13769,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [9U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][1U] >> 5U))),32);
        vcdp->chgBus(c+13777,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [9U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+13785,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [9U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 1U))),32);
        vcdp->chgBit(c+13793,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                               [9U][0U])));
        vcdp->chgBit(c+13801,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [0U][2U] >> 0x15U))));
        vcdp->chgBus(c+13809,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [0U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+13817,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [0U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+13825,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [0U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+13833,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [0U][2U] >> 5U))),8);
        vcdp->chgBus(c+13841,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [0U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [0U][1U] >> 5U))),32);
        vcdp->chgBus(c+13849,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [0U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [0U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+13857,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [0U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [0U][0U] >> 1U))),32);
        vcdp->chgBit(c+13865,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                               [0U][0U])));
        vcdp->chgBit(c+13873,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [2U][2U] >> 0x15U))));
        vcdp->chgBus(c+13881,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [2U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+13889,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [2U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+13897,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [2U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+13905,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [2U][2U] >> 5U))),8);
        vcdp->chgBus(c+13913,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [2U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [2U][1U] >> 5U))),32);
        vcdp->chgBus(c+13921,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [2U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [2U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+13929,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [2U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [2U][0U] >> 1U))),32);
        vcdp->chgBit(c+13937,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                               [2U][0U])));
        vcdp->chgBit(c+13945,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [3U][2U] >> 0x15U))));
        vcdp->chgBus(c+13953,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [3U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+13961,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [3U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+13969,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [3U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+13977,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [3U][2U] >> 5U))),8);
        vcdp->chgBus(c+13985,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [3U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [3U][1U] >> 5U))),32);
        vcdp->chgBus(c+13993,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [3U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [3U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+14001,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [3U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [3U][0U] >> 1U))),32);
        vcdp->chgBit(c+14009,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                               [3U][0U])));
        vcdp->chgBit(c+14017,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [4U][2U] >> 0x15U))));
        vcdp->chgBus(c+14025,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [4U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+14033,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [4U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+14041,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [4U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+14049,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [4U][2U] >> 5U))),8);
        vcdp->chgBus(c+14057,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [4U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [4U][1U] >> 5U))),32);
        vcdp->chgBus(c+14065,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [4U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [4U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+14073,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [4U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [4U][0U] >> 1U))),32);
        vcdp->chgBit(c+14081,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                               [4U][0U])));
        vcdp->chgBit(c+14089,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [5U][2U] >> 0x15U))));
        vcdp->chgBus(c+14097,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [5U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+14105,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [5U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+14113,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [5U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+14121,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [5U][2U] >> 5U))),8);
        vcdp->chgBus(c+14129,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [5U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [5U][1U] >> 5U))),32);
        vcdp->chgBus(c+14137,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [5U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [5U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+14145,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [5U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [5U][0U] >> 1U))),32);
        vcdp->chgBit(c+14153,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                               [5U][0U])));
        vcdp->chgBit(c+14161,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [6U][2U] >> 0x15U))));
        vcdp->chgBus(c+14169,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [6U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+14177,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [6U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+14185,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [6U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+14193,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [6U][2U] >> 5U))),8);
        vcdp->chgBus(c+14201,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [6U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [6U][1U] >> 5U))),32);
        vcdp->chgBus(c+14209,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [6U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [6U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+14217,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [6U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [6U][0U] >> 1U))),32);
        vcdp->chgBit(c+14225,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                               [6U][0U])));
        vcdp->chgBit(c+14233,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [7U][2U] >> 0x15U))));
        vcdp->chgBus(c+14241,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [7U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+14249,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [7U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+14257,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [7U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+14265,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [7U][2U] >> 5U))),8);
        vcdp->chgBus(c+14273,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [7U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [7U][1U] >> 5U))),32);
        vcdp->chgBus(c+14281,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [7U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [7U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+14289,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [7U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [7U][0U] >> 1U))),32);
        vcdp->chgBit(c+14297,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                               [7U][0U])));
        vcdp->chgBit(c+14305,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [8U][2U] >> 0x15U))));
        vcdp->chgBus(c+14313,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [8U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+14321,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [8U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+14329,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [8U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+14337,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [8U][2U] >> 5U))),8);
        vcdp->chgBus(c+14345,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [8U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [8U][1U] >> 5U))),32);
        vcdp->chgBus(c+14353,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [8U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [8U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+14361,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [8U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [8U][0U] >> 1U))),32);
        vcdp->chgBit(c+14369,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                               [8U][0U])));
        vcdp->chgBit(c+14377,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [0U][2U] >> 0x15U))));
        vcdp->chgBus(c+14385,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [0U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+14393,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [0U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+14401,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [0U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+14409,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [0U][2U] >> 5U))),8);
        vcdp->chgBus(c+14417,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [0U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [0U][1U] >> 5U))),32);
        vcdp->chgBus(c+14425,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [0U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [0U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+14433,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [0U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [0U][0U] >> 1U))),32);
        vcdp->chgBit(c+14441,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                               [0U][0U])));
        vcdp->chgBit(c+14449,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [1U][2U] >> 0x15U))));
        vcdp->chgBus(c+14457,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [1U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+14465,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [1U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+14473,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [1U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+14481,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [1U][2U] >> 5U))),8);
        vcdp->chgBus(c+14489,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [1U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [1U][1U] >> 5U))),32);
        vcdp->chgBus(c+14497,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [1U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+14505,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [1U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [1U][0U] >> 1U))),32);
        vcdp->chgBit(c+14513,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                               [1U][0U])));
        vcdp->chgBit(c+14521,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [2U][2U] >> 0x15U))));
        vcdp->chgBus(c+14529,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [2U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+14537,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [2U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+14545,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [2U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+14553,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [2U][2U] >> 5U))),8);
        vcdp->chgBus(c+14561,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [2U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [2U][1U] >> 5U))),32);
        vcdp->chgBus(c+14569,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [2U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [2U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+14577,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [2U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [2U][0U] >> 1U))),32);
        vcdp->chgBit(c+14585,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                               [2U][0U])));
        vcdp->chgBit(c+14593,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [3U][2U] >> 0x15U))));
        vcdp->chgBus(c+14601,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [3U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+14609,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [3U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+14617,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [3U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+14625,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [3U][2U] >> 5U))),8);
        vcdp->chgBus(c+14633,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [3U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [3U][1U] >> 5U))),32);
        vcdp->chgBus(c+14641,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [3U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [3U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+14649,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [3U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [3U][0U] >> 1U))),32);
        vcdp->chgBit(c+14657,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                               [3U][0U])));
        vcdp->chgBit(c+14665,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [4U][2U] >> 0x15U))));
        vcdp->chgBus(c+14673,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [4U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+14681,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [4U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+14689,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [4U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+14697,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [4U][2U] >> 5U))),8);
        vcdp->chgBus(c+14705,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [4U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [4U][1U] >> 5U))),32);
        vcdp->chgBus(c+14713,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [4U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [4U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+14721,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [4U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [4U][0U] >> 1U))),32);
        vcdp->chgBit(c+14729,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                               [4U][0U])));
        vcdp->chgBit(c+14737,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [5U][2U] >> 0x15U))));
        vcdp->chgBus(c+14745,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [5U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+14753,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [5U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+14761,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [5U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+14769,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [5U][2U] >> 5U))),8);
        vcdp->chgBus(c+14777,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [5U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [5U][1U] >> 5U))),32);
        vcdp->chgBus(c+14785,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [5U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [5U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+14793,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [5U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [5U][0U] >> 1U))),32);
        vcdp->chgBit(c+14801,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                               [5U][0U])));
        vcdp->chgBit(c+14809,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [6U][2U] >> 0x15U))));
        vcdp->chgBus(c+14817,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [6U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+14825,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [6U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+14833,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [6U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+14841,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [6U][2U] >> 5U))),8);
        vcdp->chgBus(c+14849,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [6U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [6U][1U] >> 5U))),32);
        vcdp->chgBus(c+14857,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [6U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [6U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+14865,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [6U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [6U][0U] >> 1U))),32);
        vcdp->chgBit(c+14873,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                               [6U][0U])));
        vcdp->chgBit(c+14881,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [7U][2U] >> 0x15U))));
        vcdp->chgBus(c+14889,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [7U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+14897,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [7U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+14905,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [7U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+14913,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [7U][2U] >> 5U))),8);
        vcdp->chgBus(c+14921,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [7U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [7U][1U] >> 5U))),32);
        vcdp->chgBus(c+14929,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [7U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [7U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+14937,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [7U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [7U][0U] >> 1U))),32);
        vcdp->chgBit(c+14945,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                               [7U][0U])));
        vcdp->chgBit(c+14953,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [8U][2U] >> 0x15U))));
        vcdp->chgBus(c+14961,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [8U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+14969,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [8U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+14977,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [8U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+14985,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [8U][2U] >> 5U))),8);
        vcdp->chgBus(c+14993,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [8U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [8U][1U] >> 5U))),32);
        vcdp->chgBus(c+15001,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [8U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [8U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+15009,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [8U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [8U][0U] >> 1U))),32);
        vcdp->chgBit(c+15017,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                               [8U][0U])));
        vcdp->chgBit(c+15025,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][2U] >> 0x15U))));
        vcdp->chgBus(c+15033,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+15041,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+15049,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+15057,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [9U][2U] >> 5U))),8);
        vcdp->chgBus(c+15065,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [9U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][1U] >> 5U))),32);
        vcdp->chgBus(c+15073,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [9U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+15081,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [9U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 1U))),32);
        vcdp->chgBit(c+15089,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                               [9U][0U])));
        vcdp->chgBit(c+15097,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [0U][2U] >> 0x15U))));
        vcdp->chgBus(c+15105,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [0U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+15113,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [0U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+15121,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [0U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+15129,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                        [0U][2U] >> 5U))),8);
        vcdp->chgBus(c+15137,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                [0U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                  [0U][1U] >> 5U))),32);
        vcdp->chgBus(c+15145,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                        [0U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [0U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+15153,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                [0U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                  [0U][0U] >> 1U))),32);
        vcdp->chgBit(c+15161,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                               [0U][0U])));
        vcdp->chgBit(c+15169,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [1U][2U] >> 0x15U))));
        vcdp->chgBus(c+15177,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [1U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+15185,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [1U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+15193,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [1U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+15201,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                        [1U][2U] >> 5U))),8);
        vcdp->chgBus(c+15209,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                [1U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                  [1U][1U] >> 5U))),32);
        vcdp->chgBus(c+15217,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                        [1U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [1U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+15225,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                [1U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                  [1U][0U] >> 1U))),32);
        vcdp->chgBit(c+15233,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                               [1U][0U])));
        vcdp->chgBit(c+15241,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [2U][2U] >> 0x15U))));
        vcdp->chgBus(c+15249,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [2U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+15257,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [2U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+15265,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [2U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+15273,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                        [2U][2U] >> 5U))),8);
        vcdp->chgBus(c+15281,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                [2U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                  [2U][1U] >> 5U))),32);
        vcdp->chgBus(c+15289,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                        [2U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [2U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+15297,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                [2U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                  [2U][0U] >> 1U))),32);
        vcdp->chgBit(c+15305,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                               [2U][0U])));
        vcdp->chgBit(c+15313,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [3U][2U] >> 0x15U))));
        vcdp->chgBus(c+15321,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [3U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+15329,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [3U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+15337,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [3U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+15345,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                        [3U][2U] >> 5U))),8);
        vcdp->chgBus(c+15353,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                [3U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                  [3U][1U] >> 5U))),32);
        vcdp->chgBus(c+15361,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                        [3U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [3U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+15369,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                [3U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                  [3U][0U] >> 1U))),32);
        vcdp->chgBit(c+15377,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                               [3U][0U])));
        vcdp->chgBit(c+15385,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [4U][2U] >> 0x15U))));
        vcdp->chgBus(c+15393,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [4U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+15401,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [4U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+15409,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [4U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+15417,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                        [4U][2U] >> 5U))),8);
        vcdp->chgBus(c+15425,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                [4U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                  [4U][1U] >> 5U))),32);
        vcdp->chgBus(c+15433,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                        [4U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [4U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+15441,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                [4U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                  [4U][0U] >> 1U))),32);
        vcdp->chgBit(c+15449,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                               [4U][0U])));
        vcdp->chgBit(c+15457,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [5U][2U] >> 0x15U))));
        vcdp->chgBus(c+15465,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [5U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+15473,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [5U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+15481,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [5U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+15489,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                        [5U][2U] >> 5U))),8);
        vcdp->chgBus(c+15497,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                [5U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                  [5U][1U] >> 5U))),32);
        vcdp->chgBus(c+15505,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                        [5U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [5U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+15513,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                [5U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                  [5U][0U] >> 1U))),32);
        vcdp->chgBit(c+15521,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                               [5U][0U])));
        vcdp->chgBit(c+15529,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [6U][2U] >> 0x15U))));
        vcdp->chgBus(c+15537,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [6U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+15545,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [6U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+15553,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [6U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+15561,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                        [6U][2U] >> 5U))),8);
        vcdp->chgBus(c+15569,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                [6U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                  [6U][1U] >> 5U))),32);
        vcdp->chgBus(c+15577,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                        [6U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [6U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+15585,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                [6U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                  [6U][0U] >> 1U))),32);
        vcdp->chgBit(c+15593,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                               [6U][0U])));
        vcdp->chgBit(c+15601,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [7U][2U] >> 0x15U))));
        vcdp->chgBus(c+15609,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [7U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+15617,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [7U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+15625,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [7U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+15633,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                        [7U][2U] >> 5U))),8);
        vcdp->chgBus(c+15641,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                [7U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                  [7U][1U] >> 5U))),32);
        vcdp->chgBus(c+15649,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                        [7U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [7U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+15657,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                [7U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                  [7U][0U] >> 1U))),32);
        vcdp->chgBit(c+15665,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                               [7U][0U])));
        vcdp->chgBit(c+15673,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [8U][2U] >> 0x15U))));
        vcdp->chgBus(c+15681,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [8U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+15689,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [8U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+15697,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [8U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+15705,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                        [8U][2U] >> 5U))),8);
        vcdp->chgBus(c+15713,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                [8U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                  [8U][1U] >> 5U))),32);
        vcdp->chgBus(c+15721,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                        [8U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [8U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+15729,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                [8U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                  [8U][0U] >> 1U))),32);
        vcdp->chgBit(c+15737,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                               [8U][0U])));
        vcdp->chgBit(c+15745,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [9U][2U] >> 0x15U))));
        vcdp->chgBus(c+15753,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [9U][2U] >> 0x12U))),3);
        vcdp->chgBus(c+15761,((7U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [9U][2U] >> 0xfU))),3);
        vcdp->chgBus(c+15769,((3U & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                     [9U][2U] >> 0xdU))),2);
        vcdp->chgBus(c+15777,((0xffU & (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                        [9U][2U] >> 5U))),8);
        vcdp->chgBus(c+15785,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                [9U][2U] << 0x1bU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                  [9U][1U] >> 5U))),32);
        vcdp->chgBus(c+15793,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                        [9U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [9U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+15801,(((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                [9U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                  [9U][0U] >> 1U))),32);
        vcdp->chgBit(c+15809,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                               [9U][0U])));
        vcdp->chgBus(c+15817,((0x3cU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [1U][2U] << 0x1bU) 
                                        | (0x7fffffcU 
                                           & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][1U] 
                                              >> 5U))))),6);
        vcdp->chgBus(c+15825,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [1U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [1U][0U] >> 1U))),32);
        vcdp->chgBus(c+15833,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [1U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBus(c+15841,((0x3ffU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][0U] 
                                            >> 1U)))),10);
        vcdp->chgBus(c+15849,((0xfc00U | (0x3ffU & 
                                          ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][1U] 
                                            << 0x15U) 
                                           | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][0U] 
                                              >> 0xbU))))),16);
        vcdp->chgBus(c+15857,((0xffffU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [1U][1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [1U][0U] 
                                             >> 1U)))),16);
        vcdp->chgBus(c+15865,((0xffffU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [1U][1U] 
                                           << 0xfU) 
                                          | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [1U][0U] 
                                             >> 0x11U)))),16);
        vcdp->chgBit(c+15873,((((0U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][2U] 
                                              >> 0x12U))) 
                                | (1U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][2U] 
                                                >> 0x12U)))) 
                               | (4U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0x12U))))));
        vcdp->chgBit(c+15881,((0U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][2U] 
                                            >> 0x12U)))));
        vcdp->chgBit(c+15889,((1U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][2U] 
                                            >> 0x12U)))));
        vcdp->chgBit(c+15897,((4U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][2U] 
                                            >> 0x12U)))));
        vcdp->chgBus(c+15905,((0xfU & ((IData)(1U) 
                                       << (3U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][2U] 
                                                  << 0x1bU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][1U] 
                                                    >> 5U)))))),4);
        vcdp->chgBus(c+15913,((0x3ffU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][0U] 
                                            >> 1U)))),16);
        vcdp->chgBus(c+15921,((0x1fcU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (0x7fffffcU 
                                            & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][1U] 
                                               >> 5U))))),9);
        vcdp->chgBus(c+15929,(((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [9U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 1U))),32);
        vcdp->chgBus(c+15937,((0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [9U][2U] << 0x1fU) 
                                       | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          >> 1U)))),4);
        vcdp->chgBit(c+15945,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 1U))));
        vcdp->chgBit(c+15953,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 2U))));
        vcdp->chgBit(c+15961,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 3U))));
        vcdp->chgBit(c+15969,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 4U))));
        vcdp->chgBit(c+15977,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 5U))));
        vcdp->chgBit(c+15985,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 6U))));
        vcdp->chgBit(c+15993,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 7U))));
        vcdp->chgBit(c+16001,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 8U))));
        vcdp->chgBit(c+16009,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 9U))));
        vcdp->chgBit(c+16017,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 0xaU))));
        vcdp->chgBit(c+16025,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 0xbU))));
        vcdp->chgBit(c+16033,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 0xcU))));
        vcdp->chgBit(c+16041,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 0xdU))));
        vcdp->chgBit(c+16049,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 0xeU))));
        vcdp->chgBit(c+16057,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 0xfU))));
        vcdp->chgBit(c+16065,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 0x10U))));
        vcdp->chgBit(c+16073,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 0x11U))));
        vcdp->chgBit(c+16081,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 0x12U))));
        vcdp->chgBit(c+16089,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 0x13U))));
        vcdp->chgBit(c+16097,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 0x14U))));
        vcdp->chgBit(c+16105,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 0x15U))));
        vcdp->chgBit(c+16113,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 0x16U))));
        vcdp->chgBit(c+16121,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 0x17U))));
        vcdp->chgBit(c+16129,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 0x18U))));
        vcdp->chgBit(c+16137,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 0x19U))));
        vcdp->chgBit(c+16145,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 0x1aU))));
        vcdp->chgBit(c+16153,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 0x1bU))));
        vcdp->chgBit(c+16161,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 0x1cU))));
        vcdp->chgBit(c+16169,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 0x1dU))));
        vcdp->chgBit(c+16177,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 0x1eU))));
        vcdp->chgBit(c+16185,((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][0U] >> 0x1fU))));
        vcdp->chgBit(c+16193,((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                               [9U][1U])));
        vcdp->chgBus(c+16201,((7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [9U][1U] << 0x1fU) 
                                     | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [9U][0U] >> 1U)))),3);
        vcdp->chgBus(c+16209,((0x3fU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [9U][1U] << 0x1fU) 
                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [9U][0U] 
                                           >> 1U)))),6);
        vcdp->chgBit(c+16217,((((0U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [9U][2U] 
                                              >> 0x12U))) 
                                | (1U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][2U] 
                                                >> 0x12U)))) 
                               | (4U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0x12U))))));
        vcdp->chgBit(c+16225,((0U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][2U] 
                                            >> 0x12U)))));
        vcdp->chgBit(c+16233,((1U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][2U] 
                                            >> 0x12U)))));
        vcdp->chgBit(c+16241,((4U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][2U] 
                                            >> 0x12U)))));
        vcdp->chgBus(c+16249,((0xfU & ((IData)(1U) 
                                       << (3U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][2U] 
                                                  << 0x1bU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    >> 5U)))))),4);
    }
}

void Vsoc_top::traceChgThis__108(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+16257,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                               & (0U != (3U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][2U] 
                                                << 0x1bU) 
                                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][1U] 
                                                  >> 5U)))))));
        vcdp->chgBit(c+16265,((1U & (~ ((((0U == (7U 
                                                  & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [9U][2U] 
                                                     >> 0x12U))) 
                                          | (1U == 
                                             (7U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0x12U)))) 
                                         | (4U == (7U 
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
        vcdp->chgBit(c+16273,((((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                               & (((4U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [9U][2U] 
                                                 >> 0x12U))) 
                                   | (1U == (7U & (
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [9U][2U] 
                                                   >> 0x12U)))) 
                                  | (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))));
    }
}

void Vsoc_top::traceChgThis__109(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+16281,(((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                               & (0U != (3U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][2U] 
                                                << 0x1bU) 
                                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][1U] 
                                                  >> 5U)))))));
        vcdp->chgBit(c+16289,((1U & (~ ((((0U == (7U 
                                                  & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [1U][2U] 
                                                     >> 0x12U))) 
                                          | (1U == 
                                             (7U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0x12U)))) 
                                         | (4U == (7U 
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
        vcdp->chgBit(c+16297,((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                               & (((4U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [1U][2U] 
                                                 >> 0x12U))) 
                                   | (1U == (7U & (
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][2U] 
                                                   >> 0x12U)))) 
                                  | (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))));
    }
}

void Vsoc_top::traceChgThis__110(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+16305,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x1dU))));
        vcdp->chgBit(c+16313,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x1eU))));
        vcdp->chgBit(c+16321,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x1fU))));
        vcdp->chgBit(c+16329,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we) 
                               & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                               [9U][1U])));
        vcdp->chgBus(c+16337,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio0_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16345,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio4_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16353,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio5_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16361,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio11_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16369,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio12_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16377,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio13_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16385,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio14_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16393,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio15_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16401,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio20_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16409,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio21_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16417,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio22_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16425,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio23_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16433,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio24_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16441,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio25_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16449,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio26_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBit(c+16457,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 6U))));
        vcdp->chgBit(c+16465,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 7U))));
        vcdp->chgBit(c+16473,((1U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we)
                                      ? (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [9U][0U] >> 8U)
                                      : (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__d)))));
        vcdp->chgBit(c+16481,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 9U))));
        vcdp->chgBit(c+16489,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0xaU))));
        vcdp->chgBit(c+16497,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0xbU))));
        vcdp->chgBit(c+16505,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0xcU))));
        vcdp->chgBit(c+16513,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x16U))));
        vcdp->chgBit(c+16521,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x17U))));
        vcdp->chgBit(c+16529,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x1cU))));
        vcdp->chgBit(c+16537,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x1dU))));
        vcdp->chgBit(c+16545,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x1eU))));
        vcdp->chgBit(c+16553,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x1fU))));
    }
}

void Vsoc_top::traceChgThis__111(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+16561,(((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we)
                                ? ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                    [1U][1U] << 0x1fU) 
                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [1U][0U] >> 1U))
                                : 0U)),32);
        vcdp->chgBus(c+16569,(((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we)
                                ? ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                    [1U][1U] << 0x1fU) 
                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [1U][0U] >> 1U))
                                : 0U)),32);
        vcdp->chgBus(c+16577,(((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we)
                                ? ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                    [1U][1U] << 0x1fU) 
                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [1U][0U] >> 1U))
                                : 0U)),32);
        vcdp->chgBus(c+16585,(((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we)
                                ? ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                    [1U][1U] << 0x1fU) 
                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [1U][0U] >> 1U))
                                : 0U)),32);
        vcdp->chgBus(c+16593,(((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we)
                                ? ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                    [1U][1U] << 0x1fU) 
                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [1U][0U] >> 1U))
                                : 0U)),32);
        vcdp->chgBus(c+16601,(((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__ctrl_en_input_filter_we)
                                ? ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                    [1U][1U] << 0x1fU) 
                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [1U][0U] >> 1U))
                                : 0U)),32);
    }
}

void Vsoc_top::traceChgThis__112(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+16609,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 3U))));
        vcdp->chgBit(c+16617,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 4U))));
        vcdp->chgBit(c+16625,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 5U))));
        vcdp->chgBit(c+16633,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 6U))));
        vcdp->chgBit(c+16641,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 7U))));
        vcdp->chgBit(c+16649,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 8U))));
        vcdp->chgBit(c+16657,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 9U))));
        vcdp->chgBit(c+16665,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0xaU))));
        vcdp->chgBit(c+16673,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0xbU))));
        vcdp->chgBit(c+16681,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0xcU))));
        vcdp->chgBit(c+16689,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0xdU))));
        vcdp->chgBit(c+16697,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0xeU))));
        vcdp->chgBit(c+16705,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0xfU))));
        vcdp->chgBit(c+16713,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x10U))));
        vcdp->chgBit(c+16721,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x11U))));
        vcdp->chgBit(c+16729,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x12U))));
        vcdp->chgBit(c+16737,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x15U))));
        vcdp->chgBit(c+16745,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x16U))));
        vcdp->chgBit(c+16753,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x17U))));
        vcdp->chgBit(c+16761,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x18U))));
        vcdp->chgBit(c+16769,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x19U))));
        vcdp->chgBit(c+16777,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x1aU))));
        vcdp->chgBit(c+16785,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x1bU))));
        vcdp->chgBit(c+16793,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x1cU))));
        vcdp->chgBus(c+16801,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio1_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16809,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio2_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16817,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio3_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16825,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio6_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16833,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio8_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16841,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio9_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16849,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio10_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16857,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio16_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16865,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio17_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16873,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio18_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16881,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio19_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16889,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio27_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16897,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio28_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16905,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio29_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16913,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio30_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBus(c+16921,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio31_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBit(c+16929,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 2U))));
        vcdp->chgBit(c+16937,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 3U))));
        vcdp->chgBit(c+16945,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 4U))));
        vcdp->chgBit(c+16953,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 5U))));
        vcdp->chgBit(c+16961,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0xdU))));
        vcdp->chgBit(c+16969,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0xeU))));
        vcdp->chgBit(c+16977,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0xfU))));
        vcdp->chgBit(c+16985,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x10U))));
        vcdp->chgBit(c+16993,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x11U))));
        vcdp->chgBit(c+17001,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x12U))));
        vcdp->chgBit(c+17009,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x13U))));
        vcdp->chgBit(c+17017,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x14U))));
        vcdp->chgBit(c+17025,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x18U))));
        vcdp->chgBit(c+17033,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x19U))));
        vcdp->chgBit(c+17041,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x1aU))));
        vcdp->chgBit(c+17049,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x1bU))));
        vcdp->chgBit(c+17057,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we) 
                               & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                               [9U][1U])));
        vcdp->chgBus(c+17065,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we)
                                ? (7U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U)))
                                : 0U)),3);
        vcdp->chgBit(c+17073,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 1U))));
    }
}

void Vsoc_top::traceChgThis__113(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+17081,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 1U))));
        vcdp->chgBit(c+17089,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 2U))));
        vcdp->chgBit(c+17097,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x13U))));
        vcdp->chgBit(c+17105,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x14U))));
        vcdp->chgBit(c+17113,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 1U))));
        vcdp->chgBit(c+17121,(((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we) 
                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [9U][0U] >> 0x15U))));
    }
}

void Vsoc_top::traceChgThis__114(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+17129,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit),38);
    }
}

void Vsoc_top::traceChgThis__115(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+17145,((((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re) 
                                | (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                               & (~ (IData)((0U != vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit))))));
        vcdp->chgBit(c+17153,(((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                        >> 0x24U)) 
                               & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re))));
    }
}

void Vsoc_top::traceChgThis__116(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+17161,(((((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re) 
                                 | (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                & (~ (IData)((0U != vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit)))) 
                               | (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err))));
        vcdp->chgBit(c+17169,((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                         >> 9U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                               & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)))));
        vcdp->chgBit(c+17177,((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                         >> 0x24U)) 
                                & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                               & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)))));
    }
}

void Vsoc_top::traceChgThis__117(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+17185,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we));
        vcdp->chgBit(c+17193,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re));
        vcdp->chgBit(c+17201,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
        vcdp->chgBit(c+17209,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
        vcdp->chgBit(c+17217,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
        vcdp->chgBit(c+17225,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
        vcdp->chgBit(c+17233,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk));
        vcdp->chgBit(c+17241,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk));
        vcdp->chgBit(c+17249,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk));
    }
}

void Vsoc_top::traceChgThis__118(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+17257,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                             >> 0x33U)))));
        vcdp->chgBus(c+17265,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                             >> 0x30U)))),3);
        vcdp->chgBus(c+17273,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                             >> 0x2dU)))),3);
        vcdp->chgBus(c+17281,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                             >> 0x2bU)))),2);
        vcdp->chgBus(c+17289,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                >> 0x23U)))),8);
        vcdp->chgBit(c+17297,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                             >> 0x22U)))));
        vcdp->chgBus(c+17305,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                       >> 2U))),32);
        vcdp->chgBit(c+17313,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                             >> 1U)))));
        vcdp->chgBit(c+17321,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h))));
        vcdp->chgBit(c+17329,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h))));
        vcdp->chgBit(c+17337,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                             >> 0x33U)))));
        vcdp->chgBus(c+17345,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                       >> 2U))),32);
        vcdp->chgBit(c+17353,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                             >> 1U)))));
        vcdp->chgBit(c+17361,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__lsu_load_err));
        vcdp->chgBit(c+17369,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__lsu_store_err));
        vcdp->chgBit(c+17377,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__csr_op_en));
        vcdp->chgBit(c+17385,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__lsu_resp_valid));
        vcdp->chgBit(c+17393,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__lsu_load_err) 
                               | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__lsu_store_err))));
        vcdp->chgBit(c+17401,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done));
        vcdp->chgBit(c+17409,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__perf_instr_ret_wb));
        vcdp->chgBit(c+17417,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv));
        vcdp->chgBit(c+17425,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_branch));
        vcdp->chgBit(c+17433,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_jump));
        vcdp->chgBit(c+17441,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_id));
        vcdp->chgBit(c+17449,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multicycle_done));
        vcdp->chgBit(c+17457,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_d));
        vcdp->chgBit(c+17465,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__lsu_store_err) 
                               | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__lsu_load_err))));
        vcdp->chgBit(c+17473,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_or_pmp_err));
        vcdp->chgBit(c+17481,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int));
        vcdp->chgBit(c+17489,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                             >> 0x33U)))));
        vcdp->chgBus(c+17497,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                             >> 0x30U)))),3);
        vcdp->chgBus(c+17505,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                             >> 0x2dU)))),3);
        vcdp->chgBus(c+17513,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                             >> 0x2bU)))),2);
        vcdp->chgBus(c+17521,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                >> 0x23U)))),8);
        vcdp->chgBit(c+17529,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                             >> 0x22U)))));
        vcdp->chgBus(c+17537,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                       >> 2U))),32);
        vcdp->chgBit(c+17545,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                             >> 1U)))));
        vcdp->chgBit(c+17553,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i))));
        vcdp->chgBit(c+17561,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__accept_t_req));
        vcdp->chgBit(c+17569,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__accept_t_rsp));
        vcdp->chgBit(c+17577,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                             >> 0x33U)))));
        vcdp->chgBus(c+17585,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                             >> 0x30U)))),3);
        vcdp->chgBus(c+17593,((7U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                             >> 0x2dU)))),3);
        vcdp->chgBus(c+17601,((3U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                             >> 0x2bU)))),2);
        vcdp->chgBus(c+17609,((0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                >> 0x23U)))),8);
        vcdp->chgBit(c+17617,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                             >> 0x22U)))));
        vcdp->chgBus(c+17625,((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                       >> 2U))),32);
        vcdp->chgBit(c+17633,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                             >> 1U)))));
        vcdp->chgBit(c+17641,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p))));
        vcdp->chgBit(c+17649,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hfifo_reqready));
        vcdp->chgBit(c+17657,((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i))));
        vcdp->chgBit(c+17665,((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                             >> 0x33U)))));
        vcdp->chgQuad(c+17673,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(
                                                            (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                             >> 0x22U))))) 
                                 << 0x22U) | (((QData)((IData)(
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
}

void Vsoc_top::traceChgThis__119(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+17689,(((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                << 0x15U) | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                             >> 0xbU))),32);
        vcdp->chgBus(c+17697,(((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                << 0x15U) | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                             >> 0xbU))),32);
        vcdp->chgBus(c+17705,(((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                << 0x15U) | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                             >> 0xbU))),32);
        vcdp->chgBit(c+17713,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                     >> 0xaU))));
        vcdp->chgBus(c+17721,(((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                << 0x16U) | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                             >> 0xaU))),32);
        vcdp->chgBit(c+17729,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                     >> 9U))));
        vcdp->chgBus(c+17737,((0xffffU & ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                           << 7U) | 
                                          (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                           >> 0x19U)))),16);
        vcdp->chgBit(c+17745,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                     >> 0x18U))));
        vcdp->chgBus(c+17753,((0xffffU & ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                           << 0x18U) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                             >> 8U)))),16);
        vcdp->chgBit(c+17761,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                     >> 7U))));
        vcdp->chgBus(c+17769,((0xffffU & ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                           << 9U) | 
                                          (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                           >> 0x17U)))),16);
        vcdp->chgBit(c+17777,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                     >> 0x16U))));
        vcdp->chgBus(c+17785,((0xffffU & ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                           << 0x1aU) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                             >> 6U)))),16);
        vcdp->chgBit(c+17793,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                     >> 5U))));
        vcdp->chgBus(c+17801,(((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                << 0x1bU) | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                             >> 5U))),32);
        vcdp->chgBit(c+17809,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                     >> 4U))));
        vcdp->chgBus(c+17817,((0xffffU & ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                           << 0xcU) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                             >> 0x14U)))),16);
        vcdp->chgBit(c+17825,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                     >> 0x13U))));
        vcdp->chgBus(c+17833,((0xffffU & ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                           << 0x1dU) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                             >> 3U)))),16);
        vcdp->chgBit(c+17841,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                     >> 2U))));
        vcdp->chgBus(c+17849,((0xffffU & ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                           << 0xeU) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                             >> 0x12U)))),16);
        vcdp->chgBit(c+17857,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                     >> 0x11U))));
        vcdp->chgBus(c+17865,((0xffffU & ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                           << 0x1fU) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                             >> 1U)))),16);
        vcdp->chgBit(c+17873,((1U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[5U])));
        vcdp->chgBus(c+17881,(vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[4U]),32);
        vcdp->chgBus(c+17889,(vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[3U]),32);
        vcdp->chgBus(c+17897,(vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[2U]),32);
        vcdp->chgBus(c+17905,(vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[1U]),32);
        vcdp->chgBus(c+17913,(vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U]),32);
        vcdp->chgBus(c+17921,(((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                << 0x15U) | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                             >> 0xbU))),32);
        vcdp->chgBus(c+17929,(((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                << 0x15U) | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                             >> 0xbU))),32);
        vcdp->chgBit(c+17937,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                     >> 0xaU))));
        vcdp->chgBus(c+17945,(((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                << 0x15U) | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                             >> 0xbU))),32);
        vcdp->chgBit(c+17953,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we));
        vcdp->chgBit(c+17961,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re));
        vcdp->chgBit(c+17969,(((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re) 
                                 | (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                & (~ (IData)((0U != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))))) 
                               | (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))));
        vcdp->chgBit(c+17977,((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re) 
                                | (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                               & (~ (IData)((0U != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)))))));
        vcdp->chgBit(c+17985,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err));
        vcdp->chgBit(c+17993,(((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                 >> 2U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                               & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
        vcdp->chgBit(c+18001,(((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                 >> 4U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                               & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
        vcdp->chgBit(c+18009,((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                >> 4U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
        vcdp->chgBit(c+18017,(((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                 >> 5U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                               & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
        vcdp->chgBit(c+18025,((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                >> 5U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
        vcdp->chgBit(c+18033,(((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                 >> 6U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                               & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
        vcdp->chgBit(c+18041,((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                >> 6U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
        vcdp->chgBit(c+18049,(((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                 >> 7U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                               & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
        vcdp->chgBit(c+18057,((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                >> 7U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
        vcdp->chgBit(c+18065,(((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                 >> 8U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                               & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
        vcdp->chgBit(c+18073,((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                >> 8U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
        vcdp->chgBit(c+18081,(((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                 >> 9U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                               & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
        vcdp->chgBit(c+18089,((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                >> 9U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
        vcdp->chgBus(c+18097,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit),15);
        vcdp->chgBit(c+18105,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
        vcdp->chgBit(c+18113,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
        vcdp->chgBit(c+18121,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
        vcdp->chgBit(c+18129,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
        vcdp->chgBit(c+18137,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk));
        vcdp->chgBit(c+18145,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk));
        vcdp->chgBit(c+18153,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk));
        vcdp->chgBit(c+18161,((1U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])));
        vcdp->chgBit(c+18169,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 1U))));
        vcdp->chgBit(c+18177,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 2U))));
        vcdp->chgBit(c+18185,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 3U))));
        vcdp->chgBit(c+18193,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 4U))));
        vcdp->chgBit(c+18201,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 5U))));
        vcdp->chgBit(c+18209,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 6U))));
        vcdp->chgBit(c+18217,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 7U))));
        vcdp->chgBit(c+18225,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 8U))));
        vcdp->chgBit(c+18233,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 9U))));
        vcdp->chgBit(c+18241,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 0xaU))));
        vcdp->chgBit(c+18249,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 0xbU))));
        vcdp->chgBit(c+18257,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 0xcU))));
        vcdp->chgBit(c+18265,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 0xdU))));
        vcdp->chgBit(c+18273,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 0xeU))));
        vcdp->chgBit(c+18281,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 0xfU))));
        vcdp->chgBit(c+18289,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 0x10U))));
        vcdp->chgBit(c+18297,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 0x11U))));
        vcdp->chgBit(c+18305,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 0x12U))));
        vcdp->chgBit(c+18313,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 0x13U))));
        vcdp->chgBit(c+18321,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 0x14U))));
        vcdp->chgBit(c+18329,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 0x15U))));
        vcdp->chgBit(c+18337,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 0x16U))));
        vcdp->chgBit(c+18345,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 0x17U))));
        vcdp->chgBit(c+18353,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 0x18U))));
        vcdp->chgBit(c+18361,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 0x19U))));
        vcdp->chgBit(c+18369,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 0x1aU))));
        vcdp->chgBit(c+18377,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 0x1bU))));
        vcdp->chgBit(c+18385,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 0x1cU))));
        vcdp->chgBit(c+18393,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 0x1dU))));
        vcdp->chgBit(c+18401,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 0x1eU))));
        vcdp->chgBit(c+18409,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                     >> 0x1fU))));
    }
}

void Vsoc_top::traceChgThis__120(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+18417,((((~ vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_q) 
                                & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
                               & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[4U])),32);
        vcdp->chgBus(c+18425,(((vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_q 
                                & (~ vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d)) 
                               & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[3U])),32);
        vcdp->chgBus(c+18433,(((((((~ vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_q) 
                                   & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
                                  & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[4U]) 
                                 | ((vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_q 
                                     & (~ vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d)) 
                                    & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[3U])) 
                                | ((~ vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
                                   & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[1U])) 
                               | (vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d 
                                  & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[2U]))),32);
    }
}

void Vsoc_top::traceChgThis__121(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+18441,(((~ vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
                               & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[1U])),32);
        vcdp->chgBus(c+18449,((vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d 
                               & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[2U])),32);
        vcdp->chgBus(c+18457,((vlTOPp->soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event 
                               | ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                   << 0x15U) | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                                >> 0xbU)))),32);
    }
}

void Vsoc_top::traceChgThis__122(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+18465,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err));
    }
}

void Vsoc_top::traceChgThis__123(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+18473,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[0]),3);
        vcdp->chgBus(c+18474,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[1]),3);
        vcdp->chgBus(c+18475,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[2]),3);
        vcdp->chgBus(c+18476,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[3]),3);
        vcdp->chgBus(c+18477,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[4]),3);
        vcdp->chgBus(c+18478,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[5]),3);
        vcdp->chgBus(c+18479,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[6]),3);
        vcdp->chgBus(c+18480,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[7]),3);
        vcdp->chgBus(c+18481,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[8]),3);
        vcdp->chgBus(c+18482,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[9]),3);
        vcdp->chgBus(c+18483,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[10]),3);
        vcdp->chgBus(c+18484,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[11]),3);
        vcdp->chgBus(c+18485,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[12]),3);
        vcdp->chgBus(c+18486,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[13]),3);
        vcdp->chgBus(c+18487,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[14]),3);
        vcdp->chgBus(c+18488,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[15]),3);
        vcdp->chgBus(c+18489,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[16]),3);
        vcdp->chgBus(c+18490,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[17]),3);
        vcdp->chgBus(c+18491,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[18]),3);
        vcdp->chgBus(c+18492,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[19]),3);
        vcdp->chgBus(c+18493,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[20]),3);
        vcdp->chgBus(c+18494,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[21]),3);
        vcdp->chgBus(c+18495,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[22]),3);
        vcdp->chgBus(c+18496,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[23]),3);
        vcdp->chgBus(c+18497,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[24]),3);
        vcdp->chgBus(c+18498,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[25]),3);
        vcdp->chgBus(c+18499,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[26]),3);
        vcdp->chgBus(c+18500,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[27]),3);
        vcdp->chgBus(c+18501,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[28]),3);
        vcdp->chgBus(c+18502,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[29]),3);
        vcdp->chgBus(c+18503,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[30]),3);
        vcdp->chgBus(c+18504,(vlTOPp->soc_top__DOT__intr_controller__DOT__prio[31]),3);
        vcdp->chgBus(c+18729,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0]),3);
        vcdp->chgBus(c+18730,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[1]),3);
        vcdp->chgBus(c+18731,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[2]),3);
        vcdp->chgBus(c+18732,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[3]),3);
        vcdp->chgBus(c+18733,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[4]),3);
        vcdp->chgBus(c+18734,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[5]),3);
        vcdp->chgBus(c+18735,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[6]),3);
        vcdp->chgBus(c+18736,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[7]),3);
        vcdp->chgBus(c+18737,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[8]),3);
        vcdp->chgBus(c+18738,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[9]),3);
        vcdp->chgBus(c+18739,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[10]),3);
        vcdp->chgBus(c+18740,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[11]),3);
        vcdp->chgBus(c+18741,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[12]),3);
        vcdp->chgBus(c+18742,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[13]),3);
        vcdp->chgBus(c+18743,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[14]),3);
        vcdp->chgBus(c+18744,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[15]),3);
        vcdp->chgBus(c+18745,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[16]),3);
        vcdp->chgBus(c+18746,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[17]),3);
        vcdp->chgBus(c+18747,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[18]),3);
        vcdp->chgBus(c+18748,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[19]),3);
        vcdp->chgBus(c+18749,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[20]),3);
        vcdp->chgBus(c+18750,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[21]),3);
        vcdp->chgBus(c+18751,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[22]),3);
        vcdp->chgBus(c+18752,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[23]),3);
        vcdp->chgBus(c+18753,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[24]),3);
        vcdp->chgBus(c+18754,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[25]),3);
        vcdp->chgBus(c+18755,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[26]),3);
        vcdp->chgBus(c+18756,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[27]),3);
        vcdp->chgBus(c+18757,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[28]),3);
        vcdp->chgBus(c+18758,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[29]),3);
        vcdp->chgBus(c+18759,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[30]),3);
        vcdp->chgBus(c+18760,(vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[31]),3);
    }
}

void Vsoc_top::traceChgThis__124(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+18985,((((7U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
                                > vlTOPp->soc_top__DOT__intr_controller__DOT__threshold
                                [0U]) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))));
    }
}

void Vsoc_top::traceChgThis__125(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+18993,((7U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U])),3);
        vcdp->chgBus(c+19001,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                      << 0x1dU) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                   >> 3U)))),3);
        vcdp->chgBus(c+19009,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                      << 0x1aU) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                   >> 6U)))),3);
        vcdp->chgBus(c+19017,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                      << 0x17U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                   >> 9U)))),3);
        vcdp->chgBus(c+19025,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                      << 0x14U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                   >> 0xcU)))),3);
        vcdp->chgBus(c+19033,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                      << 0x11U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                   >> 0xfU)))),3);
        vcdp->chgBus(c+19041,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                      << 0xeU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x12U)))),3);
        vcdp->chgBus(c+19049,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                      << 0xbU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x15U)))),3);
        vcdp->chgBus(c+19057,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                      << 8U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                >> 0x18U)))),3);
        vcdp->chgBus(c+19065,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                      << 5U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                >> 0x1bU)))),3);
        vcdp->chgBus(c+19073,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                      << 2U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                >> 0x1eU)))),3);
        vcdp->chgBus(c+19081,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                      << 0x1fU) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                   >> 1U)))),3);
        vcdp->chgBus(c+19089,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                      << 0x1cU) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                   >> 4U)))),3);
        vcdp->chgBus(c+19097,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                      << 0x19U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                   >> 7U)))),3);
        vcdp->chgBus(c+19105,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                      << 0x16U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                   >> 0xaU)))),3);
        vcdp->chgBus(c+19113,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                      << 0x13U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                   >> 0xdU)))),3);
        vcdp->chgBus(c+19121,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                      << 0x10U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                   >> 0x10U)))),3);
        vcdp->chgBus(c+19129,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                      << 0xdU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x13U)))),3);
        vcdp->chgBus(c+19137,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                      << 0xaU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x16U)))),3);
        vcdp->chgBus(c+19145,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                      << 7U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                >> 0x19U)))),3);
        vcdp->chgBus(c+19153,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                      << 4U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                >> 0x1cU)))),3);
        vcdp->chgBus(c+19161,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                      << 1U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                >> 0x1fU)))),3);
        vcdp->chgBus(c+19169,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                      << 0x1eU) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                   >> 2U)))),3);
        vcdp->chgBus(c+19177,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                      << 0x1bU) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                   >> 5U)))),3);
        vcdp->chgBus(c+19185,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                      << 0x18U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                   >> 8U)))),3);
        vcdp->chgBus(c+19193,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                      << 0x15U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                   >> 0xbU)))),3);
        vcdp->chgBus(c+19201,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                      << 0x12U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                   >> 0xeU)))),3);
        vcdp->chgBus(c+19209,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                      << 0xfU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x11U)))),3);
        vcdp->chgBus(c+19217,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                      << 0xcU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x14U)))),3);
        vcdp->chgBus(c+19225,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                      << 9U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                >> 0x17U)))),3);
        vcdp->chgBus(c+19233,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                      << 6U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                >> 0x1aU)))),3);
        vcdp->chgBus(c+19241,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                      << 3U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                >> 0x1dU)))),3);
        vcdp->chgBus(c+19249,((7U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U])),3);
        vcdp->chgBus(c+19257,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                      << 0x1dU) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                   >> 3U)))),3);
        vcdp->chgBus(c+19265,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                      << 0x1aU) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                   >> 6U)))),3);
        vcdp->chgBus(c+19273,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                      << 0x17U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                   >> 9U)))),3);
        vcdp->chgBus(c+19281,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                      << 0x14U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                   >> 0xcU)))),3);
        vcdp->chgBus(c+19289,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                      << 0x11U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                   >> 0xfU)))),3);
        vcdp->chgBus(c+19297,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                      << 0xeU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x12U)))),3);
        vcdp->chgBus(c+19305,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                      << 0xbU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x15U)))),3);
        vcdp->chgBus(c+19313,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                      << 8U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                >> 0x18U)))),3);
        vcdp->chgBus(c+19321,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                      << 5U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                >> 0x1bU)))),3);
        vcdp->chgBus(c+19329,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                      << 2U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                >> 0x1eU)))),3);
        vcdp->chgBus(c+19337,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                      << 0x1fU) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                   >> 1U)))),3);
        vcdp->chgBus(c+19345,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                      << 0x1cU) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                   >> 4U)))),3);
        vcdp->chgBus(c+19353,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                      << 0x19U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                   >> 7U)))),3);
        vcdp->chgBus(c+19361,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                      << 0x16U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                   >> 0xaU)))),3);
        vcdp->chgBus(c+19369,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                      << 0x13U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                   >> 0xdU)))),3);
        vcdp->chgBus(c+19377,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                      << 0x10U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                   >> 0x10U)))),3);
        vcdp->chgBus(c+19385,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                      << 0xdU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x13U)))),3);
        vcdp->chgBus(c+19393,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                      << 0xaU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x16U)))),3);
        vcdp->chgBus(c+19401,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                      << 7U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                >> 0x19U)))),3);
        vcdp->chgBus(c+19409,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                      << 4U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                >> 0x1cU)))),3);
        vcdp->chgBus(c+19417,((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                      << 1U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                >> 0x1fU)))),3);
        vcdp->chgBus(c+19425,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                     >> 2U))),3);
        vcdp->chgBus(c+19433,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                     >> 5U))),3);
        vcdp->chgBus(c+19441,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                     >> 8U))),3);
        vcdp->chgBus(c+19449,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                     >> 0xbU))),3);
        vcdp->chgBus(c+19457,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                     >> 0xeU))),3);
        vcdp->chgBus(c+19465,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                     >> 0x11U))),3);
        vcdp->chgBus(c+19473,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                     >> 0x14U))),3);
        vcdp->chgBus(c+19481,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                     >> 0x17U))),3);
        vcdp->chgBus(c+19489,((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                     >> 0x1aU))),3);
    }
}

void Vsoc_top::traceChgThis__126(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+19497,(vlTOPp->soc_top__DOT__intr_controller__DOT__le),32);
        vcdp->chgBus(c+19505,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set),32);
    }
}

void Vsoc_top::traceChgThis__127(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+19513,(vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0]),32);
        vcdp->chgBus(c+19521,(vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                              [0U]),32);
    }
}

void Vsoc_top::traceChgThis__128(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+19529,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree),63);
    }
}

void Vsoc_top::traceChgThis__129(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+19545,(((1U & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))
                                ? (0x3fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U])
                                : 0U)),6);
    }
}

void Vsoc_top::traceChgThis__130(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+19553,((0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))));
        vcdp->chgBus(c+19561,(((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))
                                ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux
                               [0U] : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux
                               [1U])),32);
        vcdp->chgBus(c+19569,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_we_ex),2);
        vcdp->chgBus(c+19577,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_rdata_ext),32);
        vcdp->chgBus(c+19585,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__result_ex),32);
        vcdp->chgBit(c+19593,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_id));
        vcdp->chgBus(c+19601,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__csr_mtval),32);
        vcdp->chgBus(c+19609,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_d),2);
        vcdp->chgBit(c+19617,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_spec));
        vcdp->chgBit(c+19625,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_set_raw_d));
        vcdp->chgBit(c+19633,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw));
        vcdp->chgBus(c+19641,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_result),32);
        vcdp->chgBus(c+19649,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_we),2);
        vcdp->chgBit(c+19657,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                               | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal))));
        vcdp->chgBit(c+19665,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold));
        vcdp->chgBit(c+19673,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal));
        vcdp->chgBit(c+19681,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal));
        vcdp->chgBit(c+19689,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_update));
        vcdp->chgBit(c+19697,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update));
        vcdp->chgBit(c+19705,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_update));
        vcdp->chgBit(c+19713,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
        vcdp->chgBit(c+19721,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_d));
        vcdp->chgBit(c+19729,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_d));
        vcdp->chgBus(c+19737,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_ns),3);
        vcdp->chgBus(c+19745,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0]),32);
        vcdp->chgBus(c+19746,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1]),32);
        vcdp->chgBus(c+19761,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we),2);
        vcdp->chgBus(c+19769,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc),32);
        vcdp->chgBus(c+19777,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_d),18);
        vcdp->chgBit(c+19785,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_en));
        vcdp->chgBus(c+19793,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_d),32);
        vcdp->chgBus(c+19801,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_d),6);
        vcdp->chgBus(c+19809,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtval_d),32);
        vcdp->chgBus(c+19817,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__depc_d),32);
        vcdp->chgBit(c+19825,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_en));
        vcdp->chgBit(c+19833,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_en));
        vcdp->chgBit(c+19841,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_en));
        vcdp->chgBit(c+19849,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_we));
        vcdp->chgBit(c+19857,(vlTOPp->soc_top__DOT__u_top__DOT__data_interface__DOT__genblk2__DOT__source_d));
    }
}

void Vsoc_top::traceChgThis__131(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+19865,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_en));
        vcdp->chgBit(c+19873,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_en));
        vcdp->chgBit(c+19881,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtval_en));
        vcdp->chgBus(c+19889,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d),32);
        vcdp->chgBit(c+19897,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_en));
        vcdp->chgBit(c+19905,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__depc_en));
        vcdp->chgBit(c+19913,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_we));
    }
}

void Vsoc_top::traceChgThis__132(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+19921,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        vcdp->chgBit(c+19929,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
    }
}

void Vsoc_top::traceChgThis__133(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+19937,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        vcdp->chgBit(c+19945,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
    }
}

void Vsoc_top::traceChgThis__134(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+19953,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        vcdp->chgBit(c+19961,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel));
    }
}

void Vsoc_top::traceChgThis__135(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+19969,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel));
        vcdp->chgBit(c+19977,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
    }
}

void Vsoc_top::traceChgThis__136(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+19985,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        vcdp->chgBit(c+19993,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel));
    }
}

void Vsoc_top::traceChgThis__137(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+20001,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel));
        vcdp->chgBit(c+20009,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel));
    }
}

void Vsoc_top::traceChgThis__138(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+20017,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel));
        vcdp->chgBit(c+20025,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel));
    }
}

void Vsoc_top::traceChgThis__139(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+20033,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel));
        vcdp->chgBit(c+20041,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
    }
}

void Vsoc_top::traceChgThis__140(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+20049,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        vcdp->chgBit(c+20057,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel));
    }
}

void Vsoc_top::traceChgThis__141(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+20065,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel));
        vcdp->chgBit(c+20073,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel));
    }
}

void Vsoc_top::traceChgThis__142(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+20081,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel));
        vcdp->chgBit(c+20089,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel));
    }
}

void Vsoc_top::traceChgThis__143(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+20097,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel));
        vcdp->chgBit(c+20105,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel));
    }
}

void Vsoc_top::traceChgThis__144(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+20113,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel));
        vcdp->chgBit(c+20121,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel));
    }
}

void Vsoc_top::traceChgThis__145(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+20129,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel));
        vcdp->chgBit(c+20137,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel));
        vcdp->chgBit(c+20145,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel));
        vcdp->chgBit(c+20153,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel));
        vcdp->chgBit(c+20161,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel));
    }
}

void Vsoc_top::traceChgThis__146(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+20169,((0x3fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U])),6);
        vcdp->chgBus(c+20177,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                         << 0x1aU) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                           >> 6U)))),6);
        vcdp->chgBus(c+20185,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                         << 0x14U) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                           >> 0xcU)))),6);
        vcdp->chgBus(c+20193,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                         << 0xeU) | 
                                        (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                         >> 0x12U)))),6);
        vcdp->chgBus(c+20201,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                         << 8U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                   >> 0x18U)))),6);
        vcdp->chgBus(c+20209,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                         << 2U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                   >> 0x1eU)))),6);
        vcdp->chgBus(c+20217,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                         << 0x1cU) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                           >> 4U)))),6);
        vcdp->chgBus(c+20225,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                         << 0x16U) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                           >> 0xaU)))),6);
        vcdp->chgBus(c+20233,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                         << 0x10U) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                           >> 0x10U)))),6);
        vcdp->chgBus(c+20241,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                         << 0xaU) | 
                                        (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                         >> 0x16U)))),6);
        vcdp->chgBus(c+20249,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                         << 4U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                   >> 0x1cU)))),6);
        vcdp->chgBus(c+20257,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                         << 0x1eU) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                           >> 2U)))),6);
        vcdp->chgBus(c+20265,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                         << 0x18U) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                           >> 8U)))),6);
        vcdp->chgBus(c+20273,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                         << 0x12U) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                           >> 0xeU)))),6);
        vcdp->chgBus(c+20281,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                         << 0xcU) | 
                                        (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                         >> 0x14U)))),6);
        vcdp->chgBus(c+20289,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                         << 6U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                   >> 0x1aU)))),6);
        vcdp->chgBus(c+20297,((0x3fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U])),6);
        vcdp->chgBus(c+20305,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                         << 0x1aU) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                           >> 6U)))),6);
        vcdp->chgBus(c+20313,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                         << 0x14U) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                           >> 0xcU)))),6);
        vcdp->chgBus(c+20321,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                         << 0xeU) | 
                                        (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                         >> 0x12U)))),6);
        vcdp->chgBus(c+20329,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                         << 8U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                   >> 0x18U)))),6);
        vcdp->chgBus(c+20337,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                         << 2U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                   >> 0x1eU)))),6);
        vcdp->chgBus(c+20345,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                         << 0x1cU) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                           >> 4U)))),6);
        vcdp->chgBus(c+20353,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                         << 0x16U) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                           >> 0xaU)))),6);
        vcdp->chgBus(c+20361,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                         << 0x10U) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                           >> 0x10U)))),6);
        vcdp->chgBus(c+20369,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                         << 0xaU) | 
                                        (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                         >> 0x16U)))),6);
        vcdp->chgBus(c+20377,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                         << 4U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                   >> 0x1cU)))),6);
        vcdp->chgBus(c+20385,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                         << 0x1eU) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                           >> 2U)))),6);
        vcdp->chgBus(c+20393,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                         << 0x18U) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                           >> 8U)))),6);
        vcdp->chgBus(c+20401,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                         << 0x12U) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                           >> 0xeU)))),6);
        vcdp->chgBus(c+20409,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                         << 0xcU) | 
                                        (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                         >> 0x14U)))),6);
        vcdp->chgBus(c+20417,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                         << 6U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                   >> 0x1aU)))),6);
        vcdp->chgBus(c+20425,((0x3fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U])),6);
        vcdp->chgBus(c+20433,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                         << 0x1aU) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                           >> 6U)))),6);
        vcdp->chgBus(c+20441,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                         << 0x14U) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                           >> 0xcU)))),6);
        vcdp->chgBus(c+20449,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                         << 0xeU) | 
                                        (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                         >> 0x12U)))),6);
        vcdp->chgBus(c+20457,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                         << 8U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                   >> 0x18U)))),6);
        vcdp->chgBus(c+20465,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                         << 2U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                   >> 0x1eU)))),6);
        vcdp->chgBus(c+20473,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                         << 0x1cU) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                           >> 4U)))),6);
        vcdp->chgBus(c+20481,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                         << 0x16U) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                           >> 0xaU)))),6);
        vcdp->chgBus(c+20489,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                         << 0x10U) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                           >> 0x10U)))),6);
        vcdp->chgBus(c+20497,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                         << 0xaU) | 
                                        (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                         >> 0x16U)))),6);
        vcdp->chgBus(c+20505,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                         << 4U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                   >> 0x1cU)))),6);
        vcdp->chgBus(c+20513,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                         << 0x1eU) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                           >> 2U)))),6);
        vcdp->chgBus(c+20521,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                         << 0x18U) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                           >> 8U)))),6);
        vcdp->chgBus(c+20529,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                         << 0x12U) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                           >> 0xeU)))),6);
        vcdp->chgBus(c+20537,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                         << 0xcU) | 
                                        (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                         >> 0x14U)))),6);
        vcdp->chgBus(c+20545,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                         << 6U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                   >> 0x1aU)))),6);
        vcdp->chgBus(c+20553,((0x3fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U])),6);
        vcdp->chgBus(c+20561,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                         << 0x1aU) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                           >> 6U)))),6);
        vcdp->chgBus(c+20569,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                         << 0x14U) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                           >> 0xcU)))),6);
        vcdp->chgBus(c+20577,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                         << 0xeU) | 
                                        (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                         >> 0x12U)))),6);
        vcdp->chgBus(c+20585,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                         << 8U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                   >> 0x18U)))),6);
        vcdp->chgBus(c+20593,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                         << 2U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                   >> 0x1eU)))),6);
        vcdp->chgBus(c+20601,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                         << 0x1cU) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                           >> 4U)))),6);
        vcdp->chgBus(c+20609,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                         << 0x16U) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                           >> 0xaU)))),6);
        vcdp->chgBus(c+20617,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                         << 0x10U) 
                                        | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                           >> 0x10U)))),6);
        vcdp->chgBus(c+20625,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                         << 0xaU) | 
                                        (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                         >> 0x16U)))),6);
        vcdp->chgBus(c+20633,((0x3fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                         << 4U) | (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                   >> 0x1cU)))),6);
        vcdp->chgBus(c+20641,((0x3fU & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                        >> 2U))),6);
        vcdp->chgBus(c+20649,((0x3fU & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                        >> 8U))),6);
        vcdp->chgBus(c+20657,((0x3fU & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                        >> 0xeU))),6);
        vcdp->chgBus(c+20665,((0x3fU & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                        >> 0x14U))),6);
    }
}

void Vsoc_top::traceChgThis__147(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+20673,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_in_ready));
        vcdp->chgBit(c+20681,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__csr_pipe_flush));
        vcdp->chgBit(c+20689,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if));
        vcdp->chgBit(c+20697,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id));
        vcdp->chgBit(c+20705,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req));
        vcdp->chgBit(c+20713,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush));
        vcdp->chgBit(c+20721,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_en));
        vcdp->chgBit(c+20729,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_en));
        vcdp->chgBus(c+20737,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we),32);
        vcdp->chgBus(c+20745,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we),32);
        vcdp->chgBus(c+20753,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr),32);
        vcdp->chgBit(c+20761,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                     >> 1U))));
        vcdp->chgBit(c+20769,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                     >> 1U))));
        vcdp->chgBit(c+20777,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                     >> 1U))));
        vcdp->chgBus(c+20785,((0x1fffffffU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                              >> 3U))),29);
        vcdp->chgBus(c+20793,((0x1fffffffU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                              >> 3U))),29);
        vcdp->chgBus(c+20801,((0x1fffffffU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 3U))),29);
        vcdp->chgBit(c+20809,((1U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)));
        vcdp->chgBit(c+20817,((1U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we)));
        vcdp->chgBit(c+20825,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                     >> 2U))));
        vcdp->chgBit(c+20833,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                     >> 2U))));
    }
}

void Vsoc_top::traceChgThis__148(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+20841,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_valid_clear));
        vcdp->chgBit(c+20849,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d));
        vcdp->chgBus(c+20857,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d),3);
        vcdp->chgBus(c+20865,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped),3);
        vcdp->chgBit(c+20873,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo));
        vcdp->chgBus(c+20881,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),4);
        vcdp->chgBus(c+20889,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d),6);
        vcdp->chgBit(c+20897,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_en));
        vcdp->chgQuad(c+20905,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_upd),64);
        vcdp->chgQuad(c+20921,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load),64);
        vcdp->chgBit(c+20937,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we));
        vcdp->chgQuad(c+20945,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d),64);
        vcdp->chgQuad(c+20961,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_upd),64);
        vcdp->chgQuad(c+20977,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load),64);
        vcdp->chgBit(c+20993,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we));
        vcdp->chgQuad(c+21001,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d),64);
    }
}

void Vsoc_top::traceChgThis__149(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+21017,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+21025,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+21033,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+21041,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+21049,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+21057,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+21065,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+21073,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+21081,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+21089,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+21097,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+21105,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+21113,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+21121,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d))));
    }
}

void Vsoc_top::traceChgThis__150(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+21129,((1U & ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we) 
                                     | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                        >> 0x15U)))));
    }
}

void Vsoc_top::traceChgThis__151(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+21137,(((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
                                << 0xaU) | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                            >> 0x16U))),32);
        vcdp->chgBit(c+21145,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                     >> 0x15U))));
        vcdp->chgBus(c+21153,(((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                << 0xbU) | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                            >> 0x15U))),32);
        vcdp->chgBit(c+21161,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                     >> 0x14U))));
        vcdp->chgBus(c+21169,(((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                << 0xcU) | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                            >> 0x14U))),32);
        vcdp->chgBus(c+21177,((0x3ffU & ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                          << 0x16U) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                            >> 0xaU)))),10);
        vcdp->chgBus(c+21185,((0x3ffU & vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U])),10);
        vcdp->chgBus(c+21193,((0xffffU & ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                           << 0x10U) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[3U] 
                                             >> 0x10U)))),16);
        vcdp->chgBus(c+21201,((0xffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[3U])),16);
        vcdp->chgBus(c+21209,(vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[2U]),32);
        vcdp->chgBus(c+21217,((0xffffU & ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                             >> 0x10U)))),16);
        vcdp->chgBus(c+21225,((0xffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[1U])),16);
        vcdp->chgBus(c+21233,((0xffffU & ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[0U] 
                                             >> 0x10U)))),16);
        vcdp->chgBus(c+21241,((0xffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[0U])),16);
        vcdp->chgBus(c+21249,(((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                << 0xcU) | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                            >> 0x14U))),32);
        vcdp->chgBus(c+21257,((0x3ffU & ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                          << 0x16U) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                            >> 0xaU)))),10);
        vcdp->chgBus(c+21265,((0xffffU & ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                           << 0x10U) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[3U] 
                                             >> 0x10U)))),16);
        vcdp->chgBus(c+21273,(vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[2U]),32);
        vcdp->chgBus(c+21281,((0xffffU & ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                             >> 0x10U)))),16);
        vcdp->chgBus(c+21289,((0xffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[1U])),16);
        vcdp->chgBus(c+21297,((0xffffU & ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[0U] 
                                             >> 0x10U)))),16);
        vcdp->chgBus(c+21305,((0xffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[0U])),16);
        vcdp->chgBit(c+21313,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                     >> 0x15U))));
        vcdp->chgBus(c+21321,(((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
                                << 0xaU) | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                            >> 0x16U))),32);
        vcdp->chgBit(c+21329,((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                     >> 0x14U))));
        vcdp->chgBus(c+21337,(((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                << 0xbU) | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                            >> 0x15U))),32);
        vcdp->chgBus(c+21345,((0x3ffU & ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                          << 0x16U) 
                                         | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                            >> 0xaU)))),16);
        vcdp->chgBus(c+21353,((0x3ffU & vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U])),16);
        vcdp->chgBus(c+21361,((0xffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[3U])),16);
    }
}

void Vsoc_top::traceChgThis__152(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+21369,(vlTOPp->soc_top__DOT__intr_controller__DOT__irq_id_o[0]),5);
        vcdp->chgBit(c+21377,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 7U))));
        vcdp->chgBit(c+21385,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 6U))));
        vcdp->chgBit(c+21393,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 9U))));
        vcdp->chgBit(c+21401,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 8U))));
        vcdp->chgBit(c+21409,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0xbU))));
        vcdp->chgBit(c+21417,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0xaU))));
        vcdp->chgBit(c+21425,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0xdU))));
        vcdp->chgBit(c+21433,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0xcU))));
        vcdp->chgBit(c+21441,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0xfU))));
        vcdp->chgBit(c+21449,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0xeU))));
        vcdp->chgBit(c+21457,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x11U))));
        vcdp->chgBit(c+21465,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x10U))));
        vcdp->chgBit(c+21473,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x13U))));
        vcdp->chgBit(c+21481,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x12U))));
        vcdp->chgBit(c+21489,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x15U))));
        vcdp->chgBit(c+21497,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x14U))));
        vcdp->chgBit(c+21505,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x17U))));
        vcdp->chgBit(c+21513,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x16U))));
        vcdp->chgBit(c+21521,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x19U))));
        vcdp->chgBit(c+21529,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x18U))));
        vcdp->chgBit(c+21537,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x1bU))));
        vcdp->chgBit(c+21545,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x1aU))));
        vcdp->chgBit(c+21553,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x1dU))));
        vcdp->chgBit(c+21561,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x1cU))));
        vcdp->chgBit(c+21569,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x1fU))));
        vcdp->chgBit(c+21577,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x1eU))));
        vcdp->chgBit(c+21585,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 1U))));
        vcdp->chgBit(c+21593,((1U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U])));
        vcdp->chgBit(c+21601,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 3U))));
        vcdp->chgBit(c+21609,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 2U))));
        vcdp->chgBit(c+21617,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 5U))));
        vcdp->chgBit(c+21625,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 4U))));
        vcdp->chgBit(c+21633,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 7U))));
        vcdp->chgBit(c+21641,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 6U))));
        vcdp->chgBit(c+21649,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 9U))));
        vcdp->chgBit(c+21657,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 8U))));
        vcdp->chgBit(c+21665,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0xbU))));
        vcdp->chgBit(c+21673,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0xaU))));
        vcdp->chgBit(c+21681,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0xdU))));
        vcdp->chgBit(c+21689,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0xcU))));
        vcdp->chgBit(c+21697,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0xfU))));
        vcdp->chgBit(c+21705,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0xeU))));
        vcdp->chgBit(c+21713,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x11U))));
        vcdp->chgBit(c+21721,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x10U))));
        vcdp->chgBit(c+21729,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x13U))));
        vcdp->chgBit(c+21737,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x12U))));
        vcdp->chgBit(c+21745,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x15U))));
        vcdp->chgBit(c+21753,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x14U))));
        vcdp->chgBit(c+21761,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x17U))));
        vcdp->chgBit(c+21769,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x16U))));
        vcdp->chgBit(c+21777,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x19U))));
        vcdp->chgBit(c+21785,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x18U))));
        vcdp->chgBit(c+21793,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x1bU))));
        vcdp->chgBit(c+21801,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x1aU))));
        vcdp->chgBit(c+21809,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x1dU))));
        vcdp->chgBit(c+21817,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x1cU))));
        vcdp->chgBit(c+21825,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x1fU))));
        vcdp->chgBit(c+21833,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x1eU))));
        vcdp->chgBit(c+21841,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                     >> 1U))));
        vcdp->chgBit(c+21849,((1U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U])));
        vcdp->chgBit(c+21857,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                     >> 3U))));
        vcdp->chgBit(c+21865,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                     >> 2U))));
        vcdp->chgBit(c+21873,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                     >> 5U))));
        vcdp->chgBit(c+21881,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                     >> 4U))));
        vcdp->chgBus(c+21889,((0x3fU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U])),6);
        vcdp->chgBus(c+21897,(vlTOPp->soc_top__DOT__intr_controller__DOT__claim_id[0]),5);
        vcdp->chgBus(c+21905,(vlTOPp->soc_top__DOT__intr_controller__DOT__cc_id[0]),5);
        vcdp->chgBus(c+21913,((0x3fU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U])),6);
        vcdp->chgBit(c+21921,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 6U))));
        vcdp->chgBit(c+21929,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 7U))));
        vcdp->chgBit(c+21937,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 8U))));
        vcdp->chgBit(c+21945,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 9U))));
        vcdp->chgBit(c+21953,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0xaU))));
        vcdp->chgBit(c+21961,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0xbU))));
        vcdp->chgBit(c+21969,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0xcU))));
        vcdp->chgBit(c+21977,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0xdU))));
        vcdp->chgBit(c+21985,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0xeU))));
        vcdp->chgBit(c+21993,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0xfU))));
        vcdp->chgBit(c+22001,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x10U))));
        vcdp->chgBit(c+22009,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x11U))));
        vcdp->chgBit(c+22017,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x12U))));
        vcdp->chgBit(c+22025,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x13U))));
        vcdp->chgBit(c+22033,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x14U))));
        vcdp->chgBit(c+22041,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x15U))));
        vcdp->chgBit(c+22049,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x16U))));
        vcdp->chgBit(c+22057,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x17U))));
        vcdp->chgBit(c+22065,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x18U))));
        vcdp->chgBit(c+22073,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x19U))));
        vcdp->chgBit(c+22081,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x1aU))));
        vcdp->chgBit(c+22089,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x1bU))));
        vcdp->chgBit(c+22097,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x1cU))));
        vcdp->chgBit(c+22105,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x1dU))));
        vcdp->chgBit(c+22113,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x1eU))));
        vcdp->chgBit(c+22121,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                     >> 0x1fU))));
        vcdp->chgBit(c+22129,((1U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U])));
        vcdp->chgBit(c+22137,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 1U))));
        vcdp->chgBit(c+22145,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 2U))));
        vcdp->chgBit(c+22153,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 3U))));
        vcdp->chgBit(c+22161,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 4U))));
        vcdp->chgBit(c+22169,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 5U))));
        vcdp->chgBit(c+22177,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 6U))));
        vcdp->chgBit(c+22185,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 7U))));
        vcdp->chgBit(c+22193,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 8U))));
        vcdp->chgBit(c+22201,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 9U))));
        vcdp->chgBit(c+22209,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0xaU))));
        vcdp->chgBit(c+22217,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0xbU))));
        vcdp->chgBit(c+22225,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0xcU))));
        vcdp->chgBit(c+22233,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0xdU))));
        vcdp->chgBit(c+22241,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0xeU))));
        vcdp->chgBit(c+22249,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0xfU))));
        vcdp->chgBit(c+22257,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x10U))));
        vcdp->chgBit(c+22265,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x11U))));
        vcdp->chgBit(c+22273,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x12U))));
        vcdp->chgBit(c+22281,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x13U))));
        vcdp->chgBit(c+22289,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x14U))));
        vcdp->chgBit(c+22297,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x15U))));
        vcdp->chgBit(c+22305,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x16U))));
        vcdp->chgBit(c+22313,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x17U))));
        vcdp->chgBit(c+22321,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x18U))));
        vcdp->chgBit(c+22329,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x19U))));
        vcdp->chgBit(c+22337,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x1aU))));
        vcdp->chgBit(c+22345,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x1bU))));
        vcdp->chgBit(c+22353,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x1cU))));
        vcdp->chgBit(c+22361,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x1dU))));
        vcdp->chgBit(c+22369,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x1eU))));
        vcdp->chgBit(c+22377,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                     >> 0x1fU))));
        vcdp->chgBit(c+22385,((1U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U])));
        vcdp->chgBit(c+22393,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                     >> 1U))));
        vcdp->chgBit(c+22401,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                     >> 2U))));
        vcdp->chgBit(c+22409,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                     >> 3U))));
        vcdp->chgBit(c+22417,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                     >> 4U))));
        vcdp->chgBit(c+22425,((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                     >> 5U))));
    }
}

void Vsoc_top::traceChgThis__153(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+22433,(vlTOPp->soc_top__DOT__intr_controller__DOT__claim),32);
        vcdp->chgBus(c+22441,(vlTOPp->soc_top__DOT__intr_controller__DOT__complete_id[0]),5);
        vcdp->chgBus(c+22449,(vlTOPp->soc_top__DOT__intr_controller__DOT__complete),32);
        vcdp->chgBus(c+22457,(vlTOPp->soc_top__DOT__intr_controller__DOT__threshold[0]),3);
        vcdp->chgBus(c+22465,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next),32);
        vcdp->chgBit(c+22473,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we));
        vcdp->chgBit(c+22481,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we));
        vcdp->chgBit(c+22489,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we));
        vcdp->chgBit(c+22497,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we));
        vcdp->chgBit(c+22505,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio0_we));
        vcdp->chgBit(c+22513,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio4_we));
        vcdp->chgBit(c+22521,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio5_we));
        vcdp->chgBit(c+22529,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio11_we));
        vcdp->chgBit(c+22537,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio12_we));
        vcdp->chgBit(c+22545,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio13_we));
        vcdp->chgBit(c+22553,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio14_we));
        vcdp->chgBit(c+22561,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio15_we));
        vcdp->chgBit(c+22569,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio20_we));
        vcdp->chgBit(c+22577,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio21_we));
        vcdp->chgBit(c+22585,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio22_we));
        vcdp->chgBit(c+22593,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio23_we));
        vcdp->chgBit(c+22601,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio24_we));
        vcdp->chgBit(c+22609,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio25_we));
        vcdp->chgBit(c+22617,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio26_we));
        vcdp->chgBit(c+22625,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we));
        vcdp->chgBit(c+22633,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we));
        vcdp->chgBit(c+22641,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we));
        vcdp->chgBit(c+22649,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we));
        vcdp->chgBit(c+22657,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we));
        vcdp->chgBit(c+22665,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we));
        vcdp->chgBit(c+22673,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we));
        vcdp->chgBit(c+22681,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we));
        vcdp->chgBit(c+22689,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we));
        vcdp->chgBit(c+22697,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we));
        vcdp->chgBit(c+22705,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we));
        vcdp->chgBit(c+22713,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we));
        vcdp->chgBit(c+22721,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we));
        vcdp->chgBus(c+22729,(vlTOPp->soc_top__DOT__intr_controller__DOT__threshold
                              [0U]),3);
    }
}

void Vsoc_top::traceChgThis__154(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+22737,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+22745,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+22753,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+22761,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+22769,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+22777,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+22785,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+22793,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+22801,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+22809,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+22817,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+22825,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+22833,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+22841,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+22849,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+22857,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d))));
        vcdp->chgBus(c+22865,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d),4);
        vcdp->chgBit(c+22873,((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d))));
    }
}

void Vsoc_top::traceChgThis__155(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+22881,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we));
        vcdp->chgBit(c+22889,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we));
        vcdp->chgBit(c+22897,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we));
        vcdp->chgBit(c+22905,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we));
        vcdp->chgBit(c+22913,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we));
        vcdp->chgBit(c+22921,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we));
        vcdp->chgBit(c+22929,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__ctrl_en_input_filter_we));
    }
}

void Vsoc_top::traceChgThis__156(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+22937,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we));
        vcdp->chgBit(c+22945,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we));
        vcdp->chgBit(c+22953,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we));
        vcdp->chgBit(c+22961,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we));
        vcdp->chgBit(c+22969,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we));
        vcdp->chgBit(c+22977,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we));
        vcdp->chgBit(c+22985,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we));
        vcdp->chgBit(c+22993,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we));
        vcdp->chgBit(c+23001,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we));
        vcdp->chgBit(c+23009,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we));
        vcdp->chgBit(c+23017,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we));
        vcdp->chgBit(c+23025,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we));
        vcdp->chgBit(c+23033,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we));
        vcdp->chgBit(c+23041,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we));
        vcdp->chgBit(c+23049,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we));
        vcdp->chgBit(c+23057,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we));
        vcdp->chgBit(c+23065,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we));
        vcdp->chgBit(c+23073,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we));
        vcdp->chgBit(c+23081,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we));
        vcdp->chgBit(c+23089,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we));
        vcdp->chgBit(c+23097,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we));
        vcdp->chgBit(c+23105,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we));
        vcdp->chgBit(c+23113,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we));
        vcdp->chgBit(c+23121,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we));
        vcdp->chgBit(c+23129,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio1_we));
        vcdp->chgBit(c+23137,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio2_we));
        vcdp->chgBit(c+23145,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio3_we));
        vcdp->chgBit(c+23153,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio6_we));
        vcdp->chgBit(c+23161,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio8_we));
        vcdp->chgBit(c+23169,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio9_we));
        vcdp->chgBit(c+23177,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio10_we));
        vcdp->chgBit(c+23185,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio16_we));
        vcdp->chgBit(c+23193,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio17_we));
        vcdp->chgBit(c+23201,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio18_we));
        vcdp->chgBit(c+23209,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio19_we));
        vcdp->chgBit(c+23217,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio27_we));
        vcdp->chgBit(c+23225,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio28_we));
        vcdp->chgBit(c+23233,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio29_we));
        vcdp->chgBit(c+23241,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio30_we));
        vcdp->chgBit(c+23249,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio31_we));
        vcdp->chgBit(c+23257,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we));
        vcdp->chgBit(c+23265,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we));
        vcdp->chgBit(c+23273,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we));
        vcdp->chgBit(c+23281,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we));
        vcdp->chgBit(c+23289,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we));
        vcdp->chgBit(c+23297,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we));
        vcdp->chgBit(c+23305,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we));
        vcdp->chgBit(c+23313,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we));
        vcdp->chgBit(c+23321,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we));
        vcdp->chgBit(c+23329,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we));
        vcdp->chgBit(c+23337,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we));
        vcdp->chgBit(c+23345,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we));
        vcdp->chgBit(c+23353,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we));
        vcdp->chgBit(c+23361,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we));
        vcdp->chgBit(c+23369,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we));
        vcdp->chgBit(c+23377,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we));
        vcdp->chgBit(c+23385,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we));
        vcdp->chgBit(c+23393,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we));
        vcdp->chgBit(c+23401,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we));
    }
}

void Vsoc_top::traceChgThis__157(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+23409,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we));
        vcdp->chgBit(c+23417,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we));
        vcdp->chgBit(c+23425,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we));
        vcdp->chgBit(c+23433,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we));
        vcdp->chgBit(c+23441,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we));
        vcdp->chgBit(c+23449,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we));
    }
}

void Vsoc_top::traceChgThis__158(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+23457,(vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d),32);
        vcdp->chgBit(c+23465,((0U != vlTOPp->soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event)));
        vcdp->chgBus(c+23473,(vlTOPp->soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event),32);
        vcdp->chgBus(c+23481,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next),32);
    }
}

void Vsoc_top::traceChgThis__159(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+23489,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__outstanding));
        vcdp->chgBus(c+23497,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqid),8);
        vcdp->chgBus(c+23505,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqsz),2);
        vcdp->chgBit(c+23513,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_17__q));
        vcdp->chgBit(c+23521,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_18__q));
        vcdp->chgBit(c+23529,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_22__q));
        vcdp->chgBit(c+23537,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_23__q));
        vcdp->chgBit(c+23545,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_24__q));
        vcdp->chgBit(c+23553,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_25__q));
        vcdp->chgBit(c+23561,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_31__q));
        vcdp->chgBit(c+23569,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_0__q));
        vcdp->chgBit(c+23577,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_20__q));
        vcdp->chgBit(c+23585,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_21__q));
        vcdp->chgBit(c+23593,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_22__q));
        vcdp->chgBit(c+23601,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_23__q));
        vcdp->chgBit(c+23609,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_24__q));
        vcdp->chgBit(c+23617,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_25__q));
        vcdp->chgBit(c+23625,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_26__q));
        vcdp->chgBit(c+23633,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_27__q));
        vcdp->chgBit(c+23641,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_28__q));
        vcdp->chgBit(c+23649,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_29__q));
        vcdp->chgBit(c+23657,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_30__q));
        vcdp->chgBit(c+23665,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_31__q));
        vcdp->chgBit(c+23673,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding));
        vcdp->chgBus(c+23681,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rdata),32);
        vcdp->chgBit(c+23689,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__error));
        vcdp->chgBus(c+23697,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqid),8);
        vcdp->chgBus(c+23705,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqsz),2);
        vcdp->chgBus(c+23713,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rspop),3);
    }
}

void Vsoc_top::traceChgThis__160(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+23721,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__num_req_outstanding),17);
        vcdp->chgBus(c+23729,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q),32);
        vcdp->chgBus(c+23737,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio9__q),3);
        vcdp->chgBus(c+23745,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio10__q),3);
        vcdp->chgBus(c+23753,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q),3);
        vcdp->chgBit(c+23761,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__qe));
        vcdp->chgBit(c+23769,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__qe));
        vcdp->chgBit(c+23777,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__qe));
        vcdp->chgBit(c+23785,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__qe));
        vcdp->chgBit(c+23793,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__qe));
        vcdp->chgBit(c+23801,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__qe));
        vcdp->chgBit(c+23809,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__qe));
        vcdp->chgBit(c+23817,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__qe));
        vcdp->chgBit(c+23825,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__qe));
        vcdp->chgBit(c+23833,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__qe));
        vcdp->chgBit(c+23841,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__qe));
        vcdp->chgBit(c+23849,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__qe));
        vcdp->chgBit(c+23857,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__qe));
        vcdp->chgBit(c+23865,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__qe));
        vcdp->chgBit(c+23873,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__qe));
        vcdp->chgBit(c+23881,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__qe));
        vcdp->chgBit(c+23889,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__qe));
        vcdp->chgBit(c+23897,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__qe));
    }
}

void Vsoc_top::traceChgThis__161(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgArray(c+23905,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q),68);
        vcdp->chgBit(c+23929,((0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
        vcdp->chgQuad(c+23937,((((QData)((IData)(((
                                                   vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                                     >> 2U)))) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[0U])))),64);
        vcdp->chgBus(c+23953,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[0U]),32);
        vcdp->chgBus(c+23961,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q),3);
        vcdp->chgBus(c+23969,((3U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1U])),2);
        vcdp->chgBit(c+23977,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
        vcdp->chgBus(c+23985,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs),3);
        vcdp->chgBus(c+23993,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__dev_select_outstanding),4);
        vcdp->chgBus(c+24001,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_opcode),3);
        vcdp->chgBus(c+24009,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_source),8);
        vcdp->chgBus(c+24017,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_size),2);
        vcdp->chgBit(c+24025,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_req_pending));
        vcdp->chgBit(c+24033,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__qe));
        vcdp->chgBit(c+24041,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__qe));
        vcdp->chgBit(c+24049,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__qe));
        vcdp->chgBit(c+24057,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__qe));
        vcdp->chgBit(c+24065,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__qe));
        vcdp->chgBit(c+24073,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__qe));
    }
}

void Vsoc_top::traceChgThis__162(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+24081,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
        vcdp->chgBit(c+24089,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q));
        vcdp->chgBus(c+24097,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q),2);
        vcdp->chgBit(c+24105,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q));
        vcdp->chgBit(c+24113,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q));
        vcdp->chgBit(c+24121,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__qe));
        vcdp->chgBit(c+24129,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__qe));
        vcdp->chgBit(c+24137,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__qe));
        vcdp->chgBit(c+24145,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__qe));
        vcdp->chgBit(c+24153,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__qe));
        vcdp->chgBit(c+24161,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__qe));
        vcdp->chgBit(c+24169,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__qe));
        vcdp->chgBit(c+24177,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__qe));
        vcdp->chgBit(c+24185,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__qe));
    }
}

void Vsoc_top::traceChgThis__163(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+24193,((0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                        >> 0xfU))),5);
        vcdp->chgBus(c+24201,((0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                        >> 0x14U))),5);
        vcdp->chgBus(c+24209,((0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                        >> 7U))),5);
        vcdp->chgBus(c+24217,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id),32);
        vcdp->chgBit(c+24225,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__illegal_c_insn_id));
        vcdp->chgBus(c+24233,(((0xfffff000U & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                       >> 0x1fU)))) 
                                               << 0xcU)) 
                               | (0xfffU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                            >> 0x14U)))),32);
        vcdp->chgBus(c+24241,(((0xfffff000U & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                       >> 0x1fU)))) 
                                               << 0xcU)) 
                               | ((0xfe0U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                              >> 7U))))),32);
        vcdp->chgBus(c+24249,(((0xffffe000U & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                       >> 0x1fU)))) 
                                               << 0xdU)) 
                               | ((0x1000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x13U)) 
                                  | ((0x800U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                << 4U)) 
                                     | ((0x7e0U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                            >> 7U))))))),32);
        vcdp->chgBus(c+24257,((0xfffff000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)),32);
        vcdp->chgBus(c+24265,(((0xfff00000U & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                       >> 0x1fU)))) 
                                               << 0x14U)) 
                               | ((0xff000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id) 
                                  | ((0x800U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                >> 9U)) 
                                     | (0x7feU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x14U)))))),32);
        vcdp->chgBus(c+24273,((0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                        >> 0xfU))),32);
        vcdp->chgBus(c+24281,((0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                        >> 0x1bU))),5);
    }
}

void Vsoc_top::traceChgThis__164(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+24289,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id),32);
        vcdp->chgBus(c+24297,(((0x3e0U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                          >> 0xaU)) 
                               | (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                           >> 7U)))),10);
    }
}

void Vsoc_top::traceChgThis__165(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+24305,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        vcdp->chgBit(c+24313,((1U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                     >> 1U))));
        vcdp->chgBit(c+24321,((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        vcdp->chgBus(c+24329,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        vcdp->chgBit(c+24337,((1U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                     >> 1U))));
        vcdp->chgBit(c+24345,((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        vcdp->chgBus(c+24353,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        vcdp->chgBit(c+24361,((1U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                     >> 1U))));
        vcdp->chgBit(c+24369,((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        vcdp->chgBus(c+24377,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
        vcdp->chgBit(c+24385,((1U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                     >> 2U))));
        vcdp->chgBus(c+24393,((3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
        vcdp->chgBus(c+24401,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
        vcdp->chgBit(c+24409,((1U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                     >> 2U))));
        vcdp->chgBus(c+24417,((3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
        vcdp->chgBus(c+24425,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
        vcdp->chgBit(c+24433,((1U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                     >> 2U))));
        vcdp->chgBus(c+24441,((3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
    }
}

void Vsoc_top::traceChgThis__166(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+24449,(((0x19U >= (0x1fU & ((IData)(0xdU) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                ? (0x1fffU & (vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                              >> (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                : 0U)),13);
        vcdp->chgBus(c+24457,(((9U >= (0xfU & ((IData)(5U) 
                                               * (1U 
                                                  & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                ? (0x1fU & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                            >> (0xfU 
                                                & ((IData)(5U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                : 0U)),5);
        vcdp->chgQuad(c+24465,(((0x41U >= (0x7fU & 
                                           ((IData)(0x21U) 
                                            * (1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                 ? (VL_ULL(0x1ffffffff) 
                                    & (((0U == (0x1fU 
                                                & ((IData)(0x21U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                         ? VL_ULL(0)
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
                                            << ((IData)(0x40U) 
                                                - (0x1fU 
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
                                           << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x21U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                ? 0x20U
                                                : ((IData)(0x20U) 
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
                                             >> (0x1fU 
                                                 & ((IData)(0x21U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))))
                                 : VL_ULL(0))),33);
        vcdp->chgBus(c+24481,(((0x33U >= (0x3fU & ((IData)(0xdU) 
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
        vcdp->chgBus(c+24489,(((0x13U >= (0x1fU & ((IData)(5U) 
                                                   * 
                                                   (3U 
                                                    & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                ? (0x1fU & (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                            >> (0x1fU 
                                                & ((IData)(5U) 
                                                   * 
                                                   (3U 
                                                    & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                : 0U)),5);
        vcdp->chgQuad(c+24497,(((0x83U >= (0xffU & 
                                           ((IData)(0x21U) 
                                            * (3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                 ? (VL_ULL(0x1ffffffff) 
                                    & (((0U == (0x1fU 
                                                & ((IData)(0x21U) 
                                                   * 
                                                   (3U 
                                                    & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                         ? VL_ULL(0)
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
                                            << ((IData)(0x40U) 
                                                - (0x1fU 
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
                                           << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x21U) 
                                                    * 
                                                    (3U 
                                                     & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                ? 0x20U
                                                : ((IData)(0x20U) 
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
                                             >> (0x1fU 
                                                 & ((IData)(0x21U) 
                                                    * 
                                                    (3U 
                                                     & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))))
                                 : VL_ULL(0))),33);
    }
}

void Vsoc_top::traceChgThis__167(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+24513,(vlTOPp->soc_top__DOT__iccm__DOT__instr_valid));
        vcdp->chgBus(c+24521,((0x1fffU & vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage)),13);
        vcdp->chgBus(c+24529,((0x1fffU & (vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                          >> 0xdU))),13);
        vcdp->chgBus(c+24537,((0x1fU & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage))),5);
        vcdp->chgBus(c+24545,((0x1fU & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                        >> 5U))),5);
        vcdp->chgQuad(c+24553,((VL_ULL(0x1ffffffff) 
                                & (((QData)((IData)(
                                                    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[0U]))))),33);
        vcdp->chgQuad(c+24569,((VL_ULL(0x1ffffffff) 
                                & (((QData)((IData)(
                                                    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                    << 0x1fU) | ((QData)((IData)(
                                                                 vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                                 >> 1U)))),33);
        vcdp->chgBit(c+24585,(vlTOPp->soc_top__DOT__dccm__DOT__rvalid));
        vcdp->chgBus(c+24593,((0x1fffU & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage))),13);
        vcdp->chgBus(c+24601,((0x1fffU & (IData)((vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                  >> 0xdU)))),13);
        vcdp->chgBus(c+24609,((0x1fffU & (IData)((vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                  >> 0x1aU)))),13);
        vcdp->chgBus(c+24617,((0x1fffU & (IData)((vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                  >> 0x27U)))),13);
        vcdp->chgBus(c+24625,((0x1fU & vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage)),5);
        vcdp->chgBus(c+24633,((0x1fU & (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                        >> 5U))),5);
        vcdp->chgBus(c+24641,((0x1fU & (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                        >> 0xaU))),5);
        vcdp->chgBus(c+24649,((0x1fU & (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                        >> 0xfU))),5);
        vcdp->chgQuad(c+24657,((VL_ULL(0x1ffffffff) 
                                & (((QData)((IData)(
                                                    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[0U]))))),33);
        vcdp->chgQuad(c+24673,((VL_ULL(0x1ffffffff) 
                                & (((QData)((IData)(
                                                    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                                    >> 1U))))),33);
        vcdp->chgQuad(c+24689,((VL_ULL(0x1ffffffff) 
                                & (((QData)((IData)(
                                                    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[4U])) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                                    >> 2U))))),33);
        vcdp->chgQuad(c+24705,((VL_ULL(0x1ffffffff) 
                                & (((QData)((IData)(
                                                    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[4U])) 
                                    << 0x1dU) | ((QData)((IData)(
                                                                 vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                                 >> 3U)))),33);
    }
}

void Vsoc_top::traceChgThis__168(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+24721,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        vcdp->chgBit(c+24729,((1U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                     >> 1U))));
        vcdp->chgBit(c+24737,((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        vcdp->chgBus(c+24745,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        vcdp->chgBit(c+24753,((1U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                     >> 1U))));
        vcdp->chgBit(c+24761,((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        vcdp->chgBus(c+24769,(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        vcdp->chgBit(c+24777,((1U & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                     >> 1U))));
        vcdp->chgBit(c+24785,((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        vcdp->chgBus(c+24793,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
        vcdp->chgBit(c+24801,((1U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                     >> 2U))));
        vcdp->chgBus(c+24809,((3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
        vcdp->chgBus(c+24817,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
        vcdp->chgBit(c+24825,((1U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                     >> 2U))));
        vcdp->chgBus(c+24833,((3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
        vcdp->chgBus(c+24841,(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
        vcdp->chgBit(c+24849,((1U & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                     >> 2U))));
        vcdp->chgBus(c+24857,((3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
    }
}

void Vsoc_top::traceChgThis__169(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+24865,(vlTOPp->soc_top__DOT__iccm__DOT__rdata),32);
        vcdp->chgBus(c+24873,(vlTOPp->soc_top__DOT__dccm__DOT__rdata),32);
    }
}

void Vsoc_top::traceChgThis__170(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+24881,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q),32);
        vcdp->chgBus(c+24889,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q),32);
        vcdp->chgBit(c+24897,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_0__q));
        vcdp->chgBit(c+24905,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_3__q));
        vcdp->chgBit(c+24913,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_4__q));
        vcdp->chgBit(c+24921,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_5__q));
        vcdp->chgBit(c+24929,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_6__q));
        vcdp->chgBit(c+24937,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_9__q));
        vcdp->chgBit(c+24945,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_10__q));
        vcdp->chgBit(c+24953,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_11__q));
        vcdp->chgBit(c+24961,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_12__q));
        vcdp->chgBit(c+24969,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_13__q));
        vcdp->chgBit(c+24977,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_14__q));
        vcdp->chgBit(c+24985,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_15__q));
        vcdp->chgBit(c+24993,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_16__q));
        vcdp->chgBit(c+25001,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_26__q));
        vcdp->chgBit(c+25009,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_27__q));
        vcdp->chgBit(c+25017,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_28__q));
        vcdp->chgBit(c+25025,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_29__q));
        vcdp->chgBit(c+25033,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_30__q));
        vcdp->chgBus(c+25041,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q),3);
        vcdp->chgBus(c+25049,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q),3);
        vcdp->chgBit(c+25057,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_1__q));
        vcdp->chgBit(c+25065,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_2__q));
        vcdp->chgBit(c+25073,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_4__q));
        vcdp->chgBit(c+25081,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_5__q));
        vcdp->chgBit(c+25089,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_6__q));
        vcdp->chgBit(c+25097,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_7__q));
        vcdp->chgBus(c+25105,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_threshold0__q),3);
        vcdp->chgBit(c+25113,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_msip0__q));
    }
}

void Vsoc_top::traceChgThis__171(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+25121,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q),32);
        vcdp->chgBus(c+25129,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q),32);
        vcdp->chgBus(c+25137,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q),32);
        vcdp->chgBit(c+25145,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_19__q));
        vcdp->chgBit(c+25153,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_20__q));
        vcdp->chgBit(c+25161,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_21__q));
        vcdp->chgBus(c+25169,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio8__q),3);
        vcdp->chgBus(c+25177,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q),3);
        vcdp->chgBus(c+25185,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio12__q),3);
        vcdp->chgBus(c+25193,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio13__q),3);
        vcdp->chgBus(c+25201,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio14__q),3);
        vcdp->chgBus(c+25209,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q),3);
        vcdp->chgBus(c+25217,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio16__q),3);
        vcdp->chgBus(c+25225,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q),3);
        vcdp->chgBus(c+25233,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q),3);
        vcdp->chgBus(c+25241,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q),3);
        vcdp->chgBus(c+25249,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q),3);
        vcdp->chgBus(c+25257,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q),3);
        vcdp->chgBus(c+25265,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q),3);
        vcdp->chgBit(c+25273,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_3__q));
        vcdp->chgBit(c+25281,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_8__q));
        vcdp->chgBit(c+25289,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_9__q));
        vcdp->chgBit(c+25297,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_10__q));
        vcdp->chgBit(c+25305,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_11__q));
        vcdp->chgBit(c+25313,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_12__q));
        vcdp->chgBit(c+25321,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_13__q));
        vcdp->chgBit(c+25329,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_14__q));
        vcdp->chgBit(c+25337,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_15__q));
        vcdp->chgBit(c+25345,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_16__q));
        vcdp->chgBit(c+25353,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_17__q));
        vcdp->chgBit(c+25361,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_18__q));
        vcdp->chgBit(c+25369,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_19__q));
    }
}

void Vsoc_top::traceChgThis__172(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+25377,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q),32);
        vcdp->chgBus(c+25385,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),4);
        vcdp->chgBus(c+25393,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
    }
}

void Vsoc_top::traceChgThis__173(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+25401,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id));
        vcdp->chgBit(c+25409,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_fetch_err));
        vcdp->chgBus(c+25417,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__pc_id),32);
        vcdp->chgBus(c+25425,(vlTOPp->soc_top__DOT__u_top__DOT__data_interface__DOT__genblk2__DOT__source_q),8);
        vcdp->chgBit(c+25433,(vlTOPp->soc_top__DOT__u_top__DOT__data_interface__DOT__genblk2__DOT__source_q));
    }
}

void Vsoc_top::traceChgThis__174(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+25441,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_q));
        vcdp->chgBit(c+25449,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q));
        vcdp->chgBit(c+25457,((1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                     >> 5U))));
        vcdp->chgBit(c+25465,((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))));
        vcdp->chgBus(c+25473,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q),2);
        vcdp->chgBus(c+25481,((3U & ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                                      ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                         >> 2U) : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q)))),2);
        vcdp->chgBit(c+25489,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
        vcdp->chgBit(c+25497,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                     >> 2U))));
        vcdp->chgBit(c+25505,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                     >> 0xfU))));
        vcdp->chgBit(c+25513,((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                     >> 0xcU))));
        vcdp->chgBit(c+25521,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q));
        vcdp->chgBit(c+25529,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q));
        vcdp->chgBit(c+25537,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q));
        vcdp->chgBit(c+25545,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q));
        vcdp->chgBit(c+25553,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q));
        vcdp->chgBit(c+25561,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q));
        vcdp->chgBus(c+25569,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q),24);
        vcdp->chgBit(c+25577,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q));
        vcdp->chgBus(c+25585,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q),6);
        vcdp->chgBus(c+25593,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q),18);
        vcdp->chgBus(c+25601,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q),32);
        vcdp->chgBus(c+25609,(vlTOPp->soc_top__DOT__intr_controller__DOT__ip),32);
        vcdp->chgBit(c+25617,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_1__q));
        vcdp->chgBit(c+25625,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_2__q));
        vcdp->chgBit(c+25633,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_7__q));
        vcdp->chgBit(c+25641,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_8__q));
        vcdp->chgBus(c+25649,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio0__q),3);
        vcdp->chgBus(c+25657,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio1__q),3);
        vcdp->chgBus(c+25665,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio2__q),3);
        vcdp->chgBus(c+25673,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio3__q),3);
        vcdp->chgBus(c+25681,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio4__q),3);
        vcdp->chgBus(c+25689,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio5__q),3);
        vcdp->chgBus(c+25697,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio6__q),3);
        vcdp->chgBus(c+25705,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q),3);
        vcdp->chgBus(c+25713,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q),3);
        vcdp->chgBus(c+25721,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q),3);
        vcdp->chgBus(c+25729,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q),3);
        vcdp->chgBus(c+25737,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio29__q),3);
        vcdp->chgBus(c+25745,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio30__q),3);
        vcdp->chgBus(c+25753,(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_id_q),6);
    }
}

void Vsoc_top::traceChgThis__175(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+25761,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio7__q),3);
    }
}

void Vsoc_top::traceChgThis__176(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+25769,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBit(c+25777,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBus(c+25785,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+25793,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBit(c+25801,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBus(c+25809,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+25817,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBit(c+25825,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBus(c+25833,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+25841,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBit(c+25849,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBus(c+25857,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+25865,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBit(c+25873,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBus(c+25881,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+25889,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBit(c+25897,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBit(c+25905,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBit(c+25913,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBit(c+25921,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBit(c+25929,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBus(c+25937,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+25945,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBit(c+25953,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBus(c+25961,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+25969,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBit(c+25977,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBus(c+25985,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+25993,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBit(c+26001,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBus(c+26009,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+26017,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBit(c+26025,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBus(c+26033,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+26041,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBit(c+26049,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBus(c+26057,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+26065,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBit(c+26073,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBus(c+26081,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+26089,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBit(c+26097,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBus(c+26105,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+26113,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBit(c+26121,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBus(c+26129,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+26137,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBit(c+26145,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBit(c+26153,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_22__DOT__qe));
        vcdp->chgBit(c+26161,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_23__DOT__qe));
        vcdp->chgBit(c+26169,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio4__DOT__qe));
        vcdp->chgBit(c+26177,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio5__DOT__qe));
        vcdp->chgBit(c+26185,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio20__DOT__qe));
        vcdp->chgBit(c+26193,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio21__DOT__qe));
        vcdp->chgBit(c+26201,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_5__DOT__qe));
        vcdp->chgBit(c+26209,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_6__DOT__qe));
        vcdp->chgBit(c+26217,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_21__DOT__qe));
        vcdp->chgBit(c+26225,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_22__DOT__qe));
        vcdp->chgBit(c+26233,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_25__DOT__qe));
        vcdp->chgBit(c+26241,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__qe));
        vcdp->chgBit(c+26249,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_27__DOT__qe));
        vcdp->chgBit(c+26257,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_28__DOT__qe));
        vcdp->chgBit(c+26265,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_29__DOT__qe));
        vcdp->chgBit(c+26273,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_30__DOT__qe));
    }
}

void Vsoc_top::traceChgThis__177(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+26281,(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                               & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)))));
        vcdp->chgBit(c+26289,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q));
        vcdp->chgBit(c+26297,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_jump_set_done_q));
        vcdp->chgBus(c+26305,(((IData)(1U) << (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))),32);
        vcdp->chgBus(c+26313,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q),32);
        vcdp->chgBus(c+26321,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q),32);
        vcdp->chgBus(c+26329,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q),5);
        vcdp->chgBit(c+26337,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q));
        vcdp->chgBit(c+26345,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_q));
        vcdp->chgBit(c+26353,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBit(c+26361,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBus(c+26369,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+26377,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBit(c+26385,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBit(c+26393,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio0__DOT__qe));
        vcdp->chgBit(c+26401,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio15__DOT__qe));
        vcdp->chgBit(c+26409,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio30__DOT__qe));
        vcdp->chgBit(c+26417,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_15__DOT__qe));
    }
}

void Vsoc_top::traceChgThis__178(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+26425,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q),32);
        vcdp->chgBus(c+26433,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rdata),32);
        vcdp->chgBit(c+26441,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__error));
        vcdp->chgBus(c+26449,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rspop),3);
        vcdp->chgBus(c+26457,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+26465,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBit(c+26473,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBit(c+26481,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBit(c+26489,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBit(c+26497,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBit(c+26505,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBit(c+26513,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBit(c+26521,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBit(c+26529,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBus(c+26537,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__ia),32);
        vcdp->chgBus(c+26545,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q),32);
        vcdp->chgBit(c+26553,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_24__DOT__qe));
        vcdp->chgBit(c+26561,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio6__DOT__qe));
        vcdp->chgBit(c+26569,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio22__DOT__qe));
        vcdp->chgBit(c+26577,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__qe));
        vcdp->chgBit(c+26585,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_31__DOT__qe));
    }
}

void Vsoc_top::traceChgThis__179(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+26593,(((QData)((IData)(vlTOPp->soc_top__DOT__intr_gpio)) 
                                << 1U)),33);
        vcdp->chgBus(c+26609,(vlTOPp->soc_top__DOT__intr_gpio),32);
        vcdp->chgBit(c+26617,(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_rsp_pending));
        vcdp->chgBus(c+26625,((0xfffffffeU & (vlTOPp->soc_top__DOT__intr_gpio 
                                              << 1U))),32);
    }
}

void Vsoc_top::traceChgThis__180(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+26633,((1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                     >> 1U))));
        vcdp->chgBit(c+26641,((1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                     >> 2U))));
        vcdp->chgBus(c+26649,((7U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                     >> 3U))),3);
        vcdp->chgBit(c+26657,((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q))));
        vcdp->chgBus(c+26665,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q),32);
        vcdp->chgBus(c+26673,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q),32);
        vcdp->chgBus(c+26681,((0xffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)),8);
        vcdp->chgBit(c+26689,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q));
        vcdp->chgBus(c+26697,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__genblk1__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q),2);
        vcdp->chgBus(c+26705,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q),32);
        vcdp->chgBus(c+26713,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q),32);
        vcdp->chgBus(c+26721,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q),32);
        vcdp->chgBus(c+26729,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q),32);
        vcdp->chgBus(c+26737,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q),32);
        vcdp->chgBus(c+26745,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q),6);
        vcdp->chgBus(c+26753,((0xfffffff8U | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),32);
        vcdp->chgBus(c+26761,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q),3);
        vcdp->chgBus(c+26769,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q),6);
        vcdp->chgQuad(c+26777,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q),64);
        vcdp->chgQuad(c+26793,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q),64);
        vcdp->chgBit(c+26809,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__q));
        vcdp->chgBit(c+26817,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__q));
        vcdp->chgBit(c+26825,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__q));
        vcdp->chgBit(c+26833,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__q));
    }
}

void Vsoc_top::traceChgThis__181(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+26841,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_fetch_err_plus2));
        vcdp->chgBus(c+26849,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q),32);
        vcdp->chgBus(c+26857,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q),32);
    }
}

void Vsoc_top::traceChgThis__182(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+26865,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q),32);
        vcdp->chgBit(c+26873,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q));
        vcdp->chgBus(c+26881,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q),6);
    }
}

void Vsoc_top::traceChgThis__183(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+26889,((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                               << 1U)),32);
        vcdp->chgBus(c+26897,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q),31);
    }
}

void Vsoc_top::traceChgThis__184(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+26905,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_q));
        vcdp->chgBit(c+26913,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_enable__DOT__qe));
        vcdp->chgBit(c+26921,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_rising__DOT__qe));
        vcdp->chgBit(c+26929,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_falling__DOT__qe));
        vcdp->chgBit(c+26937,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_lvlhigh__DOT__qe));
        vcdp->chgBit(c+26945,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_lvllow__DOT__qe));
        vcdp->chgBit(c+26953,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio31__DOT__qe));
    }
}

void Vsoc_top::traceChgThis__185(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+26961,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_c_id),16);
    }
}

void Vsoc_top::traceChgThis__186(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+26969,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q),2);
        vcdp->chgBus(c+26977,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q),2);
        vcdp->chgBus(c+26985,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_q),2);
        vcdp->chgBus(c+26993,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q),3);
    }
}

void Vsoc_top::traceChgThis__187(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgArray(c+27001,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q),96);
    }
}

void Vsoc_top::traceChgThis__188(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+27025,((3U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                     >> 1U))),2);
        vcdp->chgBus(c+27033,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q),3);
    }
}

void Vsoc_top::traceChgThis__189(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+27041,(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q),3);
    }
}

void Vsoc_top::traceChgThis__190(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+27049,(vlTOPp->soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk2__DOT__source_q),8);
        vcdp->chgBit(c+27057,(vlTOPp->soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk2__DOT__source_q));
    }
}

void Vsoc_top::traceChgThis__191(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+27065,((0xfffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__cio_gpio_q)),20);
        vcdp->chgBus(c+27073,(vlTOPp->soc_top__DOT__gpio_32__DOT__cio_gpio_q),32);
        vcdp->chgBus(c+27081,(vlTOPp->soc_top__DOT__gpio_32__DOT__cio_gpio_en_q),32);
        vcdp->chgBus(c+27089,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__q),32);
        vcdp->chgBit(c+27097,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_state__DOT__qe));
        vcdp->chgBus(c+27105,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+27113,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBus(c+27121,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+27129,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBus(c+27137,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+27145,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBus(c+27153,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+27161,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBus(c+27169,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+27177,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBus(c+27185,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+27193,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBus(c+27201,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+27209,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBit(c+27217,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_25__DOT__qe));
        vcdp->chgBit(c+27225,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_26__DOT__qe));
        vcdp->chgBit(c+27233,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_27__DOT__qe));
        vcdp->chgBit(c+27241,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_28__DOT__qe));
        vcdp->chgBit(c+27249,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_29__DOT__qe));
        vcdp->chgBit(c+27257,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_30__DOT__qe));
        vcdp->chgBit(c+27265,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_31__DOT__qe));
        vcdp->chgBit(c+27273,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio8__DOT__qe));
        vcdp->chgBit(c+27281,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio9__DOT__qe));
        vcdp->chgBit(c+27289,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio10__DOT__qe));
        vcdp->chgBit(c+27297,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio11__DOT__qe));
        vcdp->chgBit(c+27305,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio12__DOT__qe));
        vcdp->chgBit(c+27313,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio13__DOT__qe));
        vcdp->chgBit(c+27321,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio14__DOT__qe));
        vcdp->chgBit(c+27329,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio23__DOT__qe));
        vcdp->chgBit(c+27337,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio24__DOT__qe));
        vcdp->chgBit(c+27345,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio25__DOT__qe));
        vcdp->chgBit(c+27353,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio26__DOT__qe));
        vcdp->chgBit(c+27361,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio27__DOT__qe));
        vcdp->chgBit(c+27369,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio28__DOT__qe));
        vcdp->chgBit(c+27377,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio29__DOT__qe));
        vcdp->chgBit(c+27385,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_8__DOT__qe));
        vcdp->chgBit(c+27393,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_9__DOT__qe));
        vcdp->chgBit(c+27401,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_10__DOT__qe));
        vcdp->chgBit(c+27409,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_11__DOT__qe));
        vcdp->chgBit(c+27417,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_12__DOT__qe));
        vcdp->chgBit(c+27425,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_13__DOT__qe));
        vcdp->chgBit(c+27433,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_14__DOT__qe));
        vcdp->chgBit(c+27441,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_threshold0__DOT__qe));
        vcdp->chgBit(c+27449,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_msip0__DOT__qe));
    }
}

void Vsoc_top::traceChgThis__192(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+27457,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__q));
        vcdp->chgBit(c+27465,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__q));
        vcdp->chgBit(c+27473,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__q));
        vcdp->chgBit(c+27481,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__q));
        vcdp->chgBit(c+27489,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__q));
        vcdp->chgBit(c+27497,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__q));
        vcdp->chgBit(c+27505,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__q));
        vcdp->chgBit(c+27513,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__q));
        vcdp->chgBit(c+27521,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__q));
        vcdp->chgBit(c+27529,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__q));
        vcdp->chgBit(c+27537,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__q));
        vcdp->chgBit(c+27545,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__q));
        vcdp->chgBit(c+27553,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__q));
        vcdp->chgBit(c+27561,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__q));
        vcdp->chgBit(c+27569,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__q));
        vcdp->chgBit(c+27577,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__q));
        vcdp->chgBit(c+27585,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__q));
        vcdp->chgBit(c+27593,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__q));
        vcdp->chgBit(c+27601,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__q));
        vcdp->chgBit(c+27609,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__q));
        vcdp->chgBit(c+27617,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__q));
        vcdp->chgBit(c+27625,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__q));
        vcdp->chgBit(c+27633,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__q));
        vcdp->chgBit(c+27641,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__q));
        vcdp->chgBit(c+27649,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__q));
        vcdp->chgBit(c+27657,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__q));
        vcdp->chgBit(c+27665,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__q));
        vcdp->chgBit(c+27673,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__q));
    }
}

void Vsoc_top::traceChgThis__193(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+27681,(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__qe));
        vcdp->chgBus(c+27689,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+27697,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBit(c+27705,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q));
        vcdp->chgBus(c+27713,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+27721,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBus(c+27729,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+27737,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBus(c+27745,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+27753,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBus(c+27761,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+27769,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBus(c+27777,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+27785,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBus(c+27793,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+27801,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBus(c+27809,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+27817,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBus(c+27825,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q),4);
        vcdp->chgBit(c+27833,(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__filter_q));
        vcdp->chgBit(c+27841,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_0__DOT__qe));
        vcdp->chgBit(c+27849,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_1__DOT__qe));
        vcdp->chgBit(c+27857,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_2__DOT__qe));
        vcdp->chgBit(c+27865,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_3__DOT__qe));
        vcdp->chgBit(c+27873,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_4__DOT__qe));
        vcdp->chgBit(c+27881,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_5__DOT__qe));
        vcdp->chgBit(c+27889,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_6__DOT__qe));
        vcdp->chgBit(c+27897,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_7__DOT__qe));
        vcdp->chgBit(c+27905,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_8__DOT__qe));
        vcdp->chgBit(c+27913,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_9__DOT__qe));
        vcdp->chgBit(c+27921,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_10__DOT__qe));
        vcdp->chgBit(c+27929,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_11__DOT__qe));
        vcdp->chgBit(c+27937,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_12__DOT__qe));
        vcdp->chgBit(c+27945,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_13__DOT__qe));
        vcdp->chgBit(c+27953,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_14__DOT__qe));
        vcdp->chgBit(c+27961,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_15__DOT__qe));
        vcdp->chgBit(c+27969,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_16__DOT__qe));
        vcdp->chgBit(c+27977,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_17__DOT__qe));
        vcdp->chgBit(c+27985,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_18__DOT__qe));
        vcdp->chgBit(c+27993,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_19__DOT__qe));
        vcdp->chgBit(c+28001,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_20__DOT__qe));
        vcdp->chgBit(c+28009,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_21__DOT__qe));
        vcdp->chgBit(c+28017,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio1__DOT__qe));
        vcdp->chgBit(c+28025,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio2__DOT__qe));
        vcdp->chgBit(c+28033,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio3__DOT__qe));
        vcdp->chgBit(c+28041,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__qe));
        vcdp->chgBit(c+28049,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio16__DOT__qe));
        vcdp->chgBit(c+28057,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio17__DOT__qe));
        vcdp->chgBit(c+28065,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio18__DOT__qe));
        vcdp->chgBit(c+28073,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio19__DOT__qe));
        vcdp->chgBit(c+28081,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_0__DOT__qe));
        vcdp->chgBit(c+28089,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_1__DOT__qe));
        vcdp->chgBit(c+28097,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_2__DOT__qe));
        vcdp->chgBit(c+28105,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_3__DOT__qe));
        vcdp->chgBit(c+28113,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_4__DOT__qe));
        vcdp->chgBit(c+28121,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_16__DOT__qe));
        vcdp->chgBit(c+28129,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_17__DOT__qe));
        vcdp->chgBit(c+28137,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_18__DOT__qe));
        vcdp->chgBit(c+28145,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_19__DOT__qe));
        vcdp->chgBit(c+28153,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_20__DOT__qe));
        vcdp->chgBit(c+28161,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_23__DOT__qe));
        vcdp->chgBit(c+28169,(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_24__DOT__qe));
    }
}

void Vsoc_top::traceChgThis__194(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+28177,(vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_q),32);
    }
}

void Vsoc_top::traceChgThis__195(Vsoc_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsoc_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+28185,(vlTOPp->clk_i));
        vcdp->chgBit(c+28193,(vlTOPp->rst_ni));
        vcdp->chgBus(c+28201,(vlTOPp->gpio_i),20);
        vcdp->chgBus(c+28209,(vlTOPp->gpio_o),20);
        vcdp->chgBus(c+28217,(vlTOPp->gpio_i),32);
        vcdp->chgBit(c+28225,((1U & vlTOPp->gpio_i)));
        vcdp->chgBit(c+28233,((1U & ((1U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q)
                                      : vlTOPp->gpio_i))));
        vcdp->chgBit(c+28241,((1U & (vlTOPp->gpio_i 
                                     >> 1U))));
        vcdp->chgBit(c+28249,((1U & ((2U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 1U)))));
        vcdp->chgBit(c+28257,((1U & (vlTOPp->gpio_i 
                                     >> 2U))));
        vcdp->chgBit(c+28265,((1U & ((4U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 2U)))));
        vcdp->chgBit(c+28273,((1U & (vlTOPp->gpio_i 
                                     >> 3U))));
        vcdp->chgBit(c+28281,((1U & ((8U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 3U)))));
        vcdp->chgBit(c+28289,((1U & (vlTOPp->gpio_i 
                                     >> 4U))));
        vcdp->chgBit(c+28297,((1U & ((0x10U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 4U)))));
        vcdp->chgBit(c+28305,((1U & (vlTOPp->gpio_i 
                                     >> 5U))));
        vcdp->chgBit(c+28313,((1U & ((0x20U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 5U)))));
        vcdp->chgBit(c+28321,((1U & (vlTOPp->gpio_i 
                                     >> 6U))));
        vcdp->chgBit(c+28329,((1U & ((0x40U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 6U)))));
        vcdp->chgBit(c+28337,((1U & (vlTOPp->gpio_i 
                                     >> 7U))));
        vcdp->chgBit(c+28345,((1U & ((0x80U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 7U)))));
        vcdp->chgBit(c+28353,((1U & (vlTOPp->gpio_i 
                                     >> 8U))));
        vcdp->chgBit(c+28361,((1U & ((0x100U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 8U)))));
        vcdp->chgBit(c+28369,((1U & (vlTOPp->gpio_i 
                                     >> 9U))));
        vcdp->chgBit(c+28377,((1U & ((0x200U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 9U)))));
        vcdp->chgBit(c+28385,((1U & (vlTOPp->gpio_i 
                                     >> 0xaU))));
        vcdp->chgBit(c+28393,((1U & ((0x400U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 0xaU)))));
        vcdp->chgBit(c+28401,((1U & (vlTOPp->gpio_i 
                                     >> 0xbU))));
        vcdp->chgBit(c+28409,((1U & ((0x800U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 0xbU)))));
        vcdp->chgBit(c+28417,((1U & (vlTOPp->gpio_i 
                                     >> 0xcU))));
        vcdp->chgBit(c+28425,((1U & ((0x1000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 0xcU)))));
        vcdp->chgBit(c+28433,((1U & (vlTOPp->gpio_i 
                                     >> 0xdU))));
        vcdp->chgBit(c+28441,((1U & ((0x2000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 0xdU)))));
        vcdp->chgBit(c+28449,((1U & (vlTOPp->gpio_i 
                                     >> 0xeU))));
        vcdp->chgBit(c+28457,((1U & ((0x4000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 0xeU)))));
        vcdp->chgBit(c+28465,((1U & (vlTOPp->gpio_i 
                                     >> 0xfU))));
        vcdp->chgBit(c+28473,((1U & ((0x8000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 0xfU)))));
        vcdp->chgBit(c+28481,((1U & (vlTOPp->gpio_i 
                                     >> 0x10U))));
        vcdp->chgBit(c+28489,((1U & ((0x10000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 0x10U)))));
        vcdp->chgBit(c+28497,((1U & (vlTOPp->gpio_i 
                                     >> 0x11U))));
        vcdp->chgBit(c+28505,((1U & ((0x20000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 0x11U)))));
        vcdp->chgBit(c+28513,((1U & (vlTOPp->gpio_i 
                                     >> 0x12U))));
        vcdp->chgBit(c+28521,((1U & ((0x40000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 0x12U)))));
        vcdp->chgBit(c+28529,((1U & (vlTOPp->gpio_i 
                                     >> 0x13U))));
        vcdp->chgBit(c+28537,((1U & ((0x80000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 0x13U)))));
        vcdp->chgBit(c+28545,((1U & (vlTOPp->gpio_i 
                                     >> 0x14U))));
        vcdp->chgBit(c+28553,((1U & ((0x100000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 0x14U)))));
        vcdp->chgBit(c+28561,((1U & (vlTOPp->gpio_i 
                                     >> 0x15U))));
        vcdp->chgBit(c+28569,((1U & ((0x200000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 0x15U)))));
        vcdp->chgBit(c+28577,((1U & (vlTOPp->gpio_i 
                                     >> 0x16U))));
        vcdp->chgBit(c+28585,((1U & ((0x400000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 0x16U)))));
        vcdp->chgBit(c+28593,((1U & (vlTOPp->gpio_i 
                                     >> 0x17U))));
        vcdp->chgBit(c+28601,((1U & ((0x800000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 0x17U)))));
        vcdp->chgBit(c+28609,((1U & (vlTOPp->gpio_i 
                                     >> 0x18U))));
        vcdp->chgBit(c+28617,((1U & ((0x1000000U & 
                                      vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 0x18U)))));
        vcdp->chgBit(c+28625,((1U & (vlTOPp->gpio_i 
                                     >> 0x19U))));
        vcdp->chgBit(c+28633,((1U & ((0x2000000U & 
                                      vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 0x19U)))));
        vcdp->chgBit(c+28641,((1U & (vlTOPp->gpio_i 
                                     >> 0x1aU))));
        vcdp->chgBit(c+28649,((1U & ((0x4000000U & 
                                      vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 0x1aU)))));
        vcdp->chgBit(c+28657,((1U & (vlTOPp->gpio_i 
                                     >> 0x1bU))));
        vcdp->chgBit(c+28665,((1U & ((0x8000000U & 
                                      vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 0x1bU)))));
        vcdp->chgBit(c+28673,((1U & (vlTOPp->gpio_i 
                                     >> 0x1cU))));
        vcdp->chgBit(c+28681,((1U & ((0x10000000U & 
                                      vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 0x1cU)))));
        vcdp->chgBit(c+28689,((1U & (vlTOPp->gpio_i 
                                     >> 0x1dU))));
        vcdp->chgBit(c+28697,((1U & ((0x20000000U & 
                                      vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 0x1dU)))));
        vcdp->chgBit(c+28705,((1U & (vlTOPp->gpio_i 
                                     >> 0x1eU))));
        vcdp->chgBit(c+28713,((1U & ((0x40000000U & 
                                      vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 0x1eU)))));
        vcdp->chgBit(c+28721,((1U & (vlTOPp->gpio_i 
                                     >> 0x1fU))));
        vcdp->chgBit(c+28729,((1U & ((0x80000000U & 
                                      vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                      ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q)
                                      : (vlTOPp->gpio_i 
                                         >> 0x1fU)))));
        vcdp->chgBus(c+28737,(((IData)(vlTOPp->rst_ni)
                                ? vlTOPp->soc_top__DOT__iccm__DOT__rdata
                                : 0U)),32);
        vcdp->chgBus(c+28745,((((IData)(vlTOPp->rst_ni)
                                 ? vlTOPp->soc_top__DOT__iccm__DOT__rdata
                                 : 0U) & vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask)),32);
    }
}
