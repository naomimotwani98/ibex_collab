// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top.h"
#include "Vsoc_top__Syms.h"

//==========
// Begin mtask footprint all: 22 
CData/*0:0*/ Vsoc_top::__Vtable1_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[64];
CData/*0:0*/ Vsoc_top::__Vtable1_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[64];
CData/*0:0*/ Vsoc_top::__Vtable1_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[64];
CData/*0:0*/ Vsoc_top::__Vtable1_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[64];
CData/*0:0*/ Vsoc_top::__Vtable1_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[64];
CData/*0:0*/ Vsoc_top::__Vtable1_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[64];
// Begin mtask footprint all: 23 
CData/*3:0*/ Vsoc_top::__Vtable6_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be[32];
// Begin mtask footprint all: 21 
CData/*0:0*/ Vsoc_top::__Vtable3_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[64];
CData/*0:0*/ Vsoc_top::__Vtable4_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[256];
CData/*0:0*/ Vsoc_top::__Vtable5_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[64];
// Begin mtask footprint all: 19 
CData/*0:0*/ Vsoc_top::__Vtable2_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[64];

Vsoc_top::Vsoc_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
, __Vm_mt_15(1), __Vm_mt_17(1), __Vm_mt_19(1), __Vm_mt_23(1), 
  __Vm_mt_4(2), __Vm_mt_11(1), __Vm_mt_22(2), __Vm_mt_25(1), 
  __Vm_mt_27(1), __Vm_mt_28(1), __Vm_mt_29(1), __Vm_mt_30(1), 
  __Vm_mt_31(1), __Vm_mt_6(1), __Vm_mt_8(1), __Vm_mt_9(2), 
  __Vm_mt_14(3), __Vm_mt_20(2), __Vm_mt_21(1), __Vm_mt_34(5), 
  __Vm_mt_35(1), __Vm_mt_36(1), __Vm_mt_39(1), __Vm_mt_40(3), 
  __Vm_mt_41(2), __Vm_mt_45(1), __Vm_mt_47(1), __Vm_mt_49(1), 
  __Vm_mt_50(1), __Vm_mt_51(1), __Vm_mt_52(1), __Vm_mt_53(2), 
  __Vm_mt_54(1), __Vm_mt_55(2), __Vm_mt_56(1), __Vm_mt_57(1), 
  __Vm_mt_58(2), __Vm_mt_59(1), __Vm_mt_60(2), __Vm_mt_61(1), 
  __Vm_mt_62(2), __Vm_mt_63(2), __Vm_mt_64(8), __Vm_mt_67(1), 
  __Vm_mt_68(1), __Vm_mt_1(2), __Vm_mt_2(4), __Vm_mt_3(1), 
  __Vm_mt_5(1), __Vm_mt_33(3), __Vm_mt_44(2), __Vm_mt_46(2), 
  __Vm_mt_48(2), __Vm_mt_26(1), __Vm_mt_32(2), __Vm_mt_38(2), 
  __Vm_mt_42(2), __Vm_mt_43(3), __Vm_mt_69(2), __Vm_mt_final(4), 
  __Vm_threadPoolp(nullptr), __Vm_even_cycle(false) {
    Vsoc_top__Syms* __restrict vlSymsp = __VlSymsp = new Vsoc_top__Syms(_vcontextp__, this, name());
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__rv_plic_reg_pkg, Vsoc_top_rv_plic_reg_pkg);
    VL_CELL(__PVT__gpio_reg_pkg, Vsoc_top_gpio_reg_pkg);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
    __Vm_threadPoolp = new VlThreadPool(vlSymsp->_vm_contextp__, 3, 0);
}

void Vsoc_top::__Vconfigure(Vsoc_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

Vsoc_top::~Vsoc_top() {
    VL_DO_CLEAR(delete __Vm_threadPoolp, __Vm_threadPoolp = nullptr);
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Vsoc_top::_initial__TOP__1(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_initial__TOP__1\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*767:0*/ __Vtemp1[24];
    WData/*767:0*/ __Vtemp2[24];
    // Body
    __Vtemp1[0U] = 0x2e686578U;
    __Vtemp1[1U] = 0x74656d70U;
    __Vtemp1[2U] = 0x6865782fU;
    __Vtemp1[3U] = 0x7374732fU;
    __Vtemp1[4U] = 0x622f7465U;
    __Vtemp1[5U] = 0x6f6c6c61U;
    __Vtemp1[6U] = 0x65785f63U;
    __Vtemp1[7U] = 0x6f2f6962U;
    __Vtemp1[8U] = 0x6d696b6dU;
    __Vtemp1[9U] = 0x2f6e616fU;
    __Vtemp1[0xaU] = 0x6f676c65U;
    __Vtemp1[0xbU] = 0x642f676fU;
    __Vtemp1[0xcU] = 0x69637465U;
    __Vtemp1[0xdU] = 0x65737472U;
    __Vtemp1[0xeU] = 0x74732f72U;
    __Vtemp1[0xfU] = 0x6f6a6563U;
    __Vtemp1[0x10U] = 0x612f7072U;
    __Vtemp1[0x11U] = 0x6c736964U;
    __Vtemp1[0x12U] = 0x64752f76U;
    __Vtemp1[0x13U] = 0x63682e65U;
    __Vtemp1[0x14U] = 0x2e756d69U;
    __Vtemp1[0x15U] = 0x65656373U;
    __Vtemp1[0x16U] = 0x6166732fU;
    __Vtemp1[0x17U] = 0x2fU;
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(24, __Vtemp1)
                 , vlTOPp->soc_top__DOT__iccm__DOT__inst_memory__DOT__mem
                 , 0, ~0ULL);
    __Vtemp2[0U] = 0x2e686578U;
    __Vtemp2[1U] = 0x74656d70U;
    __Vtemp2[2U] = 0x6865782fU;
    __Vtemp2[3U] = 0x7374732fU;
    __Vtemp2[4U] = 0x622f7465U;
    __Vtemp2[5U] = 0x6f6c6c61U;
    __Vtemp2[6U] = 0x65785f63U;
    __Vtemp2[7U] = 0x6f2f6962U;
    __Vtemp2[8U] = 0x6d696b6dU;
    __Vtemp2[9U] = 0x2f6e616fU;
    __Vtemp2[0xaU] = 0x6f676c65U;
    __Vtemp2[0xbU] = 0x642f676fU;
    __Vtemp2[0xcU] = 0x69637465U;
    __Vtemp2[0xdU] = 0x65737472U;
    __Vtemp2[0xeU] = 0x74732f72U;
    __Vtemp2[0xfU] = 0x6f6a6563U;
    __Vtemp2[0x10U] = 0x612f7072U;
    __Vtemp2[0x11U] = 0x6c736964U;
    __Vtemp2[0x12U] = 0x64752f76U;
    __Vtemp2[0x13U] = 0x63682e65U;
    __Vtemp2[0x14U] = 0x2e756d69U;
    __Vtemp2[0x15U] = 0x65656373U;
    __Vtemp2[0x16U] = 0x6166732fU;
    __Vtemp2[0x17U] = 0x2fU;
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(24, __Vtemp2)
                 , vlTOPp->soc_top__DOT__dccm__DOT__dccm__DOT__mem
                 , 0, ~0ULL);
}

