// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top.h"
#include "Vsoc_top__Syms.h"

#ifdef VL_DEBUG
void Vsoc_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((gpio_i & 0xfff00000U))) {
        Verilated::overWidthError("gpio_i");}
}
#endif  // VL_DEBUG

void Vsoc_top::__Vmtask__12(bool even_cycle, void* symtab) {
    Vsoc_top__Syms* __restrict vlSymsp = (Vsoc_top__Syms*)symtab;
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(12);
    vlTOPp->_combo__TOP__4(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_15.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_17.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(16);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__14(vlSymsp);
    }
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__15(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__19(vlSymsp);
        vlTOPp->__Vm_traceActivity[4U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_19.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_4.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_11.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(10);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__35(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xdU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_25.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_6.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_8.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(7);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__64(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x1dU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_9.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_1.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_2.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_22.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(22);
    if ((((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__49(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x13U] = 1U;
    }
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__50(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__51(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x14U] = 1U;
    }
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__52(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__53(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_20.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_14.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(14);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__67(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x1fU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_41.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_3.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_27.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(27);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__55(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x16U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_34.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_28.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(28);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__56(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x17U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_34.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_29.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(29);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__57(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x18U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_34.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_30.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(30);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__58(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x19U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_34.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_21.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(21);
    if ((((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__86(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x26U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_32.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_40.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(40);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__103(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x32U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_49.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_68.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_48.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_38.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_44.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(44);
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__157(vlSymsp);
    }
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__158(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x4bU] = 1U;
    }
    vlTOPp->_combo__TOP__159(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x4cU] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_46.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(46);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__160(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_67.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(67);
    vlTOPp->_combo__TOP__125(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x38U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_43.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(43);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__181(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x58U] = 1U;
    }
    vlTOPp->_combo__TOP__182(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vsoc_top::__Vmtask__15(bool even_cycle, void* symtab) {
    Vsoc_top__Syms* __restrict vlSymsp = (Vsoc_top__Syms*)symtab;
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vlTOPp->__Vm_mt_15.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(15);
    if (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    if ((((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__9(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    if ((((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->__Vm_traceActivity[3U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_4.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_19.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(19);
    if (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__21(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__22(vlSymsp);
        vlTOPp->__Vm_traceActivity[6U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_22.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_23.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(23);
    if ((((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__23(vlSymsp);
        vlTOPp->__Vm_traceActivity[7U] = 1U;
    }
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__24(vlSymsp);
        vlTOPp->__Vm_traceActivity[8U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_21.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_25.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(25);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__54(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x15U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_27.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_28.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_29.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_30.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_31.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_40.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_20.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(20);
    if (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__70(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x20U] = 1U;
    }
    if ((((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__71(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x21U] = 1U;
    }
    if ((((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__73(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__75(vlSymsp);
    }
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__76(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__77(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x22U] = 1U;
    }
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__78(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__79(vlSymsp);
    }
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__80(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__81(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x23U] = 1U;
    }
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__82(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__83(vlSymsp);
    }
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__84(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x24U] = 1U;
    }
    if ((((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__85(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x25U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_40.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_2.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(2);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__129(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x3cU] = 1U;
    }
    vlTOPp->_combo__TOP__130(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x3dU] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_33.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(33);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__148(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x46U] = 1U;
    }
    vlTOPp->_combo__TOP__149(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x47U] = 1U;
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__150(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x48U] = 1U;
    }
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__151(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x49U] = 1U;
    }
    vlTOPp->_combo__TOP__152(vlSymsp);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__153(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x4aU] = 1U;
    }
    vlTOPp->_combo__TOP__154(vlSymsp);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__155(vlSymsp);
    }
    vlTOPp->_combo__TOP__156(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_44.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_48.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_26.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(13);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__162(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x4eU] = 1U;
    }
    vlTOPp->_combo__TOP__163(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x4fU] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_42.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_43.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_32.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(32);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__172(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x53U] = 1U;
    }
    if ((((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__173(vlSymsp);
    }
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__174(vlSymsp);
    }
    vlTOPp->_combo__TOP__175(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x54U] = 1U;
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__176(vlSymsp);
    }
    vlTOPp->_combo__TOP__177(vlSymsp);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__178(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x55U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_38.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_69.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_68.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(68);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__126(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x39U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_69.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_53.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(53);
    vlTOPp->_combo__TOP__111(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_55.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(55);
    vlTOPp->_combo__TOP__113(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_58.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(58);
    vlTOPp->_combo__TOP__116(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_60.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(60);
    vlTOPp->_combo__TOP__118(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_62.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(62);
    vlTOPp->_combo__TOP__120(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_63.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(63);
    vlTOPp->_combo__TOP__121(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_64.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(64);
    vlTOPp->_combo__TOP__122(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x36U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_67.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(66);
    vlTOPp->_combo__TOP__124(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x37U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(65);
    vlTOPp->_combo__TOP__123(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vsoc_top::__Vmtask__17(bool even_cycle, void* symtab) {
    Vsoc_top__Syms* __restrict vlSymsp = (Vsoc_top__Syms*)symtab;
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vlTOPp->__Vm_mt_17.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(17);
    if ((((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__20(vlSymsp);
        vlTOPp->__Vm_traceActivity[5U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_23.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_11.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(11);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__36(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xeU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_14.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_2.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_5.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_6.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(6);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__62(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x1bU] = 1U;
    }
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__63(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x1cU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_14.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_2.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_9.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(9);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__66(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_34.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(24);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__87(vlSymsp);
    }
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__88(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__89(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x27U] = 1U;
    }
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__90(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x28U] = 1U;
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__91(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x29U] = 1U;
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__93(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x2aU] = 1U;
    }
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__94(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__95(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x2bU] = 1U;
    }
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__96(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__97(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x2cU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_39.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_40.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_33.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_1.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(1);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__127(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x3aU] = 1U;
    }
    vlTOPp->_combo__TOP__128(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x3bU] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_33.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_35.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(35);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__99(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x2eU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_36.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(36);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__100(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x2fU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_41.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(41);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__104(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x33U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_45.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_46.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_42.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_43.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_47.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(47);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__106(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_50.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_51.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_52.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_53.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_54.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_55.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_56.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_57.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_58.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_59.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_60.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_61.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_62.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_63.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_38.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(38);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__179(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x56U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_49.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(49);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__107(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x35U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_48.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(48);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__161(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x4dU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vsoc_top::__Vmtask__4(bool even_cycle, void* symtab) {
    Vsoc_top__Syms* __restrict vlSymsp = (Vsoc_top__Syms*)symtab;
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vlTOPp->__Vm_mt_4.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(4);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__25(vlSymsp);
        vlTOPp->__Vm_traceActivity[9U] = 1U;
    }
    if ((((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__28(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__29(vlSymsp);
    }
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__31(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__32(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xcU] = 1U;
    }
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__33(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__34(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_22.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_47.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_8.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(8);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__65(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x1eU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_9.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_14.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_1.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_2.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(18);
    if (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__40(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xfU] = 1U;
    }
    if ((((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__41(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x10U] = 1U;
    }
    if ((((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__43(vlSymsp);
    }
    if (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__44(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x11U] = 1U;
    }
    if ((((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__45(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x12U] = 1U;
    }
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__46(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__48(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_20.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_5.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(5);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__133(vlSymsp);
    }
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__134(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__135(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x3fU] = 1U;
    }
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__136(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x40U] = 1U;
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__137(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x41U] = 1U;
    }
    vlTOPp->_combo__TOP__139(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x42U] = 1U;
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__140(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x43U] = 1U;
    }
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__141(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__142(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x44U] = 1U;
    }
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__143(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__144(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x45U] = 1U;
    }
    vlTOPp->_combo__TOP__145(vlSymsp);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__146(vlSymsp);
    }
    vlTOPp->_combo__TOP__147(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_33.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_46.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_31.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(31);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__59(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x1aU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_34.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(34);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__98(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x2dU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_35.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_36.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(37);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__101(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x30U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_41.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_39.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(39);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__102(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x31U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_44.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_32.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_3.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(3);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__131(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x3eU] = 1U;
    }
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__132(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_43.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_45.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(45);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__105(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x34U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_53.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_55.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_58.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_60.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_62.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_63.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_50.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(50);
    vlTOPp->_combo__TOP__108(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_64.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_51.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(51);
    vlTOPp->_combo__TOP__109(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_64.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_52.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(52);
    vlTOPp->_combo__TOP__110(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_64.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_54.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(54);
    vlTOPp->_combo__TOP__112(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_64.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_56.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(56);
    vlTOPp->_combo__TOP__114(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_64.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_59.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(59);
    vlTOPp->_combo__TOP__117(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_64.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_61.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(61);
    vlTOPp->_combo__TOP__119(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_64.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_57.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(57);
    vlTOPp->_combo__TOP__115(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_64.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_42.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(42);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__180(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x57U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_26.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(26);
    vlTOPp->_combo__TOP__164(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x50U] = 1U;
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__165(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x51U] = 1U;
    }
    vlTOPp->_combo__TOP__166(vlSymsp);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__167(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x52U] = 1U;
    }
    vlTOPp->_combo__TOP__168(vlSymsp);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__169(vlSymsp);
    }
    vlTOPp->_combo__TOP__170(vlSymsp);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__171(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_69.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(69);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__183(vlSymsp);
    }
    vlTOPp->_combo__TOP__184(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x59U] = 1U;
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__185(vlSymsp);
    }
    vlTOPp->_combo__TOP__186(vlSymsp);
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__187(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x5aU] = 1U;
    }
    vlTOPp->_combo__TOP__188(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}
