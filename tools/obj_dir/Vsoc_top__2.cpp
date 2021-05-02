// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top.h"
#include "Vsoc_top__Syms.h"

VL_INLINE_OPT void Vsoc_top::_combo__TOP__128(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__128\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 8U)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 9U)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0xaU)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0xbU)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x10U)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x11U)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x17U)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x18U)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x19U)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x1aU)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_q)))));
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__129(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__129\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_4__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_5__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_6__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_7__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_8__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_12__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_13__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_14__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_15__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_16__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_26__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_27__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_28__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_29__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_30__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio9__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio9_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio10__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio10_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio11__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio11_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio12__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio12_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio13__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio13_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio20__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio20_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio21__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio21_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_4__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_5__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_6__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_8__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_9__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_10__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_25__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_27__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_28__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_29__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_30__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_31__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we));
    if (vlTOPp->rst_ni) {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 2U) & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 3U) & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 4U) & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 5U) & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 6U) & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 7U) & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 0x1bU) & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 0x1cU) & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 0x1dU) & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 0x1eU) & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 0x1fU) & 1U);
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__filter_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 2U));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 3U));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 4U));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 5U));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 6U));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 7U));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x1bU));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x1cU));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x1dU));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x1eU));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x1fU));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__130(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__130\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 2U)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 3U)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 4U)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 5U)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 6U)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 7U)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x1bU)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x1cU)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x1dU)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x1eU)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x1fU)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_q)))));
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__131(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__131\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst_ni) {
        if ((0x4000U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                         >> 0xfU));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x10000U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                         >> 0x11U));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x40000U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                         >> 0x13U));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x100000U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                         >> 0x15U));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x400000U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                         >> 0x17U));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x1000000U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                         >> 0x19U));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x4000000U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                         >> 0x1bU));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x10000000U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                         >> 0x1dU));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x40000000U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                         >> 0x1fU));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 1U));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((4U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 3U));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x10U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 5U));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x40U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 7U));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x100U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 9U));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x400U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 0xbU));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x1000U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 0xdU));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x4000U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 0xfU));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x10000U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 0x11U));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x40000U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 0x13U));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x100000U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 0x15U));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x400000U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 0x17U));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x1000000U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 0x19U));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x4000000U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 0x1bU));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x10000000U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 0x1dU));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x40000000U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 0x1fU));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                         >> 1U));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((4U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                         >> 3U));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x10U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U])) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__q 
                = (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                         >> 5U));
        }
    } else {
        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__q = 0U;
    }
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = ((0xffffff7fU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]) 
           | (0x80U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                       << 7U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = ((0xfffffdffU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]) 
           | (0x200U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                        << 8U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = ((0xfffff7ffU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]) 
           | (0x800U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                        << 9U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = ((0xffffdfffU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]) 
           | (0x2000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                         << 0xaU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = ((0xffff7fffU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]) 
           | (0x8000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                         << 0xbU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = ((0xfffdffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]) 
           | (0x20000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                          << 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = ((0xfff7ffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]) 
           | (0x80000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                          << 0xdU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = ((0xffdfffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]) 
           | (0x200000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                           << 0xeU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = ((0xff7fffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]) 
           | (0x800000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                           << 0xfU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = ((0xfdffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]) 
           | (0x2000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                            << 0x10U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = ((0xf7ffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]) 
           | (0x8000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                            << 0x11U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = ((0xdfffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]) 
           | (0x20000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                             << 0x12U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = ((0x7fffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]) 
           | (0x80000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                             << 0x13U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = ((0xfffffffdU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]) 
           | (2U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                    >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = ((0xfffffff7U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]) 
           | (8U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                    >> 0xbU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = ((0xffffffdfU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]) 
           | (0x20U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                       >> 0xaU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = ((0xffffff7fU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]) 
           | (0x80U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                       >> 9U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = ((0xfffffdffU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]) 
           | (0x200U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                        >> 8U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = ((0xfffff7ffU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]) 
           | (0x800U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                        >> 7U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = ((0xffffdfffU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]) 
           | (0x2000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                         >> 6U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = ((0xffff7fffU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]) 
           | (0x8000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                         >> 5U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = ((0xfffdffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]) 
           | (0x20000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                          >> 4U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = ((0xfff7ffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]) 
           | (0x80000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                          >> 3U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = ((0xffdfffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]) 
           | (0x200000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                           >> 2U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = ((0xff7fffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]) 
           | (0x800000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                           >> 1U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = ((0xfdffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]) 
           | (0x2000000U & vlTOPp->soc_top__DOT__intr_controller__DOT__ip));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = ((0xf7ffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]) 
           | (0x8000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                            << 1U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = ((0xdfffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]) 
           | (0x20000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                             << 2U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = ((0x7fffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]) 
           | (0x80000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                             << 3U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
        = ((0x3dU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U]) 
           | (2U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                    >> 0x1cU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
        = ((0x37U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U]) 
           | (8U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                    >> 0x1bU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
        = ((0x1fU & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U]) 
           | (0x20U & (vlTOPp->soc_top__DOT__intr_controller__DOT__ip 
                       >> 0x1aU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__irq_id_o[0U] 
        = (0x1fU & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_id_q));
    vlTOPp->soc_top__DOT__intr_controller__DOT__claim_id[0U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__irq_id_o
        [0U];
    vlTOPp->soc_top__DOT__intr_controller__DOT__cc_id[0U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__irq_id_o
        [0U];
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = ((0xffffffc0U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]) 
           | vlTOPp->soc_top__DOT__intr_controller__DOT__cc_id
           [0U]);
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__132(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__132\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0ULL != (0xffULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit)))) {
        if ((1U & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit))) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffeU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__q));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffdU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__q) 
                      << 1U));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffbU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__q) 
                      << 2U));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff7U & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__q) 
                      << 3U));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffefU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__q) 
                      << 4U));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffdfU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__q) 
                      << 5U));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffbfU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__q) 
                      << 6U));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff7fU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__q) 
                      << 7U));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffeffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__q) 
                      << 8U));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffdffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__q) 
                      << 9U));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffbffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__q) 
                      << 0xaU));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffff7ffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__q) 
                      << 0xbU));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffefffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__q) 
                      << 0xcU));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffdfffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__q) 
                      << 0xdU));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffbfffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__q) 
                      << 0xeU));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffff7fffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__q) 
                      << 0xfU));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffeffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__q) 
                      << 0x10U));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffdffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__q) 
                      << 0x11U));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffbffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__q) 
                      << 0x12U));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfff7ffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__q) 
                      << 0x13U));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffefffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__q) 
                      << 0x14U));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffdfffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__q) 
                      << 0x15U));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffbfffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__q) 
                      << 0x16U));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xff7fffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__q) 
                      << 0x17U));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfeffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__q) 
                      << 0x18U));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfdffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__q) 
                      << 0x19U));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfbffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__q) 
                      << 0x1aU));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xf7ffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__q) 
                      << 0x1bU));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xefffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__q) 
                      << 0x1cU));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xdfffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__q) 
                      << 0x1dU));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xbfffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__q) 
                      << 0x1eU));
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0x7fffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__q) 
                      << 0x1fU));
        } else {
            if ((1U & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                               >> 1U)))) {
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffffeU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_0__q));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffffdU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_1__q) 
                          << 1U));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffffbU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_2__q) 
                          << 2U));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffff7U & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_3__q) 
                          << 3U));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffffefU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_4__q) 
                          << 4U));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffffdfU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_5__q) 
                          << 5U));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffffbfU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_6__q) 
                          << 6U));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffff7fU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_7__q) 
                          << 7U));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffeffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_8__q) 
                          << 8U));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffdffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_9__q) 
                          << 9U));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffbffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_10__q) 
                          << 0xaU));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffff7ffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_11__q) 
                          << 0xbU));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffefffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_12__q) 
                          << 0xcU));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffdfffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_13__q) 
                          << 0xdU));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffbfffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_14__q) 
                          << 0xeU));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffff7fffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_15__q) 
                          << 0xfU));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffeffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_16__q) 
                          << 0x10U));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffdffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_17__q) 
                          << 0x11U));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffbffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_18__q) 
                          << 0x12U));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfff7ffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_19__q) 
                          << 0x13U));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffefffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_20__q) 
                          << 0x14U));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffdfffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_21__q) 
                          << 0x15U));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffbfffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_22__q) 
                          << 0x16U));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xff7fffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_23__q) 
                          << 0x17U));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfeffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_24__q) 
                          << 0x18U));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfdffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_25__q) 
                          << 0x19U));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfbffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_26__q) 
                          << 0x1aU));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xf7ffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_27__q) 
                          << 0x1bU));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xefffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_28__q) 
                          << 0x1cU));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xdfffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_29__q) 
                          << 0x1dU));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xbfffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_30__q) 
                          << 0x1eU));
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0x7fffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_31__q) 
                          << 0x1fU));
            } else {
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffff8U & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((1U & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                         >> 2U))) ? (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio0__q)
                           : ((1U & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                             >> 3U)))
                               ? (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio1__q)
                               : ((1U & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                 >> 4U)))
                                   ? (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio2__q)
                                   : ((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                     >> 5U)))
                                       ? (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio3__q)
                                       : ((1U & (IData)(
                                                        (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                         >> 6U)))
                                           ? (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio4__q)
                                           : (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio5__q)))))));
            }
        }
    } else {
        if ((IData)((0ULL != (0x1f700ULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit)))) {
            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff8U & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((1U & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                     >> 8U))) ? (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio6__q)
                       : ((1U & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                         >> 9U))) ? (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio7__q)
                           : ((1U & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                             >> 0xaU)))
                               ? (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio8__q)
                               : ((1U & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                 >> 0xcU)))
                                   ? (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio10__q)
                                   : ((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                     >> 0xdU)))
                                       ? (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q)
                                       : ((1U & (IData)(
                                                        (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                         >> 0xeU)))
                                           ? (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio12__q)
                                           : ((1U & (IData)(
                                                            (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                             >> 0xfU)))
                                               ? (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio13__q)
                                               : (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio14__q)))))))));
        } else {
            if ((IData)((0ULL != (0x1fe0000ULL & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit)))) {
                vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffff8U & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((1U & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                         >> 0x11U)))
                           ? (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q)
                           : ((1U & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                             >> 0x12U)))
                               ? (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio16__q)
                               : ((1U & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                 >> 0x13U)))
                                   ? (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q)
                                   : ((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                     >> 0x14U)))
                                       ? (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q)
                                       : ((1U & (IData)(
                                                        (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                         >> 0x15U)))
                                           ? (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q)
                                           : ((1U & (IData)(
                                                            (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                             >> 0x16U)))
                                               ? (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                              >> 0x17U)))
                                                   ? (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q)
                                                   : (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q)))))))));
            } else {
                if ((IData)((0ULL != (0x1fe000000ULL 
                                      & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit)))) {
                    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                        = ((0xfffffff8U & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                           | ((1U & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                             >> 0x19U)))
                               ? (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q)
                               : ((1U & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                 >> 0x1aU)))
                                   ? (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q)
                                   : ((1U & (IData)(
                                                    (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                     >> 0x1bU)))
                                       ? (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q)
                                       : ((1U & (IData)(
                                                        (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                         >> 0x1cU)))
                                           ? (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q)
                                           : ((1U & (IData)(
                                                            (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                             >> 0x1dU)))
                                               ? (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                              >> 0x1eU)))
                                                   ? (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                               >> 0x1fU)))
                                                    ? (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio29__q)
                                                    : (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio30__q)))))))));
                } else {
                    if ((1U & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                       >> 0x21U)))) {
                        vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xfffffff8U & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                               | (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q));
                    } else {
                        if ((1U & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                           >> 0x22U)))) {
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffffffeU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_0__q));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffffffdU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_1__q) 
                                      << 1U));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffffffbU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_2__q) 
                                      << 2U));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffffff7U & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_3__q) 
                                      << 3U));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffffffefU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_4__q) 
                                      << 4U));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffffffdfU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_5__q) 
                                      << 5U));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffffffbfU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_6__q) 
                                      << 6U));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffffff7fU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_7__q) 
                                      << 7U));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffffeffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_8__q) 
                                      << 8U));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffffdffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_9__q) 
                                      << 9U));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffffbffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_10__q) 
                                      << 0xaU));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffff7ffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_11__q) 
                                      << 0xbU));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffffefffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_12__q) 
                                      << 0xcU));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffffdfffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_13__q) 
                                      << 0xdU));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffffbfffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_14__q) 
                                      << 0xeU));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffff7fffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_15__q) 
                                      << 0xfU));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffeffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_16__q) 
                                      << 0x10U));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffdffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_17__q) 
                                      << 0x11U));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffbffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_18__q) 
                                      << 0x12U));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfff7ffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_19__q) 
                                      << 0x13U));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffefffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_20__q) 
                                      << 0x14U));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffdfffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_21__q) 
                                      << 0x15U));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffbfffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_22__q) 
                                      << 0x16U));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xff7fffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_23__q) 
                                      << 0x17U));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfeffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_24__q) 
                                      << 0x18U));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfdffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_25__q) 
                                      << 0x19U));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfbffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_26__q) 
                                      << 0x1aU));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xf7ffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_27__q) 
                                      << 0x1bU));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xefffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_28__q) 
                                      << 0x1cU));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xdfffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_29__q) 
                                      << 0x1dU));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xbfffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_30__q) 
                                      << 0x1eU));
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0x7fffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_31__q) 
                                      << 0x1fU));
                        } else {
                            vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((1U & (IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                  >> 0x23U)))
                                    ? ((0xfffffff8U 
                                        & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                       | (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_threshold0__q))
                                    : ((1U & (IData)(
                                                     (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                      >> 0x24U)))
                                        ? ((0xffffffc0U 
                                            & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                           | (0x3fU 
                                              & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]))
                                        : ((1U & (IData)(
                                                         (vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                          >> 0x25U)))
                                            ? ((0xfffffffeU 
                                                & vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                               | (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_msip0__q))
                                            : 0xffffffffU)));
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__133(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__133\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__soc_top__DOT__gpio_32__DOT__cio_gpio_en_q 
        = vlTOPp->soc_top__DOT__gpio_32__DOT__cio_gpio_en_q;
    vlTOPp->__Vdly__soc_top__DOT__gpio_32__DOT__cio_gpio_q 
        = vlTOPp->soc_top__DOT__gpio_32__DOT__cio_gpio_q;
    vlTOPp->__Vdly__soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->__Vdly__soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->__Vdly__soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__134(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__134\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0 = 0U;
    vlTOPp->__Vdlyvset__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1 = 0U;
    vlTOPp->__Vdlyvset__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2 = 0U;
    vlTOPp->__Vdlyvset__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3 = 0U;
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__135(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__135\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_0__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio25__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio25_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_14__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we));
    if (vlTOPp->rst_ni) {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 0xeU) & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 0xfU) & 1U);
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__filter_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0xcU));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0xdU));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0xeU));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0xfU));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x10U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[7U])) {
            vlTOPp->__Vdly__soc_top__DOT__gpio_32__DOT__cio_gpio_en_q 
                = ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                    << 0x1bU) | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                 >> 5U));
        } else {
            if ((0x20000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[5U])) {
                vlTOPp->__Vdly__soc_top__DOT__gpio_32__DOT__cio_gpio_en_q 
                    = ((0xffffU & vlTOPp->__Vdly__soc_top__DOT__gpio_32__DOT__cio_gpio_en_q) 
                       | (0xffff0000U & (((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                           << 0xfU) 
                                          & ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                              << 0x1eU) 
                                             | (0x3fff0000U 
                                                & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                                   >> 2U)))) 
                                         | (((~ ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                                    >> 1U))) 
                                             << 0x10U) 
                                            & vlTOPp->soc_top__DOT__gpio_32__DOT__cio_gpio_en_q))));
            } else {
                if ((0x80000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[6U])) {
                    vlTOPp->__Vdly__soc_top__DOT__gpio_32__DOT__cio_gpio_en_q 
                        = ((0xffff0000U & vlTOPp->__Vdly__soc_top__DOT__gpio_32__DOT__cio_gpio_en_q) 
                           | (0xffffU & ((((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                            << 0x1dU) 
                                           | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                              >> 3U)) 
                                          & ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                              << 0xcU) 
                                             | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                                >> 0x14U))) 
                                         | ((~ ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                                 << 0x1dU) 
                                                | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                                   >> 3U))) 
                                            & vlTOPp->soc_top__DOT__gpio_32__DOT__cio_gpio_en_q))));
                }
            }
        }
    } else {
        vlTOPp->__Vdly__soc_top__DOT__gpio_32__DOT__cio_gpio_en_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x200U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xaU])) {
            vlTOPp->__Vdly__soc_top__DOT__gpio_32__DOT__cio_gpio_q 
                = ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                    << 0x16U) | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                 >> 0xaU));
        } else {
            if ((0x400000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[8U])) {
                vlTOPp->__Vdly__soc_top__DOT__gpio_32__DOT__cio_gpio_q 
                    = ((0xffffU & vlTOPp->__Vdly__soc_top__DOT__gpio_32__DOT__cio_gpio_q) 
                       | (0xffff0000U & (((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                           << 0xaU) 
                                          & ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                              << 0x19U) 
                                             | (0x1ff0000U 
                                                & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                                   >> 7U)))) 
                                         | (((~ ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                                    >> 6U))) 
                                             << 0x10U) 
                                            & vlTOPp->soc_top__DOT__gpio_32__DOT__cio_gpio_q))));
            } else {
                if ((0x1000000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[9U])) {
                    vlTOPp->__Vdly__soc_top__DOT__gpio_32__DOT__cio_gpio_q 
                        = ((0xffff0000U & vlTOPp->__Vdly__soc_top__DOT__gpio_32__DOT__cio_gpio_q) 
                           | (0xffffU & ((((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                            << 0x18U) 
                                           | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                              >> 8U)) 
                                          & ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                              << 7U) 
                                             | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                                >> 0x19U))) 
                                         | ((~ ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                                 << 0x18U) 
                                                | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                                   >> 8U))) 
                                            & vlTOPp->soc_top__DOT__gpio_32__DOT__cio_gpio_q))));
                }
            }
        }
    } else {
        vlTOPp->__Vdly__soc_top__DOT__gpio_32__DOT__cio_gpio_q = 0U;
    }
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
        = ((IData)(vlTOPp->rst_ni) ? (0xfffffffeU & 
                                      (vlTOPp->soc_top__DOT__intr_gpio 
                                       << 1U)) : 0U);
    if (vlTOPp->rst_ni) {
        if ((1U & ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we) 
                   | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                      >> 0x15U)))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q 
                = vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_state__DOT__wr_data;
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlTOPp->__Vdly__soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                = (3U & ((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))
                          ? (2U & ((~ ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                       >> 1U)) << 1U))
                          : ((IData)(1U) + (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        }
    } else {
        vlTOPp->__Vdly__soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (((~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
             & ((IData)((0x800U == (0x1c00U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack)))) {
            vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = (3U & ((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                          ? (2U & ((~ ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                       >> 1U)) << 1U))
                          : ((IData)(1U) + (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
    } else {
        vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlTOPp->__Vdly__soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                = (3U & ((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))
                          ? (2U & ((~ ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                       >> 1U)) << 1U))
                          : ((IData)(1U) + (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        }
    } else {
        vlTOPp->__Vdly__soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlTOPp->__Vdly__soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                = (3U & ((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))
                          ? (2U & ((~ ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                       >> 1U)) << 1U))
                          : ((IData)(1U) + (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        }
    } else {
        vlTOPp->__Vdly__soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (((~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
             & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))) {
            vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = (3U & ((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                          ? (2U & ((~ ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                       >> 1U)) << 1U))
                          : ((IData)(1U) + (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
    } else {
        vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (((~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
             & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid))) {
            vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = (3U & ((1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                          ? (2U & ((~ ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                       >> 1U)) << 1U))
                          : ((IData)(1U) + (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
    } else {
        vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__136(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__136\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->soc_top__DOT__iccm__DOT__req) {
        if (vlTOPp->soc_top__DOT__iccm__DOT__we) {
            vlTOPp->__Vdlyvval__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0 
                = (0xffU & vlTOPp->soc_top__DOT__iccm__DOT__wdata);
            vlTOPp->__Vdlyvset__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0 = 1U;
            vlTOPp->__Vdlyvlsb__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0 = 0U;
            vlTOPp->__Vdlyvdim0__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0 
                = vlTOPp->soc_top__DOT__iccm__DOT__addr;
        }
        if ((2U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__we))) {
            vlTOPp->__Vdlyvval__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1 
                = (0xffU & (vlTOPp->soc_top__DOT__iccm__DOT__rdata 
                            >> 8U));
            vlTOPp->__Vdlyvset__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1 = 1U;
            vlTOPp->__Vdlyvlsb__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1 = 8U;
            vlTOPp->__Vdlyvdim0__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1 
                = vlTOPp->soc_top__DOT__iccm__DOT__addr;
        }
        if ((4U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__we))) {
            vlTOPp->__Vdlyvval__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2 
                = (0xffU & (vlTOPp->soc_top__DOT__iccm__DOT__wdata 
                            >> 0x10U));
            vlTOPp->__Vdlyvset__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2 = 1U;
            vlTOPp->__Vdlyvlsb__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2 = 0x10U;
            vlTOPp->__Vdlyvdim0__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2 
                = vlTOPp->soc_top__DOT__iccm__DOT__addr;
        }
        if ((8U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__we))) {
            vlTOPp->__Vdlyvval__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3 
                = (0xffU & (vlTOPp->soc_top__DOT__iccm__DOT__wdata 
                            >> 0x18U));
            vlTOPp->__Vdlyvset__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3 = 1U;
            vlTOPp->__Vdlyvlsb__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3 = 0x18U;
            vlTOPp->__Vdlyvdim0__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3 
                = vlTOPp->soc_top__DOT__iccm__DOT__addr;
        }
    }
    vlTOPp->soc_top__DOT__iccm__DOT__instr_valid = 
        ((IData)(vlTOPp->rst_ni) & ((~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__we)) 
                                    & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__req)));
    if (vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT____Vlvbound1 
            = ((QData)((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword)) 
               << 1U);
        if ((0x41U >= (0x7fU & ((IData)(0x21U) * (1U 
                                                  & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            VL_ASSIGNSEL_WIIQ(66,33,(0x7fU & ((IData)(0x21U) 
                                              * (1U 
                                                 & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))), vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage, vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT____Vlvbound1);
        }
    }
    if (vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT____Vlvbound1 
            = ((((4U != (7U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                               >> 0x12U))) ? 0U : 1U) 
                << 0xbU) | (((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error) 
                             << 0xaU) | (0x3ffU & (
                                                   vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                   >> 5U))));
        if ((0x19U >= (0x1fU & ((IData)(0xdU) * (1U 
                                                 & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                = (((~ ((IData)(0x1fffU) << (0x1fU 
                                             & ((IData)(0xdU) 
                                                * (1U 
                                                   & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) 
                    & vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage) 
                   | (0x3ffffffU & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT____Vlvbound1) 
                                    << (0x1fU & ((IData)(0xdU) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))));
        }
    }
    if (vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT____Vlvbound1 
            = (0x1eU & vlTOPp->soc_top__DOT__xbar_to_iccm[1U]);
        if ((9U >= (0xfU & ((IData)(5U) * (1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                = (((~ ((IData)(0x1fU) << (0xfU & ((IData)(5U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) 
                    & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage)) 
                   | (0x3ffU & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT____Vlvbound1) 
                                << (0xfU & ((IData)(5U) 
                                            * (1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))));
        }
    }
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__137(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__137\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__ia 
        = vlTOPp->__Vdly__soc_top__DOT__intr_controller__DOT__u_gateway__DOT__ia;
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->__Vdly__soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->__Vdly__soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->__Vdly__soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__139(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__139\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0xeU)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0xfU)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q)))));
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__140(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__140\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (2U ^ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->soc_top__DOT__intr_gpio = ((IData)(vlTOPp->rst_ni)
                                        ? (((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                             << 0x15U) 
                                            | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                               >> 0xbU)) 
                                           & ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                               << 0x15U) 
                                              | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                                 >> 0xbU)))
                                        : 0U);
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (2U ^ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (2U ^ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__141(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__141\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->soc_top__DOT__iccm__DOT__req) {
        vlTOPp->soc_top__DOT__iccm__DOT__rdata = vlTOPp->soc_top__DOT__iccm__DOT__inst_memory__DOT__mem
            [vlTOPp->soc_top__DOT__iccm__DOT__addr];
    }
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__142(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__142\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o 
        = ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : ((0x19U >= (0x1fU & ((IData)(0xdU) 
                                        * (1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                     ? (0x1fffU & (vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                   >> (0x1fU & ((IData)(0xdU) 
                                                * (1U 
                                                   & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                     : 0U));
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid 
        = ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__instr_valid) 
           & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)));
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o 
        = ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : ((9U >= (0xfU & ((IData)(5U) * (1U 
                                                   & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                     ? (0x1fU & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                 >> (0xfU & ((IData)(5U) 
                                             * (1U 
                                                & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                     : 0U));
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__143(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__143\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0) {
        vlTOPp->soc_top__DOT__iccm__DOT__inst_memory__DOT__mem[vlTOPp->__Vdlyvdim0__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlTOPp->__Vdlyvlsb__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0))) 
                & vlTOPp->soc_top__DOT__iccm__DOT__inst_memory__DOT__mem
                [vlTOPp->__Vdlyvdim0__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0]) 
               | (0xffffffffULL & ((IData)(vlTOPp->__Vdlyvval__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0) 
                                   << (IData)(vlTOPp->__Vdlyvlsb__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0))));
    }
    if (vlTOPp->__Vdlyvset__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1) {
        vlTOPp->soc_top__DOT__iccm__DOT__inst_memory__DOT__mem[vlTOPp->__Vdlyvdim0__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlTOPp->__Vdlyvlsb__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1))) 
                & vlTOPp->soc_top__DOT__iccm__DOT__inst_memory__DOT__mem
                [vlTOPp->__Vdlyvdim0__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1]) 
               | (0xffffffffULL & ((IData)(vlTOPp->__Vdlyvval__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1) 
                                   << (IData)(vlTOPp->__Vdlyvlsb__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1))));
    }
    if (vlTOPp->__Vdlyvset__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2) {
        vlTOPp->soc_top__DOT__iccm__DOT__inst_memory__DOT__mem[vlTOPp->__Vdlyvdim0__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlTOPp->__Vdlyvlsb__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2))) 
                & vlTOPp->soc_top__DOT__iccm__DOT__inst_memory__DOT__mem
                [vlTOPp->__Vdlyvdim0__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2]) 
               | (0xffffffffULL & ((IData)(vlTOPp->__Vdlyvval__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2) 
                                   << (IData)(vlTOPp->__Vdlyvlsb__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2))));
    }
    if (vlTOPp->__Vdlyvset__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3) {
        vlTOPp->soc_top__DOT__iccm__DOT__inst_memory__DOT__mem[vlTOPp->__Vdlyvdim0__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlTOPp->__Vdlyvlsb__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3))) 
                & vlTOPp->soc_top__DOT__iccm__DOT__inst_memory__DOT__mem
                [vlTOPp->__Vdlyvdim0__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3]) 
               | (0xffffffffULL & ((IData)(vlTOPp->__Vdlyvval__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3) 
                                   << (IData)(vlTOPp->__Vdlyvlsb__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3))));
    }
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__144(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__144\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid) 
           & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)));
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask = 0U;
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask 
        = ((0xffffff00U & vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask) 
           | (0xffffffffULL & (0xffU & (- (IData)((1U 
                                                   & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                      >> 1U)))))));
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(8U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask) 
           | (0xffffffffULL & ((0xffU & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                       >> 2U))))) 
                               << (0x1fU & ((IData)(8U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))));
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(0x10U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask) 
           | (0xffffffffULL & ((0xffU & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                       >> 3U))))) 
                               << (0x1fU & ((IData)(0x10U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))));
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(0x18U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask) 
           | (0xffffffffULL & ((0xffU & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                       >> 4U))))) 
                               << (0x1fU & ((IData)(0x18U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))));
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty 
        = ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
           & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid)));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__145(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__145\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword 
        = (((IData)(vlTOPp->rst_ni) ? vlTOPp->soc_top__DOT__iccm__DOT__rdata
             : 0U) & vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask);
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__146(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__146\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid 
        = (1U & ((~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (IData)(((0x800U != (0x1c00U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o))) 
                            | (1U != (1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))))));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__147(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__147\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o 
        = ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)
            ? 0ULL : (0x1ffffffffULL & (((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
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
                                          : 0ULL))));
    vlTOPp->soc_top__DOT__iccm_to_xbar = (((QData)((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid)) 
                                           << 0x33U) 
                                          | (((QData)((IData)(
                                                              (((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid) 
                                                                & (1U 
                                                                   != 
                                                                   (3U 
                                                                    & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                       >> 0xbU))))
                                                                ? 0U
                                                                : 1U))) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid)
                                                                   ? 
                                                                  (3U 
                                                                   & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                      >> 8U))
                                                                   : 0U))) 
                                                 << 0x2bU) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid)
                                                                      ? 
                                                                     (0xffU 
                                                                      & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o))
                                                                      : 0U))) 
                                                    << 0x23U) 
                                                   | (((QData)((IData)(
                                                                       ((((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid) 
                                                                          & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty))) 
                                                                         & (1U 
                                                                            == 
                                                                            (3U 
                                                                             & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                                >> 0xbU))))
                                                                         ? (IData)(
                                                                                (vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                                                                >> 1U))
                                                                         : 0U))) 
                                                       << 2U) 
                                                      | (QData)((IData)(
                                                                        ((((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid) 
                                                                           & ((~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                                                              & ((1U 
                                                                                == 
                                                                                (3U 
                                                                                & ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                                >> 0xbU)))
                                                                                 ? 
                                                                                ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                                                | ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                                >> 0xaU))
                                                                                 : 
                                                                                ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                                >> 0xaU)))) 
                                                                          << 1U) 
                                                                         | (1U 
                                                                            & ((~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)) 
                                                                               & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full))))))))))));
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__148(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__148\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio24__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio24_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_13__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we));
    if (vlTOPp->rst_ni) {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_state__DOT__qe 
            = ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we) 
               & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 0xcU) & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 0xdU) & 1U);
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_state__DOT__qe = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__filter_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q 
                = (1U & vlTOPp->gpio_i);
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x100000U & vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U])) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__q 
                = ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                    << 0xbU) | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                >> 0x15U));
        }
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__q = 0U;
    }
    vlTOPp->soc_top__DOT__gpio_32__DOT__cio_gpio_en_q 
        = vlTOPp->__Vdly__soc_top__DOT__gpio_32__DOT__cio_gpio_en_q;
    vlTOPp->soc_top__DOT__gpio_32__DOT__cio_gpio_q 
        = vlTOPp->__Vdly__soc_top__DOT__gpio_32__DOT__cio_gpio_q;
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__149(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__149\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0xcU)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0xdU)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q)))));
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__150(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__150\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->gpio_o = (0xfffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__cio_gpio_q);
    vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
        = ((0xfffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U]) 
           | (0xfff00000U & (vlTOPp->soc_top__DOT__gpio_32__DOT__cio_gpio_q 
                             << 0x14U)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
        = ((0xfff00000U & vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U]) 
           | (0xfffffU & (vlTOPp->soc_top__DOT__gpio_32__DOT__cio_gpio_q 
                          >> 0xcU)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[3U] 
        = (0xffff0000U & vlTOPp->soc_top__DOT__gpio_32__DOT__cio_gpio_q);
    vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
        = ((0xfff00000U & vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U]) 
           | (0xffc00U & (vlTOPp->soc_top__DOT__gpio_32__DOT__cio_gpio_q 
                          << 0xaU)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[2U] 
        = vlTOPp->soc_top__DOT__gpio_32__DOT__cio_gpio_en_q;
    vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[0U] 
        = (0xffff0000U & vlTOPp->soc_top__DOT__gpio_32__DOT__cio_gpio_en_q);
    vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
        = (0xffff0000U & (vlTOPp->soc_top__DOT__gpio_32__DOT__cio_gpio_en_q 
                          << 0x10U));
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__151(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__151\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n 
        = ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_mux_id))
            ? ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_mux_id))
                ? 0x20000000U : ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_mux_id))
                                  ? 0x20000000U : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q))
            : ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_mux_id))
                ? ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_mux_id))
                    ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                    : ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                        ? ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                            ? 0x1a110808U : 0x1a110800U)
                        : ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                            ? ((0xffffff00U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                               | (0x7cU & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause) 
                                           << 2U)))
                            : (0xffffff00U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q))))
                : ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_mux_id))
                    ? (IData)((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                               >> 1U)) : 0x20000000U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtvec_init 
        = ((0U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_mux_id)) 
           & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q) 
           & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set) 
              | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q)
            ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q
            : ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec)
                ? (0xfffffffeU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
                : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req 
        = ((((~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec) 
                 & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)))) 
             & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_req_int)) 
            & ((~ (IData)((3U == (3U & (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                         >> 1U) | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev)))))) 
               | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set))) 
           & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                 >> 1U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_d 
        = (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
             ? (0xfffffffeU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
             : (0xfffffffcU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
           + (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
               & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
              << 2U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q) 
           | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n 
        = ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n)) 
           | (1U & ((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                      & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q))) 
                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err)) 
                    | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_q))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n 
        = ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n)) 
           | (2U & ((((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                        & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                              >> 1U))) & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err)) 
                      & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                     << 1U) | (0xfffffffeU & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_q)))));
    vlTOPp->soc_top__DOT__u_top__DOT__instr_req = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                                                   & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err)));
    vlTOPp->soc_top__DOT__ifu_to_xbar[0U] = 1U;
    vlTOPp->soc_top__DOT__ifu_to_xbar[1U] = (0x1eU 
                                             | (0xffffff80U 
                                                & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr 
                                                   << 5U)));
    vlTOPp->soc_top__DOT__ifu_to_xbar[2U] = ((0xffffffe0U 
                                              & (0x104000U 
                                                 | (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__instr_req) 
                                                     << 0x15U) 
                                                    | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q) 
                                                       << 5U)))) 
                                             | (0x1fU 
                                                & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr 
                                                   >> 0x1bU)));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__152(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__152\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0x20000000U == (0xffff0000U & ((vlTOPp->soc_top__DOT__ifu_to_xbar[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__ifu_to_xbar[1U] 
                                           >> 5U))))) {
        vlTOPp->soc_top__DOT__xbar_to_ifu = vlTOPp->soc_top__DOT__iccm_to_xbar;
    }
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__153(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__153\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0x20000000U == (0xffff0000U & ((vlTOPp->soc_top__DOT__ifu_to_xbar[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__ifu_to_xbar[1U] 
                                           >> 5U))))) {
        vlTOPp->soc_top__DOT__xbar_to_iccm[0U] = vlTOPp->soc_top__DOT__ifu_to_xbar[0U];
        vlTOPp->soc_top__DOT__xbar_to_iccm[1U] = vlTOPp->soc_top__DOT__ifu_to_xbar[1U];
        vlTOPp->soc_top__DOT__xbar_to_iccm[2U] = vlTOPp->soc_top__DOT__ifu_to_xbar[2U];
    }
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__154(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__154\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
        = ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U]
            : (IData)((vlTOPp->soc_top__DOT__xbar_to_ifu 
                       >> 2U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err 
        = (1U & ((IData)((vlTOPp->soc_top__DOT__xbar_to_ifu 
                          >> 1U)) | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_q)));
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__155(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__155\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o 
        = ((vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
            >> 0x15U) & ((0U == (7U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                       >> 0x12U))) 
                         | (1U == (7U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                         >> 0x12U)))));
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk 
        = (1U & ((vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                  >> 0x15U) & ((0U == (3U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                             >> 0xdU)))
                                ? (~ (IData)((0U != 
                                              (0xfU 
                                               & (((vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                                      >> 1U)) 
                                                  & (~ 
                                                     ((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & ((vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                           << 0x1bU) 
                                                          | (vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                                             >> 5U))))))))))
                                : ((1U == (3U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                 >> 0xdU)))
                                    ? ((0x40U & vlTOPp->soc_top__DOT__xbar_to_iccm[1U])
                                        ? (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                           << 0x1fU) 
                                                          | (vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                                             >> 1U))))))
                                        : (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0xcU 
                                                       & ((vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                           << 0x1fU) 
                                                          | (vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                                             >> 1U)))))))
                                    : (2U == (3U & 
                                              (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0xdU)))))));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__156(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__156\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
        = ((1U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
            ? ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                ? ((0xffff0000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                                   << 0x10U)) | (0xffffU 
                                                 & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                    >> 0x10U)))
                : ((0xffff0000U & ((IData)((vlTOPp->soc_top__DOT__xbar_to_ifu 
                                            >> 2U)) 
                                   << 0x10U)) | (0xffffU 
                                                 & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                    >> 0x10U))))
            : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err 
        = (1U & ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                  ? (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)
                  : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed 
        = ((3U != (3U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed 
        = ((3U != (3U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                         >> 0x10U))) & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)));
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__157(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__157\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_q = vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d;
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__158(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__158\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp1080[5];
    WData/*95:0*/ __Vtemp1088[3];
    WData/*127:0*/ __Vtemp1094[4];
    WData/*479:0*/ __Vtemp1104[15];
    // Body
    __Vtemp1080[0U] = (IData)((((QData)((IData)(((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                   >> 2U) 
                                                  & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                 & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))) 
                                << 0x32U) | (((QData)((IData)(
                                                              ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                [1U][1U] 
                                                                << 0x1fU) 
                                                               | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                  [1U][0U] 
                                                                  >> 1U)))) 
                                              << 0x12U) 
                                             | (QData)((IData)(
                                                               ((0xfffe0000U 
                                                                 & ((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                      << 0xdU) 
                                                                     & ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we) 
                                                                        << 0x11U)) 
                                                                    & ((~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                                                                       << 0x11U))) 
                                                                | ((0x7feU 
                                                                    & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                    [1U][0U]) 
                                                                   | ((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                        >> 5U) 
                                                                       & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                                      & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))))))));
    __Vtemp1080[1U] = ((0xfff80000U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [1U][0U] << 0x12U)) 
                       | (IData)(((((QData)((IData)(
                                                    ((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                       >> 2U) 
                                                      & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                     & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))) 
                                    << 0x32U) | (((QData)((IData)(
                                                                  ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                    [1U][1U] 
                                                                    << 0x1fU) 
                                                                   | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                      [1U][0U] 
                                                                      >> 1U)))) 
                                                  << 0x12U) 
                                                 | (QData)((IData)(
                                                                   ((0xfffe0000U 
                                                                     & ((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                          << 0xdU) 
                                                                         & ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we) 
                                                                            << 0x11U)) 
                                                                        & ((~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                                                                           << 0x11U))) 
                                                                    | ((0x7feU 
                                                                        & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                        [1U][0U]) 
                                                                       | ((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                            >> 5U) 
                                                                           & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                                          & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))))))) 
                                  >> 0x20U)));
    __Vtemp1088[0U] = (IData)((((QData)((IData)(((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                   >> 7U) 
                                                  & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                 & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))) 
                                << 0x32U) | (((QData)((IData)(
                                                              (0xffffU 
                                                               & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                   [1U][1U] 
                                                                   << 0x1fU) 
                                                                  | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                     [1U][0U] 
                                                                     >> 1U))))) 
                                              << 0x22U) 
                                             | (((QData)((IData)(
                                                                 ((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                    >> 8U) 
                                                                   & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                                  & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))) 
                                                 << 0x21U) 
                                                | (((QData)((IData)(
                                                                    (0xffffU 
                                                                     & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                         [1U][1U] 
                                                                         << 0xfU) 
                                                                        | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                           [1U][0U] 
                                                                           >> 0x11U))))) 
                                                    << 0x11U) 
                                                   | (QData)((IData)(
                                                                     ((0xffff0000U 
                                                                       & ((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                            << 8U) 
                                                                           & ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we) 
                                                                              << 0x10U)) 
                                                                          & ((~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                                                                             << 0x10U))) 
                                                                      | (0xffffU 
                                                                         & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                             [1U][1U] 
                                                                             << 0x1fU) 
                                                                            | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                               [1U][0U] 
                                                                               >> 1U)))))))))));
    __Vtemp1088[1U] = ((0xfff80000U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [1U][0U] << 0x12U)) 
                       | (IData)(((((QData)((IData)(
                                                    ((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                       >> 7U) 
                                                      & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                     & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))) 
                                    << 0x32U) | (((QData)((IData)(
                                                                  (0xffffU 
                                                                   & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                       [1U][1U] 
                                                                       << 0x1fU) 
                                                                      | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                         [1U][0U] 
                                                                         >> 1U))))) 
                                                  << 0x22U) 
                                                 | (((QData)((IData)(
                                                                     ((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                        >> 8U) 
                                                                       & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                                      & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))) 
                                                     << 0x21U) 
                                                    | (((QData)((IData)(
                                                                        (0xffffU 
                                                                         & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                             [1U][1U] 
                                                                             << 0xfU) 
                                                                            | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                               [1U][0U] 
                                                                               >> 0x11U))))) 
                                                        << 0x11U) 
                                                       | (QData)((IData)(
                                                                         ((0xffff0000U 
                                                                           & ((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                                << 8U) 
                                                                               & ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we) 
                                                                                << 0x10U)) 
                                                                              & ((~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0x10U))) 
                                                                          | (0xffffU 
                                                                             & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [1U][1U] 
                                                                                << 0x1fU) 
                                                                                | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [1U][0U] 
                                                                                >> 1U)))))))))) 
                                  >> 0x20U)));
    __Vtemp1094[3U] = ((0xffc00000U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [1U][0U] << 0xbU)) 
                       | ((0xffe00000U & ((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                            << 0x10U) 
                                           & ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we) 
                                              << 0x15U)) 
                                          & ((~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                                             << 0x15U))) 
                          | ((0x1fffe0U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [1U][0U] 
                                           << 4U)) 
                             | ((0x3ffffff0U & ((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                  >> 2U) 
                                                 & ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we) 
                                                    << 4U)) 
                                                & ((~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                                                   << 4U))) 
                                | (0xfU & ((0xffff8U 
                                            & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][1U] 
                                               << 3U)) 
                                           | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][0U] 
                                              >> 0x1dU)))))));
    __Vtemp1104[0xcU] = ((0xffffffU & ((0x7ffU & ((0x400U 
                                                   & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [1U][1U] 
                                                      << 0xaU)) 
                                                  | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [1U][0U] 
                                                     >> 0x16U))) 
                                       | (0xfff800U 
                                          & ((IData)(
                                                     (((QData)((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q)))) 
                                             << 0xbU)))) 
                         | (0xff000000U & ((IData)(
                                                   (((QData)((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q)))) 
                                           << 0xbU)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
        = vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q;
    vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[1U] 
        = vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q;
    vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[2U] 
        = vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q;
    vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[3U] 
        = (IData)((((QData)((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[4U] 
        = (IData)(((((QData)((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q)) 
                     << 0x20U) | (QData)((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q))) 
                   >> 0x20U));
    vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
        = ((0xfffc0000U & (__Vtemp1088[0U] << 0x12U)) 
           | ((0xfffe0000U & ((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                << 8U) & ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we) 
                                          << 0x11U)) 
                              & ((~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                                 << 0x11U))) | ((0x1fffeU 
                                                 & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [1U][1U] 
                                                     << 0x10U) 
                                                    | (0xfffeU 
                                                       & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                          [1U][0U] 
                                                          >> 0x10U)))) 
                                                | ((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                     >> 9U) 
                                                    & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                   & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
        = ((0x3ffffU & (__Vtemp1088[0U] >> 0xeU)) | 
           (0xfffc0000U & (__Vtemp1088[1U] << 0x12U)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
        = ((0x3ffffU & (__Vtemp1088[1U] >> 0xeU)) | 
           (0xfffc0000U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                           [1U][0U] << 4U)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
        = ((0x3ffffU & ((0x3ffc0U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [1U][0U] >> 0xbU)) 
                        | ((0x3ffe0U & ((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                          >> 1U) & 
                                         ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we) 
                                          << 5U)) & 
                                        ((~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                                         << 5U))) | 
                           (0x1fU & ((0x10U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][1U] 
                                               << 4U)) 
                                     | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [1U][0U] >> 0x1cU)))))) 
           | (0xfffc0000U & (__Vtemp1094[3U] << 0x12U)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
        = (0xfc0000U | ((0xff000000U & (__Vtemp1080[0U] 
                                        << 0x18U)) 
                        | (0x3ffffU & (__Vtemp1094[3U] 
                                       >> 0xeU))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
        = ((0xffffffU & (__Vtemp1080[0U] >> 8U)) | 
           (0xff000000U & (__Vtemp1080[1U] << 0x18U)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
        = ((0xffffffU & (__Vtemp1080[1U] >> 8U)) | 
           (0xff000000U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                           [1U][0U] << 0xaU)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
        = __Vtemp1104[0xcU];
    vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
        = ((0xffffffU & ((0x7ffU & ((IData)((((QData)((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q)))) 
                                    >> 0x15U)) | (0xfff800U 
                                                  & ((IData)(
                                                             ((((QData)((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q)) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q))) 
                                                              >> 0x20U)) 
                                                     << 0xbU)))) 
           | (0xff000000U & ((IData)(((((QData)((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q))) 
                                      >> 0x20U)) << 0xbU)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
        = (0x7ffU & ((IData)(((((QData)((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q)) 
                                << 0x20U) | (QData)((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q))) 
                              >> 0x20U)) >> 0x15U));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__159(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__159\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xfffffffeU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (1U & ((1U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                   ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q)
                   : vlTOPp->gpio_i)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xfffffffdU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (2U & (((2U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                    ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q)
                    : (vlTOPp->gpio_i >> 1U)) << 1U)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xfffffffbU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (4U & (((4U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                    ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q)
                    : (vlTOPp->gpio_i >> 2U)) << 2U)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xfffffff7U & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (8U & (((8U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                    ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q)
                    : (vlTOPp->gpio_i >> 3U)) << 3U)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xffffffefU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x10U & (((0x10U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                       ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q)
                       : (vlTOPp->gpio_i >> 4U)) << 4U)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xffffffdfU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x20U & (((0x20U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                       ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q)
                       : (vlTOPp->gpio_i >> 5U)) << 5U)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xffffffbfU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x40U & (((0x40U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                       ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q)
                       : (vlTOPp->gpio_i >> 6U)) << 6U)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xffffff7fU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x80U & (((0x80U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                       ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q)
                       : (vlTOPp->gpio_i >> 7U)) << 7U)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xfffffeffU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x100U & (((0x100U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                        ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q)
                        : (vlTOPp->gpio_i >> 8U)) << 8U)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xfffffdffU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x200U & (((0x200U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                        ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q)
                        : (vlTOPp->gpio_i >> 9U)) << 9U)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xfffffbffU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x400U & (((0x400U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                        ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q)
                        : (vlTOPp->gpio_i >> 0xaU)) 
                      << 0xaU)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xfffff7ffU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x800U & (((0x800U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                        ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q)
                        : (vlTOPp->gpio_i >> 0xbU)) 
                      << 0xbU)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xffffefffU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x1000U & (((0x1000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                         ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q)
                         : (vlTOPp->gpio_i >> 0xcU)) 
                       << 0xcU)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xffffdfffU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x2000U & (((0x2000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                         ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q)
                         : (vlTOPp->gpio_i >> 0xdU)) 
                       << 0xdU)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xffffbfffU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x4000U & (((0x4000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                         ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q)
                         : (vlTOPp->gpio_i >> 0xeU)) 
                       << 0xeU)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xffff7fffU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x8000U & (((0x8000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                         ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q)
                         : (vlTOPp->gpio_i >> 0xfU)) 
                       << 0xfU)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xfffeffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x10000U & (((0x10000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q)
                          : (vlTOPp->gpio_i >> 0x10U)) 
                        << 0x10U)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xfffdffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x20000U & (((0x20000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q)
                          : (vlTOPp->gpio_i >> 0x11U)) 
                        << 0x11U)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xfffbffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x40000U & (((0x40000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q)
                          : (vlTOPp->gpio_i >> 0x12U)) 
                        << 0x12U)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xfff7ffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x80000U & (((0x80000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                          ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q)
                          : (vlTOPp->gpio_i >> 0x13U)) 
                        << 0x13U)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xffefffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x100000U & (((0x100000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                           ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q)
                           : (vlTOPp->gpio_i >> 0x14U)) 
                         << 0x14U)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xffdfffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x200000U & (((0x200000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                           ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q)
                           : (vlTOPp->gpio_i >> 0x15U)) 
                         << 0x15U)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xffbfffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x400000U & (((0x400000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                           ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q)
                           : (vlTOPp->gpio_i >> 0x16U)) 
                         << 0x16U)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xff7fffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x800000U & (((0x800000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                           ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q)
                           : (vlTOPp->gpio_i >> 0x17U)) 
                         << 0x17U)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xfeffffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x1000000U & (((0x1000000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                            ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q)
                            : (vlTOPp->gpio_i >> 0x18U)) 
                          << 0x18U)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xfdffffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x2000000U & (((0x2000000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                            ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q)
                            : (vlTOPp->gpio_i >> 0x19U)) 
                          << 0x19U)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xfbffffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x4000000U & (((0x4000000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                            ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q)
                            : (vlTOPp->gpio_i >> 0x1aU)) 
                          << 0x1aU)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xf7ffffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x8000000U & (((0x8000000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                            ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q)
                            : (vlTOPp->gpio_i >> 0x1bU)) 
                          << 0x1bU)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xefffffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x10000000U & (((0x10000000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                             ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q)
                             : (vlTOPp->gpio_i >> 0x1cU)) 
                           << 0x1cU)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xdfffffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x20000000U & (((0x20000000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                             ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q)
                             : (vlTOPp->gpio_i >> 0x1dU)) 
                           << 0x1dU)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0xbfffffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x40000000U & (((0x40000000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                             ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q)
                             : (vlTOPp->gpio_i >> 0x1eU)) 
                           << 0x1eU)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d = 
        ((0x7fffffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
         | (0x80000000U & (((0x80000000U & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                             ? (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q)
                             : (vlTOPp->gpio_i >> 0x1fU)) 
                           << 0x1fU)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
        = ((0x1fffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U]) 
           | (0xffe00000U & (vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d 
                             << 0x15U)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
        = ((0xffe00000U & vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U]) 
           | (0x1fffffU & (vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d 
                           >> 0xbU)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event 
        = (((- (IData)((1U & (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                              >> 0xaU)))) & ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                              << 0x15U) 
                                             | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                                >> 0xbU))) 
           | ((((((~ vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_q) 
                  & vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
                 & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[4U]) 
                | ((vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_q 
                    & (~ vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d)) 
                   & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[3U])) 
               | ((~ vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d) 
                  & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[1U])) 
              | (vlTOPp->soc_top__DOT__gpio_32__DOT__data_in_d 
                 & vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[2U])));
    vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
        = ((0x1fffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U]) 
           | (0xffe00000U & ((IData)((((QData)((IData)(
                                                       (vlTOPp->soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event 
                                                        | ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                                            << 0x15U) 
                                                           | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                                              >> 0xbU))))) 
                                       << 1U) | (QData)((IData)(
                                                                (0U 
                                                                 != vlTOPp->soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event))))) 
                             << 0x15U)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
        = (0x3fffffU & ((0x1fffffU & ((IData)((((QData)((IData)(
                                                                (vlTOPp->soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event 
                                                                 | ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                                                     << 0x15U) 
                                                                    | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                                                       >> 0xbU))))) 
                                                << 1U) 
                                               | (QData)((IData)(
                                                                 (0U 
                                                                  != vlTOPp->soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event))))) 
                                      >> 0xbU)) | (0xffe00000U 
                                                   & ((IData)(
                                                              ((((QData)((IData)(
                                                                                (vlTOPp->soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event 
                                                                                | ((vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                                                                >> 0xbU))))) 
                                                                 << 1U) 
                                                                | (QData)((IData)(
                                                                                (0U 
                                                                                != vlTOPp->soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event)))) 
                                                               >> 0x20U)) 
                                                      << 0x15U))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next = 0U;
    if ((1U & ((((((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                     | ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                        >> 1U)) | ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                   >> 2U)) | ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                              >> 3U)) 
                  | ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                     >> 4U)) | ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                >> 5U)) | ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                           >> 6U)) 
               | ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                  >> 7U)))) {
        if ((1U & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                = vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q;
        } else {
            if ((2U & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
                vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                    = vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q;
            } else {
                if ((4U & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
                    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next = 0U;
                } else {
                    if ((8U & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
                        vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                            = vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__q;
                    } else {
                        if ((0x10U & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
                            vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                                = ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                    << 0xcU) | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                >> 0x14U));
                        } else {
                            if ((0x20U & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
                                vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                                    = ((0xfffffc00U 
                                        & vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next) 
                                       | (0x3ffU & 
                                          ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                            << 0x16U) 
                                           | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                              >> 0xaU))));
                                vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                                    = (0xfff00000U 
                                       | (0x3ffU & vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next));
                            } else {
                                if ((0x40U & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
                                    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                                        = ((0xffff0000U 
                                            & vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next) 
                                           | (0xffffU 
                                              & ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[3U] 
                                                    >> 0x10U))));
                                    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                                        = (0xffffU 
                                           & vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next);
                                } else {
                                    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                                        = vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[2U];
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x100U & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
            vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffff0000U & vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next) 
                   | (0xffffU & ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[2U] 
                                  << 0x10U) | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                               >> 0x10U))));
            vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next) 
                   | (0xffff0000U & (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                     << 0x10U)));
        } else {
            if ((0x200U & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
                vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffff0000U & vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next) 
                       | (0xffffU & ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                      << 0x10U) | (
                                                   vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[0U] 
                                                   >> 0x10U))));
                vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next) 
                       | (0xffff0000U & (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[0U] 
                                         << 0x10U)));
            } else {
                vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0x400U & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))
                        ? vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q
                        : ((0x800U & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))
                            ? vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q
                            : ((0x1000U & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))
                                ? vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q
                                : ((0x2000U & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))
                                    ? vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q
                                    : ((0x4000U & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))
                                        ? vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q
                                        : 0xffffffffU)))));
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__160(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__160\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (1U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                    >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xfffffffdU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (2U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                    >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xfffffffbU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (4U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                    >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xfffffff7U & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (8U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                    >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xffffffefU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x10U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                       >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xffffffdfU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x20U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                       >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xffffffbfU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x40U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                       >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xffffff7fU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x80U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                       >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xfffffeffU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x100U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                        >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xfffffdffU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x200U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                        >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xfffffbffU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x400U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                        >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xfffff7ffU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x800U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                        >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xffffefffU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x1000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                         >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xffffdfffU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x2000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                         >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xffffbfffU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x4000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                         >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xffff7fffU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x8000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                         >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xfffeffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x10000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                          >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xfffdffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x20000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                          >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xfffbffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x40000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                          >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xfff7ffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x80000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                          >> 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xffefffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x100000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                           << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xffdfffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x200000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                           << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xffbfffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x400000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                           << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xff7fffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x800000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                           << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xfeffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x1000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                            << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xfdffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x2000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                            << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xfbffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x4000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                            << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xf7ffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x8000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                            << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xefffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x10000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                             << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xdfffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x20000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                             << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0xbfffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x40000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                             << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__le 
        = ((0x7fffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__le) 
           | (0x80000000U & (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                             << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = (0xfffffffeU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set);
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfffffffdU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (2U & (((2U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                      ? (vlTOPp->soc_top__DOT__intr_gpio 
                         & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                               >> 1U))) : vlTOPp->soc_top__DOT__intr_gpio) 
                    << 1U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfffffffbU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (4U & (((4U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                      ? ((vlTOPp->soc_top__DOT__intr_gpio 
                          >> 1U) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                       >> 2U))) : (vlTOPp->soc_top__DOT__intr_gpio 
                                                   >> 1U)) 
                    << 2U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfffffff7U & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (8U & (((8U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                      ? ((vlTOPp->soc_top__DOT__intr_gpio 
                          >> 2U) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                       >> 3U))) : (vlTOPp->soc_top__DOT__intr_gpio 
                                                   >> 2U)) 
                    << 3U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xffffffefU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x10U & (((0x10U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                         ? ((vlTOPp->soc_top__DOT__intr_gpio 
                             >> 3U) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                          >> 4U))) : 
                        (vlTOPp->soc_top__DOT__intr_gpio 
                         >> 3U)) << 4U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xffffffdfU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x20U & (((0x20U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                         ? ((vlTOPp->soc_top__DOT__intr_gpio 
                             >> 4U) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                          >> 5U))) : 
                        (vlTOPp->soc_top__DOT__intr_gpio 
                         >> 4U)) << 5U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xffffffbfU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x40U & (((0x40U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                         ? ((vlTOPp->soc_top__DOT__intr_gpio 
                             >> 5U) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                          >> 6U))) : 
                        (vlTOPp->soc_top__DOT__intr_gpio 
                         >> 5U)) << 6U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xffffff7fU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x80U & (((0x80U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                         ? ((vlTOPp->soc_top__DOT__intr_gpio 
                             >> 6U) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                          >> 7U))) : 
                        (vlTOPp->soc_top__DOT__intr_gpio 
                         >> 6U)) << 7U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfffffeffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x100U & (((0x100U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                          ? ((vlTOPp->soc_top__DOT__intr_gpio 
                              >> 7U) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                           >> 8U)))
                          : (vlTOPp->soc_top__DOT__intr_gpio 
                             >> 7U)) << 8U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfffffdffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x200U & (((0x200U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                          ? ((vlTOPp->soc_top__DOT__intr_gpio 
                              >> 8U) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                           >> 9U)))
                          : (vlTOPp->soc_top__DOT__intr_gpio 
                             >> 8U)) << 9U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfffffbffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x400U & (((0x400U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                          ? ((vlTOPp->soc_top__DOT__intr_gpio 
                              >> 9U) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                           >> 0xaU)))
                          : (vlTOPp->soc_top__DOT__intr_gpio 
                             >> 9U)) << 0xaU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfffff7ffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x800U & (((0x800U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                          ? ((vlTOPp->soc_top__DOT__intr_gpio 
                              >> 0xaU) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                             >> 0xbU)))
                          : (vlTOPp->soc_top__DOT__intr_gpio 
                             >> 0xaU)) << 0xbU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xffffefffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x1000U & (((0x1000U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                           ? ((vlTOPp->soc_top__DOT__intr_gpio 
                               >> 0xbU) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                              >> 0xcU)))
                           : (vlTOPp->soc_top__DOT__intr_gpio 
                              >> 0xbU)) << 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xffffdfffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x2000U & (((0x2000U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                           ? ((vlTOPp->soc_top__DOT__intr_gpio 
                               >> 0xcU) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                              >> 0xdU)))
                           : (vlTOPp->soc_top__DOT__intr_gpio 
                              >> 0xcU)) << 0xdU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xffffbfffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x4000U & (((0x4000U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                           ? ((vlTOPp->soc_top__DOT__intr_gpio 
                               >> 0xdU) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                              >> 0xeU)))
                           : (vlTOPp->soc_top__DOT__intr_gpio 
                              >> 0xdU)) << 0xeU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xffff7fffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x8000U & (((0x8000U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                           ? ((vlTOPp->soc_top__DOT__intr_gpio 
                               >> 0xeU) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                              >> 0xfU)))
                           : (vlTOPp->soc_top__DOT__intr_gpio 
                              >> 0xeU)) << 0xfU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfffeffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x10000U & (((0x10000U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                            ? ((vlTOPp->soc_top__DOT__intr_gpio 
                                >> 0xfU) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                               >> 0x10U)))
                            : (vlTOPp->soc_top__DOT__intr_gpio 
                               >> 0xfU)) << 0x10U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfffdffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x20000U & (((0x20000U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                            ? ((vlTOPp->soc_top__DOT__intr_gpio 
                                >> 0x10U) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                                >> 0x11U)))
                            : (vlTOPp->soc_top__DOT__intr_gpio 
                               >> 0x10U)) << 0x11U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfffbffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x40000U & (((0x40000U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                            ? ((vlTOPp->soc_top__DOT__intr_gpio 
                                >> 0x11U) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                                >> 0x12U)))
                            : (vlTOPp->soc_top__DOT__intr_gpio 
                               >> 0x11U)) << 0x12U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfff7ffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x80000U & (((0x80000U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                            ? ((vlTOPp->soc_top__DOT__intr_gpio 
                                >> 0x12U) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                                >> 0x13U)))
                            : (vlTOPp->soc_top__DOT__intr_gpio 
                               >> 0x12U)) << 0x13U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xffefffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x100000U & (((0x100000U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                             ? ((vlTOPp->soc_top__DOT__intr_gpio 
                                 >> 0x13U) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                                 >> 0x14U)))
                             : (vlTOPp->soc_top__DOT__intr_gpio 
                                >> 0x13U)) << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xffdfffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x200000U & (((0x200000U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                             ? ((vlTOPp->soc_top__DOT__intr_gpio 
                                 >> 0x14U) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                                 >> 0x15U)))
                             : (vlTOPp->soc_top__DOT__intr_gpio 
                                >> 0x14U)) << 0x15U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xffbfffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x400000U & (((0x400000U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                             ? ((vlTOPp->soc_top__DOT__intr_gpio 
                                 >> 0x15U) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                                 >> 0x16U)))
                             : (vlTOPp->soc_top__DOT__intr_gpio 
                                >> 0x15U)) << 0x16U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xff7fffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x800000U & (((0x800000U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                             ? ((vlTOPp->soc_top__DOT__intr_gpio 
                                 >> 0x16U) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                                 >> 0x17U)))
                             : (vlTOPp->soc_top__DOT__intr_gpio 
                                >> 0x16U)) << 0x17U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfeffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x1000000U & (((0x1000000U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                              ? ((vlTOPp->soc_top__DOT__intr_gpio 
                                  >> 0x17U) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                                  >> 0x18U)))
                              : (vlTOPp->soc_top__DOT__intr_gpio 
                                 >> 0x17U)) << 0x18U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfdffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x2000000U & (((0x2000000U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                              ? ((vlTOPp->soc_top__DOT__intr_gpio 
                                  >> 0x18U) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                                  >> 0x19U)))
                              : (vlTOPp->soc_top__DOT__intr_gpio 
                                 >> 0x18U)) << 0x19U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfbffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x4000000U & (((0x4000000U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                              ? ((vlTOPp->soc_top__DOT__intr_gpio 
                                  >> 0x19U) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                                  >> 0x1aU)))
                              : (vlTOPp->soc_top__DOT__intr_gpio 
                                 >> 0x19U)) << 0x1aU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xf7ffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x8000000U & (((0x8000000U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                              ? ((vlTOPp->soc_top__DOT__intr_gpio 
                                  >> 0x1aU) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                                  >> 0x1bU)))
                              : (vlTOPp->soc_top__DOT__intr_gpio 
                                 >> 0x1aU)) << 0x1bU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xefffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x10000000U & (((0x10000000U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                               ? ((vlTOPp->soc_top__DOT__intr_gpio 
                                   >> 0x1bU) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                                   >> 0x1cU)))
                               : (vlTOPp->soc_top__DOT__intr_gpio 
                                  >> 0x1bU)) << 0x1cU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xdfffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x20000000U & (((0x20000000U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                               ? ((vlTOPp->soc_top__DOT__intr_gpio 
                                   >> 0x1cU) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                                   >> 0x1dU)))
                               : (vlTOPp->soc_top__DOT__intr_gpio 
                                  >> 0x1cU)) << 0x1dU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xbfffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x40000000U & (((0x40000000U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                               ? ((vlTOPp->soc_top__DOT__intr_gpio 
                                   >> 0x1dU) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                                   >> 0x1eU)))
                               : (vlTOPp->soc_top__DOT__intr_gpio 
                                  >> 0x1dU)) << 0x1eU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0x7fffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x80000000U & (((0x80000000U & vlTOPp->soc_top__DOT__intr_controller__DOT__le)
                               ? ((vlTOPp->soc_top__DOT__intr_gpio 
                                   >> 0x1eU) & (~ (vlTOPp->soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                                   >> 0x1fU)))
                               : (vlTOPp->soc_top__DOT__intr_gpio 
                                  >> 0x1eU)) << 0x1fU)));
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__161(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__161\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en = 0U;
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
                                            if ((4U 
                                                 & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en = 1U;
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
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtvec_init;
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
                                            if ((4U 
                                                 & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en = 1U;
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
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q;
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
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0x40000000U 
                                                             | (0xfffffffU 
                                                                & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d));
                                                        if (
                                                            ((3U 
                                                              != 
                                                              (3U 
                                                               & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d)) 
                                                             & (0U 
                                                                != 
                                                                (3U 
                                                                 & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d)))) {
                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                                = 
                                                                (3U 
                                                                 | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        }
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            ((0xfffffe3fU 
                                                              & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d) 
                                                             | (0x1c0U 
                                                                & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q));
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xfffff7ffU 
                                                             & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xfffffff7U 
                                                             & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xffffffefU 
                                                             & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xfffffbffU 
                                                             & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xfffffdffU 
                                                             & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xffffffdfU 
                                                             & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xffffbfffU 
                                                             & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xf000ffffU 
                                                             & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
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
            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                = ((0xfffffffcU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d) 
                   | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q));
            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                = ((0xfffffe3fU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d) 
                   | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_cause) 
                      << 6U));
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we = 0U;
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
                                if ((0x20U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
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
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we = 1U;
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
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q;
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
                                                        vlTOPp->__Vfunc_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__sv2v_cast_2__4__inp 
                                                            = 
                                                            (3U 
                                                             & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                >> 0xbU));
                                                        vlTOPp->__Vfunc_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__sv2v_cast_2__4__Vfuncout 
                                                            = vlTOPp->__Vfunc_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__sv2v_cast_2__4__inp;
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                                                            = 
                                                            ((0x20U 
                                                              & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                 << 2U)) 
                                                             | ((0x10U 
                                                                 & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                    >> 3U)) 
                                                                | (((IData)(vlTOPp->__Vfunc_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__sv2v_cast_2__4__Vfuncout) 
                                                                    << 2U) 
                                                                   | ((2U 
                                                                       & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                          >> 0x10U)) 
                                                                      | (1U 
                                                                         & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                            >> 0x15U))))));
                                                        if (
                                                            ((3U 
                                                              != 
                                                              (3U 
                                                               & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                                                  >> 2U))) 
                                                             & (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                                                    >> 2U))))) {
                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                                                                = 
                                                                (0xcU 
                                                                 | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d));
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
    }
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                    = (0x1fU & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d));
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                    = ((0x2fU & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d)) 
                       | (0x10U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                   >> 1U)));
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                    = ((0x33U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d)) 
                       | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q) 
                          << 2U));
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
            if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                    = ((0x1fU & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d)) 
                       | (0x20U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                   << 1U)));
                if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                        = ((0x2fU & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d)) 
                           | (0x10U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q) 
                                       << 2U)));
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                        = ((0x33U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d)) 
                           | (0xcU & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q) 
                                      << 2U)));
                } else {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                        = (0x10U | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d));
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                        = (0x33U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d));
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_d 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
            ? (5U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)
            : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q));
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__162(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__162\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->rst_ni)))) {
        vlTOPp->soc_top__DOT__u_tempsense__DOT__CLK_SEL = 0U;
    }
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__we));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_rising__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_falling__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_lvlhigh__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_lvllow__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__ctrl_en_input_filter_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_17__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_18__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_19__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_20__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_21__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_31__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio0__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio0_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio1__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio1_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio2__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio2_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio3__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio3_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio14__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio14_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio15__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio15_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio16__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio16_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio17__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio17_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio18__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio18_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio27__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio27_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio28__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio28_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio29__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio29_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio30__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio30_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio31__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio31_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_16__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_17__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_18__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_19__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_20__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we));
    if (vlTOPp->rst_ni) {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__filter_q 
            = (vlTOPp->gpio_i & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 1U) & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 0x12U) & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 0x13U) & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 0x14U) & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 0x15U) & 1U);
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 0x16U) & 1U);
    } else {
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__filter_q = 0U;
    }
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__163(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__163\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & vlTOPp->gpio_i) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 1U)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x12U)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x13U)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x14U)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x15U)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x16U)) != (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_q)))));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__164(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__164\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack 
        = (1U & ((IData)((vlTOPp->soc_top__DOT__iccm_to_xbar 
                          >> 0x33U)) & vlTOPp->soc_top__DOT__xbar_to_iccm[0U]));
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (1U & (((vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                   >> 0x15U) & (IData)(vlTOPp->soc_top__DOT__iccm_to_xbar)) 
                 & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[2U] 
        = (IData)((vlTOPp->soc_top__DOT__xbar_to_ifu 
                   >> 2U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[0U] 
        = ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]
            : (IData)((vlTOPp->soc_top__DOT__xbar_to_ifu 
                       >> 2U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[1U] 
        = ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]
            : (IData)((vlTOPp->soc_top__DOT__xbar_to_ifu 
                       >> 2U)));
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__165(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__165\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__iccm__DOT__addr = ((0x200000U 
                                              & vlTOPp->soc_top__DOT__xbar_to_iccm[2U])
                                              ? (0xfffU 
                                                 & ((vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                     << 0x19U) 
                                                    | (vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                                       >> 7U)))
                                              : 0U);
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int = 0U;
    if ((0x200000U & vlTOPp->soc_top__DOT__xbar_to_iccm[2U])) {
        vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int 
            = ((0xffffff00U & vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int) 
               | (0xffU & (- (IData)((1U & (vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                            >> 1U))))));
        vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int 
            = ((0xffff00ffU & vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int) 
               | (0xff00U & ((- (IData)((1U & (vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                               >> 2U)))) 
                             << 8U)));
        vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int 
            = ((0xff00ffffU & vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int) 
               | (0xff0000U & ((- (IData)((1U & (vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                                 >> 3U)))) 
                               << 0x10U)));
        vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int 
            = ((0xffffffU & vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int) 
               | (0xff000000U & ((- (IData)((1U & (
                                                   vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                                   >> 4U)))) 
                                 << 0x18U)));
    }
    if ((0x200000U & vlTOPp->soc_top__DOT__xbar_to_iccm[2U])) {
        vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__unnamedblk1__DOT__i = 4U;
    }
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk 
        = ((vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
            >> 0x15U) & ((0U == (3U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                       >> 0xdU))) ? 
                         (0U != (0xfU & (((vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                           << 0x1fU) 
                                          | (vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                             >> 1U)) 
                                         & ((IData)(1U) 
                                            << (3U 
                                                & ((vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                                      >> 5U)))))))
                          : ((1U == (3U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                           >> 0xdU)))
                              ? ((0x40U & vlTOPp->soc_top__DOT__xbar_to_iccm[1U])
                                  ? (3U == (3U & ((
                                                   vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                                     >> 3U))))
                                  : (3U == (3U & ((
                                                   vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                   << 0x1fU) 
                                                  | (vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                                     >> 1U)))))
                              : ((2U == (3U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0xdU))) 
                                 & (0xfU == (0xfU & 
                                             ((vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                                 >> 1U))))))));
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk 
        = (1U & ((vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                  >> 0x15U) & ((0U == (3U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                             >> 0xdU))) 
                               | ((1U == (3U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                >> 0xdU)))
                                   ? (~ (vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                         >> 5U)) : 
                                  ((2U == (3U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                 >> 0xdU))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                                        >> 5U)))))))))));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__166(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__166\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d 
        = ((3U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d)) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
              << 2U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d 
        = ((6U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d)) 
           | (1U & ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                     ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                        >> 1U) : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d 
        = ((5U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d)) 
           | (2U & (((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                      ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                         >> 2U) : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err)) 
                    << 1U)));
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__167(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__167\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int = 0U;
    if ((0x200000U & vlTOPp->soc_top__DOT__xbar_to_iccm[2U])) {
        vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int 
            = ((0xffffff00U & vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int) 
               | (((vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                    >> 1U) & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o))
                   ? (0xffU & ((vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                << 0x1fU) | (vlTOPp->soc_top__DOT__xbar_to_iccm[0U] 
                                             >> 1U)))
                   : 0U));
        vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int 
            = ((0xffff00ffU & vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int) 
               | ((((vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                     >> 2U) & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o))
                    ? (0xffU & ((vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                 << 0x17U) | (vlTOPp->soc_top__DOT__xbar_to_iccm[0U] 
                                              >> 9U)))
                    : 0U) << 8U));
        vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int 
            = ((0xff00ffffU & vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int) 
               | ((((vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                     >> 3U) & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o))
                    ? (0xffU & ((vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                 << 0xfU) | (vlTOPp->soc_top__DOT__xbar_to_iccm[0U] 
                                             >> 0x11U)))
                    : 0U) << 0x10U));
        vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int 
            = ((0xffffffU & vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int) 
               | ((((vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                     >> 4U) & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o))
                    ? (0xffU & ((vlTOPp->soc_top__DOT__xbar_to_iccm[1U] 
                                 << 7U) | (vlTOPp->soc_top__DOT__xbar_to_iccm[0U] 
                                           >> 0x19U)))
                    : 0U) << 0x18U));
    }
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error 
        = (1U & (~ ((((0U == (7U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                    >> 0x12U))) | (1U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                       >> 0x12U)))) 
                     | (4U == (7U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                     >> 0x12U)))) & 
                    (((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk) 
                      & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk)) 
                     & (((4U == (7U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                       >> 0x12U))) 
                         | (1U == (7U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                         >> 0x12U)))) 
                        | (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk))))));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__168(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__168\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 0U;
    if ((2U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((1U & (~ vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))) {
            if ((0x8000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x4000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x2000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                } else {
                    if ((0x2000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    } else {
                        if ((1U & (~ (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                      >> 0xcU)))) {
                            if ((0U == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 >> 2U)))) {
                                if ((0U == (0x1fU & 
                                            (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 7U)))) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x4000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x2000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    } else {
                        if ((0U == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 7U)))) {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                } else {
                    if ((0x2000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    } else {
                        if ((0x1000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
            }
        }
    } else {
        if ((1U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x8000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((1U & (~ (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0xeU)))) {
                    if ((1U & (~ (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        if ((0x800U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                            if ((0x400U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                if ((0x1000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                }
                            }
                        } else {
                            if ((0x1000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((0x4000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x2000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        if ((0U == ((0x20U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 7U)) 
                                    | (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                >> 2U))))) {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
            }
        } else {
            if ((0x8000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x4000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x2000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                } else {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else {
                if ((0x4000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x2000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                } else {
                    if ((0x2000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    } else {
                        if ((0U == (0xffU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 5U)))) {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata;
    if ((2U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((1U & (~ vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))) {
            if ((0x8000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x4000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x12023U | ((0xc000000U 
                                            & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x13U)) 
                                           | ((0x2000000U 
                                               & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x1f00000U 
                                                  & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)) 
                                                 | (0xe00U 
                                                    & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                    }
                } else {
                    if ((1U & (~ (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((0x1000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                                ? ((0U != (0x1fU & 
                                           (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 2U)))
                                    ? (0x33U | ((0x1f00000U 
                                                 & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x12U)) 
                                                | ((0xf8000U 
                                                    & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                       << 8U)) 
                                                   | (0xf80U 
                                                      & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : ((0U == (0x1fU 
                                               & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  >> 7U)))
                                        ? 0x100073U
                                        : (0xe7U | 
                                           (0xf8000U 
                                            & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)))))
                                : ((0U != (0x1fU & 
                                           (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 2U)))
                                    ? (0x33U | ((0x1f00000U 
                                                 & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x12U)) 
                                                | (0xf80U 
                                                   & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))
                                    : (0x67U | (0xf8000U 
                                                & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 8U)))));
                    }
                }
            } else {
                if ((0x4000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x12003U | ((0xc000000U 
                                            & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x18U)) 
                                           | ((0x2000000U 
                                               & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x1c00000U 
                                                  & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)) 
                                                 | (0xf80U 
                                                    & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                    }
                } else {
                    if ((1U & (~ (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x1013U | ((0x1f00000U 
                                           & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x12U)) 
                                          | ((0xf8000U 
                                              & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0xf80U 
                                                & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
                    }
                }
            }
        }
    } else {
        if ((1U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x8000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x4000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x40063U | ((0xf0000000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          >> 0xcU)))) 
                                           << 0x1cU)) 
                                       | ((0xc000000U 
                                           & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x15U)) 
                                          | ((0x2000000U 
                                              & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x17U)) 
                                             | ((0x38000U 
                                                 & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 8U)) 
                                                | ((0x1000U 
                                                    & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                       >> 1U)) 
                                                   | ((0xc00U 
                                                       & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata) 
                                                      | ((0x300U 
                                                          & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 5U)) 
                                                         | (0x80U 
                                                            & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                               >> 5U))))))))));
                } else {
                    if ((0x2000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x6fU | ((0x80000000U 
                                         & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x13U)) 
                                        | ((0x40000000U 
                                            & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x16U)) 
                                           | ((0x30000000U 
                                               & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x13U)) 
                                              | ((0x8000000U 
                                                  & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x15U)) 
                                                 | ((0x4000000U 
                                                     & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        << 0x13U)) 
                                                    | ((0x2000000U 
                                                        & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           << 0x17U)) 
                                                       | ((0x1000000U 
                                                           & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                              << 0xdU)) 
                                                          | ((0xe00000U 
                                                              & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                 << 0x12U)) 
                                                             | ((0x1ff000U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                                >> 0xcU)))) 
                                                                    << 0xcU)) 
                                                                | (0x80U 
                                                                   & ((~ 
                                                                       (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                        >> 0xfU)) 
                                                                      << 7U))))))))))));
                    } else {
                        if ((0x800U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                            if ((0x400U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                if ((1U & (~ (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 0xcU)))) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                                        = ((0x40U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                                            ? ((0x20U 
                                                & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                                                ? (0x847433U 
                                                   | ((0x700000U 
                                                       & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                                : (0x846433U 
                                                   | ((0x700000U 
                                                       & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))))
                                            : ((0x20U 
                                                & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                                                ? (0x844433U 
                                                   | ((0x700000U 
                                                       & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                                : (0x40840433U 
                                                   | ((0x700000U 
                                                       & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))));
                                }
                            } else {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                                    = (0x47413U | (
                                                   (0xfc000000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                      >> 0xcU)))) 
                                                       << 0x1aU)) 
                                                   | ((0x2000000U 
                                                       & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 0xdU)) 
                                                      | ((0x1f00000U 
                                                          & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 0x12U)) 
                                                         | ((0x38000U 
                                                             & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                << 8U)) 
                                                            | (0x380U 
                                                               & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))));
                            }
                        } else {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                                = (0x45413U | ((0x40000000U 
                                                & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x14U)) 
                                               | ((0x1f00000U 
                                                   & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 0x12U)) 
                                                  | ((0x38000U 
                                                      & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         << 8U)) 
                                                     | (0x380U 
                                                        & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                        }
                    }
                }
            } else {
                if ((0x4000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x2000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x37U | ((0xfffe0000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           >> 0xcU)))) 
                                            << 0x11U)) 
                                        | ((0x1f000U 
                                            & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0xaU)) 
                                           | (0xf80U 
                                              & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
                        if ((2U == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 7U)))) {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                                = (0x10113U | ((0xe0000000U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                  >> 0xcU)))) 
                                                   << 0x1dU)) 
                                               | ((0x18000000U 
                                                   & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 0x18U)) 
                                                  | ((0x4000000U 
                                                      & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         << 0x15U)) 
                                                     | ((0x2000000U 
                                                         & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                            << 0x17U)) 
                                                        | (0x1000000U 
                                                           & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                              << 0x12U)))))));
                        }
                    } else {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x13U | ((0xfc000000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           >> 0xcU)))) 
                                            << 0x1aU)) 
                                        | ((0x2000000U 
                                            & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0xdU)) 
                                           | ((0x1f00000U 
                                               & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x12U)) 
                                              | (0xf80U 
                                                 & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                    }
                } else {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = ((0x2000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                            ? (0x6fU | ((0x80000000U 
                                         & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x13U)) 
                                        | ((0x40000000U 
                                            & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x16U)) 
                                           | ((0x30000000U 
                                               & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x13U)) 
                                              | ((0x8000000U 
                                                  & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x15U)) 
                                                 | ((0x4000000U 
                                                     & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        << 0x13U)) 
                                                    | ((0x2000000U 
                                                        & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           << 0x17U)) 
                                                       | ((0x1000000U 
                                                           & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                              << 0xdU)) 
                                                          | ((0xe00000U 
                                                              & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                 << 0x12U)) 
                                                             | ((0x1ff000U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                                >> 0xcU)))) 
                                                                    << 0xcU)) 
                                                                | (0x80U 
                                                                   & ((~ 
                                                                       (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                        >> 0xfU)) 
                                                                      << 7U))))))))))))
                            : (0x13U | ((0xfc000000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           >> 0xcU)))) 
                                            << 0x1aU)) 
                                        | ((0x2000000U 
                                            & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0xdU)) 
                                           | ((0x1f00000U 
                                               & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x12U)) 
                                              | ((0xf8000U 
                                                  & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 8U)) 
                                                 | (0xf80U 
                                                    & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))))));
                }
            }
        } else {
            if ((0x8000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x4000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x842023U | ((0x4000000U 
                                             & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 0x15U)) 
                                            | ((0x2000000U 
                                                & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0xdU)) 
                                               | ((0x700000U 
                                                   & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 0x12U)) 
                                                  | ((0x38000U 
                                                      & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         << 8U)) 
                                                     | ((0xc00U 
                                                         & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata) 
                                                        | (0x200U 
                                                           & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                              << 3U))))))));
                    }
                }
            } else {
                if ((0x4000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x42403U | ((0x4000000U 
                                            & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x15U)) 
                                           | ((0x3800000U 
                                               & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x400000U 
                                                  & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x10U)) 
                                                 | ((0x38000U 
                                                     & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        << 8U)) 
                                                    | (0x380U 
                                                       & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 5U)))))));
                    }
                } else {
                    if ((1U & (~ (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x10413U | ((0x3c000000U 
                                            & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x13U)) 
                                           | ((0x3000000U 
                                               & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x800000U 
                                                  & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)) 
                                                 | ((0x400000U 
                                                     & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        << 0x10U)) 
                                                    | (0x380U 
                                                       & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 5U)))))));
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__169(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__169\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__iccm__DOT__req = (1U & ((
                                                   (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                    >> 0x15U) 
                                                   & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full))) 
                                                  & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error))));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__170(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__170\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err 
        = (1U & ((1U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
                  ? ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                      ? ((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                           >> 1U) & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))) 
                         | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                      : (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                          & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                         | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                            & ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                               | (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))))))
                  : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)));
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__171(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__171\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (((IData)(vlTOPp->soc_top__DOT__iccm__DOT__req) 
            & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o))) 
           & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)));
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__172(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__172\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d 
        = ((0x20000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                        << 0xeU)) | ((0x10000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                  << 9U)) 
                                     | ((0x8000U & 
                                         (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                          << 4U)) | 
                                        (0x7fffU & 
                                         (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                          >> 0x10U)))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d 
                    = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtval;
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d 
        = ((0x20U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                     >> 0x1aU)) | (0x1fU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int));
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d 
                    = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
            if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
                if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d 
                        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q;
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_id;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d 
        = (0xfffffffeU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d 
        = (0xfffffffeU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause) {
        if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_if) {
            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc 
                = (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                   << 1U);
        } else {
            if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_id) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc 
                    = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_id;
            }
        }
        if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save) {
            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d 
                = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc;
        } else {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d 
                    = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
            if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
                if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d 
                        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_top::_sequent__TOP__173(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_sequent__TOP__173\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
            ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex)
                ? ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                    << 0x1eU) | (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                 >> 2U)) : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))
            : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result);
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__174(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__174\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0U] 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
            ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int
                : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex)
            : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex);
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__175(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__175\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_d 
        = vlTOPp->soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q;
    if (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__instr_req) 
         & (IData)(vlTOPp->soc_top__DOT__xbar_to_ifu))) {
        vlTOPp->soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_d 
            = (1U & ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q)) 
                     & ((IData)(1U) + (IData)(vlTOPp->soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q))));
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err 
        = (1U & ((IData)(vlTOPp->soc_top__DOT__xbar_to_ifu) 
                 | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err 
        = (1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                 & ((IData)((vlTOPp->soc_top__DOT__xbar_to_ifu 
                             >> 0x33U)) | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_q))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n 
        = ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n)) 
           | (1U & (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)) 
                    | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n 
        = ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n)) 
           | (2U & (((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                       & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)) 
                      & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                     << 1U) | (0xfffffffeU & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n 
        = ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n)) 
           | (1U & (((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                       & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)) 
                      & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d)) 
                     | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set) 
                        & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q))) 
                    | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n 
        = ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n)) 
           | (2U & (((((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                         & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)) 
                        & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d)) 
                       & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                      << 1U) | (0xfffffffeU & (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set) 
                                                << 1U) 
                                               & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)))) 
                    | (0xfffffffeU & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q)))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err) 
           & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en 
        = ((3U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en)) 
           | (0xfffffffcU & (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                              << 2U) & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed 
        = ((6U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed)) 
           | (1U & (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
                    | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed 
        = ((5U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed)) 
           | (2U & ((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                      << 1U) & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
                    | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed 
        = ((3U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed)) 
           | (4U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                    | (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                        << 2U) & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid 
        = (1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                 | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid)));
    if ((1U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)) {
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
            = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed;
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw 
            = (1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)
                      ? (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid)
                      : (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                          >> 1U) | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                    & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid)))));
    } else {
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
            = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed;
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw 
            = (1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
    }
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__176(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__176\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0x200000U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
         [0U][2U])) {
        vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__unnamedblk1__DOT__i = 4U;
    }
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack 
        = (1U & ((IData)((vlTOPp->soc_top__DOT__dccm_to_xbar 
                          >> 0x33U)) & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                 [0U][0U]));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__177(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__177\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d 
        = (0x7fffffffU & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                           ? (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                ? (0xfffffffeU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                : 0U) >> 1U) : (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                + (
                                                   (2U 
                                                    & ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                       << 1U)) 
                                                   | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))));
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__178(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__178\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (4U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                           [1U][2U] >> 0x12U))));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re 
        = ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rd_req) 
           & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)));
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__179(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__179\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = 0U;
    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((1U & ((IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h) 
                           | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((1U & ((IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h) 
                           | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
                }
            } else {
                if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
                    if ((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update = 0U;
    if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if ((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                   >> 0x33U)))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update 
                        = (1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)));
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if ((1U & ((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                    >> 0x33U)) | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update 
                        = (1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)));
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update = 0U;
    if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if ((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                   >> 0x33U)))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update 
                        = (1U & (~ (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                            >> 1U))));
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((1U & ((IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h) 
                           | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update 
                        = (1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q)));
                }
            } else {
                if ((1U & ((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                    >> 0x33U)) | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update 
                        = (1U & ((IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h) 
                                 & (~ ((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                >> 1U)) 
                                       | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))));
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((1U & ((IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h) 
                           | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update = 1U;
                }
            } else {
                if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
                    if ((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q;
    if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if ((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                   >> 0x33U)))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d 
                        = (1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err) 
                                 >> 1U));
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if ((1U & ((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                    >> 0x33U)) | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d 
                        = (1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err) 
                                 >> 1U));
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
                if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d 
                        = (1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err) 
                                 >> 1U));
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs;
    if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
            } else {
                if ((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                   >> 0x33U)))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((1U & ((IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h) 
                           | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
                }
            } else {
                if ((1U & ((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                    >> 0x33U)) | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
                        = ((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h))
                            ? 0U : 3U);
                } else {
                    if ((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 4U;
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((1U & ((IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h) 
                           | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 2U;
                }
            } else {
                if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
                        = ((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h))
                            ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access)
                                ? 2U : 0U) : ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access)
                                               ? 1U
                                               : 3U));
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q;
    if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if ((1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                   >> 0x33U)))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d 
                        = (1U & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                         >> 1U)));
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if ((1U & ((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                    >> 0x33U)) | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d 
                        = (1U & ((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                          >> 1U)) | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)));
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d = 0U;
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q;
    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((1U & ((IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h) 
                           | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 0U;
                }
            } else {
                if ((1U & ((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                    >> 0x33U)) | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
                        = (1U & (~ (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h)));
                } else {
                    if ((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 0U;
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((1U & ((IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h) 
                           | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 1U;
                }
            } else {
                if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
                    if ((1U & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
                            = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access;
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext 
        = ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q))
            ? ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                ? ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? ((0xffffff00U & ((- (IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                  >> 0x21U))))) 
                                           << 8U)) 
                           | (0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                               >> 0x1aU))))
                        : (0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                            >> 0x1aU))))
                    : ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? ((0xffffff00U & ((- (IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                  >> 0x19U))))) 
                                           << 8U)) 
                           | (0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                               >> 0x12U))))
                        : (0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                            >> 0x12U)))))
                : ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? ((0xffffff00U & ((- (IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                  >> 0x11U))))) 
                                           << 8U)) 
                           | (0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                               >> 0xaU))))
                        : (0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                            >> 0xaU))))
                    : ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? ((0xffffff00U & ((- (IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                  >> 9U))))) 
                                           << 8U)) 
                           | (0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                               >> 2U))))
                        : (0xffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                            >> 2U))))))
            : ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q))
                ? ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? ((0xffff0000U & ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                      >> 9U))))) 
                                               << 0x10U)) 
                               | ((0xff00U & ((IData)(
                                                      (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                       >> 2U)) 
                                              << 8U)) 
                                  | (0xffU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                              >> 0x10U))))
                            : ((0xff00U & ((IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                    >> 2U)) 
                                           << 8U)) 
                               | (0xffU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                           >> 0x10U))))
                        : ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? ((0xffff0000U & ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                      >> 0x21U))))) 
                                               << 0x10U)) 
                               | (0xffffU & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                     >> 0x12U))))
                            : (0xffffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                  >> 0x12U)))))
                    : ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? ((0xffff0000U & ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                      >> 0x19U))))) 
                                               << 0x10U)) 
                               | (0xffffU & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                     >> 0xaU))))
                            : (0xffffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                  >> 0xaU))))
                        : ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? ((0xffff0000U & ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                      >> 0x11U))))) 
                                               << 0x10U)) 
                               | (0xffffU & (IData)(
                                                    (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                     >> 2U))))
                            : (0xffffU & (IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                  >> 2U))))))
                : ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((0xffffff00U & ((IData)(
                                                   (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                    >> 2U)) 
                                           << 8U)) 
                           | (0xffU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                       >> 0x10U))) : 
                       ((0xffff0000U & ((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                 >> 2U)) 
                                        << 0x10U)) 
                        | (0xffffU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                      >> 8U)))) : (
                                                   (1U 
                                                    & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                                    ? 
                                                   ((0xff000000U 
                                                     & ((IData)(
                                                                (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                 >> 2U)) 
                                                        << 0x18U)) 
                                                    | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q)
                                                    : (IData)(
                                                              (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                               >> 2U))))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1U] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb 
        = ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))
            ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux
           [0U] : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux
           [1U]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((1U == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                            >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffffeU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((2U == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                            >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffffdU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((3U == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                            >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffffbU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((4U == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                            >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffff7U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((5U == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                            >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffffefU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((6U == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                            >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffffdfU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 5U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((7U == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                            >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffffbfU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 6U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((8U == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                            >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffff7fU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 7U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((9U == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                            >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffeffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 8U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0xaU == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                              >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffdffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 9U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0xbU == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                              >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffbffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0xaU));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0xcU == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                              >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffff7ffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0xbU));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0xdU == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                              >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffefffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0xcU));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0xeU == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                              >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffdfffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0xdU));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0xfU == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                              >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffbfffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0xeU));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x10U == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fff7fffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0xfU));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x11U == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffeffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x10U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x12U == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffdffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x11U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x13U == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffbffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x12U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x14U == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ff7ffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x13U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x15U == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fefffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x14U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x16U == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fdfffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x15U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x17U == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fbfffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x16U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x18U == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7f7fffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x17U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x19U == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7effffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x18U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x1aU == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7dffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x19U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x1bU == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7bffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x1aU));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x1cU == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x77ffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x1bU));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x1dU == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x6fffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x1cU));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x1eU == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x5fffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x1dU));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x1fU == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x3fffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x1eU));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q;
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 0U;
                }
            } else {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 0U;
            }
        } else {
            if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 1U;
            } else {
                if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                    if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_valid)))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 1U;
                    }
                } else {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d 
                        = (1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec)
                                  ? (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                      >> 1U) | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                                  : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec)));
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__180(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__180\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio5_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 7U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio6_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 8U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio8_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0xaU)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio9_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0xbU)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio10_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0xcU)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio11_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0xdU)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio12_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0xeU)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio21_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x17U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio24_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x1aU)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio25_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x1bU)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio26_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x1cU)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio30_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x20U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio31_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x21U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x23U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x25U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__181(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__181\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we 
        = ((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we 
        = ((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
             >> 0xaU) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we 
        = ((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
             >> 0xbU) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we 
        = ((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
             >> 0xcU) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we 
        = ((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
             >> 0xdU) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__ctrl_en_input_filter_we 
        = ((((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
             >> 0xeU) & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio0_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 2U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio1_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 3U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio2_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 4U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio3_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 5U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio4_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 6U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio13_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0xfU)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio14_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x10U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio15_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x11U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio16_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x12U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio17_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x13U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio18_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x14U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio19_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x15U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio20_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x16U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio22_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x18U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio23_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x19U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio27_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x1dU)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio28_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x1eU)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio29_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x1fU)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we 
        = (((IData)((vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we 
        = (((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__threshold[0U] 
        = (7U & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                  << 0x17U) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                               >> 9U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__claim = 0U;
    if ((2U & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U])) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__claim 
            = (vlTOPp->soc_top__DOT__intr_controller__DOT__claim 
               | (0xffffffffULL & ((IData)(1U) << vlTOPp->soc_top__DOT__intr_controller__DOT__claim_id
                                   [0U])));
    }
    vlTOPp->soc_top__DOT__intr_controller__DOT__complete_id[0U] 
        = (0x1fU & ((vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                     << 0x1dU) | (vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                  >> 3U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__complete = 0U;
    if ((4U & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U])) {
        vlTOPp->soc_top__DOT__intr_controller__DOT__complete 
            = (vlTOPp->soc_top__DOT__intr_controller__DOT__complete 
               | (0xffffffffULL & ((IData)(1U) << vlTOPp->soc_top__DOT__intr_controller__DOT__complete_id
                                   [0U])));
    }
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__182(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__182\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_state__DOT__wr_data 
        = (((0x200000U & vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U])
             ? ((vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
                 << 0xaU) | (vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                             >> 0x16U)) : vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q) 
           & ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we)
               ? (~ ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                      [1U][1U] << 0x1fU) | (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][0U] 
                                            >> 1U)))
               : 0xffffffffU));
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__183(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__183\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear 
        = (1U & ((~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id) 
                     | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id))) 
                 | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__184(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__184\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw) 
           & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_d 
        = ((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw) 
             & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready)) 
            & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set))) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
              & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo 
        = (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready) 
            & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw)) 
           & ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed)) 
              | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q));
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__185(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__185\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_d 
        = ((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
             | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw)) 
            | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
    if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
            = ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))
                ? 0U : ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))
                         ? 0U : 5U));
    } else {
        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                } else {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                    if ((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                                if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                        if (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                             | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn)))) {
                            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)))) {
                                if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 2U;
                                } else {
                                    if (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush) 
                                         & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq))) {
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 7U;
                                    }
                                }
                            }
                        }
                    }
                    if (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q) 
                         & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                               & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 6U;
                    }
                    if ((1U & (((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id)) 
                                & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req))) 
                               & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q))))) {
                        if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
                        } else {
                            if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 7U;
                            }
                        }
                    }
                } else {
                    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                    }
                    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 7U;
                    }
                    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (((0U != vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs) 
                                | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                               | (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                  >> 2U)))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
                    }
                } else {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 3U;
                }
            } else {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                    = ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))
                        ? 4U : 1U);
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__186(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__186\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en 
        = ((6U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en)) 
           | ((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                >> 1U) & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
              | (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                  & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
                 & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en 
        = ((5U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en)) 
           | ((0x7ffffffeU & (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                               >> 1U) & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo) 
                                         << 1U))) | 
              (0xfffffffeU & ((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                                << 1U) & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
                              & ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                                 << 1U)))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped 
        = ((6U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped)) 
           | (1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)
                     ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                        >> 1U) : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped 
        = ((5U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped)) 
           | (2U & (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)
                      ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                         >> 2U) : ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                                   >> 1U)) << 1U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped 
        = ((3U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped)) 
           | (4U & (((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                     << 2U) & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed))));
}

