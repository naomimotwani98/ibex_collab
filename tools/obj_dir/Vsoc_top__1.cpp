// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top.h"
#include "Vsoc_top__Syms.h"

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__87(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__87\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__u_tempsense__DOT__error = 0U;
    vlTOPp->soc_top__DOT__u_tempsense__DOT__error = 0U;
    vlTOPp->__Vdly__soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__88(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__88\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0 = 0U;
    vlTOPp->__Vdlyvset__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1 = 0U;
    vlTOPp->__Vdlyvset__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2 = 0U;
    vlTOPp->__Vdlyvset__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3 = 0U;
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__89(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__89\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q 
        = vlTOPp->rst_ni;
    if ((1U & (~ (IData)(vlTOPp->rst_ni)))) {
        vlTOPp->soc_top__DOT__u_tempsense__DOT__rdata = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->rst_ni)))) {
        vlTOPp->soc_top__DOT__u_tempsense__DOT__error = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rspop 
                = ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rspop = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rdata 
                = ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)
                    ? 0xffffffffU : vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next);
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rdata = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__error 
                = (((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re) 
                      | (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                     & (~ (IData)((0U != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))))) 
                    | (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                   | (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__error = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlTOPp->__Vdly__soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                = (7U & ((3U == (3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))
                          ? (4U & ((~ ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                       >> 2U)) << 2U))
                          : ((IData)(1U) + (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        }
    } else {
        vlTOPp->__Vdly__soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (((~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
             & ((IData)((0x800U == (0x1c00U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack)))) {
            vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = (7U & ((3U == (3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                          ? (4U & ((~ ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                       >> 2U)) << 2U))
                          : ((IData)(1U) + (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
    } else {
        vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                = (7U & ((3U == (3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))
                          ? (4U & ((~ ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                       >> 2U)) << 2U))
                          : ((IData)(1U) + (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        }
    } else {
        vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                = (7U & ((3U == (3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))
                          ? (4U & ((~ ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                       >> 2U)) << 2U))
                          : ((IData)(1U) + (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        }
    } else {
        vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (((~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
             & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))) {
            vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = (7U & ((3U == (3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                          ? (4U & ((~ ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                       >> 2U)) << 2U))
                          : ((IData)(1U) + (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
    } else {
        vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (((~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
             & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))) {
            vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = (7U & ((3U == (3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                          ? (4U & ((~ ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                       >> 2U)) << 2U))
                          : ((IData)(1U) + (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
    } else {
        vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__90(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__90\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_d));
    if (vlTOPp->soc_top__DOT__dccm__DOT__req) {
        if ((1U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_we))) {
            vlTOPp->__Vdlyvval__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0 
                = (0xffU & vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int);
            vlTOPp->__Vdlyvset__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0 = 1U;
            vlTOPp->__Vdlyvlsb__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0 = 0U;
            vlTOPp->__Vdlyvdim0__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0 
                = vlTOPp->soc_top__DOT__dccm__DOT__addr;
        }
        if ((2U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_we))) {
            vlTOPp->__Vdlyvval__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1 
                = (0xffU & (vlTOPp->soc_top__DOT__dccm__DOT__rdata 
                            >> 8U));
            vlTOPp->__Vdlyvset__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1 = 1U;
            vlTOPp->__Vdlyvlsb__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1 = 8U;
            vlTOPp->__Vdlyvdim0__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1 
                = vlTOPp->soc_top__DOT__dccm__DOT__addr;
        }
        if ((4U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_we))) {
            vlTOPp->__Vdlyvval__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2 
                = (0xffU & (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int 
                            >> 0x10U));
            vlTOPp->__Vdlyvset__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2 = 1U;
            vlTOPp->__Vdlyvlsb__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2 = 0x10U;
            vlTOPp->__Vdlyvdim0__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2 
                = vlTOPp->soc_top__DOT__dccm__DOT__addr;
        }
        if ((8U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_we))) {
            vlTOPp->__Vdlyvval__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3 
                = (0xffU & (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int 
                            >> 0x18U));
            vlTOPp->__Vdlyvset__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3 = 1U;
            vlTOPp->__Vdlyvlsb__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3 = 0x18U;
            vlTOPp->__Vdlyvdim0__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3 
                = vlTOPp->soc_top__DOT__dccm__DOT__addr;
        }
    }
    vlTOPp->soc_top__DOT__dccm__DOT__rvalid = ((IData)(vlTOPp->rst_ni) 
                                               & ((~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__we)) 
                                                  & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__req)));
    if (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT____Vlvbound1 
            = ((QData)((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
               << 1U);
        if ((0x83U >= (0xffU & ((IData)(0x21U) * (3U 
                                                  & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            VL_ASSIGNSEL_WIIQ(132,33,(0xffU & ((IData)(0x21U) 
                                               * (3U 
                                                  & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))), vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage, vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT____Vlvbound1);
        }
    }
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__91(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__91\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst_ni) {
        vlTOPp->soc_top__DOT__u_tempsense__DOT__DONE_REG 
            = vlTOPp->soc_top__DOT__u_tempsense__DOT__DONE;
    }
    if (vlTOPp->rst_ni) {
        vlTOPp->soc_top__DOT__u_tempsense__DOT__DOUT_REG 
            = (1U & vlTOPp->soc_top__DOT__u_tempsense__DOT____Vcellout__u_tempsenseInst__DOUT);
    }
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->__Vdly__soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__93(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__93\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (4U ^ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->soc_top__DOT__tsen1_to_xbar = (((QData)((IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__outstanding)) 
                                            << 0x33U) 
                                           | (((QData)((IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__rspop)) 
                                               << 0x30U) 
                                              | (((QData)((IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__reqsz)) 
                                                  << 0x2bU) 
                                                 | (((QData)((IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__reqid)) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__rdata)) 
                                                        << 2U) 
                                                       | (QData)((IData)(
                                                                         (((IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__error) 
                                                                           << 1U) 
                                                                          | (1U 
                                                                             & (~ (IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__outstanding)))))))))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
        = (((QData)((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)) 
            << 0x33U) | (((QData)((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rspop)) 
                          << 0x30U) | (((QData)((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqsz)) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqid)) 
                                         << 0x23U) 
                                        | (((QData)((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__error) 
                                                               << 1U) 
                                                              | (1U 
                                                                 & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)))))))))));
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (4U ^ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (4U ^ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__94(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__94\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->soc_top__DOT__dccm__DOT__req) {
        vlTOPp->soc_top__DOT__dccm__DOT__rdata = vlTOPp->soc_top__DOT__dccm__DOT__dccm__DOT__mem
            [vlTOPp->soc_top__DOT__dccm__DOT__addr];
    }
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__95(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__95\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
        = ((0xff803ffffffffULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o) 
           | ((QData)((IData)(((IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_source) 
                               << 1U))) << 0x22U));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
        = ((0xf07ffffffffffULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o) 
           | ((QData)((IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_size)) 
              << 0x2bU));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
        = ((0x8ffffffffffffULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o) 
           | ((QData)((IData)(((4U == (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_opcode))
                                ? 1U : 0U))) << 0x30U));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_rsp_pending 
        = vlTOPp->__Vdly__soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_rsp_pending;
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h[1U] 
        = vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h;
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h[6U] 
        = vlTOPp->soc_top__DOT__tsen1_to_xbar;
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h[9U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h;
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o 
        = ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                        * (3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                     ? (0x1fffU & (IData)((vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                           >> (0x3fU 
                                               & ((IData)(0xdU) 
                                                  * 
                                                  (3U 
                                                   & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                     : 0U));
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid 
        = ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__rvalid) 
           & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)));
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o 
        = ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : ((0x13U >= (0x1fU & ((IData)(5U) 
                                        * (3U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                     ? (0x1fU & (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                 >> (0x1fU & ((IData)(5U) 
                                              * (3U 
                                                 & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                     : 0U));
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__96(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__96\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0) {
        vlTOPp->soc_top__DOT__dccm__DOT__dccm__DOT__mem[vlTOPp->__Vdlyvdim0__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlTOPp->__Vdlyvlsb__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0))) 
                & vlTOPp->soc_top__DOT__dccm__DOT__dccm__DOT__mem
                [vlTOPp->__Vdlyvdim0__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0]) 
               | (0xffffffffULL & ((IData)(vlTOPp->__Vdlyvval__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0) 
                                   << (IData)(vlTOPp->__Vdlyvlsb__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0))));
    }
    if (vlTOPp->__Vdlyvset__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1) {
        vlTOPp->soc_top__DOT__dccm__DOT__dccm__DOT__mem[vlTOPp->__Vdlyvdim0__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlTOPp->__Vdlyvlsb__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1))) 
                & vlTOPp->soc_top__DOT__dccm__DOT__dccm__DOT__mem
                [vlTOPp->__Vdlyvdim0__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1]) 
               | (0xffffffffULL & ((IData)(vlTOPp->__Vdlyvval__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1) 
                                   << (IData)(vlTOPp->__Vdlyvlsb__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1))));
    }
    if (vlTOPp->__Vdlyvset__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2) {
        vlTOPp->soc_top__DOT__dccm__DOT__dccm__DOT__mem[vlTOPp->__Vdlyvdim0__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlTOPp->__Vdlyvlsb__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2))) 
                & vlTOPp->soc_top__DOT__dccm__DOT__dccm__DOT__mem
                [vlTOPp->__Vdlyvdim0__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2]) 
               | (0xffffffffULL & ((IData)(vlTOPp->__Vdlyvval__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2) 
                                   << (IData)(vlTOPp->__Vdlyvlsb__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2))));
    }
    if (vlTOPp->__Vdlyvset__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3) {
        vlTOPp->soc_top__DOT__dccm__DOT__dccm__DOT__mem[vlTOPp->__Vdlyvdim0__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlTOPp->__Vdlyvlsb__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3))) 
                & vlTOPp->soc_top__DOT__dccm__DOT__dccm__DOT__mem
                [vlTOPp->__Vdlyvdim0__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3]) 
               | (0xffffffffULL & ((IData)(vlTOPp->__Vdlyvval__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3) 
                                   << (IData)(vlTOPp->__Vdlyvlsb__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3))));
    }
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__97(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__97\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid) 
           & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
        = ((0x7ffffffffffffULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o) 
           | ((QData)((IData)(((IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_req_pending) 
                               | (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_rsp_pending)))) 
              << 0x33U));
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rmask = 0U;
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rmask 
        = ((0xffffff00U & vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rmask) 
           | (0xffffffffULL & (0xffU & (- (IData)((1U 
                                                   & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                      >> 1U)))))));
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(8U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rmask) 
           | (0xffffffffULL & ((0xffU & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                       >> 2U))))) 
                               << (0x1fU & ((IData)(8U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))));
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(0x10U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rmask) 
           | (0xffffffffULL & ((0xffU & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                       >> 3U))))) 
                               << (0x1fU & ((IData)(0x10U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))));
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(0x18U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rmask) 
           | (0xffffffffULL & ((0xffU & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                       >> 4U))))) 
                               << (0x1fU & ((IData)(0x18U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))));
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty 
        = ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
           & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid)));
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid 
        = (1U & ((~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (IData)(((0x800U != (0x1c00U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o))) 
                            | (1U != (1U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))))));
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword 
        = (vlTOPp->soc_top__DOT__dccm__DOT__rdata & vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rmask);
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o 
        = ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)
            ? 0ULL : (0x1ffffffffULL & (((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
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
                                          : 0ULL))));
    vlTOPp->soc_top__DOT__dccm_to_xbar = (((QData)((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid)) 
                                           << 0x33U) 
                                          | (((QData)((IData)(
                                                              (((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid) 
                                                                & (1U 
                                                                   != 
                                                                   (3U 
                                                                    & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                       >> 0xbU))))
                                                                ? 0U
                                                                : 1U))) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid)
                                                                   ? 
                                                                  (3U 
                                                                   & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                      >> 8U))
                                                                   : 0U))) 
                                                 << 0x2bU) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid)
                                                                      ? 
                                                                     (0xffU 
                                                                      & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o))
                                                                      : 0U))) 
                                                    << 0x23U) 
                                                   | (((QData)((IData)(
                                                                       ((((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid) 
                                                                          & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty))) 
                                                                         & (1U 
                                                                            == 
                                                                            (3U 
                                                                             & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                                >> 0xbU))))
                                                                         ? (IData)(
                                                                                (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                                                                >> 1U))
                                                                         : 0U))) 
                                                       << 2U) 
                                                      | (QData)((IData)(
                                                                        ((((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid) 
                                                                           & ((~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                                                              & ((1U 
                                                                                == 
                                                                                (3U 
                                                                                & ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                                >> 0xbU)))
                                                                                 ? 
                                                                                ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                                                | ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                                >> 0xaU))
                                                                                 : 
                                                                                ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                                >> 0xaU)))) 
                                                                          << 1U) 
                                                                         | (1U 
                                                                            & ((~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)) 
                                                                               & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full))))))))))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h[0U] 
        = vlTOPp->soc_top__DOT__dccm_to_xbar;
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i[0U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
        [0U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i[1U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
        [1U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i[2U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
        [2U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i[3U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
        [3U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i[4U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
        [4U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i[5U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
        [5U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i[6U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
        [6U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i[7U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
        [7U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i[8U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
        [8U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i[9U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
        [9U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [0U])))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [1U])))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [2U])))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [2U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                   [2U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [2U] >> 0x33U))))) 
              << 0x33U));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [3U])))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [3U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                   [3U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [3U] >> 0x33U))))) 
              << 0x33U));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [4U])))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [4U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                   [4U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [4U] >> 0x33U))))) 
              << 0x33U));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [5U])))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [5U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                   [5U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [5U] >> 0x33U))))) 
              << 0x33U));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [6U])))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [6U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                   [6U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [6U] >> 0x33U))))) 
              << 0x33U));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [7U])))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [7U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                   [7U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [7U] >> 0x33U))))) 
              << 0x33U));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [8U])))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [8U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                   [8U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [8U] >> 0x33U))))) 
              << 0x33U));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                           [9U])))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [9U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                   [9U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                             [9U] >> 0x33U))))) 
              << 0x33U));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i[0U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o;
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i[1U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o;
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i[2U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o;
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i[3U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o;
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i[4U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o;
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i[5U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o;
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i[6U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o;
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i[7U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o;
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i[8U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o;
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i[9U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o;
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__98(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__98\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[0U][0U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[0U][1U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[0U][2U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[1U][0U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[1U][1U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[1U][2U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[2U][0U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[2U][1U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[2U][2U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[3U][0U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[3U][1U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[3U][2U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[4U][0U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[4U][1U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[4U][2U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[5U][0U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[5U][1U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[5U][2U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[6U][0U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[6U][1U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[6U][2U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[7U][0U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[7U][1U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[7U][2U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[8U][0U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[8U][1U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[8U][2U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[9U][0U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[9U][1U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U];
    vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[9U][2U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[0U][0U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [0U][0U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[0U][1U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [0U][1U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[0U][2U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [0U][2U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[1U][0U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [1U][0U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[1U][1U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [1U][1U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[1U][2U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [1U][2U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[2U][0U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [2U][0U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[2U][1U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [2U][1U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[2U][2U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [2U][2U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[3U][0U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [3U][0U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[3U][1U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [3U][1U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[3U][2U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [3U][2U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[4U][0U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [4U][0U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[4U][1U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [4U][1U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[4U][2U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [4U][2U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[5U][0U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [5U][0U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[5U][1U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [5U][1U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[5U][2U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [5U][2U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[6U][0U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [6U][0U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[6U][1U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [6U][1U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[6U][2U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [6U][2U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[7U][0U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [7U][0U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[7U][1U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [7U][1U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[7U][2U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [7U][2U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[8U][0U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [8U][0U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[8U][1U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [8U][1U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[8U][2U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [8U][2U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[9U][0U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [9U][0U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[9U][1U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [9U][1U];
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[9U][2U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [9U][2U];
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__99(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__99\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk 
        = ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
            [6U][2U] >> 0x15U) & ((0U == (3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [6U][2U] 
                                                >> 0xdU)))
                                   ? (0U != (0xfU & 
                                             (((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [6U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [6U][1U] 
                                                  >> 1U)) 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [6U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [6U][1U] 
                                                        >> 5U)))))))
                                   : ((1U == (3U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0xdU)))
                                       ? ((0x40U & 
                                           vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [6U][1U])
                                           ? (3U == 
                                              (3U & 
                                               ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [6U][2U] 
                                                 << 0x1dU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [6U][1U] 
                                                   >> 3U))))
                                           : (3U == 
                                              (3U & 
                                               ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [6U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [6U][1U] 
                                                   >> 1U)))))
                                       : ((2U == (3U 
                                                  & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [6U][2U] 
                                                     >> 0xdU))) 
                                          & (0xfU == 
                                             (0xfU 
                                              & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [6U][1U] 
                                                    >> 1U))))))));
    vlTOPp->soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk 
        = (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                  [6U][2U] >> 0x15U) & ((0U == (3U 
                                                & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [6U][2U] 
                                                   >> 0xdU))) 
                                        | ((1U == (3U 
                                                   & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [6U][2U] 
                                                      >> 0xdU)))
                                            ? (~ (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [6U][1U] 
                                                  >> 5U))
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [6U][2U] 
                                                    >> 0xdU))) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                  [6U][2U] 
                                                                  << 0x1bU) 
                                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                    [6U][1U] 
                                                                    >> 5U)))))))))));
    vlTOPp->soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk 
        = (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                  [6U][2U] >> 0x15U) & ((0U == (3U 
                                                & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [6U][2U] 
                                                   >> 0xdU)))
                                         ? (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0xfU 
                                                        & (((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                             [6U][2U] 
                                                             << 0x1fU) 
                                                            | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                               [6U][1U] 
                                                               >> 1U)) 
                                                           & (~ 
                                                              ((IData)(1U) 
                                                               << 
                                                               (3U 
                                                                & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                    [6U][2U] 
                                                                    << 0x1bU) 
                                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                      [6U][1U] 
                                                                      >> 5U))))))))))
                                         : ((1U == 
                                             (3U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0xdU)))
                                             ? ((0x40U 
                                                 & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [6U][1U])
                                                 ? 
                                                (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                 [6U][2U] 
                                                                 << 0x1fU) 
                                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                   [6U][1U] 
                                                                   >> 1U))))))
                                                 : 
                                                (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0xcU 
                                                             & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                 [6U][2U] 
                                                                 << 0x1fU) 
                                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                   [6U][1U] 
                                                                   >> 1U)))))))
                                             : (2U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [6U][2U] 
                                                    >> 0xdU)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
        = ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
            [9U][2U] >> 0x15U) & ((0U == (3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][2U] 
                                                >> 0xdU)))
                                   ? (0U != (0xfU & 
                                             (((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][1U] 
                                                  >> 1U)) 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [9U][1U] 
                                                        >> 5U)))))))
                                   : ((1U == (3U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0xdU)))
                                       ? ((0x40U & 
                                           vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [9U][1U])
                                           ? (3U == 
                                              (3U & 
                                               ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [9U][2U] 
                                                 << 0x1dU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [9U][1U] 
                                                   >> 3U))))
                                           : (3U == 
                                              (3U & 
                                               ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [9U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [9U][1U] 
                                                   >> 1U)))))
                                       : ((2U == (3U 
                                                  & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [9U][2U] 
                                                     >> 0xdU))) 
                                          & (0xfU == 
                                             (0xfU 
                                              & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    >> 1U))))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
        = (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                  [9U][2U] >> 0x15U) & ((0U == (3U 
                                                & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [9U][2U] 
                                                   >> 0xdU))) 
                                        | ((1U == (3U 
                                                   & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][2U] 
                                                      >> 0xdU)))
                                            ? (~ (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][1U] 
                                                  >> 5U))
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    >> 0xdU))) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                  [9U][2U] 
                                                                  << 0x1bU) 
                                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                    [9U][1U] 
                                                                    >> 5U)))))))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
        = (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                  [9U][2U] >> 0x15U) & ((0U == (3U 
                                                & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [9U][2U] 
                                                   >> 0xdU)))
                                         ? (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0xfU 
                                                        & (((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                             [9U][2U] 
                                                             << 0x1fU) 
                                                            | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                               [9U][1U] 
                                                               >> 1U)) 
                                                           & (~ 
                                                              ((IData)(1U) 
                                                               << 
                                                               (3U 
                                                                & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                    [9U][2U] 
                                                                    << 0x1bU) 
                                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                      [9U][1U] 
                                                                      >> 5U))))))))))
                                         : ((1U == 
                                             (3U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0xdU)))
                                             ? ((0x40U 
                                                 & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [9U][1U])
                                                 ? 
                                                (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                 [9U][2U] 
                                                                 << 0x1fU) 
                                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                   [9U][1U] 
                                                                   >> 1U))))))
                                                 : 
                                                (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0xcU 
                                                             & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                 [9U][2U] 
                                                                 << 0x1fU) 
                                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                   [9U][1U] 
                                                                   >> 1U)))))))
                                             : (2U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    >> 0xdU)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                  [9U][2U] >> 0x15U) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & ((0U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                            [9U][2U] >> 0x12U))) | 
              (1U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                            [9U][2U] >> 0x12U)))));
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__100(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__100\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__dccm__DOT__addr = ((0x200000U 
                                              & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [0U][2U])
                                              ? (0xfffU 
                                                 & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [0U][2U] 
                                                     << 0x19U) 
                                                    | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                       [0U][1U] 
                                                       >> 7U)))
                                              : 0U);
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (1U & (((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                   [0U][2U] >> 0x15U) & (IData)(vlTOPp->soc_top__DOT__dccm_to_xbar)) 
                 & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full))));
    vlTOPp->soc_top__DOT__u_tempsense__DOT__a_ack = 
        (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                [6U][2U] >> 0x15U) & (IData)(vlTOPp->soc_top__DOT__tsen1_to_xbar)));
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int = 0U;
    if ((0x200000U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
         [0U][2U])) {
        vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int 
            = ((0xffffff00U & vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int) 
               | (0xffU & (- (IData)((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [0U][1U] 
                                            >> 1U))))));
        vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int 
            = ((0xffff00ffU & vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int) 
               | (0xff00U & ((- (IData)((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][1U] 
                                               >> 2U)))) 
                             << 8U)));
        vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int 
            = ((0xff00ffffU & vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int) 
               | (0xff0000U & ((- (IData)((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0U][1U] 
                                                 >> 3U)))) 
                               << 0x10U)));
        vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int 
            = ((0xffffffU & vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int) 
               | (0xff000000U & ((- (IData)((1U & (
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0U][1U] 
                                                   >> 4U)))) 
                                 << 0x18U)));
    }
    vlTOPp->soc_top__DOT__dccm__DOT__we = ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [0U][2U] 
                                            >> 0x15U) 
                                           & ((0U == 
                                               (7U 
                                                & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0U][2U] 
                                                   >> 0x12U))) 
                                              | (1U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [0U][2U] 
                                                     >> 0x12U)))));
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk 
        = ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
            [0U][2U] >> 0x15U) & ((0U == (3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [0U][2U] 
                                                >> 0xdU)))
                                   ? (0U != (0xfU & 
                                             (((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [0U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][1U] 
                                                  >> 1U)) 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [0U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [0U][1U] 
                                                        >> 5U)))))))
                                   : ((1U == (3U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0xdU)))
                                       ? ((0x40U & 
                                           vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [0U][1U])
                                           ? (3U == 
                                              (3U & 
                                               ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0U][2U] 
                                                 << 0x1dU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0U][1U] 
                                                   >> 3U))))
                                           : (3U == 
                                              (3U & 
                                               ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0U][1U] 
                                                   >> 1U)))))
                                       : ((2U == (3U 
                                                  & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [0U][2U] 
                                                     >> 0xdU))) 
                                          & (0xfU == 
                                             (0xfU 
                                              & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [0U][1U] 
                                                    >> 1U))))))));
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk 
        = (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                  [0U][2U] >> 0x15U) & ((0U == (3U 
                                                & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0U][2U] 
                                                   >> 0xdU))) 
                                        | ((1U == (3U 
                                                   & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [0U][2U] 
                                                      >> 0xdU)))
                                            ? (~ (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][1U] 
                                                  >> 5U))
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [0U][2U] 
                                                    >> 0xdU))) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                  [0U][2U] 
                                                                  << 0x1bU) 
                                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                    [0U][1U] 
                                                                    >> 5U)))))))))));
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk 
        = (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                  [0U][2U] >> 0x15U) & ((0U == (3U 
                                                & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0U][2U] 
                                                   >> 0xdU)))
                                         ? (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0xfU 
                                                        & (((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                             [0U][2U] 
                                                             << 0x1fU) 
                                                            | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                               [0U][1U] 
                                                               >> 1U)) 
                                                           & (~ 
                                                              ((IData)(1U) 
                                                               << 
                                                               (3U 
                                                                & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                    [0U][2U] 
                                                                    << 0x1bU) 
                                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                      [0U][1U] 
                                                                      >> 5U))))))))))
                                         : ((1U == 
                                             (3U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0xdU)))
                                             ? ((0x40U 
                                                 & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0U][1U])
                                                 ? 
                                                (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                 [0U][2U] 
                                                                 << 0x1fU) 
                                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                   [0U][1U] 
                                                                   >> 1U))))))
                                                 : 
                                                (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0xcU 
                                                             & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                 [0U][2U] 
                                                                 << 0x1fU) 
                                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                   [0U][1U] 
                                                                   >> 1U)))))))
                                             : (2U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [0U][2U] 
                                                    >> 0xdU)))))));
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int = 0U;
    if ((0x200000U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
         [0U][2U])) {
        vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int 
            = ((0xffffff00U & vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int) 
               | (((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                    [0U][1U] >> 1U) & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__we))
                   ? (0xffU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [0U][1U] << 0x1fU) 
                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [0U][0U] >> 1U)))
                   : 0U));
        vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int 
            = ((0xffff00ffU & vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int) 
               | ((((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                     [0U][1U] >> 2U) & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__we))
                    ? (0xffU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                 [0U][1U] << 0x17U) 
                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                   [0U][0U] >> 9U)))
                    : 0U) << 8U));
        vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int 
            = ((0xff00ffffU & vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int) 
               | ((((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                     [0U][1U] >> 3U) & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__we))
                    ? (0xffU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                 [0U][1U] << 0xfU) 
                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                   [0U][0U] >> 0x11U)))
                    : 0U) << 0x10U));
        vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int 
            = ((0xffffffU & vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int) 
               | ((((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                     [0U][1U] >> 4U) & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__we))
                    ? (0xffU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                 [0U][1U] << 7U) | 
                                (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                 [0U][0U] >> 0x19U)))
                    : 0U) << 0x18U));
    }
    vlTOPp->soc_top__DOT__u_tempsense__DOT__wr_req 
        = ((IData)(vlTOPp->soc_top__DOT__u_tempsense__DOT__a_ack) 
           & ((0U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                            [6U][2U] >> 0x12U))) | 
              (1U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                            [6U][2U] >> 0x12U)))));
    vlTOPp->soc_top__DOT__dccm__DOT__data_we = ((0xcU 
                                                 & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_we)) 
                                                | (((0U 
                                                     != 
                                                     (0xffU 
                                                      & (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int 
                                                         >> 0x10U))) 
                                                    & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__we))
                                                    ? 3U
                                                    : 0U));
    vlTOPp->soc_top__DOT__dccm__DOT__data_we = ((3U 
                                                 & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_we)) 
                                                | ((((0U 
                                                      != 
                                                      (0xffU 
                                                       & (vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int 
                                                          >> 0x18U))) 
                                                     & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__we))
                                                     ? 3U
                                                     : 0U) 
                                                   << 2U));
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error 
        = (1U & (~ ((((0U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                    [0U][2U] >> 0x12U))) 
                      | (1U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [0U][2U] >> 0x12U)))) 
                     | (4U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [0U][2U] >> 0x12U)))) 
                    & (((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk) 
                        & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk)) 
                       & (((4U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [0U][2U] >> 0x12U))) 
                           | (1U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [0U][2U] 
                                           >> 0x12U)))) 
                          | (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk))))));
    vlTOPp->soc_top__DOT__dccm__DOT__req = (1U & ((
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [0U][2U] 
                                                    >> 0x15U) 
                                                   & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full))) 
                                                  & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error))));
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (((IData)(vlTOPp->soc_top__DOT__dccm__DOT__req) 
            & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__we))) 
           & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)));
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__101(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__101\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit = 0ULL;
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3ffffffffeULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | (IData)((IData)((0U == (0x1fcU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][2U] 
                                                << 0x1bU) 
                                               | (0x7fffffcU 
                                                  & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [9U][1U] 
                                                     >> 5U))))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3ffffffffdULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((4U == (0x1fcU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [9U][2U] 
                                                 << 0x1bU) 
                                                | (0x7fffffcU 
                                                   & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][1U] 
                                                      >> 5U))))))) 
              << 1U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3ffffffffbULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((8U == (0x1fcU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [9U][2U] 
                                                 << 0x1bU) 
                                                | (0x7fffffcU 
                                                   & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][1U] 
                                                      >> 5U))))))) 
              << 2U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3ffffffff7ULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0xcU == (0x1fcU & ((
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [9U][2U] 
                                                   << 0x1bU) 
                                                  | (0x7fffffcU 
                                                     & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [9U][1U] 
                                                        >> 5U))))))) 
              << 3U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3fffffffefULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x10U == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 4U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3fffffffdfULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x14U == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 5U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3fffffffbfULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x18U == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 6U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3fffffff7fULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x1cU == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 7U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3ffffffeffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x20U == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 8U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3ffffffdffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x24U == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 9U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3ffffffbffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x28U == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 0xaU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3ffffff7ffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x2cU == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 0xbU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3fffffefffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x30U == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 0xcU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3fffffdfffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x34U == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 0xdU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3fffffbfffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x38U == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 0xeU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3fffff7fffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x3cU == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 0xfU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3ffffeffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x40U == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 0x10U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3ffffdffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x44U == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 0x11U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3ffffbffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x48U == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 0x12U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3ffff7ffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x4cU == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 0x13U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3fffefffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x50U == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 0x14U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3fffdfffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x54U == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 0x15U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3fffbfffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x58U == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 0x16U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3fff7fffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x5cU == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 0x17U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3ffeffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x60U == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 0x18U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3ffdffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x64U == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 0x19U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3ffbffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x68U == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 0x1aU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3ff7ffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x6cU == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 0x1bU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3fefffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x70U == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 0x1cU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3fdfffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x74U == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 0x1dU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3fbfffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x78U == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 0x1eU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3f7fffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x7cU == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 0x1fU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3effffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x80U == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 0x20U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3dffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x84U == (0x1fcU & (
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))))) 
              << 0x21U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x3bffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x100U == (0x1fcU & 
                                          ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][2U] 
                                            << 0x1bU) 
                                           | (0x7fffffcU 
                                              & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [9U][1U] 
                                                 >> 5U))))))) 
              << 0x22U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x37ffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x104U == (0x1fcU & 
                                          ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][2U] 
                                            << 0x1bU) 
                                           | (0x7fffffcU 
                                              & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [9U][1U] 
                                                 >> 5U))))))) 
              << 0x23U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x2fffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x108U == (0x1fcU & 
                                          ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][2U] 
                                            << 0x1bU) 
                                           | (0x7fffffcU 
                                              & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [9U][1U] 
                                                 >> 5U))))))) 
              << 0x24U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
        = ((0x1fffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((0x10cU == (0x1fcU & 
                                          ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][2U] 
                                            << 0x1bU) 
                                           | (0x7fffffcU 
                                              & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [9U][1U] 
                                                 >> 5U))))))) 
              << 0x25U));
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__102(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__102\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit = 0U;
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x7ffeU & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | (0U == (0x3cU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                               [1U][2U] << 0x1bU) | 
                              (0x7fffffcU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [1U][1U] 
                                             >> 5U))))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x7ffdU & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((4U == (0x3cU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [1U][2U] << 0x1bU) 
                               | (0x7fffffcU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][1U] 
                                                >> 5U))))) 
              << 1U));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x7ffbU & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((8U == (0x3cU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [1U][2U] << 0x1bU) 
                               | (0x7fffffcU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][1U] 
                                                >> 5U))))) 
              << 2U));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x7ff7U & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((0xcU == (0x3cU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                  [1U][2U] << 0x1bU) 
                                 | (0x7fffffcU & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][1U] 
                                                  >> 5U))))) 
              << 3U));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x7fefU & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((0x10U == (0x3cU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                   [1U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][1U] 
                                                   >> 5U))))) 
              << 4U));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x7fdfU & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((0x14U == (0x3cU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                   [1U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][1U] 
                                                   >> 5U))))) 
              << 5U));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x7fbfU & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((0x18U == (0x3cU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                   [1U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][1U] 
                                                   >> 5U))))) 
              << 6U));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x7f7fU & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((0x1cU == (0x3cU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                   [1U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][1U] 
                                                   >> 5U))))) 
              << 7U));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x7effU & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((0x20U == (0x3cU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                   [1U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][1U] 
                                                   >> 5U))))) 
              << 8U));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x7dffU & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((0x24U == (0x3cU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                   [1U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][1U] 
                                                   >> 5U))))) 
              << 9U));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x7bffU & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((0x28U == (0x3cU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                   [1U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][1U] 
                                                   >> 5U))))) 
              << 0xaU));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x77ffU & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((0x2cU == (0x3cU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                   [1U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][1U] 
                                                   >> 5U))))) 
              << 0xbU));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x6fffU & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((0x30U == (0x3cU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                   [1U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][1U] 
                                                   >> 5U))))) 
              << 0xcU));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x5fffU & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((0x34U == (0x3cU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                   [1U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][1U] 
                                                   >> 5U))))) 
              << 0xdU));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x3fffU & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((0x38U == (0x3cU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                   [1U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][1U] 
                                                   >> 5U))))) 
              << 0xeU));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
        = ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
            [1U][2U] >> 0x15U) & ((0U == (3U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][2U] 
                                                >> 0xdU)))
                                   ? (0U != (0xfU & 
                                             (((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][1U] 
                                                  >> 1U)) 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [1U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [1U][1U] 
                                                        >> 5U)))))))
                                   : ((1U == (3U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0xdU)))
                                       ? ((0x40U & 
                                           vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [1U][1U])
                                           ? (3U == 
                                              (3U & 
                                               ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [1U][2U] 
                                                 << 0x1dU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][1U] 
                                                   >> 3U))))
                                           : (3U == 
                                              (3U & 
                                               ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][1U] 
                                                   >> 1U)))))
                                       : ((2U == (3U 
                                                  & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [1U][2U] 
                                                     >> 0xdU))) 
                                          & (0xfU == 
                                             (0xfU 
                                              & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][1U] 
                                                    >> 1U))))))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
        = (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                  [1U][2U] >> 0x15U) & ((0U == (3U 
                                                & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][2U] 
                                                   >> 0xdU))) 
                                        | ((1U == (3U 
                                                   & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [1U][2U] 
                                                      >> 0xdU)))
                                            ? (~ (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][1U] 
                                                  >> 5U))
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][2U] 
                                                    >> 0xdU))) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                  [1U][2U] 
                                                                  << 0x1bU) 
                                                                 | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                    [1U][1U] 
                                                                    >> 5U)))))))))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
        = (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                  [1U][2U] >> 0x15U) & ((0U == (3U 
                                                & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][2U] 
                                                   >> 0xdU)))
                                         ? (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0xfU 
                                                        & (((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                             [1U][2U] 
                                                             << 0x1fU) 
                                                            | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                               [1U][1U] 
                                                               >> 1U)) 
                                                           & (~ 
                                                              ((IData)(1U) 
                                                               << 
                                                               (3U 
                                                                & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                    [1U][2U] 
                                                                    << 0x1bU) 
                                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                      [1U][1U] 
                                                                      >> 5U))))))))))
                                         : ((1U == 
                                             (3U & 
                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0xdU)))
                                             ? ((0x40U 
                                                 & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [1U][1U])
                                                 ? 
                                                (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                 [1U][2U] 
                                                                 << 0x1fU) 
                                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                   [1U][1U] 
                                                                   >> 1U))))))
                                                 : 
                                                (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0xcU 
                                                             & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                 [1U][2U] 
                                                                 << 0x1fU) 
                                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                   [1U][1U] 
                                                                   >> 1U)))))))
                                             : (2U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][2U] 
                                                    >> 0xdU)))))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                  [1U][2U] >> 0x15U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & ((0U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                            [1U][2U] >> 0x12U))) | 
              (1U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                            [1U][2U] >> 0x12U)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                   [1U][2U] << 0x1bU) 
                                  | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [1U][1U] >> 5U))))) 
                 | (~ ((((0U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [1U][2U] >> 0x12U))) 
                         | (1U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [1U][2U] >> 0x12U)))) 
                        | (4U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [1U][2U] >> 0x12U)))) 
                       & (((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                           & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                          & (((4U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][2U] 
                                            >> 0x12U))) 
                              | (1U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][2U] 
                                              >> 0x12U)))) 
                             | (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we 
        = ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
           & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 0U;
    if ((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
          & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 1U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 2U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 3U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 4U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 5U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 6U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 7U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 8U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 9U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 0xaU) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 0xbU) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 0xcU) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 0xdU) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 0xeU) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((0xfffffU < ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                      [1U][1U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][0U] 
                                            >> 1U)))) {
        vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__103(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__103\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
        = ((0xffffffffffffeULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o) 
           | (IData)((IData)((1U & ((~ (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_rsp_pending)) 
                                    & (~ ((IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_req_pending) 
                                          & (~ vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [0xaU][0U]))))))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i[0xaU] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o;
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
        [0xaU];
    if ((0U == (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__dev_select_outstanding))) {
        vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
            = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
            [0U];
    }
    if ((1U == (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__dev_select_outstanding))) {
        vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
            = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
            [1U];
    }
    if ((2U == (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__dev_select_outstanding))) {
        vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
            = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
            [2U];
    }
    if ((3U == (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__dev_select_outstanding))) {
        vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
            = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
            [3U];
    }
    if ((4U == (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__dev_select_outstanding))) {
        vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
            = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
            [4U];
    }
    if ((5U == (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__dev_select_outstanding))) {
        vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
            = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
            [5U];
    }
    if ((6U == (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__dev_select_outstanding))) {
        vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
            = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
            [6U];
    }
    if ((7U == (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__dev_select_outstanding))) {
        vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
            = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
            [7U];
    }
    if ((8U == (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__dev_select_outstanding))) {
        vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
            = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
            [8U];
    }
    if ((9U == (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__dev_select_outstanding))) {
        vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
            = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
            [9U];
    }
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hfifo_reqready 
        = (1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                        [0xaU]));
    if ((0U == (0xfU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]))) {
        vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hfifo_reqready 
            = (1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                            [0U]));
    }
    if ((1U == (0xfU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]))) {
        vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hfifo_reqready 
            = (1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                            [1U]));
    }
    if ((2U == (0xfU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]))) {
        vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hfifo_reqready 
            = (1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                            [2U]));
    }
    if ((3U == (0xfU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]))) {
        vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hfifo_reqready 
            = (1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                            [3U]));
    }
    if ((4U == (0xfU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]))) {
        vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hfifo_reqready 
            = (1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                            [4U]));
    }
    if ((5U == (0xfU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]))) {
        vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hfifo_reqready 
            = (1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                            [5U]));
    }
    if ((6U == (0xfU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]))) {
        vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hfifo_reqready 
            = (1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                            [6U]));
    }
    if ((7U == (0xfU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]))) {
        vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hfifo_reqready 
            = (1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                            [7U]));
    }
    if ((8U == (0xfU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]))) {
        vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hfifo_reqready 
            = (1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                            [8U]));
    }
    if ((9U == (0xfU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]))) {
        vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hfifo_reqready 
            = (1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                            [9U]));
    }
    if (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hold_all_requests) {
        vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hfifo_reqready = 0U;
    }
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
        = ((1ULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i) 
           | (0xffffffffffffeULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
        = ((0xffffffffffffeULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i) 
           | (IData)((IData)(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                               >> 0x15U) & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hfifo_reqready)))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__accept_t_req 
        = (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                  >> 0x15U) & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i)));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__accept_t_rsp 
        = (1U & ((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                          >> 0x33U)) & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
        = ((0xffffffffffffeULL & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h) 
           | (IData)((IData)((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i)))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
        = ((0x8000000000001ULL & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
        = ((0x7ffffffffffffULL & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                             >> 0x33U))))) 
              << 0x33U));
    vlTOPp->soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_d 
        = vlTOPp->soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q;
    if (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__data_req) 
         & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h))) {
        vlTOPp->soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_d 
            = (1U & ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q)) 
                     & ((IData)(1U) + (IData)(vlTOPp->soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q))));
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err 
        = (1U & (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q) 
                  | (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                             >> 1U))) | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid 
        = (((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                     >> 0x33U)) | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)) 
           & (0U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we 
        = ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)) 
           | (((((0U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                 & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                            >> 0x33U))) & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err))) 
               & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q))) 
              << 1U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err 
        = (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
            & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q))) 
           & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err 
        = (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
            & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)) 
           & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)
            ? (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid)
            : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_valid));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump = 0U;
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done)))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump 
                        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec;
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec)))) {
                        if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec) {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch = 0U;
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done)))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch 
                        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec;
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch 
                            = (1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result) 
                                     | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                        >> 1U)));
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv = 0U;
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done)))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv 
                        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec;
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                    if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_valid)))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id 
        = ((((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
               & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec) 
                  & ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid)) 
                     | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)))) 
              | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv)) 
             | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump)) 
            | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch)) 
           | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done 
        = (((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id)) 
            & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id))) 
           & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_instr_ret_wb 
        = (((((((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec))) 
               & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn))) 
              & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id))) 
             & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
            & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done)) 
           & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid) 
                 & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err) 
                    | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err)))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op_en 
        = (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_access) 
            & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec)) 
           & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int 
        = (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr) 
            & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op_en)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id)));
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__104(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__104\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (4U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                           [9U][2U] >> 0x12U))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                   [9U][2U] << 0x1bU) 
                                  | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][1U] >> 5U))))) 
                 | (~ ((((0U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [9U][2U] >> 0x12U))) 
                         | (1U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [9U][2U] >> 0x12U)))) 
                        | (4U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [9U][2U] >> 0x12U)))) 
                       & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                           & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                          & (((4U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][2U] 
                                            >> 0x12U))) 
                              | (1U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [9U][2U] 
                                              >> 0x12U)))) 
                             | (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re 
        = ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rd_req) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we 
        = ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 0U;
    if ((((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
          & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [9U][2U] << 0x1fU) | 
                             (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [9U][1U] >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [9U][2U] << 0x1fU) | 
                             (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [9U][1U] >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 2U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 3U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 4U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 5U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 6U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 7U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 8U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 9U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0xaU)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0xbU)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0xcU)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0xdU)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0xeU)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0xfU)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x10U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x11U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x12U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x13U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x14U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x15U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x16U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x17U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x18U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x19U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x1aU)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x1bU)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x1cU)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x1dU)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x1eU)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x1fU)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x20U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x21U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [9U][2U] << 0x1fU) | 
                             (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [9U][1U] >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x23U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x24U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x25U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xfffff000U & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_threshold0__q) 
               << 9U) | ((0x1f8U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                    [9U][0U] << 2U)) 
                         | (((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                        >> 0x24U)) 
                               & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                              & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err))) 
                             << 2U) | ((((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                  >> 0x24U)) 
                                         & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re)) 
                                        << 1U) | (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_msip0__q))))));
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__105(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__105\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[0U] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                  << 0x17U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                               >> 9U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[1U] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                  << 0x1aU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                               >> 6U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[2U] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                  << 0x1dU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                               >> 3U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[3U] 
        = (7U & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[4U] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                  << 3U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                            >> 0x1dU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[5U] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                  << 6U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                            >> 0x1aU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[6U] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                  << 9U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                            >> 0x17U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[7U] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                  << 0xcU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                              >> 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[8U] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                  << 0xfU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                              >> 0x11U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[9U] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                  << 0x12U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                               >> 0xeU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[0xaU] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                  << 0x15U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                               >> 0xbU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[0xbU] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                  << 0x18U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                               >> 8U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[0xcU] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                  << 0x1bU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                               >> 5U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[0xdU] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                  << 0x1eU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                               >> 2U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[0xeU] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                  << 1U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                            >> 0x1fU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[0xfU] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                  << 4U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                            >> 0x1cU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[0x10U] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                  << 7U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                            >> 0x19U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[0x11U] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                  << 0xaU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                              >> 0x16U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[0x12U] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                  << 0xdU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                              >> 0x13U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[0x13U] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                  << 0x10U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                               >> 0x10U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[0x14U] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                  << 0x13U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                               >> 0xdU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[0x15U] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                  << 0x16U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                               >> 0xaU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[0x16U] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                  << 0x19U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                               >> 7U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[0x17U] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                  << 0x1cU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                               >> 4U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[0x18U] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                  << 0x1fU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                               >> 1U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[0x19U] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                  << 2U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                            >> 0x1eU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[0x1aU] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                  << 5U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                            >> 0x1bU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[0x1bU] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                  << 8U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                            >> 0x18U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[0x1cU] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                  << 0xbU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                              >> 0x15U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[0x1dU] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                  << 0xeU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                              >> 0x12U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[0x1eU] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                  << 0x11U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                               >> 0xfU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__prio[0x1fU] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                  << 0x14U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                               >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [0U];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[1U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [1U];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[2U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [2U];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[3U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [3U];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[4U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [4U];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[5U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [5U];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[6U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [6U];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[7U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [7U];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[8U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [8U];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[9U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [9U];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0xaU] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [0xaU];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0xbU] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [0xbU];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0xcU] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [0xcU];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0xdU] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [0xdU];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0xeU] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [0xeU];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0xfU] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [0xfU];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x10U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [0x10U];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x11U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [0x11U];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x12U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [0x12U];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x13U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [0x13U];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x14U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [0x14U];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x15U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [0x15U];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x16U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [0x16U];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x17U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [0x17U];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x18U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [0x18U];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x19U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [0x19U];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x1aU] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [0x1aU];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x1bU] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [0x1bU];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x1cU] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [0x1cU];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x1dU] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [0x1dU];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x1eU] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [0x1eU];
    vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x1fU] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__prio
        [0x1fU];
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = ((0x1fffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U]) 
           | (0xe0000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0U] << 0x1dU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = ((0xfffffff8U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
           | vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
           [1U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = ((0xffffffc7U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
           | (0xfffffff8U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [2U] << 3U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = ((0xfffffe3fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
           | (0xffffffc0U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [3U] << 6U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = ((0xfffff1ffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
           | (0xfffffe00U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [4U] << 9U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = ((0xffff8fffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
           | (0xfffff000U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [5U] << 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = ((0xfffc7fffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
           | (0xffff8000U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [6U] << 0xfU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = ((0xffe3ffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
           | (0xfffc0000U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [7U] << 0x12U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = ((0xff1fffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
           | (0xffe00000U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [8U] << 0x15U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = ((0xf8ffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
           | (0xff000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [9U] << 0x18U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = ((0xc7ffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
           | (0xf8000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0xaU] << 0x1bU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = ((0x3fffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
           | (0xc0000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0xbU] << 0x1eU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | (0x3fffffffU & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0xbU] >> 2U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0xfffffff1U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | (0xfffffffeU & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0xcU] << 1U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0xffffff8fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | (0xfffffff0U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0xdU] << 4U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0xfffffc7fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | (0xffffff80U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0xeU] << 7U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0xffffe3ffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | (0xfffffc00U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0xfU] << 0xaU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0xffff1fffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | (0xffffe000U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x10U] << 0xdU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0xfff8ffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | (0xffff0000U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x11U] << 0x10U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0xffc7ffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | (0xfff80000U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x12U] << 0x13U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0xfe3fffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | (0xffc00000U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x13U] << 0x16U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0xf1ffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | (0xfe000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x14U] << 0x19U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0x8fffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | (0xf0000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x15U] << 0x1cU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0x7fffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | (0x80000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x16U] << 0x1fU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
        = ((0x1ffffffcU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U]) 
           | (0x1fffffffU & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x16U] >> 1U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
        = ((0x1fffffe3U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U]) 
           | (0x1ffffffcU & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x17U] << 2U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
        = ((0x1fffff1fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U]) 
           | (0x1fffffe0U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x18U] << 5U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
        = ((0x1ffff8ffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U]) 
           | (0x1fffff00U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x19U] << 8U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
        = ((0x1fffc7ffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U]) 
           | (0x1ffff800U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x1aU] << 0xbU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
        = ((0x1ffe3fffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U]) 
           | (0x1fffc000U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x1bU] << 0xeU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
        = ((0x1ff1ffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U]) 
           | (0x1ffe0000U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x1cU] << 0x11U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
        = ((0x1f8fffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U]) 
           | (0x1ff00000U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x1dU] << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
        = ((0x1c7fffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U]) 
           | (0x1f800000U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x1eU] << 0x17U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
        = ((0x3ffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U]) 
           | (0x1c000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x1fU] << 0x1aU)));
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__106(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__106\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                           >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfffffffdU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (2U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                           >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfffffffbU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (4U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                           >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfffffff7U & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (8U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                           >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xffffffefU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x10U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                              >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xffffffdfU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x20U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                              >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xffffffbfU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x40U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                              >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xffffff7fU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x80U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                              >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfffffeffU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x100U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                               >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfffffdffU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x200U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                               >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfffffbffU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x400U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                               >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfffff7ffU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x800U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                               >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xffffefffU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x1000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xffffdfffU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x2000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xffffbfffU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x4000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xffff7fffU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x8000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfffeffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x10000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                 >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfffdffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x20000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                 >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfffbffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x40000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                 >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfff7ffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x80000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                 >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xffefffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x100000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                  << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xffdfffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x200000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                  << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xffbfffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x400000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                  << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xff7fffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x800000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                  << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfeffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x1000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                   << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfdffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x2000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                   << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfbffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x4000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                   << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xf7ffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x8000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                   << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xefffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x10000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                    << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xdfffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x20000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                    << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xbfffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x40000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                    << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0x7fffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x80000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                    << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffff7fffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                     & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                     [0U])))) << 0x1fU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffeffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 1U)))) 
              << 0x20U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffdffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 2U)))) 
              << 0x21U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffbffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 3U)))) 
              << 0x22U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffff7ffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 4U)))) 
              << 0x23U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffefffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 5U)))) 
              << 0x24U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffdfffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 6U)))) 
              << 0x25U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffbfffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 7U)))) 
              << 0x26U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffff7fffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 8U)))) 
              << 0x27U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffeffffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 9U)))) 
              << 0x28U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffdffffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0xaU)))) 
              << 0x29U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffbffffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0xbU)))) 
              << 0x2aU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffff7ffffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0xcU)))) 
              << 0x2bU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffefffffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0xdU)))) 
              << 0x2cU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffdfffffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0xeU)))) 
              << 0x2dU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffbfffffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0xfU)))) 
              << 0x2eU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fff7fffffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x10U)))) 
              << 0x2fU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffeffffffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x11U)))) 
              << 0x30U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffdffffffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x12U)))) 
              << 0x31U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffbffffffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x13U)))) 
              << 0x32U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ff7ffffffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x14U)))) 
              << 0x33U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fefffffffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x15U)))) 
              << 0x34U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fdfffffffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x16U)))) 
              << 0x35U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fbfffffffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x17U)))) 
              << 0x36U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7f7fffffffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x18U)))) 
              << 0x37U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7effffffffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x19U)))) 
              << 0x38U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7dffffffffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x1aU)))) 
              << 0x39U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7bffffffffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x1bU)))) 
              << 0x3aU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x77ffffffffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x1cU)))) 
              << 0x3bU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x6fffffffffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x1dU)))) 
              << 0x3cU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x5fffffffffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x1eU)))) 
              << 0x3dU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x3fffffffffffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x1fU)))) 
              << 0x3eU));
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__107(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__107\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_we = 0U;
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((0x400U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x200U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((0x80U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                            if ((0x40U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en = 0U;
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((0x40U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en = 0U;
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((0x400U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x200U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((0x80U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                    if ((0x10U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en = 0U;
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((0x400U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x200U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((0x80U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                    if ((0x10U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en = 0U;
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((0x400U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x200U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((0x80U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                    if ((0x10U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause) {
        if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save) {
            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en = 1U;
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en = 0U;
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((0x400U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x200U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((0x80U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                    if ((0x10U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause) {
        if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save) {
            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en = 1U;
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en = 0U;
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((0x40U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en = 1U;
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en = 0U;
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en = 1U;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
            if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en = 1U;
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__108(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__108\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((4ULL == (6ULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((6ULL == (6ULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                               << 0x1aU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                            >> 6U))) 
                       > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                 << 0x1dU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                              >> 3U)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x10ULL == (0x18ULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x18ULL == (0x18ULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                               << 0x14U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                            >> 0xcU))) 
                       > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                 << 0x17U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                              >> 9U)))))));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__109(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__109\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x40ULL == (0x60ULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x60ULL == (0x60ULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                               << 0xeU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                           >> 0x12U))) 
                       > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                 << 0x11U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                              >> 0xfU)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x100ULL == (0x180ULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x180ULL == (0x180ULL 
                                          & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                               << 8U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                         >> 0x18U))) 
                       > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                 << 0xbU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                             >> 0x15U)))))));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__110(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__110\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x400ULL == (0x600ULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x600ULL == (0x600ULL 
                                          & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                               << 2U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                         >> 0x1eU))) 
                       > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                 << 5U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                           >> 0x1bU)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x1000ULL == (0x1800ULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x1800ULL == (0x1800ULL 
                                           & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                               << 0x1cU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                            >> 4U))) 
                       > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                 << 0x1fU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                              >> 1U)))))));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__111(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__111\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x4000ULL == (0x6000ULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x6000ULL == (0x6000ULL 
                                           & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                               << 0x16U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                            >> 0xaU))) 
                       > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                 << 0x19U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                              >> 7U)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x10000ULL == (0x18000ULL 
                                         & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x18000ULL == (0x18000ULL 
                                            & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                               << 0x10U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                            >> 0x10U))) 
                       > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                 << 0x13U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                              >> 0xdU)))))));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__112(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__112\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x40000ULL == (0x60000ULL 
                                         & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x60000ULL == (0x60000ULL 
                                            & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                               << 0xaU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                           >> 0x16U))) 
                       > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                 << 0xdU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                             >> 0x13U)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x100000ULL == (0x180000ULL 
                                          & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x180000ULL == (0x180000ULL 
                                             & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                               << 4U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                         >> 0x1cU))) 
                       > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                 << 7U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                           >> 0x19U)))))));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__113(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__113\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x400000ULL == (0x600000ULL 
                                          & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x600000ULL == (0x600000ULL 
                                             & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                               << 0x1eU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                            >> 2U))) 
                       > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                 << 1U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                           >> 0x1fU)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x1000000ULL == (0x1800000ULL 
                                           & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x1800000ULL == (0x1800000ULL 
                                              & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                               << 0x18U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                            >> 8U))) 
                       > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                 << 0x1bU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                              >> 5U)))))));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__114(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__114\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x4000000ULL == (0x6000000ULL 
                                           & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x6000000ULL == (0x6000000ULL 
                                              & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                               << 0x12U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                            >> 0xeU))) 
                       > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                 << 0x15U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                              >> 0xbU)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x10000000ULL == (0x18000000ULL 
                                            & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x18000000ULL == (0x18000000ULL 
                                               & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                               << 0xcU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                           >> 0x14U))) 
                       > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                 << 0xfU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                             >> 0x11U)))))));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__115(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__115\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x40000000ULL == (0x60000000ULL 
                                            & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x60000000ULL == (0x60000000ULL 
                                               & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                               << 6U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                         >> 0x1aU))) 
                       > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                 << 9U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                           >> 0x17U)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x100000000ULL == (0x180000000ULL 
                                             & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x180000000ULL == (0x180000000ULL 
                                                & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
                       > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                 << 3U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                           >> 0x1dU)))))));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__116(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__116\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x400000000ULL == (0x600000000ULL 
                                             & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x600000000ULL == (0x600000000ULL 
                                                & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                               << 0x1aU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                            >> 6U))) 
                       > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                 << 0x1dU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                              >> 3U)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x1000000000ULL == (0x1800000000ULL 
                                              & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x1800000000ULL == (0x1800000000ULL 
                                                 & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                               << 0x14U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                            >> 0xcU))) 
                       > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                 << 0x17U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                              >> 9U)))))));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__117(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__117\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x4000000000ULL == (0x6000000000ULL 
                                              & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x6000000000ULL == (0x6000000000ULL 
                                                 & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                               << 0xeU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                           >> 0x12U))) 
                       > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                 << 0x11U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                              >> 0xfU)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x10000000000ULL == (0x18000000000ULL 
                                               & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x18000000000ULL == (0x18000000000ULL 
                                                  & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                               << 8U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                         >> 0x18U))) 
                       > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                 << 0xbU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                             >> 0x15U)))))));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__118(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__118\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x40000000000ULL == (0x60000000000ULL 
                                               & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x60000000000ULL == (0x60000000000ULL 
                                                  & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                               << 2U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                         >> 0x1eU))) 
                       > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                 << 5U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                           >> 0x1bU)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x100000000000ULL == (0x180000000000ULL 
                                                & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x180000000000ULL == (0x180000000000ULL 
                                                   & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                               << 0x1cU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                            >> 4U))) 
                       > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                 << 0x1fU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                              >> 1U)))))));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__119(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__119\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x400000000000ULL == (0x600000000000ULL 
                                                & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x600000000000ULL == (0x600000000000ULL 
                                                   & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                               << 0x16U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                            >> 0xaU))) 
                       > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                 << 0x19U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                              >> 7U)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x1000000000000ULL == (0x1800000000000ULL 
                                                 & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x1800000000000ULL == 
                             (0x1800000000000ULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                               << 0x10U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                            >> 0x10U))) 
                       > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                 << 0x13U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                              >> 0xdU)))))));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__120(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__120\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x4000000000000ULL == (0x6000000000000ULL 
                                                 & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x6000000000000ULL == 
                             (0x6000000000000ULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                               << 0xaU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                           >> 0x16U))) 
                       > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                 << 0xdU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                             >> 0x13U)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x10000000000000ULL == (0x18000000000000ULL 
                                                  & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x18000000000000ULL == 
                             (0x18000000000000ULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                               << 4U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                         >> 0x1cU))) 
                       > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                 << 7U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                           >> 0x19U)))))));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__121(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__121\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x40000000000000ULL == (0x60000000000000ULL 
                                                  & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x60000000000000ULL == 
                             (0x60000000000000ULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                              >> 2U)) > (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 1U) 
                                               | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x1fU)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x100000000000000ULL == (0x180000000000000ULL 
                                                   & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x180000000000000ULL == 
                             (0x180000000000000ULL 
                              & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                              >> 8U)) > (7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 5U))))));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__122(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__122\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x400000000000000ULL == (0x600000000000000ULL 
                                                   & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x600000000000000ULL == 
                             (0x600000000000000ULL 
                              & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                              >> 0xeU)) > (7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                 >> 0xbU))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x1000000000000000ULL == 
                          (0x1800000000000000ULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x1800000000000000ULL 
                             == (0x1800000000000000ULL 
                                 & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                              >> 0x14U)) > (7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                  >> 0x11U))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x4000000000000000ULL == 
                          (0x6000000000000000ULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x6000000000000000ULL 
                             == (0x6000000000000000ULL 
                                 & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                              >> 0x1aU)) > (7U & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                  >> 0x17U))))));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__123(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__123\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffffffffeULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | (IData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel) 
                                     & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                >> 2U))) 
                                    | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
                                       & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                  >> 1U))))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffffffffdULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 4U))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 3U))))))) 
              << 1U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffffffffbULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 6U))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 5U))))))) 
              << 2U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffffffff7ULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 8U))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 7U))))))) 
              << 3U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffffffffefULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0xaU))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 9U))))))) 
              << 4U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffffffffdfULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0xcU))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0xbU))))))) 
              << 5U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffffffffbfULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0xeU))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0xdU))))))) 
              << 6U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffffffff7fULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x10U))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0xfU))))))) 
              << 7U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffffffeffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x12U))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x11U))))))) 
              << 8U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffffffdffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x14U))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x13U))))))) 
              << 9U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffffffbffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x16U))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x15U))))))) 
              << 0xaU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffffff7ffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x18U))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x17U))))))) 
              << 0xbU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffffffefffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x1aU))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x19U))))))) 
              << 0xcU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffffffdfffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x1cU))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x1bU))))))) 
              << 0xdU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffffffbfffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x1eU))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x1dU))))))) 
              << 0xeU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffffff7fffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x20U))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x1fU))))))) 
              << 0xfU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffffeffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x22U))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x21U))))))) 
              << 0x10U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffffdffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x24U))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x23U))))))) 
              << 0x11U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffffbffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x26U))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x25U))))))) 
              << 0x12U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffff7ffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x28U))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x27U))))))) 
              << 0x13U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffffefffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x2aU))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x29U))))))) 
              << 0x14U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffffdfffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x2cU))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x2bU))))))) 
              << 0x15U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffffbfffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x2eU))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x2dU))))))) 
              << 0x16U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffff7fffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x30U))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x2fU))))))) 
              << 0x17U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffeffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x32U))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x31U))))))) 
              << 0x18U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffdffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x34U))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x33U))))))) 
              << 0x19U));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffbffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x36U))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x35U))))))) 
              << 0x1aU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffff7ffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x38U))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x37U))))))) 
              << 0x1bU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffefffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x3aU))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x39U))))))) 
              << 0x1cU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffdfffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x3cU))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x3bU))))))) 
              << 0x1dU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffbfffffffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x3eU))) 
                                     | ((~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x3dU))))))) 
              << 0x1eU));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__124(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__124\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    CData/*31:0*/ __Vtemp1014;
    CData/*31:0*/ __Vtemp1019;
    CData/*31:0*/ __Vtemp1030;
    CData/*31:0*/ __Vtemp1035;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
        = ((0xffffffc0U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U]) 
           | (0x3fU & (((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
                        & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                            << 0x14U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                         >> 0xcU))) 
                       | ((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))))) 
                          & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                              << 0x1aU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                           >> 6U))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
        = ((0xfffff03fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U]) 
           | (0xfc0U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
                          << 6U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                     << 0xeU) | (0x3fc0U 
                                                 & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                    >> 0x12U)))) 
                        | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))))) 
                            << 6U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                       << 0x14U) | 
                                      (0xfffc0U & (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                   >> 0xcU)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
        = ((0xfffc0fffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U]) 
           | (0x3f000U & ((0xfffff000U & (((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))) 
                                           << 0xcU) 
                                          & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                             << 8U))) 
                          | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))))) 
                              << 0xcU) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                           << 0xeU) 
                                          | (0x3000U 
                                             & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                >> 0x12U)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
        = ((0xff03ffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U]) 
           | (0xfc0000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
                             << 0x12U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                          << 2U)) | 
                           (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))))) 
                             << 0x12U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                          << 8U)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
        = ((0xc0ffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U]) 
           | (0x3f000000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))) 
                               << 0x18U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                             << 0x1cU) 
                                            | (0xf000000U 
                                               & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                  >> 4U)))) 
                             | (0xff000000U & (((- (IData)(
                                                           (1U 
                                                            & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))))) 
                                                << 0x18U) 
                                               & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                  << 2U))))));
    __Vtemp1014 = (0x3fU & (((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))) 
                             & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                 << 0x18U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                              >> 8U))) 
                            | ((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))))) 
                               & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                   << 0x1eU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                >> 2U)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
        = ((0x3fffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U]) 
           | (0xc0000000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))) 
                               << 0x1eU) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                            << 0x16U)) 
                             | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))))) 
                                 << 0x1eU) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                              << 0x1cU)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
        = ((0xfffffff0U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U]) 
           | (0x3fffffffU & (__Vtemp1014 >> 2U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
        = ((0xfffffc0fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U]) 
           | (0x3f0U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))) 
                          << 4U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                     << 0x10U) | (0xfff0U 
                                                  & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                     >> 0x10U)))) 
                        | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))))) 
                            << 4U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                       << 0x16U) | 
                                      (0x3ffff0U & 
                                       (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                        >> 0xaU)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
        = ((0xffff03ffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U]) 
           | (0xfc00U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
                           & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U]) 
                          << 0xaU) | (((- (IData)((1U 
                                                   & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))))) 
                                       << 0xaU) & (
                                                   (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                    << 0x10U) 
                                                   | (0xfc00U 
                                                      & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                         >> 0x10U)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
        = ((0xffc0ffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U]) 
           | (0x3f0000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))) 
                             << 0x10U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                          << 4U)) | 
                           (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))))) 
                             << 0x10U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                          << 0xaU)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
        = ((0xf03fffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U]) 
           | (0xfc00000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))) 
                              << 0x16U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                            << 0x1eU) 
                                           | (0x3fc00000U 
                                              & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                 >> 2U)))) 
                            | (0xffc00000U & (((- (IData)(
                                                          (1U 
                                                           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))))) 
                                               << 0x16U) 
                                              & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                 << 4U))))));
    __Vtemp1019 = (0x3fU & (((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))) 
                             & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                 << 0x1cU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                              >> 4U))) 
                            | ((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))))) 
                               & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                   << 2U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                             >> 0x1eU)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
        = ((0xfffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U]) 
           | (0xf0000000U & ((0xf0000000U & (((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))) 
                                              << 0x1cU) 
                                             & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                << 0x18U))) 
                             | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))))) 
                                 << 0x1cU) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                               << 0x1eU) 
                                              | (0x30000000U 
                                                 & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                    >> 2U)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
        = ((0xfffffffcU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U]) 
           | (0xfffffffU & (__Vtemp1019 >> 4U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
        = ((0xffffff03U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U]) 
           | (0xfcU & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel))) 
                         << 2U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                    << 0x12U) | (0x3fffcU 
                                                 & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                    >> 0xeU)))) 
                       | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel))))) 
                           << 2U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                      << 0x18U) | (0xfffffcU 
                                                   & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                      >> 8U)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
        = ((0xffffc0ffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U]) 
           | (0x3f00U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel))) 
                           << 8U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                      << 0xcU) | (0xf00U 
                                                  & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                     >> 0x14U)))) 
                         | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel))))) 
                             << 8U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                        << 0x12U) | 
                                       (0x3ff00U & 
                                        (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                         >> 0xeU)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
        = ((0xfff03fffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U]) 
           | (0xfc000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel))) 
                            << 0xeU) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                        << 6U)) | (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel))))) 
                                                    << 0xeU) 
                                                   & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                      << 0xcU)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
        = ((0xfc0fffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U]) 
           | (0x3f00000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel))) 
                              << 0x14U) & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U]) 
                            | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel))))) 
                                << 0x14U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                             << 6U)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
        = ((0x3ffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U]) 
           | (0xfc000000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
                               & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U]) 
                              << 0x1aU) | (0xfc000000U 
                                           & (((- (IData)(
                                                          (1U 
                                                           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))))) 
                                               << 0x1aU) 
                                              & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U])))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
        = ((0xffffffc0U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U]) 
           | (0x3fU & (((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))) 
                        & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                            << 0x14U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                         >> 0xcU))) 
                       | ((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))))) 
                          & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                              << 0x1aU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                           >> 6U))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
        = ((0xfffff03fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U]) 
           | (0xfc0U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))) 
                          << 6U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                     << 0xeU) | (0x3fc0U 
                                                 & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                    >> 0x12U)))) 
                        | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))))) 
                            << 6U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                       << 0x14U) | 
                                      (0xfffc0U & (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                   >> 0xcU)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
        = ((0xfffc0fffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U]) 
           | (0x3f000U & ((0xfffff000U & (((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))) 
                                           << 0xcU) 
                                          & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                             << 8U))) 
                          | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))))) 
                              << 0xcU) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                           << 0xeU) 
                                          | (0x3000U 
                                             & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                >> 0x12U)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
        = ((0xff03ffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U]) 
           | (0xfc0000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel))) 
                             << 0x12U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                          << 2U)) | 
                           (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel))))) 
                             << 0x12U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                          << 8U)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
        = ((0xc0ffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U]) 
           | (0x3f000000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel))) 
                               << 0x18U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                             << 0x1cU) 
                                            | (0xf000000U 
                                               & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                  >> 4U)))) 
                             | (0xff000000U & (((- (IData)(
                                                           (1U 
                                                            & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel))))) 
                                                << 0x18U) 
                                               & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                  << 2U))))));
    __Vtemp1030 = (0x3fU & (((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel))) 
                             & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                 << 0x18U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                              >> 8U))) 
                            | ((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel))))) 
                               & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                   << 0x1eU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                >> 2U)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
        = ((0x3fffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U]) 
           | (0xc0000000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel))) 
                               << 0x1eU) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                            << 0x16U)) 
                             | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel))))) 
                                 << 0x1eU) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                              << 0x1cU)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
        = ((0xfffffff0U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U]) 
           | (0x3fffffffU & (__Vtemp1030 >> 2U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
        = ((0xfffffc0fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U]) 
           | (0x3f0U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel))) 
                          << 4U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                     << 0x10U) | (0xfff0U 
                                                  & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                     >> 0x10U)))) 
                        | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel))))) 
                            << 4U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                       << 0x16U) | 
                                      (0x3ffff0U & 
                                       (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                        >> 0xaU)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
        = ((0xffff03ffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U]) 
           | (0xfc00U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel))) 
                           & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U]) 
                          << 0xaU) | (((- (IData)((1U 
                                                   & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel))))) 
                                       << 0xaU) & (
                                                   (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                    << 0x10U) 
                                                   | (0xfc00U 
                                                      & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                         >> 0x10U)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
        = ((0xffc0ffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U]) 
           | (0x3f0000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel))) 
                             << 0x10U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                          << 4U)) | 
                           (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel))))) 
                             << 0x10U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                          << 0xaU)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
        = ((0xf03fffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U]) 
           | (0xfc00000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel))) 
                              << 0x16U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                            << 0x1eU) 
                                           | (0x3fc00000U 
                                              & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                 >> 2U)))) 
                            | (0xffc00000U & (((- (IData)(
                                                          (1U 
                                                           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel))))) 
                                               << 0x16U) 
                                              & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                 << 4U))))));
    __Vtemp1035 = (0x3fU & (((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel))) 
                             & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                 << 0x1cU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                              >> 4U))) 
                            | ((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel))))) 
                               & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                   << 2U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                             >> 0x1eU)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
        = ((0xfffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U]) 
           | (0xf0000000U & ((0xf0000000U & (((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel))) 
                                              << 0x1cU) 
                                             & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                << 0x18U))) 
                             | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel))))) 
                                 << 0x1cU) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                               << 0x1eU) 
                                              | (0x30000000U 
                                                 & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                    >> 2U)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
        = ((0xfffffffcU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U]) 
           | (0xfffffffU & (__Vtemp1035 >> 4U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
        = ((0xffffff03U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U]) 
           | (0xfcU & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel))) 
                         << 2U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                    << 0x12U) | (0x3fffcU 
                                                 & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                    >> 0xeU)))) 
                       | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel))))) 
                           << 2U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                      << 0x18U) | (0xfffffcU 
                                                   & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                      >> 8U)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
        = ((0xffffc0ffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U]) 
           | (0x3f00U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel))) 
                           << 8U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                      << 0xcU) | (0xf00U 
                                                  & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                     >> 0x14U)))) 
                         | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel))))) 
                             << 8U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                        << 0x12U) | 
                                       (0x3ff00U & 
                                        (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                         >> 0xeU)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
        = ((0xfff03fffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U]) 
           | (0xfc000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel))) 
                            << 0xeU) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                        << 6U)) | (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel))))) 
                                                    << 0xeU) 
                                                   & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                      << 0xcU)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
        = ((0xfc0fffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U]) 
           | (0x3f00000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel))) 
                              << 0x14U) & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU]) 
                            | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel))))) 
                                << 0x14U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                             << 6U)))));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__125(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__125\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    CData/*31:0*/ __Vtemp1050;
    CData/*31:0*/ __Vtemp1061;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = ((0xfffffff8U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
           | (7U & (((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
                     & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                         << 0x1aU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                      >> 6U))) | ((- (IData)(
                                                             (1U 
                                                              & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))))) 
                                                  & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                      << 0x1dU) 
                                                     | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                        >> 3U))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = ((0xffffffc7U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
           | (0x38U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
                         << 3U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                    << 0x17U) | (0x7ffff8U 
                                                 & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                    >> 9U)))) 
                       | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))))) 
                           << 3U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                      << 0x1aU) | (0x3fffff8U 
                                                   & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                      >> 6U)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = ((0xfffffe3fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
           | (0x1c0U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))) 
                          << 6U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                     << 0x14U) | (0xfffc0U 
                                                  & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                     >> 0xcU)))) 
                        | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))))) 
                            << 6U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                       << 0x17U) | 
                                      (0x7fffc0U & 
                                       (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                        >> 9U)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = ((0xfffff1ffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
           | (0xe00U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
                          << 9U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                     << 0x11U) | (0x1fe00U 
                                                  & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                     >> 0xfU)))) 
                        | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))))) 
                            << 9U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                       << 0x14U) | 
                                      (0xffe00U & (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                   >> 0xcU)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = ((0xffff8fffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
           | (0x7000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))) 
                           << 0xcU) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                        << 0xeU) | 
                                       (0x3000U & (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                   >> 0x12U)))) 
                         | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))))) 
                             << 0xcU) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                          << 0x11U) 
                                         | (0x1f000U 
                                            & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                               >> 0xfU)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = ((0xfffc7fffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
           | (0x38000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))) 
                            << 0xfU) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                        << 0xbU)) | 
                          (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))))) 
                            << 0xfU) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                        << 0xeU)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = ((0xffe3ffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
           | (0x1c0000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))) 
                             << 0x12U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                          << 8U)) | 
                           (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))))) 
                             << 0x12U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                          << 0xbU)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = ((0xff1fffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
           | (0xe00000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
                             << 0x15U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                          << 5U)) | 
                           (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))))) 
                             << 0x15U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                          << 8U)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = ((0xf8ffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
           | (0x7000000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))) 
                              << 0x18U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                           << 2U)) 
                            | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))))) 
                                << 0x18U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                             << 5U)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = ((0xc7ffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
           | (0x38000000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))) 
                               << 0x1bU) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                             << 0x1fU) 
                                            | (0x78000000U 
                                               & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 1U)))) 
                             | (0xf8000000U & (((- (IData)(
                                                           (1U 
                                                            & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))))) 
                                                << 0x1bU) 
                                               & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  << 2U))))));
    __Vtemp1050 = (7U & (((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))) 
                          & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                              << 0x1eU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                           >> 2U))) 
                         | ((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))))) 
                            & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                << 1U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                          >> 0x1fU)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = ((0x3fffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
           | (0xc0000000U & ((0xc0000000U & (((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))) 
                                              << 0x1eU) 
                                             & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x1cU))) 
                             | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))))) 
                                 << 0x1eU) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                               << 0x1fU) 
                                              | (0x40000000U 
                                                 & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                    >> 1U)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | (0x3fffffffU & (__Vtemp1050 >> 2U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0xfffffff1U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | (0xeU & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel))) 
                        << 1U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                   << 0x19U) | (0x1fffffeU 
                                                & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                   >> 7U)))) 
                      | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel))))) 
                          << 1U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                     << 0x1cU) | (0xffffffeU 
                                                  & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                     >> 4U)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0xffffff8fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | (0x70U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel))) 
                         << 4U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                    << 0x16U) | (0x3ffff0U 
                                                 & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                    >> 0xaU)))) 
                       | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel))))) 
                           << 4U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                      << 0x19U) | (0x1fffff0U 
                                                   & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                      >> 7U)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0xfffffc7fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | (0x380U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel))) 
                          << 7U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                     << 0x13U) | (0x7ff80U 
                                                  & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                     >> 0xdU)))) 
                        | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel))))) 
                            << 7U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                       << 0x16U) | 
                                      (0x3fff80U & 
                                       (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                        >> 0xaU)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0xffffe3ffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | (0x1c00U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel))) 
                           << 0xaU) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                        << 0x10U) | 
                                       (0xfc00U & (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                   >> 0x10U)))) 
                         | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel))))) 
                             << 0xaU) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                          << 0x13U) 
                                         | (0x7fc00U 
                                            & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                               >> 0xdU)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0xffff1fffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | (0xe000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
                           & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
                          << 0xdU) | (((- (IData)((1U 
                                                   & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))))) 
                                       << 0xdU) & (
                                                   (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                    << 0x10U) 
                                                   | (0xe000U 
                                                      & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                         >> 0x10U)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0xfff8ffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | (0x70000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))) 
                            << 0x10U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                         << 0xaU)) 
                          | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))))) 
                              << 0x10U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                           << 0xdU)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0xffc7ffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | (0x380000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))) 
                             << 0x13U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                          << 7U)) | 
                           (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))))) 
                             << 0x13U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                          << 0xaU)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0xfe3fffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | (0x1c00000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))) 
                              << 0x16U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                           << 4U)) 
                            | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))))) 
                                << 0x16U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                             << 7U)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0xf1ffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | (0xe000000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel))) 
                              << 0x19U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                           << 1U)) 
                            | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel))))) 
                                << 0x19U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                             << 4U)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0x8fffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | (0x70000000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel))) 
                               << 0x1cU) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                             << 0x1eU) 
                                            | (0x30000000U 
                                               & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 2U)))) 
                             | (0xf0000000U & (((- (IData)(
                                                           (1U 
                                                            & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel))))) 
                                                << 0x1cU) 
                                               & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  << 1U))))));
    __Vtemp1061 = (7U & (((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel))) 
                          & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                              << 0x1cU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                           >> 4U))) 
                         | ((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel))))) 
                            & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                << 0x1fU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                             >> 1U)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0x7fffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | (0x80000000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel))) 
                               << 0x1fU) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                            << 0x1bU)) 
                             | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel))))) 
                                 << 0x1fU) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                              << 0x1eU)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = ((0xfffffffcU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U]) 
           | (0x7fffffffU & (__Vtemp1061 >> 1U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = ((0xffffffe3U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U]) 
           | (0x1cU & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel))) 
                         << 2U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                    << 0x18U) | (0xfffffcU 
                                                 & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                    >> 8U)))) 
                       | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel))))) 
                           << 2U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                      << 0x1bU) | (0x7fffffcU 
                                                   & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                      >> 5U)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = ((0xffffff1fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U]) 
           | (0xe0U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel))) 
                         << 5U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                    << 0x15U) | (0x1fffe0U 
                                                 & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                    >> 0xbU)))) 
                       | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel))))) 
                           << 5U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                      << 0x18U) | (0xffffe0U 
                                                   & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                      >> 8U)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = ((0xfffff8ffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U]) 
           | (0x700U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel))) 
                          << 8U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                     << 0x12U) | (0x3ff00U 
                                                  & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                     >> 0xeU)))) 
                        | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel))))) 
                            << 8U) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                       << 0x15U) | 
                                      (0x1fff00U & 
                                       (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                        >> 0xbU)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = ((0xffffc7ffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U]) 
           | (0x3800U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel))) 
                           << 0xbU) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                        << 0xfU) | 
                                       (0x7800U & (
                                                   vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                   >> 0x11U)))) 
                         | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel))))) 
                             << 0xbU) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                          << 0x12U) 
                                         | (0x3f800U 
                                            & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                               >> 0xeU)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = ((0xfffe3fffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U]) 
           | (0x1c000U & ((0xffffc000U & (((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel))) 
                                           << 0xeU) 
                                          & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                             << 0xcU))) 
                          | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel))))) 
                              << 0xeU) & ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                           << 0xfU) 
                                          | (0x4000U 
                                             & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                >> 0x11U)))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = ((0xfff1ffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U]) 
           | (0xe0000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel))) 
                            << 0x11U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                         << 9U)) | 
                          (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel))))) 
                            << 0x11U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                         << 0xcU)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = ((0xff8fffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U]) 
           | (0x700000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel))) 
                             << 0x14U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                          << 6U)) | 
                           (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel))))) 
                             << 0x14U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                          << 9U)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = ((0xfc7fffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U]) 
           | (0x3800000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel))) 
                              << 0x17U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                           << 3U)) 
                            | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel))))) 
                                << 0x17U) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                             << 6U)))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = ((0xe3ffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U]) 
           | (0x1c000000U & ((((- (IData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel))) 
                               << 0x1aU) & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U]) 
                             | (((- (IData)((1U & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel))))) 
                                 << 0x1aU) & (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                              << 3U)))));
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__126(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__126\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_pipe_flush = 0U;
    if (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op_en) 
         & ((1U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op)) 
            | (2U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op))))) {
        if (((0x300U == (0xfffU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 0x14U))) | (0x304U 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x14U))))) {
            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_pipe_flush = 1U;
        }
    } else {
        if (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op_en) 
             & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op)))) {
            if (((((0x7b0U == (0xfffU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x14U))) 
                   | (0x7b1U == (0xfffU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                           >> 0x14U)))) 
                  | (0x7b2U == (0xfffU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x14U)))) 
                 | (0x7b3U == (0xfffU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x14U))))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_pipe_flush = 1U;
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en = 0U;
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((0x40U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en = 1U;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
            if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
                if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en = 1U;
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en = 0U;
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((0x40U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en = 1U;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
            if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
                if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en = 1U;
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we = 0U;
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((0x800U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((0x80U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((0x10U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))));
                                    } else {
                                        if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                                = (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                                   | (0xffffffffULL 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (0x1fU 
                                                          & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))));
                                        } else {
                                            if ((4U 
                                                 & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                                    = 
                                                    (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                                     | (0xffffffffULL 
                                                        & ((IData)(1U) 
                                                           << 
                                                           (0x1fU 
                                                            & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))));
                                            } else {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                                        = 
                                                        (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                                         | (0xffffffffULL 
                                                            & ((IData)(1U) 
                                                               << 
                                                               (0x1fU 
                                                                & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))));
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                                            = 
                                                            (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                                             | (0xffffffffULL 
                                                                & ((IData)(1U) 
                                                                   << 
                                                                   (0x1fU 
                                                                    & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we = 0U;
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((0x800U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((0x10U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))));
                                    } else {
                                        if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                = (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                   | (0xffffffffULL 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (0x1fU 
                                                          & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))));
                                        } else {
                                            if ((4U 
                                                 & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                    = 
                                                    (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                     | (0xffffffffULL 
                                                        & ((IData)(1U) 
                                                           << 
                                                           (0x1fU 
                                                            & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))));
                                            } else {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                        = 
                                                        (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                         | (0xffffffffULL 
                                                            & ((IData)(1U) 
                                                               << 
                                                               (0x1fU 
                                                                & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))));
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                            = 
                                                            (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                             | (0xffffffffULL 
                                                                & ((IData)(1U) 
                                                                   << 
                                                                   (0x1fU 
                                                                    & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_pipe_flush) 
           & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req 
        = (((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
              | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)) 
             | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d)) 
            | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err) 
               | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err))) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
              | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 0U;
    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                }
            } else {
                if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) 
                          | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq)) 
                         & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id) 
                            | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                    }
                    if ((1U & (((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id)) 
                                & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req))) 
                               & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q))))) {
                        if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                        } else {
                            if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                            }
                        }
                    }
                } else {
                    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                    }
                    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id = 0U;
    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready 
        = (1U & (((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id)) 
                  & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if))) 
                 & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffffffeU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffffffdU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffffffbU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffffff7U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffffffefU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffffffdfU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffffffbfU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffffff7fU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffffeffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffffdffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffffbffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffff7ffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffffefffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffffdfffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffffbfffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffff7fffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffeffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffdffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffbffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfff7ffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffefffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffdfffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffbfffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xff7fffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfeffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfdffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfbffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xf7ffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xefffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xdfffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xbfffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0x7fffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (1U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffffffdU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xfffffffbU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_instr_ret_wb) 
              << 2U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xfffffff7U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | ((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)) 
               & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid))) 
              << 3U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xffffffefU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready) 
               & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q))) 
              << 4U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xffffffdfU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_load) 
              << 5U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xffffffbfU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_store) 
              << 6U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xffffff7fU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_jump) 
              << 7U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xfffffeffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_branch) 
              << 8U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xfffffdffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_tbranch) 
              << 9U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xfffffbffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_instr_ret_wb) 
               & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_is_compressed_id)) 
              << 0xaU));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xfffff7ffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
               & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec)) 
              << 0xbU));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xffffefffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
               & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec)) 
              << 0xcU));
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__127(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__127\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_enable__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_1__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_2__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_3__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_9__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_10__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_11__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_22__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_23__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_24__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_25__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio4__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio4_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio5__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio5_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio6__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio6_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio8__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio8_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio19__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio19_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio22__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio22_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio23__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio23_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio26__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio26_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_0__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_1__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_2__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_3__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_11__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_12__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_15__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_21__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_22__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_23__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_24__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_threshold0__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_msip0__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we));
    if (vlTOPp->rst_ni) {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 8U) & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 9U) & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 0xaU) & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 0xbU) & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 0x10U) & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 0x11U) & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 0x17U) & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 0x18U) & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 0x19U) & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 0x1aU) & 1U);
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__filter_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 1U));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 8U));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 9U));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0xaU));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0xbU));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x10U));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x11U));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x12U));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x13U));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x14U));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x15U));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x16U));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x17U));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x18U));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x19U));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x1aU));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
}