void Vsoc_top::_settle__TOP__2(Vsoc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top::_settle__TOP__2\n"); );
    Vsoc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp3[3];
    WData/*95:0*/ __Vtemp13[3];
    WData/*95:0*/ __Vtemp17[3];
    // Body
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_pmp_addr[0U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_pmp_addr[1U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_pmp_addr[2U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_pmp_addr[3U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_pmp_addr[4U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_pmp_cfg 
        = (0x3ffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_pmp_cfg);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_pmp_cfg 
        = (0xfc0fffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_pmp_cfg);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_pmp_cfg 
        = (0xfff03fU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_pmp_cfg);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_pmp_cfg 
        = (0xffffc0U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_pmp_cfg);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffffffeU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffffffdU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffffffbU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffffff7U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffffffefU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffffffdfU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffffffbfU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffffff7fU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffffeffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffffdffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffffbffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffff7ffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffffefffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffffdfffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffffbfffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffff7fffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffeffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffdffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffbffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfff7ffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffefffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffdfffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffbfffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xff7fffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfeffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfdffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfbffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xf7ffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xefffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xdfffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xbfffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0x7fffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt 
        = (0x1fU & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0U] 
        = (1U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0U]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[1U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[1U] 
        = (2U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [1U]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[2U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[2U] 
        = (4U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [2U]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[3U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[3U] 
        = (8U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [3U]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[4U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[4U] 
        = (0x10U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [4U]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[5U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[5U] 
        = (0x20U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [5U]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[6U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[6U] 
        = (0x40U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [6U]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[7U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[7U] 
        = (0x80U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [7U]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[8U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[8U] 
        = (0x100U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [8U]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[9U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[9U] 
        = (0x200U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [9U]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xaU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xaU] 
        = (0x400U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0xaU]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xbU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xbU] 
        = (0x800U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0xbU]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xcU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xcU] 
        = (0x1000U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0xcU]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xdU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xdU] 
        = (0x2000U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0xdU]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xeU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xeU] 
        = (0x4000U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0xeU]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xfU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xfU] 
        = (0x8000U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0xfU]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x10U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x10U] 
        = (0x10000U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x10U]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x11U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x11U] 
        = (0x20000U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x11U]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x12U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x12U] 
        = (0x40000U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x12U]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x13U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x13U] 
        = (0x80000U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x13U]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x14U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x14U] 
        = (0x100000U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x14U]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x15U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x15U] 
        = (0x200000U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x15U]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x16U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x16U] 
        = (0x400000U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x16U]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x17U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x17U] 
        = (0x800000U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x17U]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x18U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x18U] 
        = (0x1000000U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x18U]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x19U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x19U] 
        = (0x2000000U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x19U]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1aU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1aU] 
        = (0x4000000U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x1aU]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1bU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1bU] 
        = (0x8000000U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x1bU]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1cU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1cU] 
        = (0x10000000U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x1cU]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1dU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1dU] 
        = (0x20000000U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x1dU]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1eU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1eU] 
        = (0x40000000U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x1eU]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1fU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1fU] 
        = (0x80000000U | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x1fU]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[1U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[3U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[4U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[5U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[6U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[7U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[8U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[9U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xaU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xbU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xcU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xdU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xeU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xfU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x10U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x11U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x12U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x13U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x14U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x15U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x16U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x17U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x18U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x19U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1aU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1bU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1cU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1dU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1eU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1fU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9U] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xaU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xaU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xbU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xbU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xcU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xcU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xdU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xdU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xeU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xeU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xfU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xfU] = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[1U] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[3U] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[4U] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[5U] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[6U] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[7U] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[8U] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[9U] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0xaU] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0xbU] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0xcU] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0xdU] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0xeU] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0xfU] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x10U] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x11U] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x12U] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x13U] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x14U] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x15U] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x16U] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x17U] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x18U] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x19U] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x1aU] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x1bU] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x1cU] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x1dU] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x1eU] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x1fU] = 0ULL;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu = 0U;
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h[2U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__tl_ldo1_i;
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h[3U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__tl_ldo2_i;
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h[4U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__tl_dcdc_i;
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h[5U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__tl_pll1_i;
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h[7U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__tl_tsen2_i;
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h[8U] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__tl_dap_i;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err 
        = (2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err 
        = (1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0U] = 0U;
    if ((1U & (~ (IData)(vlTOPp->clk_i)))) {
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch = 1U;
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__clk 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch) 
           & (IData)(vlTOPp->clk_i));
    vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
        = (0x100000U | vlTOPp->soc_top__DOT__gpio_32__DOT__hw2reg[5U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
        = (0x3ffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
        = (1U | (0xffffffc0U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
        = (0x80U | (0xfffff03fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
        = (0x3000U | (0xfffc0fffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
        = (0x100000U | (0xff03ffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
        = (0x5000000U | (0xc0ffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
        = (0x80000000U | (0x3fffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
        = (1U | (0xfffffff0U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
        = (0x70U | (0xfffffc0fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
        = (0x2000U | (0xffff03ffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
        = (0x90000U | (0xffc0ffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
        = (0x2800000U | (0xf03fffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
        = (0xb0000000U | (0xfffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
        = (0xfffffffcU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
        = (0x30U | (0xffffff03U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
        = (0xd00U | (0xffffc0ffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
        = (0x38000U | (0xfff03fffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
        = (0xf00000U | (0xfc0fffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
        = (0x40000000U | (0x3ffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
        = (0x11U | (0xffffffc0U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
        = (0x480U | (0xfffff03fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
        = (0x13000U | (0xfffc0fffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
        = (0x500000U | (0xff03ffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
        = (0x15000000U | (0xc0ffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
        = (0x80000000U | (0x3fffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
        = (5U | (0xfffffff0U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
        = (0x170U | (0xfffffc0fU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
        = (0x6000U | (0xffff03ffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
        = (0x190000U | (0xffc0ffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
        = (0x6800000U | (0xf03fffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
        = (0xb0000000U | (0xfffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
        = (1U | (0x3fffffcU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
        = (0x70U | (0x3ffff03U & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
        = (0x1d00U | (0x3ffc0ffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
        = (0x78000U | (0x3f03fffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
        = (0x1f00000U | (0xfffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU]));
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = (0x40U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = (0x100U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = (0x400U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = (0x1000U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = (0x4000U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = (0x10000U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = (0x40000U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = (0x100000U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = (0x400000U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = (0x1000000U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = (0x4000000U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = (0x10000000U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = (0x40000000U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = (1U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = (4U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = (0x10U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = (0x40U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = (0x100U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = (0x400U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = (0x1000U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = (0x4000U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = (0x10000U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = (0x40000U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = (0x100000U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = (0x400000U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = (0x1000000U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = (0x4000000U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = (0x10000000U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
        = (0x40000000U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[1U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
        = (1U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
        = (4U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U]);
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
        = (0x10U | vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[2U]);
    vlTOPp->gpio_o = (0xfffffU & vlTOPp->soc_top__DOT__gpio_32__DOT__cio_gpio_q);
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
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (2U ^ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (4U ^ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
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
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
        = (((IData)(vlTOPp->soc_top__DOT__intr_timer) 
            << 0x10U) | ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_q) 
                         << 0xfU));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xffffefffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xfffff000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_0__q) 
                             << 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xffffdfffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xffffe000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_1__q) 
                             << 0xdU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xffffbfffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xffffc000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_2__q) 
                             << 0xeU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xffff7fffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xffff8000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_3__q) 
                             << 0xfU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xfffeffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xffff0000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_4__q) 
                             << 0x10U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xfffdffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xfffe0000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_5__q) 
                             << 0x11U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xfffbffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xfffc0000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_6__q) 
                             << 0x12U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xfff7ffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xfff80000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_7__q) 
                             << 0x13U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xffefffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xfff00000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_8__q) 
                             << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xffdfffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xffe00000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_9__q) 
                             << 0x15U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xffbfffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xffc00000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_10__q) 
                             << 0x16U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xff7fffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xff800000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_11__q) 
                             << 0x17U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xfeffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xff000000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_12__q) 
                             << 0x18U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xfdffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xfe000000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_13__q) 
                             << 0x19U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xfbffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xfc000000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_14__q) 
                             << 0x1aU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xf7ffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xf8000000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_15__q) 
                             << 0x1bU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xefffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xf0000000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_16__q) 
                             << 0x1cU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xdfffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xe0000000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_17__q) 
                             << 0x1dU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xbfffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xc0000000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_18__q) 
                             << 0x1eU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0x7fffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0x80000000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_19__q) 
                             << 0x1fU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
        = ((0xffeU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U]) 
           | (0xfffU & (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_20__q)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
        = ((0xffdU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U]) 
           | (0xffeU & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_21__q) 
                        << 1U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
        = ((0xffbU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U]) 
           | (0xffcU & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_22__q) 
                        << 2U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
        = ((0xff7U & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U]) 
           | (0xff8U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_23__q) 
                        << 3U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
        = ((0xfefU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U]) 
           | (0xff0U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_24__q) 
                        << 4U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
        = ((0xfdfU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U]) 
           | (0xfe0U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_25__q) 
                        << 5U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
        = ((0xfbfU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U]) 
           | (0xfc0U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_26__q) 
                        << 6U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
        = ((0xf7fU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U]) 
           | (0xf80U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_27__q) 
                        << 7U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
        = ((0xeffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U]) 
           | (0xf00U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_28__q) 
                        << 8U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
        = ((0xdffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U]) 
           | (0xe00U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_29__q) 
                        << 9U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
        = ((0xbffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U]) 
           | (0xc00U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_30__q) 
                        << 0xaU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
        = ((0x7ffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[5U]) 
           | (0x800U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_31__q) 
                        << 0xbU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xffffefffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xfffff000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_0__q) 
                             << 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xffffdfffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xffffe000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_1__q) 
                             << 0xdU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xffffbfffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xffffc000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_2__q) 
                             << 0xeU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xffff7fffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xffff8000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_3__q) 
                             << 0xfU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xfffeffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xffff0000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_4__q) 
                             << 0x10U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xfffdffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xfffe0000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_5__q) 
                             << 0x11U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xfffbffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xfffc0000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_6__q) 
                             << 0x12U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xfff7ffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xfff80000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_7__q) 
                             << 0x13U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xffefffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xfff00000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_8__q) 
                             << 0x14U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xffdfffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xffe00000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_9__q) 
                             << 0x15U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xffbfffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xffc00000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_10__q) 
                             << 0x16U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xff7fffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xff800000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_11__q) 
                             << 0x17U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xfeffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xff000000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_12__q) 
                             << 0x18U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xfdffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xfe000000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_13__q) 
                             << 0x19U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xfbffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xfc000000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_14__q) 
                             << 0x1aU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xf7ffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xf8000000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_15__q) 
                             << 0x1bU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xefffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xf0000000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_16__q) 
                             << 0x1cU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xdfffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xe0000000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_17__q) 
                             << 0x1dU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xbfffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xc0000000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_18__q) 
                             << 0x1eU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0x7fffffffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0x80000000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_19__q) 
                             << 0x1fU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U]) 
           | (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_20__q));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
        = ((0xfffffffdU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U]) 
           | (0xfffffffeU & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_21__q) 
                             << 1U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
        = ((0xfffffffbU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U]) 
           | (0xfffffffcU & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_22__q) 
                             << 2U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
        = ((0xfffffff7U & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U]) 
           | (0xfffffff8U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_23__q) 
                             << 3U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
        = ((0xffffffefU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U]) 
           | (0xfffffff0U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_24__q) 
                             << 4U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
        = ((0xffffffdfU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U]) 
           | (0xffffffe0U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_25__q) 
                             << 5U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
        = ((0xffffffbfU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U]) 
           | (0xffffffc0U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_26__q) 
                             << 6U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
        = ((0xffffff7fU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U]) 
           | (0xffffff80U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_27__q) 
                             << 7U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
        = ((0xfffffeffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U]) 
           | (0xffffff00U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_28__q) 
                             << 8U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
        = ((0xfffffdffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U]) 
           | (0xfffffe00U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_29__q) 
                             << 9U)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
        = ((0xfffffbffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U]) 
           | (0xfffffc00U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_30__q) 
                             << 0xaU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
        = ((0xfffff7ffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U]) 
           | (0xfffff800U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_31__q) 
                             << 0xbU)));
    __Vtemp3[0U] = (IData)((((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q)) 
                             << 0x3cU) | (((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio12__q)) 
                                           << 0x39U) 
                                          | (((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio13__q)) 
                                              << 0x36U) 
                                             | (((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio14__q)) 
                                                 << 0x33U) 
                                                | (((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q)) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio16__q)) 
                                                       << 0x2dU) 
                                                      | (((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q)) 
                                                          << 0x2aU) 
                                                         | (((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q)) 
                                                             << 0x27U) 
                                                            | (((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q)) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q)) 
                                                                   << 0x21U) 
                                                                  | (((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q)) 
                                                                      << 0x1eU) 
                                                                     | (QData)((IData)(
                                                                                (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio29__q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio30__q) 
                                                                                << 3U) 
                                                                                | (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q))))))))))))))))))))))));
    __Vtemp3[1U] = ((0x80000000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio10__q) 
                                    << 0x1fU)) | (IData)(
                                                         ((((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q)) 
                                                            << 0x3cU) 
                                                           | (((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio12__q)) 
                                                               << 0x39U) 
                                                              | (((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio13__q)) 
                                                                  << 0x36U) 
                                                                 | (((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio14__q)) 
                                                                     << 0x33U) 
                                                                    | (((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q)) 
                                                                        << 0x30U) 
                                                                       | (((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio16__q)) 
                                                                           << 0x2dU) 
                                                                          | (((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q)) 
                                                                              << 0x2aU) 
                                                                             | (((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q)) 
                                                                                << 0x1eU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio29__q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio30__q) 
                                                                                << 3U) 
                                                                                | (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q))))))))))))))))))))))) 
                                                          >> 0x20U)));
    __Vtemp13[2U] = ((0xe0000000U & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio0__q) 
                                     << 0x1dU)) | (
                                                   (0xfc000000U 
                                                    & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio1__q) 
                                                       << 0x1aU)) 
                                                   | ((0xff800000U 
                                                       & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio2__q) 
                                                          << 0x17U)) 
                                                      | ((0xfff00000U 
                                                          & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio3__q) 
                                                             << 0x14U)) 
                                                         | ((0xfffe0000U 
                                                             & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio4__q) 
                                                                << 0x11U)) 
                                                            | ((0xffffc000U 
                                                                & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio5__q) 
                                                                   << 0xeU)) 
                                                               | ((0xfffff800U 
                                                                   & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio6__q) 
                                                                      << 0xbU)) 
                                                                  | ((0xffffff00U 
                                                                      & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio7__q) 
                                                                         << 8U)) 
                                                                     | ((0xffffffe0U 
                                                                         & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio8__q) 
                                                                            << 5U)) 
                                                                        | ((0xfffffffcU 
                                                                            & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio9__q) 
                                                                               << 2U)) 
                                                                           | (0x7fffffffU 
                                                                              & ((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio10__q) 
                                                                                >> 1U))))))))))));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
        = ((0xfffU & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[1U]) 
           | (0xfffff000U & (__Vtemp3[0U] << 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
        = ((0xfffU & (__Vtemp3[0U] >> 0x14U)) | (0xfffff000U 
                                                 & (__Vtemp3[1U] 
                                                    << 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
        = ((0xfffU & (__Vtemp3[1U] >> 0x14U)) | (0xfffff000U 
                                                 & (__Vtemp13[2U] 
                                                    << 0xcU)));
    vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xfffff000U & vlTOPp->soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xfffU & (__Vtemp13[2U] >> 0x14U)));
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
    vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
        = (((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)) 
            << 0x33U) | (((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rspop)) 
                          << 0x30U) | (((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqsz)) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqid)) 
                                         << 0x23U) 
                                        | (((QData)((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__error) 
                                                               << 1U) 
                                                              | (1U 
                                                                 & (~ (IData)(vlTOPp->soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)))))))))));
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
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_d 
        = (0x3dU & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_d));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_d 
        = (0x3bU & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_d));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_d 
        = (7U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_d));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_d 
        = (0x3eU & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_d));
    vlTOPp->soc_top__DOT__intr_controller__DOT__claim_id[0U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__irq_id_o
        [0U];
    vlTOPp->soc_top__DOT__intr_controller__DOT__cc_id[0U] 
        = vlTOPp->soc_top__DOT__intr_controller__DOT__irq_id_o
        [0U];
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
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
        = (0x3fffffffcULL | vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o);
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
        = (2ULL | vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o);
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
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_d 
        = ((3U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_d)) 
           | (4U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                    >> 2U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_d 
        = ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_d)) 
           | (3U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                    >> 2U)));
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid) 
           & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)));
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid) 
           & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
    if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
            }
        }
    }
    vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
        = ((0xffffffc0U & vlTOPp->soc_top__DOT__intr_controller__DOT__hw2reg[0U]) 
           | vlTOPp->soc_top__DOT__intr_controller__DOT__cc_id
           [0U]);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0U] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[2U] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d 
        = (1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)
                  ? ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                     & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                        >> 2U)) : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q)));
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
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id = 1U;
    if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id = 2U;
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id = 1U;
                } else {
                    if ((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id 
                            = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                                ? 3U : 0U);
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty 
        = ((IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
           & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_req_int = 1U;
    if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_req_int = 0U;
        } else {
            if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_req_int = 0U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_req_int 
                = (1U & ((~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                             >> 1U)) & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev 
        = ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev)) 
           | (1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                    >> 1U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev 
        = ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev)) 
           | (2U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                    << 1U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
           & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug 
        = (1U & ((3U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))
                  ? (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                     >> 0xfU) : ((0U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                 & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                    >> 0xcU))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 0U;
    if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 1U;
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs 
        = (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
           & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err) 
           & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
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
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a = 1ULL;
    if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
                = ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? 1ULL : (1ULL | ((QData)((IData)(
                                                      ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                                          >> 2U)))) 
                                      << 1U)));
        }
    } else {
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
            = ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)(((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                                 << 0x1eU) 
                                                | (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                                   >> 2U)))) 
                               << 1U)) : 1ULL) : 1ULL);
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run = 0U;
    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run = 1U;
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req = 0U;
    if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req = 1U;
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req 
                = (1U & ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                         | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q)));
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[1U] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0U];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[2U] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[1U];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[3U] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[2U];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[4U] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[3U];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[5U] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[4U];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[6U] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[5U];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[7U] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[6U];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[8U] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[7U];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[9U] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[8U];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xaU] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[9U];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xbU] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xaU];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xcU] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xbU];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xdU] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xcU];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xeU] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xdU];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xfU] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xeU];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x10U] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xfU];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x11U] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x10U];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x12U] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x11U];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x13U] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x12U];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x14U] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x13U];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x15U] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x14U];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x16U] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x15U];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x17U] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x16U];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x18U] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x17U];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x19U] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x18U];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1aU] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x19U];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1bU] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1aU];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1cU] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1bU];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1dU] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1cU];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1eU] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1dU];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1fU] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1eU];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ctrl_busy = 1U;
    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (~ (((0U != vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs) 
                                   | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                  | (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                     >> 2U))))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ctrl_busy = 0U;
                    }
                } else {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ctrl_busy = 0U;
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_cause = 1U;
    if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
                         & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_cause = 1U;
                    }
                } else {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_cause 
                        = ((4U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q)
                            ? 4U : 3U);
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save = 0U;
    if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
                         & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save = 1U;
                    }
                } else {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save = 1U;
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d) 
           & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid 
        = (1U & ((~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (IData)(((0x800U != (0x1c00U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o))) 
                            | (1U != (1U & (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))))));
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword 
        = (((IData)(vlTOPp->rst_ni) ? vlTOPp->soc_top__DOT__iccm__DOT__rdata
             : 0U) & vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq 
        = (((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
            & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q))) 
           & ((0U != vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs) 
              & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                 >> 5U)));
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid 
        = (1U & ((~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (IData)(((0x800U != (0x1c00U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o))) 
                            | (1U != (1U & (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))))));
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword 
        = (vlTOPp->soc_top__DOT__dccm__DOT__rdata & vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__rmask);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec 
        = (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
            & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
           & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__icache_inval = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_access = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode 
        = (0x7fU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id);
    if ((0x40U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else {
                        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                if ((0U == (7U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((0U == (0xfffU 
                                                & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U)))) {
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec = 1U;
                                    } else {
                                        if ((1U == 
                                             (0xfffU 
                                              & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x14U)))) {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn = 1U;
                                        } else {
                                            if ((0x302U 
                                                 == 
                                                 (0xfffU 
                                                  & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x14U)))) {
                                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec = 1U;
                                            } else {
                                                if (
                                                    (0x7b2U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))) {
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec = 1U;
                                                } else {
                                                    if (
                                                        (0x105U 
                                                         == 
                                                         (0xfffU 
                                                          & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec = 1U;
                                                    } else {
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if ((IData)((0U 
                                                 != 
                                                 (0xf8f80U 
                                                  & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)))) {
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                    }
                                } else {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_access = 1U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel = 1U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                    if ((1U & (~ (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xeU)))) {
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                                    }
                                    if ((1U == (3U 
                                                & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                                    } else {
                                        if ((2U == 
                                             (3U & 
                                              (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 2U;
                                        } else {
                                            if ((3U 
                                                 == 
                                                 (3U 
                                                  & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0xcU)))) {
                                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 3U;
                                            } else {
                                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        }
                                    }
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                                }
                            } else {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                                if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                                } else {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                }
                            } else {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                                if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                                } else {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                }
                                if ((0U != (7U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                }
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                            } else {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec = 1U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                    = (IData)((0x2000U 
                                               == (0x6000U 
                                                   & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)));
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                            } else {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else {
        if ((0x20U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            } else {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                if ((5U == ((4U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x18U)) 
                                            | (3U & 
                                               (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0xcU))))) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                } else {
                                    if ((0x80000000U 
                                         & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                    } else {
                                        if ((0x40000000U 
                                             & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                                = (1U 
                                                   & (IData)(
                                                             ((0U 
                                                               != 
                                                               (0x3e000000U 
                                                                & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                                              | ((0x4000U 
                                                                  & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                                  ? (IData)(
                                                                            (0x1000U 
                                                                             != 
                                                                             (0x3000U 
                                                                              & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)))
                                                                  : (IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0x3000U 
                                                                              & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)))))));
                                        } else {
                                            if ((0x20000000U 
                                                 & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                            } else {
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                } else {
                                                    if (
                                                        (0x8000000U 
                                                         & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        } else {
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        } else {
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        } else {
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 1U;
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        } else {
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 0U;
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else {
                        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we = 1U;
                                if ((0x4000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                }
                                if ((0U == (3U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 2U;
                                } else {
                                    if ((1U == (3U 
                                                & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 1U;
                                    } else {
                                        if ((2U == 
                                             (3U & 
                                              (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                                        } else {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            } else {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                    = (1U & ((0x4000U 
                                              & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)
                                              ? (IData)(
                                                        ((0x1000U 
                                                          == 
                                                          (0x3000U 
                                                           & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                                         & ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x1aU) 
                                                            | ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                >> 0x1fU) 
                                                               | ((0x40000000U 
                                                                   & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                                   ? (IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x3e000000U 
                                                                               & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)))
                                                                   : (IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x3e000000U 
                                                                               & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id))))))))
                                              : (IData)(
                                                        ((0x1000U 
                                                          == 
                                                          (0x3000U 
                                                           & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xfe000000U 
                                                                     & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)))))));
                            } else {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                if ((0U == (7U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                } else {
                                    if ((1U == (7U 
                                                & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                        if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__icache_inval = 1U;
                                        }
                                    } else {
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else {
                        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext 
                                    = (1U & (~ (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0xeU)));
                                if ((0U == (3U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 2U;
                                } else {
                                    if ((1U == (3U 
                                                & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 1U;
                                    } else {
                                        if ((2U == 
                                             (3U & 
                                              (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                                            if ((0x4000U 
                                                 & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                            }
                                        } else {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_c_insn_id) {
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) {
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 0U;
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we = 0U;
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 0U;
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 0U;
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec = 0U;
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_access = 0U;
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
        (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                  >> 0xfU))];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
        (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                  >> 0x14U))];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0x26U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu 
        = (0x7fU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__mult_sel_ex = 0U;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex = 0U;
    if ((0x40U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x20U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((0x10U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0U == (7U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                } else {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 0U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec 
                                        = ((0x4000U 
                                            & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                            ? 3U : 0U);
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 4U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                } else {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                }
                            }
                        }
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                } else {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                }
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0x4000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                                        = ((0x2000U 
                                            & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                            ? ((0x1000U 
                                                & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                ? 0x16U
                                                : 0x14U)
                                            : ((0x1000U 
                                                & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                ? 0x15U
                                                : 0x13U));
                                } else {
                                    if ((1U & (~ (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                  >> 0xdU)))) {
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                                            = ((0x1000U 
                                                & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                ? 0x18U
                                                : 0x17U);
                                    }
                                }
                                if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                                } else {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 2U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((0x10U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                                if ((1U & (~ (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                              >> 0x1aU)))) {
                                    if ((1U & (~ (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                  >> 0x1fU)))) {
                                        if ((0x40000000U 
                                             & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 8U;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                                                >> 0xcU)))) {
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 1U;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                                        } else {
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                                        } else {
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                                        } else {
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                                        } else {
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                                                                    = 
                                                                    ((0x4000U 
                                                                      & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                                      ? 
                                                                     ((0x2000U 
                                                                       & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                                       ? 
                                                                      ((0x1000U 
                                                                        & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                                        ? 4U
                                                                        : 3U)
                                                                       : 
                                                                      ((0x1000U 
                                                                        & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                                        ? 9U
                                                                        : 2U))
                                                                      : 
                                                                     ((0x2000U 
                                                                       & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                                       ? 
                                                                      ((0x1000U 
                                                                        & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                                        ? 0x26U
                                                                        : 0x25U)
                                                                       : 
                                                                      ((0x1000U 
                                                                        & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                                        ? 0xaU
                                                                        : 0U)));
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
            } else {
                if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                if ((1U & (~ (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                              >> 0xeU)))) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 1U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                                if ((0x4000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                    if ((0x2000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                                            = ((0x1000U 
                                                & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                ? 4U
                                                : 3U);
                                    } else {
                                        if ((0x1000U 
                                             & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                            if ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                     >> 0x1bU)))) {
                                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 9U;
                                            } else {
                                                if (
                                                    (8U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 8U;
                                                }
                                            }
                                        } else {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 2U;
                                        }
                                    }
                                } else {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                                        = ((0x2000U 
                                            & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                            ? ((0x1000U 
                                                & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                ? 0x26U
                                                : 0x25U)
                                            : ((0x1000U 
                                                & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                ? 0xaU
                                                : 0U));
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0U == (7U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                } else {
                                    if ((1U == (7U 
                                                & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d 
        = ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
            ? ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                ? 0U : ((0U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                         ? 0U : 3U)) : ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                                         ? 2U : 1U));
    vlTOPp->soc_top__DOT__u_top__DOT____Vcellout__u_core__crash_dump_o[0U] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q;
    vlTOPp->soc_top__DOT__u_top__DOT____Vcellout__u_core__crash_dump_o[1U] 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q;
    vlTOPp->soc_top__DOT__u_top__DOT____Vcellout__u_core__crash_dump_o[2U] 
        = (IData)((((QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_id)) 
                    << 0x20U) | (QData)((IData)((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                 << 1U)))));
    vlTOPp->soc_top__DOT__u_top__DOT____Vcellout__u_core__crash_dump_o[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_id)) 
                     << 0x20U) | (QData)((IData)((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                  << 1U)))) 
                   >> 0x20U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_if = 0U;
    if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_if = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_if = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
    if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
        } else {
            if ((0U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a 
        = (1U & ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc 
                  >> 0x1fU) & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b 
        = (1U & ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                  >> 0x1fU) & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                               >> 1U)));
    if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
            = (0xffffU & ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                           ? (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc 
                              >> 0x10U) : (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc 
                                           >> 0x10U)));
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
            = (0xffffU & ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                           ? (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                              >> 0x10U) : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc));
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b 
            = (1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q) 
                     & (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                         >> 1U) & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                   >> 0x1fU))));
    } else {
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
            = (0xffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc);
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
            = (0xffffU & ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                           ? (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                              >> 0x10U) : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc));
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b 
            = (1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q) 
                     & (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                         >> 1U) & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                   >> 0x1fU))));
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a 
        = (1U & (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q) 
                  >> 1U) & ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                             ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                                & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc 
                                   >> 0x1fU)) : ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                                                 & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc 
                                                    >> 0x1fU)))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
        = (0x3ffffffffULL & (((QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U])) 
                                           >> 2U)));
    if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = ((0x3fffc0000ULL & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum) 
                   | (IData)((IData)((0x3ffffU & ((
                                                   vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                                     >> 0x12U))))));
            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = ((0x3ffffULL & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum) 
                   | ((QData)((IData)((0xffffU & (- (IData)(
                                                            ((0U 
                                                              != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode)) 
                                                             & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                                                >> 3U))))))) 
                      << 0x12U));
        } else {
            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = (0x3ffffffffULL & ((0U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                                             << 0xeU) 
                                                            | (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                                               >> 0x12U)))))
                                      : (((QData)((IData)(
                                                          vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U])) 
                                          << 0x1eU) 
                                         | ((QData)((IData)(
                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U])) 
                                            >> 2U))));
        }
    } else {
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
            = ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                ? (QData)((IData)((0xffffU & ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                               << 0xeU) 
                                              | (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                                 >> 0x12U)))))
                : 0ULL);
    }
    vlTOPp->__Vtableidx5 = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left 
        = vlTOPp->__Vtable5_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left
        [vlTOPp->__Vtableidx5];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry 
        = ((6U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
           | (1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry 
        = ((5U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
           | (2U & (((~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                         >> 1U)) & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                    << 1U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry 
        = ((3U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
           | ((IData)((2U == (6U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))) 
              << 2U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec) 
           & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
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
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op;
    if ((((2U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op)) 
          | (3U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) 
         & (0U == (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                            >> 0xfU))))) {
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op = 0U;
    }
    vlTOPp->__Vtableidx3 = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed 
        = vlTOPp->__Vtable3_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed
        [vlTOPp->__Vtableidx3];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec) 
           & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec) 
           & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 0U;
    if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 1U;
        } else {
            if ((0U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 1U;
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec 
        = ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__mult_sel_ex));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec 
        = ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec) 
           & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn) 
           & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
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
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
           & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) 
              & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)));
    vlTOPp->__Vtableidx2 = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate 
        = vlTOPp->__Vtable2_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate
        [vlTOPp->__Vtableidx2];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
        = (1ULL | ((QData)((IData)((~ vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc))) 
                   << 1U));
    if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
                = ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (
                                                   (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                                      >> 2U))))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ 
                                                                   vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U]))) 
                                                  << 1U)));
        }
    } else {
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
            = ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U]))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc))) 
                                                  << 1U)))
                : ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc))) 
                                                  << 1U))));
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__mult_sel_ex) 
           | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex));
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req) {
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 6U;
    } else {
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel 
            = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec;
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel 
            = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec;
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q;
    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((1U & (~ (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                                   | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                                  | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))))) {
                        if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                            if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
    if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = 1U;
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((1U & (~ (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                                   | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                                  | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))))) {
                        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn)))) {
                            if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal 
        = (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
            & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal 
        = (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
            & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d 
        = (0x3ffffffffULL & ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                              ? ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                                  ? ((0x7ffffffffULL 
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
                                        & VL_EXTENDS_QQ(35,34, vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))
                                  : ((0U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                      ? (((QData)((IData)(
                                                          (0xffffU 
                                                           & ((IData)(
                                                                      (0x7ffffffffULL 
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
                                                                                | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))))) 
                                                              + (IData)(
                                                                        (0x7ffffffffULL 
                                                                         & VL_EXTENDS_QQ(35,34, vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                                                << 0x1eU) 
                                                               | (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                                                  >> 2U))))))
                                      : ((0x7ffffffffULL 
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
                                            & VL_EXTENDS_QQ(35,34, vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))))
                              : ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                                  ? ((0U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                      ? (((QData)((IData)(
                                                          (0xffffU 
                                                           & ((IData)(
                                                                      (0x7ffffffffULL 
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
                                                                                | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))))) 
                                                              + (IData)(
                                                                        (0x7ffffffffULL 
                                                                         & VL_EXTENDS_QQ(35,34, vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                                                << 0x1eU) 
                                                               | (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                                                  >> 2U))))))
                                      : ((0x7ffffffffULL 
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
                                            & VL_EXTENDS_QQ(35,34, vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))
                                  : ((0x7ffffffffULL 
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
                                        & VL_EXTENDS_QQ(35,34, vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_store = 0U;
    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_store 
                        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we;
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_load = 0U;
    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_load 
                        = (1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)));
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_mret_id = 0U;
    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((1U & (~ (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                                   | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                                  | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))))) {
                        if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_mret_id = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_dret_id = 0U;
    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((1U & (~ (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                                   | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                                  | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))))) {
                        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn)))) {
                            if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_dret_id = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
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
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr 
        = ((1U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op)) 
           | ((2U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op)) 
              | (3U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_mux_id = 0U;
    if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_mux_id = 2U;
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_mux_id = 2U;
                } else {
                    if ((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_mux_id = 2U;
                    } else {
                        if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_mux_id = 3U;
                        } else {
                            if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_mux_id = 4U;
                            }
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_mux_id = 1U;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_mux_id = 0U;
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_valid 
        = (1U & ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)) 
                 | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid) 
                    | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec) 
           | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec));
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q) 
                             << 5U) | (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q) 
                                        << 4U) | (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn) 
                                                   << 3U) 
                                                  | (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
                                                      << 2U) 
                                                     | (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) 
                                                         << 1U) 
                                                        | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err))))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio 
        = vlTOPp->__Vtable1_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio 
        = vlTOPp->__Vtable1_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio 
        = vlTOPp->__Vtable1_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio 
        = vlTOPp->__Vtable1_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio 
        = vlTOPp->__Vtable1_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio 
        = vlTOPp->__Vtable1_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio
        [vlTOPp->__Vtableidx1];
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
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__data_req_out = 0U;
    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__data_req_out = 1U;
        } else {
            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__data_req_out = 1U;
            } else {
                if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__data_req_out = 1U;
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
        = ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
            ? ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                    ? 0U : (0x1fU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0xfU))) : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_id)
            : ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q
                : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b 
        = ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
            ? ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? 4U : ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                         ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_is_compressed_id)
                             ? 2U : 4U) : ((0xfff00000U 
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
                                                       >> 0x14U)))))))
            : ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? (0xfffff000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)
                    : ((0xffffe000U & ((- (IData)((1U 
                                                   & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xdU)) | 
                       ((0x1000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                    >> 0x13U)) | ((0x800U 
                                                   & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                           >> 7U)))))))
                : ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       ((0xfe0U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 7U))))
                    : ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x14U))))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we 
        = ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we)) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) 
              << 1U));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we 
        = ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we)) 
           | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
              | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtval = 0U;
    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio) {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtval 
                                = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err_plus2)
                                    ? ((IData)(2U) 
                                       + vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_id)
                                    : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_id);
                        } else {
                            if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtval 
                                    = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_is_compressed_id)
                                        ? (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_c_id)
                                        : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id);
                            } else {
                                if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                    if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio)))) {
                                        if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio) {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtval 
                                                = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q;
                                        } else {
                                            if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio) {
                                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtval 
                                                    = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q;
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
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_id = 0U;
    if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
                         & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_id = 1U;
                    }
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_id = 0U;
                        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                                if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                        if (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                             | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_id = 0U;
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
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we;
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw 
                        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we) 
                           & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_valid));
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                    if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_valid)))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_branch = 0U;
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)))) {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_branch = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause = 0U;
    if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
                         & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause = 1U;
                    }
                } else {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause = 1U;
                    }
                } else {
                    if ((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause = 1U;
                        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                                if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                        if (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                             | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause = 0U;
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
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                    >> 0x1fU)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffffdU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (2U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                    >> 0x1dU)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffffbU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (4U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                    >> 0x1bU)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffff7U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (8U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                    >> 0x19U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffffefU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x10U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                       >> 0x17U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffffdfU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x20U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                       >> 0x15U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffffbfU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x40U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                       >> 0x13U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffff7fU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x80U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                       >> 0x11U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffeffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x100U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                        >> 0xfU)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffdffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x200U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                        >> 0xdU)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffbffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x400U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                        >> 0xbU)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffff7ffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x800U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                        >> 9U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffefffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x1000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                         >> 7U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffdfffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x2000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                         >> 5U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffbfffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x4000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                         >> 3U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffff7fffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x8000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                         >> 1U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffeffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x10000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                          << 1U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffdffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x20000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                          << 3U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffbffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x40000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                          << 5U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfff7ffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x80000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                          << 7U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffefffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x100000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                           << 9U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffdfffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x200000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                           << 0xbU)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffbfffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x400000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                           << 0xdU)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xff7fffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x800000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                           << 0xfU)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfeffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x1000000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                            << 0x11U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfdffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x2000000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                            << 0x13U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfbffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x4000000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                            << 0x15U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xf7ffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x8000000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                            << 0x17U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xefffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x10000000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                             << 0x19U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xdfffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x20000000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                             << 0x1bU)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xbfffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x40000000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                             << 0x1dU)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0x7fffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x80000000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                             << 0x1fU)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 0U;
    if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
                    if ((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                                if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                        if (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                             | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause = 0U;
    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlTOPp->__Vfunc_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__sv2v_cast_6__3__inp 
                            = (0x30U | ((0x4000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                         ? 0xeU : (
                                                   (0x2000U 
                                                    & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                    ? 0xdU
                                                    : 
                                                   ((0x1000U 
                                                     & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                     ? 0xcU
                                                     : 
                                                    ((0x800U 
                                                      & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                      ? 0xbU
                                                      : 
                                                     ((0x400U 
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
                                                                : 0U)))))))))))))));
                        vlTOPp->__Vfunc_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__sv2v_cast_6__3__Vfuncout 
                            = vlTOPp->__Vfunc_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__sv2v_cast_6__3__inp;
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause 
                            = ((0U != (0x7fffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs))
                                ? (IData)(vlTOPp->__Vfunc_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__sv2v_cast_6__3__Vfuncout)
                                : ((0x8000U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                    ? 0x2bU : ((0x20000U 
                                                & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                ? 0x23U
                                                : 0x27U)));
                    }
                } else {
                    if ((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio) {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause = 1U;
                        } else {
                            if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause = 2U;
                            } else {
                                if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause 
                                        = ((3U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))
                                            ? 0xbU : 8U);
                                } else {
                                    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                                    | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))))) {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause = 3U;
                                        }
                                    } else {
                                        if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio) {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause = 7U;
                                        } else {
                                            if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio) {
                                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause = 5U;
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
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw = 0U;
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)))) {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec)))) {
                        if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec) {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw 
                                = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h[0U] 
        = vlTOPp->soc_top__DOT__dccm_to_xbar;
    vlTOPp->soc_top__DOT__u_top__DOT__data_req = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__data_req_out) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err) 
                                                      >> 1U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
        = (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req) 
            | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec))
            ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b
            : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_we_ex 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
            ? (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we)
            : 0U);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en = 0U;
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en = 1U;
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q;
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause) {
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d = 3U;
    } else {
        if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_dret_id) {
            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d 
                = (3U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q);
        } else {
            if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d 
                    = (3U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                             >> 2U));
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result 
        = (((3U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
            | (6U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))
            ? (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
               | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)
            : (((4U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                | (7U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))
                ? (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                   & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)
                : (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                   ^ vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt 
        = ((0x20U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt)) 
           | (0x1fU & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)
                        ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b
                        : (- vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b))));
    vlTOPp->__Vfunc_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__sv2v_cast_12__2__inp 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_access)
            ? (0xfffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)
            : 0U);
    vlTOPp->__Vfunc_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__sv2v_cast_12__2__Vfuncout 
        = vlTOPp->__Vfunc_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__sv2v_cast_12__2__inp;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr 
        = vlTOPp->__Vfunc_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__sv2v_cast_12__2__Vfuncout;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw) 
           & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)));
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
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
        = (0x3ffffffffULL & (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                               ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                               : (1ULL | ((QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                          << 1U))) 
                             + (0x1ffffffffULL & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                                   ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                                   : 
                                                  ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                                    ? 
                                                   (~ 
                                                    ((QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                     << 1U))
                                                    : 
                                                   ((QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                    << 1U))))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q;
    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                if ((2U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))) {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d 
                        = (0U == (IData)((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                          >> 1U)));
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
        = ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
            ? ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? 0U : ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                         ? 6U : 5U)) : ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                                         ? ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                                             ? ((1U 
                                                 == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))
                                                 ? 4U
                                                 : 3U)
                                             : 3U) : 
                                        ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                                          ? 2U : ((2U 
                                                   == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                                   ? 
                                                  (((~ 
                                                     ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                                      >> 1U)) 
                                                    & (0U 
                                                       == (IData)(
                                                                  (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                   >> 1U))))
                                                    ? 6U
                                                    : 1U)
                                                   : 
                                                  (((~ 
                                                     ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                                      >> 1U)) 
                                                    & (0U 
                                                       == (IData)(
                                                                  (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                   >> 1U))))
                                                    ? 6U
                                                    : 1U)))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q;
    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d 
                    = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
                        ? (IData)((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 1U)) : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc);
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access 
        = (((0U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type)) 
            & (0U != (3U & (IData)((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                    >> 1U))))) | ((1U 
                                                   == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type)) 
                                                  & (3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                 >> 1U))))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U];
    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d 
                    = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)
                        ? (IData)((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 1U)) : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc);
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_tbranch = 0U;
    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set) 
                         | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_tbranch 
                            = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set;
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_jump = 0U;
    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set) 
                         | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_jump 
                            = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set;
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev
            : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
        = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                           (((QData)((IData)(
                                                             ((8U 
                                                               == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                                              & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
                                                                 >> 0x1fU)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand))), 
                                           (0x1fU & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed;
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext 
        = (1U & (IData)((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext 
                         >> 0x20U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                    >> 0x1fU)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffffdU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (2U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                    >> 0x1dU)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffffbU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (4U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                    >> 0x1bU)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffff7U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (8U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                    >> 0x19U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffffefU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x10U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                       >> 0x17U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffffdfU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x20U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                       >> 0x15U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffffbfU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x40U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                       >> 0x13U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffff7fU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x80U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                       >> 0x11U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffeffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x100U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                        >> 0xfU)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffdffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x200U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                        >> 0xdU)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffbffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x400U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                        >> 0xbU)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffff7ffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x800U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                        >> 9U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffefffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x1000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                         >> 7U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffdfffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x2000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                         >> 5U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffbfffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x4000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                         >> 3U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffff7fffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x8000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                         >> 1U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffeffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x10000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                          << 1U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffdffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x20000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                          << 3U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffbffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x40000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                          << 5U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfff7ffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x80000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                          << 7U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffefffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x100000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                           << 9U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffdfffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x200000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                           << 0xbU)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffbfffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x400000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                           << 0xdU)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xff7fffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x800000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                           << 0xfU)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfeffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x1000000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                            << 0x11U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfdffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x2000000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                            << 0x13U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfbffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x4000000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                            << 0x15U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xf7ffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x8000000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                            << 0x17U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xefffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x10000000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                             << 0x19U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xdfffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x20000000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                             << 0x1bU)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xbfffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x40000000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                             << 0x1dU)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0x7fffffffU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x80000000U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                             << 0x1fU)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev
            : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal 
        = (1U & ((1U & ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                         >> 1U) ^ (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U] 
                                   >> 0x1fU))) ? (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                                  >> 1U)
                  : (~ (IData)((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                >> 0x20U)))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
    if ((0x800U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
        if ((0x400U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
            if ((0x200U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
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
        } else {
            if ((0x200U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                        = (IData)((
                                                   vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                   [
                                                   (0x1fU 
                                                    & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))] 
                                                   >> 0x20U));
                                } else {
                                    if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = (IData)(
                                                      (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                       [
                                                       (0x1fU 
                                                        & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))] 
                                                       >> 0x20U));
                                    } else {
                                        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (IData)(
                                                          (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                           [
                                                           (0x1fU 
                                                            & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))] 
                                                           >> 0x20U));
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                    = (IData)(
                                                              (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                               [
                                                               (0x1fU 
                                                                & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))] 
                                                               >> 0x20U));
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = (IData)(
                                                                  (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                                   [
                                                                   (0x1fU 
                                                                    & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))] 
                                                                   >> 0x20U));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                        = (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                  [
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))]);
                                } else {
                                    if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = (IData)(
                                                      vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                      [
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))]);
                                    } else {
                                        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (IData)(
                                                          vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                          [
                                                          (0x1fU 
                                                           & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))]);
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                    = (IData)(
                                                              vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                              [
                                                              (0x1fU 
                                                               & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))]);
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = (IData)(
                                                                  vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                                  [
                                                                  (0x1fU 
                                                                   & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))]);
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
    } else {
        if ((0x400U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
            if ((0x200U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((0x40U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 5U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                      ? 0U
                                                      : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q));
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((0x20U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((0x10U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (2U 
                                                    & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q
                                                     : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q
                                                     : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q));
                                        }
                                    }
                                } else {
                                    if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                                }
                                            }
                                        }
                                    } else {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x200U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 6U)))) {
                            if ((0x20U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((0x10U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                        = ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                            ? ((4U 
                                                & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? 
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [0xfU]
                                                     : 
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [0xeU])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? 
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [0xdU]
                                                     : 
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [0xcU]))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? 
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [0xbU]
                                                     : 
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [0xaU])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? 
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [9U]
                                                     : 
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [8U])))
                                            : ((4U 
                                                & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? 
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [7U]
                                                     : 
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [6U])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? 
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [5U]
                                                     : 
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [4U]))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? 
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [3U]
                                                     : 
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [2U])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? 
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [1U]
                                                     : 
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [0U]))));
                                } else {
                                    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (2U 
                                                    & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? 
                                                    ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                      [0xfU] 
                                                      << 0x18U) 
                                                     | ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                         [0xeU] 
                                                         << 0x10U) 
                                                        | ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                            [0xdU] 
                                                            << 8U) 
                                                           | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                           [0xcU])))
                                                     : 
                                                    ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                      [0xbU] 
                                                      << 0x18U) 
                                                     | ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                         [0xaU] 
                                                         << 0x10U) 
                                                        | ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                            [9U] 
                                                            << 8U) 
                                                           | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                           [8U]))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? 
                                                    ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                      [7U] 
                                                      << 0x18U) 
                                                     | ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                         [6U] 
                                                         << 0x10U) 
                                                        | ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                            [5U] 
                                                            << 8U) 
                                                           | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                           [4U])))
                                                     : 
                                                    ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                      [3U] 
                                                      << 0x18U) 
                                                     | ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                         [2U] 
                                                         << 0x10U) 
                                                        | ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                            [1U] 
                                                            << 8U) 
                                                           | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                           [0U])))));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x40U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 5U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xfffffff7U 
                                                          & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (8U 
                                                            & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
                                                               >> 0xeU)));
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xffffff7fU 
                                                          & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x80U 
                                                            & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
                                                               >> 9U)));
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xfffff7ffU 
                                                          & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x800U 
                                                            & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
                                                               >> 4U)));
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0x8000ffffU 
                                                          & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x7fff0000U 
                                                            & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
                                                               << 0x10U)));
                                                }
                                            }
                                        } else {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (2U 
                                                    & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q
                                                     : 
                                                    ((0x80000000U 
                                                      & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q) 
                                                         << 0x1aU)) 
                                                     | (0x1fU 
                                                        & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                                     : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((0x20U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((0x10U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                                        [(0x1fU & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))];
                                } else {
                                    if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                                            [(0x1fU 
                                              & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))];
                                    } else {
                                        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                                                [(0x1fU 
                                                  & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))];
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                                                        [
                                                        (0x1fU 
                                                         & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))];
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        (0xfffffff8U 
                                                         | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q;
                                                } else {
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xfffffff7U 
                                                          & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (8U 
                                                            & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                                               >> 0xeU)));
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xffffff7fU 
                                                          & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x80U 
                                                            & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                                               >> 9U)));
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xfffff7ffU 
                                                          & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x800U 
                                                            & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                                               >> 4U)));
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0x8000ffffU 
                                                          & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x7fff0000U 
                                                            & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                                               << 0x10U)));
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0x40101104U;
                                                } else {
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xfffffff7U 
                                                          & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (8U 
                                                            & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                               >> 2U)));
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xffffff7fU 
                                                          & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x80U 
                                                            & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                               << 3U)));
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xffffe7ffU 
                                                          & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x1800U 
                                                            & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                               << 9U)));
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xfffdffffU 
                                                          & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x20000U 
                                                            & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                               << 0x10U)));
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xffdfffffU 
                                                          & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x200000U 
                                                            & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                               << 0x15U)));
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
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 0U;
    if ((0x800U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
        if ((0x400U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
            if ((0x200U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else {
                        if ((0x40U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else {
                            if ((0x20U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            } else {
                                if ((0x10U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                    if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                                }
                                            }
                                        } else {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            if ((0x200U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((0x40U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else {
                            if ((0x20U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            } else {
                                if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x40U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else {
                            if ((0x20U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            } else {
                                if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        }
    } else {
        if ((0x400U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
            if ((0x200U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((0x40U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                            if ((0x20U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            } else {
                                if ((0x10U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                } else {
                                    if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr 
                                = (1U & (IData)(((0x30U 
                                                  != 
                                                  (0x3cU 
                                                   & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) 
                                                 | ((2U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                      ? 
                                                     (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))
                                                      : 
                                                     (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))
                                                      ? 
                                                     (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))
                                                      : 
                                                     (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))))));
                        }
                    } else {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            if ((0x200U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((0x40U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else {
                            if ((0x20U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 4U)))) {
                                    if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        }
                    } else {
                        if ((0x40U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                            if ((0x20U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            } else {
                                if ((0x10U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                } else {
                                    if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((0x20U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0x10U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                } else {
                                    if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                            }
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        }
    }
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
    vlTOPp->__Vtableidx4 = ((0x80U & (((0x80000000U 
                                        & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                           ^ vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b))
                                        ? ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                            >> 0x1fU) 
                                           ^ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                        : (~ (IData)(
                                                     (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 0x20U)))) 
                                      << 7U)) | (((0U 
                                                   == (IData)(
                                                              (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                               >> 1U))) 
                                                  << 6U) 
                                                 | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result 
        = vlTOPp->__Vtable4_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result
        [vlTOPp->__Vtableidx4];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set = 0U;
    if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set = 1U;
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set = 1U;
                    }
                } else {
                    if ((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set = 1U;
                        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                                if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                        if (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                             | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set = 1U;
                        } else {
                            if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set) 
                         | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set = 1U;
                    }
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set = 1U;
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec = 0U;
    if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec = 1U;
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec = 1U;
                    }
                } else {
                    if ((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec = 1U;
                        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                                if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                        if (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                             | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec = 1U;
                        } else {
                            if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                          & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q))) 
                         | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set))) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec = 1U;
                    }
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec = 1U;
            }
        }
    }
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
    vlTOPp->__Vtableidx6 = (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q) 
                             << 4U) | ((0xcU & ((IData)(
                                                        (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 1U)) 
                                                << 2U)) 
                                       | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be 
        = vlTOPp->__Vtable6_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be
        [vlTOPp->__Vtableidx6];
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_spec = 0U;
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)))) {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_spec 
                            = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d = 0U;
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)))) {
            if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec) {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d 
                            = (1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result) 
                                     | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                        >> 1U)));
                    }
                }
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtvec_init 
        = ((0U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_mux_id)) 
           & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q) 
           & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set) 
              | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result = 0U;
    if ((0x20U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))) {
        if ((0x10U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))) {
            if ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))) {
                if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))) {
                        if ((1U & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))) {
                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result = 0U;
                        }
                    } else {
                        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result = 0U;
                    }
                }
            } else {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result 
                    = ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                        ? ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                            ? 0U : 0U) : ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                           ? 0U : (
                                                   (1U 
                                                    & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? 0U
                                                    : 0U)));
            }
        } else {
            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result 
                = ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                    ? ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                        ? ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                            ? 0U : 0U) : ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                           ? 0U : 0U))
                    : ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                        ? ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                            ? ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                ? 0U : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                            : ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                ? (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                : 0U)) : 0U));
        }
    } else {
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result 
            = ((0x10U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                ? ((8U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                    ? ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                        ? ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                            ? 0U : ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                     ? 0U : 0U)) : 
                       ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                         ? 0U : ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                  ? 0U : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))))
                    : ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                        ? (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                        : ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                            ? ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                ? (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                : 0U) : 0U))) : ((8U 
                                                  & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? 0U
                                                     : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result))
                                                   : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result)
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                   ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                                    : (IData)(
                                                              (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                               >> 1U))))));
    }
    if (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal) {
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder 
            = (IData)((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                       >> 1U));
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient 
            = ((QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q)) 
               | (QData)((IData)(((IData)(1U) << (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q)))));
    } else {
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder 
            = ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                << 0x1eU) | (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                             >> 2U));
        vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient 
            = (QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q));
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op))
            ? ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op))
                ? ((~ vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a) 
                   & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int)
                : (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                   | vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int))
            : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_access) 
           & (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr) 
               | ((3U == (3U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                >> 0xaU))) & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))) 
              | ((3U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                        >> 8U)) > (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
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
    __Vtemp17[0U] = (IData)((1ULL | (((QData)((IData)(
                                                      ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)
                                                        ? (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be)
                                                        : 0xfU))) 
                                      << 0x21U) | ((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 2U)))
                                                                     ? 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)))
                                                                      ? 
                                                                     ((0xff000000U 
                                                                       & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                                          << 0x18U)) 
                                                                      | (0xffffffU 
                                                                         & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                                            >> 8U)))
                                                                      : 
                                                                     ((0xffff0000U 
                                                                       & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                                          << 0x10U)) 
                                                                      | (0xffffU 
                                                                         & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                                            >> 0x10U))))
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)))
                                                                      ? 
                                                                     ((0xffffff00U 
                                                                       & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                                          << 8U)) 
                                                                      | (0xffU 
                                                                         & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                                            >> 0x18U)))
                                                                      : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc)))) 
                                                   << 1U))));
    __Vtemp17[1U] = ((0xffffff80U & ((IData)((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                              >> 3U)) 
                                     << 7U)) | (IData)(
                                                       ((1ULL 
                                                         | (((QData)((IData)(
                                                                             ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)
                                                                               ? (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be)
                                                                               : 0xfU))) 
                                                             << 0x21U) 
                                                            | ((QData)((IData)(
                                                                               ((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 2U)))
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)))
                                                                                 ? 
                                                                                ((0xff000000U 
                                                                                & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                                                << 0x18U)) 
                                                                                | (0xffffffU 
                                                                                & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                                                >> 8U)))
                                                                                 : 
                                                                                ((0xffff0000U 
                                                                                & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                                                << 0x10U)) 
                                                                                | (0xffffU 
                                                                                & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                                                >> 0x10U))))
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)))
                                                                                 ? 
                                                                                ((0xffffff00U 
                                                                                & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                                                >> 0x18U)))
                                                                                 : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc)))) 
                                                               << 1U))) 
                                                        >> 0x20U)));
    vlTOPp->soc_top__DOT__lsu_to_xbar[0U] = __Vtemp17[0U];
    vlTOPp->soc_top__DOT__lsu_to_xbar[1U] = __Vtemp17[1U];
    vlTOPp->soc_top__DOT__lsu_to_xbar[2U] = ((0xffffffe0U 
                                              & (0x4000U 
                                                 | (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__data_req) 
                                                     << 0x15U) 
                                                    | ((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)
                                                          ? 
                                                         ((0xfU 
                                                           == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be))
                                                           ? 0U
                                                           : 1U)
                                                          : 4U) 
                                                        << 0x12U) 
                                                       | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q) 
                                                          << 5U))))) 
                                             | (0x1fU 
                                                & ((IData)(
                                                           (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                            >> 3U)) 
                                                   >> 0x19U)));
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
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d 
        = vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q;
    if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d 
                    = (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient);
            }
        } else {
            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d = 0U;
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_d 
        = (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
             ? (0xfffffffeU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
             : (0xfffffffcU & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
           + (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
               & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
              << 2U));
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
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we 
        = ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)) 
           | (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw) 
               & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec)) 
              & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
            ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex)
                ? ((vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                    << 0x1eU) | (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                 >> 2U)) : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))
            : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d 
        = (0x1fU & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q) 
                    - (IData)(1U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
        = (0x3ffffffffULL & (((QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U])) 
                                           >> 2U)));
    if ((4U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (0x3ffffffffULL & ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                                      ? ((2U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                          ? ((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                                               ^ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)) 
                                              & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)))
                                              ? (QData)((IData)(
                                                                (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                 >> 1U)))
                                              : (((QData)((IData)(
                                                                  vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U])) 
                                                    >> 2U)))
                                          : ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
                                              ? (QData)((IData)(
                                                                (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                 >> 1U)))
                                              : (((QData)((IData)(
                                                                  vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U])) 
                                                    >> 2U))))
                                      : ((2U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                          ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient
                                          : (QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder)))));
        }
    } else {
        if ((2U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                    = (((QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder)) 
                        << 1U) | (QData)((IData)((1U 
                                                  & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                                     >> (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d))))));
            } else {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                    = (QData)((IData)((1U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                             >> 0x1fU))));
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
            }
        } else {
            if ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
            } else {
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                    = ((2U == (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                        ? 0x3ffffffffULL : (QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc)));
                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
            }
        }
    }
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) 
              | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q) 
           | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
        = ((0x1fffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]) 
           | (0x200000U & vlTOPp->soc_top__DOT__lsu_to_xbar[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U]) 
           | (1U & vlTOPp->soc_top__DOT__lsu_to_xbar[0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10 = 0xaU;
    if ((0x10000000U == (0xffff0000U & ((vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__lsu_to_xbar[1U] 
                                           >> 5U))))) {
        vlTOPp->soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10 = 0U;
    } else {
        if ((0x40080000U == (0xffff0000U & ((vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                             << 0x1bU) 
                                            | (vlTOPp->soc_top__DOT__lsu_to_xbar[1U] 
                                               >> 5U))))) {
            vlTOPp->soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10 = 1U;
        } else {
            if ((0x40090000U == (0xffff0000U & ((vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->soc_top__DOT__lsu_to_xbar[1U] 
                                                   >> 5U))))) {
                vlTOPp->soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10 = 2U;
            } else {
                if ((0x400a0000U == (0xffff0000U & 
                                     ((vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->soc_top__DOT__lsu_to_xbar[1U] 
                                       >> 5U))))) {
                    vlTOPp->soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10 = 3U;
                } else {
                    if ((0x400b0000U == (0xffff0000U 
                                         & ((vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                             << 0x1bU) 
                                            | (vlTOPp->soc_top__DOT__lsu_to_xbar[1U] 
                                               >> 5U))))) {
                        vlTOPp->soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10 = 4U;
                    } else {
                        if ((0x400c0000U == (0xffff0000U 
                                             & ((vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->soc_top__DOT__lsu_to_xbar[1U] 
                                                   >> 5U))))) {
                            vlTOPp->soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10 = 5U;
                        } else {
                            if ((0x400d0000U == (0xffff0000U 
                                                 & ((vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                                     << 0x1bU) 
                                                    | (vlTOPp->soc_top__DOT__lsu_to_xbar[1U] 
                                                       >> 5U))))) {
                                vlTOPp->soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10 = 6U;
                            } else {
                                if ((0x400e0000U == 
                                     (0xffff0000U & 
                                      ((vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->soc_top__DOT__lsu_to_xbar[1U] 
                                        >> 5U))))) {
                                    vlTOPp->soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10 = 7U;
                                } else {
                                    if ((0x400f0000U 
                                         == (0xffff0000U 
                                             & ((vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->soc_top__DOT__lsu_to_xbar[1U] 
                                                   >> 5U))))) {
                                        vlTOPp->soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10 = 8U;
                                    } else {
                                        if ((0x40050000U 
                                             == (0xffff0000U 
                                                 & ((vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                                                     << 0x1bU) 
                                                    | (vlTOPp->soc_top__DOT__lsu_to_xbar[1U] 
                                                       >> 5U))))) {
                                            vlTOPp->soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10 = 9U;
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
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0U] 
        = (IData)((QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U] 
        = ((0xfffffffcU & ((IData)(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex)
                                     ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d
                                     : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d)) 
                           << 2U)) | (IData)(((QData)((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d)) 
                                              >> 0x20U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[2U] 
        = ((3U & ((IData)(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex)
                            ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d
                            : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d)) 
                  >> 0x1eU)) | (0xfffffffcU & ((IData)(
                                                       (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex)
                                                          ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d
                                                          : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d) 
                                                        >> 0x20U)) 
                                               << 2U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0U] 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
            ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int
                : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex)
            : vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex);
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d 
        = ((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id) 
             | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
                & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) 
            | ((3U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
               & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                  | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                     & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn))))) 
           & (6U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
    vlTOPp->soc_top__DOT__u_top__DOT__instr_req = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                                                   & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err)));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U] 
        = ((0xfffffff0U & (vlTOPp->soc_top__DOT__lsu_to_xbar[0U] 
                           << 3U)) | (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
        = ((0xfU & ((8U & (vlTOPp->soc_top__DOT__lsu_to_xbar[1U] 
                           << 3U)) | (vlTOPp->soc_top__DOT__lsu_to_xbar[0U] 
                                      >> 0x1dU))) | 
           (0xfffffff0U & (vlTOPp->soc_top__DOT__lsu_to_xbar[1U] 
                           << 3U)));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
        = ((0xfU & ((8U & (vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                           << 3U)) | (vlTOPp->soc_top__DOT__lsu_to_xbar[1U] 
                                      >> 0x1dU))) | 
           (0xfffff0U & (vlTOPp->soc_top__DOT__lsu_to_xbar[2U] 
                         << 3U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex[0U] 
        = (IData)(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                    ? (0x3ffffffffULL & (((QData)((IData)(
                                                          vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0U]))))
                    : 0ULL));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex[1U] 
        = ((0xfffffffcU & ((IData)(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                     ? (0x3ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[2U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U])) 
                                              >> 2U)))
                                     : 0ULL)) << 2U)) 
           | (IData)((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                        ? (0x3ffffffffULL & (((QData)((IData)(
                                                              vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0U]))))
                        : 0ULL) >> 0x20U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex[2U] 
        = ((3U & ((IData)(((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                            ? (0x3ffffffffULL & (((QData)((IData)(
                                                                  vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[2U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U])) 
                                                    >> 2U)))
                            : 0ULL)) >> 0x1eU)) | (0xfffffffcU 
                                                   & ((IData)(
                                                              (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                                                 ? 
                                                                (0x3ffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[2U])) 
                                                                     << 0x1eU) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U])) 
                                                                       >> 2U)))
                                                                 : 0ULL) 
                                                               >> 0x20U)) 
                                                      << 2U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d 
        = (((((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
              | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn)) 
             | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d)) 
            | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err)) 
           & (6U != (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
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
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hold_all_requests 
        = ((0U != vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__num_req_outstanding) 
           & ((0xfU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]) 
              != (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__dev_select_outstanding)));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U]) 
           | (0xfffffffeU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
                              << 0x1dU) | (0x1ffffffeU 
                                           & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U] 
                                              >> 3U)))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U] 
        = ((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
                  >> 3U)) | (0xfffffffeU & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
                                             << 0x1dU) 
                                            | (0x1ffffffeU 
                                               & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
                                                  >> 3U)))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
        = ((0x200000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]) 
           | (0x3fffffU & ((1U & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
                                  >> 3U)) | (0x1ffffeU 
                                             & (vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
                                                >> 3U)))));
    if ((0x20000000U == (0xffff0000U & ((vlTOPp->soc_top__DOT__ifu_to_xbar[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__ifu_to_xbar[1U] 
                                           >> 5U))))) {
        vlTOPp->soc_top__DOT__xbar_to_iccm[0U] = vlTOPp->soc_top__DOT__ifu_to_xbar[0U];
        vlTOPp->soc_top__DOT__xbar_to_iccm[1U] = vlTOPp->soc_top__DOT__ifu_to_xbar[1U];
        vlTOPp->soc_top__DOT__xbar_to_iccm[2U] = vlTOPp->soc_top__DOT__ifu_to_xbar[2U];
    }
    if ((0x20000000U == (0xffff0000U & ((vlTOPp->soc_top__DOT__ifu_to_xbar[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->soc_top__DOT__ifu_to_xbar[1U] 
                                           >> 5U))))) {
        vlTOPp->soc_top__DOT__xbar_to_ifu = vlTOPp->soc_top__DOT__iccm_to_xbar;
    }
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[0U][2U] 
        = ((0x23ffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [0U][2U]) | (0x1c0000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[0U][2U] 
        = ((0x3c7fffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [0U][2U]) | (0x38000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[0U][2U] 
        = ((0x3f9fffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [0U][2U]) | (0x6000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[0U][2U] 
        = ((0x3fe01fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [0U][2U]) | (0x1fe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[0U][1U] 
        = ((0x1fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [0U][1U]) | (0xffffffe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[0U][2U] 
        = ((0x3fffe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [0U][2U]) | (0x1fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[0U][1U] 
        = ((0xffffffe1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [0U][1U]) | (0x1eU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[0U][0U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [0U][0U]) | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[0U][1U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [0U][1U]) | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[1U][2U] 
        = ((0x23ffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [1U][2U]) | (0x1c0000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[1U][2U] 
        = ((0x3c7fffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [1U][2U]) | (0x38000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[1U][2U] 
        = ((0x3f9fffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [1U][2U]) | (0x6000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[1U][2U] 
        = ((0x3fe01fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [1U][2U]) | (0x1fe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[1U][1U] 
        = ((0x1fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [1U][1U]) | (0xffffffe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[1U][2U] 
        = ((0x3fffe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [1U][2U]) | (0x1fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[1U][1U] 
        = ((0xffffffe1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [1U][1U]) | (0x1eU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[1U][0U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [1U][0U]) | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[1U][1U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [1U][1U]) | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[2U][2U] 
        = ((0x23ffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [2U][2U]) | (0x1c0000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[2U][2U] 
        = ((0x3c7fffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [2U][2U]) | (0x38000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[2U][2U] 
        = ((0x3f9fffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [2U][2U]) | (0x6000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[2U][2U] 
        = ((0x3fe01fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [2U][2U]) | (0x1fe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[2U][1U] 
        = ((0x1fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [2U][1U]) | (0xffffffe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[2U][2U] 
        = ((0x3fffe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [2U][2U]) | (0x1fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[2U][1U] 
        = ((0xffffffe1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [2U][1U]) | (0x1eU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[2U][0U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [2U][0U]) | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[2U][1U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [2U][1U]) | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[3U][2U] 
        = ((0x23ffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [3U][2U]) | (0x1c0000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[3U][2U] 
        = ((0x3c7fffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [3U][2U]) | (0x38000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[3U][2U] 
        = ((0x3f9fffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [3U][2U]) | (0x6000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[3U][2U] 
        = ((0x3fe01fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [3U][2U]) | (0x1fe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[3U][1U] 
        = ((0x1fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [3U][1U]) | (0xffffffe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[3U][2U] 
        = ((0x3fffe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [3U][2U]) | (0x1fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[3U][1U] 
        = ((0xffffffe1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [3U][1U]) | (0x1eU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[3U][0U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [3U][0U]) | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[3U][1U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [3U][1U]) | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[4U][2U] 
        = ((0x23ffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [4U][2U]) | (0x1c0000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[4U][2U] 
        = ((0x3c7fffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [4U][2U]) | (0x38000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[4U][2U] 
        = ((0x3f9fffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [4U][2U]) | (0x6000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[4U][2U] 
        = ((0x3fe01fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [4U][2U]) | (0x1fe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[4U][1U] 
        = ((0x1fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [4U][1U]) | (0xffffffe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[4U][2U] 
        = ((0x3fffe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [4U][2U]) | (0x1fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[4U][1U] 
        = ((0xffffffe1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [4U][1U]) | (0x1eU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[4U][0U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [4U][0U]) | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[4U][1U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [4U][1U]) | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[5U][2U] 
        = ((0x23ffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [5U][2U]) | (0x1c0000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[5U][2U] 
        = ((0x3c7fffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [5U][2U]) | (0x38000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[5U][2U] 
        = ((0x3f9fffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [5U][2U]) | (0x6000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[5U][2U] 
        = ((0x3fe01fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [5U][2U]) | (0x1fe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[5U][1U] 
        = ((0x1fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [5U][1U]) | (0xffffffe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[5U][2U] 
        = ((0x3fffe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [5U][2U]) | (0x1fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[5U][1U] 
        = ((0xffffffe1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [5U][1U]) | (0x1eU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[5U][0U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [5U][0U]) | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[5U][1U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [5U][1U]) | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[6U][2U] 
        = ((0x23ffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [6U][2U]) | (0x1c0000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[6U][2U] 
        = ((0x3c7fffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [6U][2U]) | (0x38000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[6U][2U] 
        = ((0x3f9fffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [6U][2U]) | (0x6000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[6U][2U] 
        = ((0x3fe01fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [6U][2U]) | (0x1fe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[6U][1U] 
        = ((0x1fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [6U][1U]) | (0xffffffe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[6U][2U] 
        = ((0x3fffe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [6U][2U]) | (0x1fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[6U][1U] 
        = ((0xffffffe1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [6U][1U]) | (0x1eU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[6U][0U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [6U][0U]) | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[6U][1U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [6U][1U]) | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[7U][2U] 
        = ((0x23ffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [7U][2U]) | (0x1c0000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[7U][2U] 
        = ((0x3c7fffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [7U][2U]) | (0x38000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[7U][2U] 
        = ((0x3f9fffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [7U][2U]) | (0x6000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[7U][2U] 
        = ((0x3fe01fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [7U][2U]) | (0x1fe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[7U][1U] 
        = ((0x1fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [7U][1U]) | (0xffffffe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[7U][2U] 
        = ((0x3fffe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [7U][2U]) | (0x1fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[7U][1U] 
        = ((0xffffffe1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [7U][1U]) | (0x1eU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[7U][0U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [7U][0U]) | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[7U][1U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [7U][1U]) | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[8U][2U] 
        = ((0x23ffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [8U][2U]) | (0x1c0000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[8U][2U] 
        = ((0x3c7fffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [8U][2U]) | (0x38000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[8U][2U] 
        = ((0x3f9fffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [8U][2U]) | (0x6000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[8U][2U] 
        = ((0x3fe01fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [8U][2U]) | (0x1fe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[8U][1U] 
        = ((0x1fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [8U][1U]) | (0xffffffe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[8U][2U] 
        = ((0x3fffe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [8U][2U]) | (0x1fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[8U][1U] 
        = ((0xffffffe1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [8U][1U]) | (0x1eU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[8U][0U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [8U][0U]) | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[8U][1U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [8U][1U]) | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[9U][2U] 
        = ((0x23ffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [9U][2U]) | (0x1c0000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[9U][2U] 
        = ((0x3c7fffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [9U][2U]) | (0x38000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[9U][2U] 
        = ((0x3f9fffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [9U][2U]) | (0x6000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[9U][2U] 
        = ((0x3fe01fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [9U][2U]) | (0x1fe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[9U][1U] 
        = ((0x1fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [9U][1U]) | (0xffffffe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[9U][2U] 
        = ((0x3fffe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [9U][2U]) | (0x1fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[9U][1U] 
        = ((0xffffffe1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [9U][1U]) | (0x1eU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[9U][0U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [9U][0U]) | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[9U][1U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [9U][1U]) | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[0U][0U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [0U][0U]) | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[1U][0U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [1U][0U]) | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[2U][0U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [2U][0U]) | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[3U][0U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [3U][0U]) | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[4U][0U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [4U][0U]) | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[5U][0U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [5U][0U]) | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[6U][0U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [6U][0U]) | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[7U][0U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [7U][0U]) | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[8U][0U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [8U][0U]) | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[9U][0U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [9U][0U]) | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[0xaU][0U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [0xaU][0U]) | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[0xaU][2U] 
        = ((0x23ffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [0xaU][2U]) | (0x1c0000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[0xaU][2U] 
        = ((0x3c7fffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [0xaU][2U]) | (0x38000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[0xaU][2U] 
        = ((0x3f9fffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [0xaU][2U]) | (0x6000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[0xaU][2U] 
        = ((0x3fe01fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [0xaU][2U]) | (0x1fe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[0xaU][1U] 
        = ((0x1fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [0xaU][1U]) | (0xffffffe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[0xaU][2U] 
        = ((0x3fffe0U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [0xaU][2U]) | (0x1fU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[0xaU][1U] 
        = ((0xffffffe1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [0xaU][1U]) | (0x1eU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[0xaU][0U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [0xaU][0U]) | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[0xaU][1U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [0xaU][1U]) | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[0U][2U] 
        = ((0x1fffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [0U][2U]) | (0x200000U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                       & ((0U == (0xfU 
                                                  & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                          << 0x15U)) 
                                      & ((~ (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hold_all_requests)) 
                                         << 0x15U))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[1U][2U] 
        = ((0x1fffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [1U][2U]) | (0x200000U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                       & ((1U == (0xfU 
                                                  & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                          << 0x15U)) 
                                      & ((~ (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hold_all_requests)) 
                                         << 0x15U))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[2U][2U] 
        = ((0x1fffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [2U][2U]) | (0x200000U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                       & ((2U == (0xfU 
                                                  & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                          << 0x15U)) 
                                      & ((~ (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hold_all_requests)) 
                                         << 0x15U))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[3U][2U] 
        = ((0x1fffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [3U][2U]) | (0x200000U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                       & ((3U == (0xfU 
                                                  & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                          << 0x15U)) 
                                      & ((~ (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hold_all_requests)) 
                                         << 0x15U))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[4U][2U] 
        = ((0x1fffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [4U][2U]) | (0x200000U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                       & ((4U == (0xfU 
                                                  & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                          << 0x15U)) 
                                      & ((~ (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hold_all_requests)) 
                                         << 0x15U))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[5U][2U] 
        = ((0x1fffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [5U][2U]) | (0x200000U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                       & ((5U == (0xfU 
                                                  & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                          << 0x15U)) 
                                      & ((~ (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hold_all_requests)) 
                                         << 0x15U))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[6U][2U] 
        = ((0x1fffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [6U][2U]) | (0x200000U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                       & ((6U == (0xfU 
                                                  & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                          << 0x15U)) 
                                      & ((~ (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hold_all_requests)) 
                                         << 0x15U))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[7U][2U] 
        = ((0x1fffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [7U][2U]) | (0x200000U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                       & ((7U == (0xfU 
                                                  & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                          << 0x15U)) 
                                      & ((~ (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hold_all_requests)) 
                                         << 0x15U))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[8U][2U] 
        = ((0x1fffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [8U][2U]) | (0x200000U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                       & ((8U == (0xfU 
                                                  & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                          << 0x15U)) 
                                      & ((~ (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hold_all_requests)) 
                                         << 0x15U))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[9U][2U] 
        = ((0x1fffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [9U][2U]) | (0x200000U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                       & ((9U == (0xfU 
                                                  & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                          << 0x15U)) 
                                      & ((~ (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hold_all_requests)) 
                                         << 0x15U))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[0xaU][2U] 
        = ((0x1fffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [0xaU][2U]) | (0x200000U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                         & ((0xaU == 
                                             (0xfU 
                                              & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hold_all_requests)) 
                                           << 0x15U))));
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
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack 
        = (1U & ((IData)((vlTOPp->soc_top__DOT__iccm_to_xbar 
                          >> 0x33U)) & vlTOPp->soc_top__DOT__xbar_to_iccm[0U]));
    vlTOPp->soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_d 
        = vlTOPp->soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q;
    if (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__instr_req) 
         & (IData)(vlTOPp->soc_top__DOT__xbar_to_ifu))) {
        vlTOPp->soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_d 
            = (1U & ((~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q)) 
                     & ((IData)(1U) + (IData)(vlTOPp->soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q))));
    }
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
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o 
        = ((vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
            >> 0x15U) & ((0U == (7U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                       >> 0x12U))) 
                         | (1U == (7U & (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                         >> 0x12U)))));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err 
        = (1U & ((IData)(vlTOPp->soc_top__DOT__xbar_to_ifu) 
                 | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err)));
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
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
        = ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U]
            : (IData)((vlTOPp->soc_top__DOT__xbar_to_ifu 
                       >> 2U)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err 
        = (1U & ((IData)((vlTOPp->soc_top__DOT__xbar_to_ifu 
                          >> 1U)) | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_q)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err 
        = (1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                 & ((IData)((vlTOPp->soc_top__DOT__xbar_to_ifu 
                             >> 0x33U)) | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_q))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
        = ((0xffffffffffffeULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o) 
           | (IData)((IData)((1U & ((~ (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_rsp_pending)) 
                                    & (~ ((IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_req_pending) 
                                          & (~ vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [0xaU][0U]))))))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [0U][0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [0U][1U]) | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                         [0U][1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [0U][2U]) | (0x1ffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [0U][2U]))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [0U][2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [0U][0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [1U][0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [1U][1U]) | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                         [1U][1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [1U][2U]) | (0x1ffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [1U][2U]))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [1U][2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [1U][0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [2U][0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [2U][1U]) | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                         [2U][1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [2U][2U]) | (0x1ffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [2U][2U]))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [2U][2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [2U][0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [3U][0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [3U][1U]) | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                         [3U][1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [3U][2U]) | (0x1ffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [3U][2U]))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [3U][2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [3U][0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [4U][0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [4U][1U]) | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                         [4U][1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [4U][2U]) | (0x1ffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [4U][2U]))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [4U][2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [4U][0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [5U][0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [5U][1U]) | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                         [5U][1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [5U][2U]) | (0x1ffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [5U][2U]))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [5U][2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [5U][0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [6U][0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [6U][1U]) | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                         [6U][1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [6U][2U]) | (0x1ffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [6U][2U]))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [6U][2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [6U][0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [7U][0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [7U][1U]) | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                         [7U][1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [7U][2U]) | (0x1ffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [7U][2U]))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [7U][2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [7U][0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [8U][0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [8U][1U]) | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                         [8U][1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [8U][2U]) | (0x1ffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [8U][2U]))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [8U][2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [8U][0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [9U][0U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
            [9U][1U]) | (0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                         [9U][1U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                            [9U][2U]) | (0x1ffffeU 
                                         & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [9U][2U]))));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [9U][2U]));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
              [9U][0U]));
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
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err 
        = (1U & ((1U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                  ? (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)
                  : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid 
        = ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err) 
           & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q)));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i[0xaU] 
        = vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o;
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
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en 
        = ((3U & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en)) 
           | (0xfffffffcU & (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                              << 2U) & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry))));
    vlTOPp->soc_top__DOT__iccm__DOT__req = (1U & ((
                                                   (vlTOPp->soc_top__DOT__xbar_to_iccm[2U] 
                                                    >> 0x15U) 
                                                   & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full))) 
                                                  & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error))));
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
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed 
        = ((3U != (3U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata)) 
           & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid 
        = (1U & ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                 | (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed 
        = ((3U != (3U & (vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                         >> 0x10U))) & (~ (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)));
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
    if ((0x200000U & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
         [0U][2U])) {
        vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__unnamedblk1__DOT__i = 4U;
    }
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
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack 
        = (1U & ((IData)((vlTOPp->soc_top__DOT__dccm_to_xbar 
                          >> 0x33U)) & vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                 [0U][0U]));
    vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (((IData)(vlTOPp->soc_top__DOT__iccm__DOT__req) 
            & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o))) 
           & (~ (IData)(vlTOPp->soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)));
    vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (1U & (((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                   [0U][2U] >> 0x15U) & (IData)(vlTOPp->soc_top__DOT__dccm_to_xbar)) 
                 & (~ (IData)(vlTOPp->soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full))));
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
    vlTOPp->soc_top__DOT__u_tempsense__DOT__a_ack = 
        (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                [6U][2U] >> 0x15U) & (IData)(vlTOPp->soc_top__DOT__tsen1_to_xbar)));
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
        = ((1U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
            ? (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)
            : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
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
    vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw 
        = (1U & ((1U & vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
                  ? ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)
                      ? (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid)
                      : (((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                          >> 1U) | ((IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                    & (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid))))
                  : (IData)(vlTOPp->soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid)));
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
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
        = ((1ULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i) 
           | (0xffffffffffffeULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
        = ((0xffffffffffffeULL & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i) 
           | (IData)((IData)(((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                               >> 0x15U) & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hfifo_reqready)))));
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
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__accept_t_req 
        = (1U & ((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                  >> 0x15U) & (IData)(vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i)));
    vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__accept_t_rsp 
        = (1U & ((IData)((vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                          >> 0x33U)) & vlTOPp->soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U]));
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
    vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlTOPp->soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (4U == (7U & (vlTOPp->soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                           [1U][2U] >> 0x12U))));
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