VL_INLINE_OPT void Vsoc_top::_multiclk__TOP__187(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_multiclk__TOP__187\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we 
        = (1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
        = ((0xffffffffULL & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load) 
           | ((QData)((IData)((IData)((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
        = ((0xffffffff00000000ULL & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load) 
           | (IData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((1U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
            = ((0xffffffffULL & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load) 
               | ((QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
            = ((0xffffffff00000000ULL & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load) 
               | (IData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)));
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_upd 
        = (1ULL + vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we)
            ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load
            : ((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                      & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))))
                ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_upd
                : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we 
        = (1U & ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 2U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
        = ((0xffffffffULL & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load) 
           | ((QData)((IData)((IData)((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
        = ((0xffffffff00000000ULL & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load) 
           | (IData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((4U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
            = ((0xffffffffULL & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load) 
               | ((QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
            = ((0xffffffff00000000ULL & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load) 
               | (IData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)));
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_upd 
        = (1ULL + vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we)
            ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load
            : ((1U & ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                       >> 2U) & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                    >> 2U)))) ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_upd
                : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q));
}

VL_INLINE_OPT void Vsoc_top::_combo__TOP__188(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_combo__TOP__188\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d 
        = ((6U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d)) 
           | (1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped) 
                    & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d 
        = ((5U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d)) 
           | (2U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped) 
                    & ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)) 
                       << 1U))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d 
        = ((3U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d)) 
           | (4U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped) 
                    & ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)) 
                       << 2U))));
}

void Vsoc_top::_eval(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_eval\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vm_even_cycle = !vlTOPp->__Vm_even_cycle;
    vlTOPp->__Vm_threadPoolp->workerp(0)->addTask(__Vmtask__12, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(1)->addTask(__Vmtask__15, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(2)->addTask(__Vmtask__17, vlTOPp->__Vm_even_cycle, vlSymsp);
    __Vmtask__4(vlTOPp->__Vm_even_cycle, vlSymsp);
    Verilated::mtaskId(0);
    vlTOPp->__Vm_mt_final.waitUntilUpstreamDone(vlTOPp->__Vm_even_cycle);
    // Final
    vlTOPp->__Vclklast__TOP__rst_ni = vlTOPp->rst_ni;
    vlTOPp->__Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk;
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

VL_INLINE_OPT QData Vsoc_top::_change_request(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_change_request\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vsoc_top::_change_request_1(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_change_request_1\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree)
         | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8])|| (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[10] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[10]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[11] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[11])
         | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5]));
    VL_DEBUG_IF( if(__req && ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) VL_DBG_MSGF("        CHANGE: /afs/eecs.umich.edu/vlsida/projects/restricted/google/naomikmo/ibex_collab/src/ip/rv_plic/rtl/rv_plic_target.sv:43: soc_top.intr_controller.gen_target[0].u_target.is_tree\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9])|| (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[10] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[10]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[11] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[11]))) VL_DBG_MSGF("        CHANGE: /afs/eecs.umich.edu/vlsida/projects/restricted/google/naomikmo/ibex_collab/src/ip/rv_plic/rtl/rv_plic_target.sv:44: soc_top.intr_controller.gen_target[0].u_target.id_tree\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4]) | (vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5] ^ vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5]))) VL_DBG_MSGF("        CHANGE: /afs/eecs.umich.edu/vlsida/projects/restricted/google/naomikmo/ibex_collab/src/ip/rv_plic/rtl/rv_plic_target.sv:45: soc_top.intr_controller.gen_target[0].u_target.max_tree\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree;
    vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U];
    vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U];
    vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U];
    vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U];
    vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U];
    vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U];
    vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U];
    vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U];
    vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U];
    vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U];
    vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU];
    vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU];
    vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U];
    vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U];
    vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U];
    vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U];
    vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U];
    vlTOPp->__Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U];
    return __req;
}
