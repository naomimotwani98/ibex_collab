// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSOC_TOP_H_
#define VERILATED_VSOC_TOP_H_  // guard

#include "verilated_heavy.h"
#include "verilated_threads.h"

//==========

class Vsoc_top__Syms;
class Vsoc_top_VerilatedVcd;
class Vsoc_top_rv_plic_reg_pkg;
class Vsoc_top_gpio_reg_pkg;


//----------

VL_MODULE(Vsoc_top) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vsoc_top_rv_plic_reg_pkg* __PVT__rv_plic_reg_pkg;
    Vsoc_top_gpio_reg_pkg* __PVT__gpio_reg_pkg;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint all: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 20 21 22 24 33 
    VL_IN8(rst_ni,0,0);
    // Begin mtask footprint all: 1 2 4 5 6 7 8 9 10 11 12 13 14 16 24 33 44 
    VL_IN8(clk_i,0,0);
    // Begin mtask footprint all: 1 2 5 13 33 44 
    VL_IN(gpio_i,19,0);
    // Begin mtask footprint all: 33 
    VL_OUT(gpio_o,19,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        // Begin mtask footprint all: 6 7 8 9 10 11 32 34 35 36 37 39 41 43 44 
        WData/*85:0*/ soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[10][3];
        // Begin mtask footprint all: 6 9 11 36 
        CData/*0:0*/ soc_top__DOT__u_tempsense__DOT__a_ack;
        // Begin mtask footprint all: 6 36 
        CData/*0:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error;
        // Begin mtask footprint all: 2 44 
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q;
        // Begin mtask footprint all: 5 44 
        WData/*458:0*/ soc_top__DOT__gpio_32__DOT__reg2hw[15];
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q;
        // Begin mtask footprint all: 1 13 
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d;
        // Begin mtask footprint all: 13 
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_rising__DOT__qe;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_falling__DOT__qe;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_lvlhigh__DOT__qe;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_lvllow__DOT__qe;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__qe;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__filter_q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_17__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_18__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_19__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_20__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_21__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_31__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio0__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio1__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio2__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio3__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio14__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio15__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio16__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio17__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio18__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio27__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio28__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio29__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio30__DOT__qe;
    };
    struct {
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio31__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_16__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_17__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_18__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_19__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_20__DOT__qe;
        CData/*0:0*/ soc_top__DOT__u_tempsense__DOT__CLK_SEL;
        // Begin mtask footprint all: 13 14 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__we;
        // Begin mtask footprint all: 13 33 
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d;
        // Begin mtask footprint all: 
        WData/*85:0*/ soc_top__DOT__xbar_to_ldo1[3];
        QData/*51:0*/ soc_top__DOT__ldo1_to_xbar;
        WData/*85:0*/ soc_top__DOT__xbar_to_ldo2[3];
        QData/*51:0*/ soc_top__DOT__ldo2_to_xbar;
        WData/*85:0*/ soc_top__DOT__xbar_to_dcdc[3];
        QData/*51:0*/ soc_top__DOT__dcdc_to_xbar;
        WData/*85:0*/ soc_top__DOT__xbar_to_pll1[3];
        QData/*51:0*/ soc_top__DOT__pll1_to_xbar;
        WData/*85:0*/ soc_top__DOT__xbar_to_tsen2[3];
        QData/*51:0*/ soc_top__DOT__tsen2_to_xbar;
        WData/*85:0*/ soc_top__DOT__xbar_to_dap[3];
        QData/*51:0*/ soc_top__DOT__dap_to_xbar;
        QData/*51:0*/ soc_top__DOT__periph_switch__DOT__tl_ldo1_i;
        QData/*51:0*/ soc_top__DOT__periph_switch__DOT__tl_ldo2_i;
        QData/*51:0*/ soc_top__DOT__periph_switch__DOT__tl_dcdc_i;
        QData/*51:0*/ soc_top__DOT__periph_switch__DOT__tl_pll1_i;
        QData/*51:0*/ soc_top__DOT__periph_switch__DOT__tl_tsen2_i;
        QData/*51:0*/ soc_top__DOT__periph_switch__DOT__tl_dap_i;
        IData/*31:0*/ soc_top__DOT__gpio_intr;
        WData/*135:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_pmp_addr[5];
        IData/*23:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_pmp_cfg;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev;
        IData/*31:0*/ soc_top__DOT__iccm__DOT__wmask;
        CData/*0:0*/ soc_top__DOT__rdata_i;
        CData/*0:0*/ soc_top__DOT__error_i;
        CData/*0:0*/ soc_top__DOT__CLK_REF;
        CData/*0:0*/ soc_top__DOT__CLK_LC;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__scan_rst_ni;
        CData/*0:0*/ soc_top__DOT__iccm__DOT__rvalid;
        CData/*3:0*/ soc_top__DOT__iccm__DOT__data_we;
        CData/*0:0*/ soc_top__DOT__u_tempsense__DOT__malformed_meta_err;
        CData/*0:0*/ soc_top__DOT__u_tempsense__DOT__u_tempsenseInst__DOT__out;
        CData/*0:0*/ soc_top__DOT__u_tempsense__DOT__u_tempsenseInst__DOT__outb;
        // Begin mtask footprint all: 68 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_pipe_flush;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if;
        // Begin mtask footprint all: 18 68 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en;
        // Begin mtask footprint all: 18 68 69 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready;
        // Begin mtask footprint all: 68 69 
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush;
        // Begin mtask footprint all: 4 68 69 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d;
        // Begin mtask footprint all: 4 69 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_d;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q;
        // Begin mtask footprint all: 4 
        CData/*0:0*/ soc_top__DOT__intr_timer;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q;
        CData/*5:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_d;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_q;
        // Begin mtask footprint all: 4 49 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_we;
    };
    struct {
        // Begin mtask footprint all: 4 66 
        WData/*377:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[12];
        // Begin mtask footprint all: 4 48 
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d;
        CData/*5:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en;
        // Begin mtask footprint all: 4 20 48 
        CData/*1:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q;
        CData/*5:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q;
        // Begin mtask footprint all: 4 20 32 48 68 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q;
        // Begin mtask footprint all: 20 32 48 49 68 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_mret_id;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_dret_id;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save;
        // Begin mtask footprint all: 20 48 49 68 
        SData/*11:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr;
        // Begin mtask footprint all: 40 48 49 68 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int;
        // Begin mtask footprint all: 20 22 32 48 49 68 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause;
        // Begin mtask footprint all: 4 18 20 22 32 48 49 68 69 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
        // Begin mtask footprint all: 15 18 20 26 32 33 69 
        IData/*30:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q;
        // Begin mtask footprint all: 18 20 32 33 69 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set;
        // Begin mtask footprint all: 18 20 32 
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q;
        CData/*5:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q;
        // Begin mtask footprint all: 20 32 
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtval;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_if;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_id;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err;
        // Begin mtask footprint all: 20 32 33 
        CData/*5:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d;
        // Begin mtask footprint all: 16 20 32 33 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req;
        // Begin mtask footprint all: 24 32 33 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q;
        // Begin mtask footprint all: 24 32 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_d;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rd_req;
        CData/*0:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack;
        // Begin mtask footprint all: 24 32 36 
        QData/*51:0*/ soc_top__DOT__dccm_to_xbar;
        // Begin mtask footprint all: 24 36 
        IData/*31:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int;
        SData/*11:0*/ soc_top__DOT__dccm__DOT__addr;
        CData/*0:0*/ soc_top__DOT__dccm__DOT__we;
        CData/*0:0*/ soc_top__DOT__dccm__DOT__req;
        CData/*3:0*/ soc_top__DOT__dccm__DOT__data_we;
        CData/*0:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full;
        // Begin mtask footprint all: 6 24 36 
        QData/*51:0*/ soc_top__DOT__tsen1_to_xbar;
        CData/*0:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        // Begin mtask footprint all: 6 24 
        QData/*51:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__outstanding;
        CData/*2:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*2:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        IData/*19:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*0:0*/ soc_top__DOT__u_tempsense__DOT__outstanding;
        // Begin mtask footprint all: 6 24 39 
        QData/*51:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h;
        // Begin mtask footprint all: 6 11 24 32 39 
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack;
        // Begin mtask footprint all: 24 32 39 
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__err_internal;
        // Begin mtask footprint all: 24 
        QData/*51:0*/ soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h[10];
        IData/*31:0*/ soc_top__DOT__dccm__DOT__dccm__DOT__mem[4096];
        WData/*131:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[5];
        IData/*31:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rdata;
        IData/*31:0*/ soc_top__DOT__dccm__DOT__rdata;
        IData/*31:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__rmask;
        IData/*31:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__error;
        CData/*2:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rspop;
        CData/*0:0*/ soc_top__DOT__dccm__DOT__rvalid;
        CData/*0:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid;
        CData/*0:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid;
    };
    struct {
        CData/*2:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*2:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*2:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*2:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty;
        CData/*0:0*/ soc_top__DOT__u_tempsense__DOT__error;
        CData/*0:0*/ soc_top__DOT__u_tempsense__DOT__DONE;
        // Begin mtask footprint all: 9 24 
        CData/*7:0*/ soc_top__DOT__u_tempsense__DOT__reqid;
        // Begin mtask footprint all: 24 44 
        IData/*31:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next;
        // Begin mtask footprint all: 24 39 43 44 
        SData/*14:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err;
        // Begin mtask footprint all: 64 65 66 67 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 50 65 66 67 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 62 65 66 67 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 63 65 66 67 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 60 65 66 67 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 61 65 66 67 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 58 65 66 67 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 59 65 66 67 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 56 65 66 67 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 57 65 66 67 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 54 65 66 67 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 55 65 66 67 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 52 65 66 67 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 53 65 66 67 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 51 65 66 67 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 48 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we;
        // Begin mtask footprint all: 18 48 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en;
        CData/*2:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_d;
        // Begin mtask footprint all: 18 33 48 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtvec_init;
        // Begin mtask footprint all: 18 33 
        CData/*1:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_req_int;
        CData/*1:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n;
        CData/*1:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev;
        // Begin mtask footprint all: 18 20 33 
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q;
        // Begin mtask footprint all: 18 20 
        QData/*63:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[32];
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q;
    };
    struct {
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err_plus2;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en;
        CData/*5:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q;
        // Begin mtask footprint all: 20 33 
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_d;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q;
        // Begin mtask footprint all: 15 20 26 33 
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata;
        // Begin mtask footprint all: 15 26 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn;
        // Begin mtask footprint all: 15 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run;
        // Begin mtask footprint all: 15 20 23 
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q;
        // Begin mtask footprint all: 15 20 23 32 
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_id;
        // Begin mtask footprint all: 20 21 23 
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b;
        // Begin mtask footprint all: 21 23 
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc;
        // Begin mtask footprint all: 21 
        QData/*32:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed;
        QData/*32:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext;
        QData/*33:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum;
        QData/*33:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d;
        QData/*32:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient;
        WData/*67:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[3];
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder;
        SData/*15:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a;
        SData/*15:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_spec;
        CData/*1:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left;
        CData/*5:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal;
        CData/*4:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q;
        CData/*4:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q;
        // Begin mtask footprint all: 21 38 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access;
        // Begin mtask footprint all: 21 38 40 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
        // Begin mtask footprint all: 21 22 38 40 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec;
        // Begin mtask footprint all: 15 21 22 38 40 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q;
        // Begin mtask footprint all: 19 21 22 38 40 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec;
        // Begin mtask footprint all: 19 22 38 40 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec;
        // Begin mtask footprint all: 16 19 22 38 40 
        CData/*2:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs;
        // Begin mtask footprint all: 19 21 22 38 40 68 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec;
    };
    struct {
        // Begin mtask footprint all: 15 19 20 21 22 38 40 68 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec;
        // Begin mtask footprint all: 15 19 20 22 23 38 68 
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id;
        // Begin mtask footprint all: 15 19 22 23 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we;
        // Begin mtask footprint all: 15 19 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_c_insn_id;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext;
        // Begin mtask footprint all: 15 19 21 40 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle;
        // Begin mtask footprint all: 4 15 40 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err;
        // Begin mtask footprint all: 4 15 38 40 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q;
        // Begin mtask footprint all: 4 15 38 
        CData/*1:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q;
        CData/*1:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q;
        // Begin mtask footprint all: 15 38 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update;
        // Begin mtask footprint all: 15 69 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_d;
        CData/*3:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
        // Begin mtask footprint all: 69 
        QData/*63:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_upd;
        QData/*63:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load;
        QData/*63:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_upd;
        QData/*63:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear;
        CData/*2:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we;
        // Begin mtask footprint all: 45 
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__prio[32];
        // Begin mtask footprint all: 47 
        IData/*31:0*/ soc_top__DOT__intr_controller__DOT__ie[1];
        // Begin mtask footprint all: 40 
        QData/*51:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i;
        QData/*51:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err;
        CData/*0:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hfifo_reqready;
        // Begin mtask footprint all: 40 68 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op_en;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_instr_ret_wb;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv;
        // Begin mtask footprint all: 4 40 68 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err;
        // Begin mtask footprint all: 40 68 69 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id;
        // Begin mtask footprint all: 22 38 40 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_valid;
        // Begin mtask footprint all: 19 22 38 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req;
        // Begin mtask footprint all: 19 22 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__mult_sel_ex;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we;
        CData/*1:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op;
        // Begin mtask footprint all: 19 22 40 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec;
        // Begin mtask footprint all: 19 20 22 40 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn;
        // Begin mtask footprint all: 20 22 40 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr;
        // Begin mtask footprint all: 19 20 40 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_access;
        // Begin mtask footprint all: 20 40 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id;
        // Begin mtask footprint all: 20 38 40 
        CData/*1:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we;
        // Begin mtask footprint all: 4 20 21 38 40 
        CData/*5:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q;
        // Begin mtask footprint all: 4 38 40 
        QData/*51:0*/ soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q;
        // Begin mtask footprint all: 38 40 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done;
        // Begin mtask footprint all: 4 38 
        IData/*23:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q;
    };
    struct {
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d;
        // Begin mtask footprint all: 4 21 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d;
        // Begin mtask footprint all: 4 22 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q;
        // Begin mtask footprint all: 4 32 
        IData/*17:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d;
        // Begin mtask footprint all: 4 43 
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__threshold[1];
        IData/*31:0*/ soc_top__DOT__intr_controller__DOT__claim;
        IData/*31:0*/ soc_top__DOT__intr_controller__DOT__complete;
        // Begin mtask footprint all: 4 46 
        IData/*31:0*/ soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set;
        // Begin mtask footprint all: 46 
        IData/*31:0*/ soc_top__DOT__intr_controller__DOT__le;
        // Begin mtask footprint all: 35 
        CData/*0:0*/ soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk;
        // Begin mtask footprint all: 35 41 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk;
        // Begin mtask footprint all: 11 35 41 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack;
        // Begin mtask footprint all: 11 41 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__err_internal;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rd_req;
        // Begin mtask footprint all: 11 13 43 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we;
        // Begin mtask footprint all: 6 13 43 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio28_we;
        // Begin mtask footprint all: 1 6 43 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio19_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio22_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio23_we;
        // Begin mtask footprint all: 1 
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_enable__DOT__qe;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__filter_q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_1__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_2__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_3__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_9__DOT__qe;
    };
    struct {
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_10__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_11__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_22__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_23__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_24__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_25__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio4__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio5__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio6__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio8__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio19__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio22__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio23__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio26__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_0__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_1__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_2__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_3__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_11__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_12__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_15__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_21__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_22__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_23__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_24__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_threshold0__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_msip0__DOT__qe;
        // Begin mtask footprint all: 1 6 42 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we;
        // Begin mtask footprint all: 2 6 42 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio21_we;
        // Begin mtask footprint all: 2 6 43 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio20_we;
        // Begin mtask footprint all: 1 7 43 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio4_we;
        // Begin mtask footprint all: 1 7 42 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio5_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio6_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio26_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we;
        // Begin mtask footprint all: 7 13 42 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio30_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio31_we;
        // Begin mtask footprint all: 8 13 42 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we;
        // Begin mtask footprint all: 1 8 42 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio8_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we;
        // Begin mtask footprint all: 2 7 42 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we;
    };
    struct {
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio9_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio11_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio12_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we;
        // Begin mtask footprint all: 2 7 43 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio13_we;
        // Begin mtask footprint all: 7 13 43 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio0_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio1_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio2_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio3_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio14_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio15_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio16_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio17_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio18_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio27_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio29_we;
        // Begin mtask footprint all: 10 13 43 
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we;
        // Begin mtask footprint all: 8 13 43 
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__ctrl_en_input_filter_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we;
        // Begin mtask footprint all: 1 8 43 
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we;
        // Begin mtask footprint all: 2 8 43 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we;
        // Begin mtask footprint all: 1 11 42 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we;
        // Begin mtask footprint all: 2 11 42 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we;
        // Begin mtask footprint all: 5 11 42 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio25_we;
        // Begin mtask footprint all: 11 33 42 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio24_we;
        // Begin mtask footprint all: 8 33 42 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we;
        // Begin mtask footprint all: 2 8 42 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we;
        // Begin mtask footprint all: 2 10 42 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio10_we;
        // Begin mtask footprint all: 2 
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__filter_q;
    };
    struct {
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__filter_q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_4__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_5__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_6__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_7__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_8__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_12__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_13__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_14__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_15__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_16__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_26__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_27__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_28__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_29__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_30__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio9__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio10__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio11__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio12__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio13__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio20__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio21__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_4__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_5__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_6__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_8__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_9__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_10__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_25__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_27__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_28__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_29__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_30__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_31__DOT__qe;
        // Begin mtask footprint all: 25 
        CData/*3:0*/ soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10;
    };
    struct {
        // Begin mtask footprint all: 39 
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__wr_req;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk;
        // Begin mtask footprint all: 23 
        QData/*32:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b;
        CData/*3:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be;
        // Begin mtask footprint all: 17 23 
        WData/*1023:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[32];
        // Begin mtask footprint all: 23 25 
        WData/*85:0*/ soc_top__DOT__lsu_to_xbar[3];
        // Begin mtask footprint all: 23 25 40 
        WData/*85:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[3];
        // Begin mtask footprint all: 25 40 
        CData/*0:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hold_all_requests;
        // Begin mtask footprint all: 10 25 40 
        CData/*3:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__dev_select_outstanding;
        // Begin mtask footprint all: 10 25 
        IData/*16:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__num_req_outstanding;
        // Begin mtask footprint all: 10 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__qe;
        // Begin mtask footprint all: 10 40 
        CData/*0:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__accept_t_req;
        CData/*0:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__accept_t_rsp;
        // Begin mtask footprint all: 10 25 27 28 29 30 31 40 
        WData/*85:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[11][3];
        // Begin mtask footprint all: 4 12 15 16 18 19 20 21 22 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__clk;
        // Begin mtask footprint all: 4 18 20 22 69 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q;
        // Begin mtask footprint all: 4 18 20 69 
        IData/*17:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs;
        // Begin mtask footprint all: 15 18 19 20 69 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d;
        // Begin mtask footprint all: 15 18 20 22 68 69 
        CData/*3:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
        // Begin mtask footprint all: 20 22 68 69 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn;
        // Begin mtask footprint all: 4 20 22 68 69 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
        // Begin mtask footprint all: 4 15 20 22 40 68 69 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q;
        // Begin mtask footprint all: 4 20 22 69 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug;
        // Begin mtask footprint all: 4 22 69 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q;
        // Begin mtask footprint all: 22 69 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw;
        // Begin mtask footprint all: 22 40 69 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id;
    };
    struct {
        // Begin mtask footprint all: 20 22 69 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio;
        // Begin mtask footprint all: 4 20 22 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err;
        // Begin mtask footprint all: 20 22 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn;
        // Begin mtask footprint all: 20 22 68 
        CData/*1:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op;
        // Begin mtask footprint all: 22 68 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_jump;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_branch;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_tbranch;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_load;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_store;
        // Begin mtask footprint all: 21 22 68 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec;
        // Begin mtask footprint all: 21 22 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal;
        CData/*1:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q;
        // Begin mtask footprint all: 19 21 22 
        CData/*1:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator;
        // Begin mtask footprint all: 19 
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__icache_inval;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__data_req_out;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec;
        CData/*1:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec;
        CData/*2:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel;
        CData/*2:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
        CData/*6:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode;
        CData/*6:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu;
        // Begin mtask footprint all: 19 32 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel;
        // Begin mtask footprint all: 19 32 33 38 
        CData/*1:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err;
        // Begin mtask footprint all: 32 38 
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[2];
        // Begin mtask footprint all: 32 
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc;
        IData/*31:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__unnamedblk1__DOT__i;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two;
        // Begin mtask footprint all: 22 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid;
        CData/*1:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d;
        // Begin mtask footprint all: 22 33 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec;
        CData/*2:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_mux_id;
        // Begin mtask footprint all: 26 33 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err;
        CData/*0:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o;
        CData/*0:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk;
        // Begin mtask footprint all: 5 26 33 
        WData/*85:0*/ soc_top__DOT__xbar_to_iccm[3];
        QData/*51:0*/ soc_top__DOT__iccm_to_xbar;
        // Begin mtask footprint all: 5 26 
        SData/*11:0*/ soc_top__DOT__iccm__DOT__addr;
        CData/*0:0*/ soc_top__DOT__iccm__DOT__req;
        CData/*0:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error;
        CData/*0:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack;
        CData/*0:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full;
        // Begin mtask footprint all: 5 
        IData/*31:0*/ soc_top__DOT__iccm__DOT__inst_memory__DOT__mem[4096];
        WData/*65:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3];
        IData/*31:0*/ soc_top__DOT__iccm__DOT__wdata;
        IData/*31:0*/ soc_top__DOT__iccm__DOT__rdata;
    };
    struct {
        IData/*31:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask;
        IData/*31:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword;
        IData/*25:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__filter_q;
        CData/*0:0*/ soc_top__DOT__iccm__DOT__we;
        CData/*0:0*/ soc_top__DOT__iccm__DOT__instr_valid;
        CData/*0:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid;
        CData/*0:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid;
        CData/*1:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*1:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        SData/*9:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*1:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_0__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio25__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_14__DOT__qe;
        // Begin mtask footprint all: 5 33 
        IData/*31:0*/ soc_top__DOT__gpio_32__DOT__cio_gpio_q;
        IData/*31:0*/ soc_top__DOT__gpio_32__DOT__cio_gpio_en_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d;
        // Begin mtask footprint all: 5 33 43 
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we;
        // Begin mtask footprint all: 5 33 43 44 
        WData/*245:0*/ soc_top__DOT__gpio_32__DOT__hw2reg[8];
        // Begin mtask footprint all: 5 43 
        IData/*31:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_state__DOT__wr_data;
        // Begin mtask footprint all: 5 46 
        IData/*31:0*/ soc_top__DOT__intr_gpio;
        IData/*31:0*/ soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q;
        // Begin mtask footprint all: 18 49 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en;
        // Begin mtask footprint all: 20 
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[16];
        CData/*7:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[16];
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[32];
        SData/*15:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_c_id;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_q;
        CData/*2:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_d;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr;
        // Begin mtask footprint all: 18 32 
        IData/*30:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err;
        CData/*1:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n;
        CData/*1:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n;
        CData/*1:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q;
        CData/*5:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d;
        // Begin mtask footprint all: 18 32 69 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw;
        CData/*2:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry;
        CData/*2:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en;
        // Begin mtask footprint all: 18 69 
        QData/*63:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d;
    };
    struct {
        QData/*63:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
        QData/*63:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d;
        QData/*63:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q;
        CData/*2:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d;
        // Begin mtask footprint all: 32 69 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid;
        CData/*2:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed;
        // Begin mtask footprint all: 32 33 69 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed;
        // Begin mtask footprint all: 32 33 
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__instr_req;
        // Begin mtask footprint all: 18 32 33 
        CData/*1:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_q;
        // Begin mtask footprint all: 16 18 32 33 
        CData/*1:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q;
        // Begin mtask footprint all: 18 26 32 33 
        CData/*2:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q;
        // Begin mtask footprint all: 26 32 33 
        QData/*51:0*/ soc_top__DOT__xbar_to_ifu;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed;
        // Begin mtask footprint all: 18 26 33 
        WData/*95:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[3];
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err;
        CData/*2:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q;
        // Begin mtask footprint all: 18 26 
        WData/*95:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[3];
        CData/*2:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d;
        // Begin mtask footprint all: 26 
        IData/*31:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int;
        IData/*31:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int;
        IData/*31:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__unnamedblk1__DOT__i;
        CData/*0:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk;
        // Begin mtask footprint all: 19 21 
        CData/*5:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator;
        CData/*1:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode;
        // Begin mtask footprint all: 19 21 22 32 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex;
        // Begin mtask footprint all: 19 21 22 23 32 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel;
        // Begin mtask footprint all: 21 32 
        QData/*33:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d;
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result;
        // Begin mtask footprint all: 16 
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__qe;
        // Begin mtask footprint all: 16 38 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d;
        CData/*2:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns;
        // Begin mtask footprint all: 16 23 38 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q;
        // Begin mtask footprint all: 16 23 
        QData/*32:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a;
        // Begin mtask footprint all: 16 23 40 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q;
        // Begin mtask footprint all: 16 40 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_d;
        // Begin mtask footprint all: 16 18 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ctrl_busy;
        // Begin mtask footprint all: 16 21 
        WData/*67:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex[3];
        CData/*1:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_we_ex;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal;
        CData/*2:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d;
        // Begin mtask footprint all: 16 21 22 23 
        CData/*2:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q;
        // Begin mtask footprint all: 16 21 23 32 
        WData/*67:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[3];
        // Begin mtask footprint all: 16 19 23 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req;
        // Begin mtask footprint all: 19 23 
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b;
        CData/*1:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate;
        // Begin mtask footprint all: 19 23 40 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__data_req;
        // Begin mtask footprint all: 15 19 26 
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed;
        // Begin mtask footprint all: 15 19 21 23 
        CData/*1:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type;
        // Begin mtask footprint all: 15 21 23 33 
        QData/*33:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext;
        // Begin mtask footprint all: 33 44 
        IData/*31:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q;
        // Begin mtask footprint all: 33 
        WData/*85:0*/ soc_top__DOT__ifu_to_xbar[3];
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_state__DOT__qe;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__filter_q;
    };
    struct {
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio24__DOT__qe;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_13__DOT__qe;
        // Begin mtask footprint all: 14 
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__wd;
        // Begin mtask footprint all: 14 41 43 45 46 47 
        WData/*171:0*/ soc_top__DOT__intr_controller__DOT__reg2hw[6];
        // Begin mtask footprint all: 3 11 37 41 42 43 
        QData/*37:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit;
        // Begin mtask footprint all: 11 41 42 43 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err;
        // Begin mtask footprint all: 11 
        IData/*31:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rdata;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__error;
        CData/*7:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqid;
        CData/*1:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqsz;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rspop;
        // Begin mtask footprint all: 3 11 
        IData/*31:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next;
        // Begin mtask footprint all: 3 
        CData/*4:0*/ soc_top__DOT__intr_controller__DOT__irq_id_o[1];
        CData/*4:0*/ soc_top__DOT__intr_controller__DOT__cc_id[1];
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__q;
        // Begin mtask footprint all: 3 43 
        CData/*4:0*/ soc_top__DOT__intr_controller__DOT__claim_id[1];
        // Begin mtask footprint all: 43 
        CData/*4:0*/ soc_top__DOT__intr_controller__DOT__complete_id[1];
        // Begin mtask footprint all: 12 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch;
        // Begin mtask footprint all: 12 17 
        WData/*991:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[31];
        // Begin mtask footprint all: 17 38 
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        IData/*30:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec;
        // Begin mtask footprint all: 38 
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext;
        // Begin mtask footprint all: 10 24 
        CData/*2:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_opcode;
        CData/*7:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_source;
        CData/*1:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_size;
        // Begin mtask footprint all: 10 24 40 
        CData/*0:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_req_pending;
        CData/*0:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 24 40 
        QData/*51:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i[11];
        // Begin mtask footprint all: 11 24 35 
        QData/*51:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h;
        // Begin mtask footprint all: 11 24 
        IData/*31:0*/ soc_top__DOT__u_tempsense__DOT__rdata;
        IData/*23:0*/ soc_top__DOT__u_tempsense__DOT__DOUT_REG;
        CData/*7:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqid;
        CData/*1:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqsz;
        CData/*1:0*/ soc_top__DOT__u_tempsense__DOT__reqsz;
        CData/*0:0*/ soc_top__DOT__u_tempsense__DOT__rspop;
    };
    struct {
        CData/*3:0*/ soc_top__DOT__u_tempsense__DOT__SEL_CONV_TIME_REG;
        CData/*0:0*/ soc_top__DOT__u_tempsense__DOT__en_REG;
        CData/*0:0*/ soc_top__DOT__u_tempsense__DOT__DONE_REG;
        // Begin mtask footprint all: 8 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__d;
        // Begin mtask footprint all: 5 8 42 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we;
        // Begin mtask footprint all: 1 44 
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q;
        // Begin mtask footprint all: 44 
        IData/*31:0*/ soc_top__DOT__gpio_32__DOT__data_in_d;
        IData/*31:0*/ soc_top__DOT__gpio_32__DOT__data_in_q;
        IData/*31:0*/ soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event;
        // Begin mtask footprint all: 7 
        CData/*0:0*/ soc_top__DOT__u_tempsense__DOT__RESET_REGn;
        // Begin mtask footprint all: 7 11 36 
        CData/*0:0*/ soc_top__DOT__u_tempsense__DOT__wr_req;
        // Begin mtask footprint all: 36 
        IData/*31:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int;
        CData/*0:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk;
        // Begin mtask footprint all: 4 5 
        IData/*31:0*/ soc_top__DOT__intr_controller__DOT__u_gateway__DOT__ia;
        // Begin mtask footprint all: 4 20 
        IData/*17:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip;
        IData/*17:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d;
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d;
        CData/*1:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d;
        // Begin mtask footprint all: 4 18 20 48 69 
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q;
        // Begin mtask footprint all: 18 20 48 69 
        CData/*2:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q;
        // Begin mtask footprint all: 18 20 32 48 69 
        IData/*31:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        // Begin mtask footprint all: 20 48 
        CData/*2:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_cause;
        CData/*2:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q;
        // Begin mtask footprint all: 4 20 68 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d;
        // Begin mtask footprint all: 15 19 20 68 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_is_compressed_id;
        // Begin mtask footprint all: 3 4 
        WData/*69:0*/ soc_top__DOT__intr_controller__DOT__hw2reg[3];
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__q;
        CData/*5:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_id_q;
        // Begin mtask footprint all: 3 4 47 
        IData/*31:0*/ soc_top__DOT__intr_controller__DOT__ip;
        // Begin mtask footprint all: 4 47 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 
        QData/*62:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree;
        // Begin mtask footprint all: 4 45 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 67 
        WData/*188:0*/ soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[6];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        // Begin mtask footprint all: 10 25 40 
        WData/*87:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[3];
        // Begin mtask footprint all: 10 24 40 
        QData/*51:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o;
        // Begin mtask footprint all: 10 24 
        CData/*0:0*/ __Vdly__soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 24 
        QData/*51:0*/ soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i[10];
        QData/*51:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o;
        QData/*51:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o;
        QData/*51:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o;
        QData/*51:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o;
        QData/*51:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o;
        QData/*51:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o;
        QData/*51:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o;
        QData/*51:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o;
        QData/*51:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o;
        QData/*51:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o;
        QData/*32:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o;
        QData/*32:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT____Vlvbound1;
        IData/*23:0*/ soc_top__DOT__u_tempsense__DOT____Vcellout__u_tempsenseInst__DOUT;
        SData/*12:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o;
        SData/*11:0*/ __Vdlyvdim0__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0;
        SData/*11:0*/ __Vdlyvdim0__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1;
        SData/*11:0*/ __Vdlyvdim0__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2;
        SData/*11:0*/ __Vdlyvdim0__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3;
        CData/*4:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o;
        CData/*2:0*/ __Vdly__soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*4:0*/ __Vdlyvlsb__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0;
        CData/*7:0*/ __Vdlyvval__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0;
        CData/*0:0*/ __Vdlyvset__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0;
        CData/*4:0*/ __Vdlyvlsb__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1;
        CData/*7:0*/ __Vdlyvval__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1;
        CData/*0:0*/ __Vdlyvset__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1;
        CData/*4:0*/ __Vdlyvlsb__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2;
        CData/*7:0*/ __Vdlyvval__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2;
        CData/*0:0*/ __Vdlyvset__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2;
        CData/*4:0*/ __Vdlyvlsb__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3;
        CData/*7:0*/ __Vdlyvval__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3;
        CData/*0:0*/ __Vdlyvset__soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3;
        // Begin mtask footprint all: 
        CData/*0:0*/ __Vm_traceActivity[91];
        QData/*62:0*/ __Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree;
        CData/*0:0*/ __Vclklast__TOP__rst_ni;
        CData/*0:0*/ __Vclklast__TOP__soc_top__DOT__u_top__DOT__u_core__DOT__clk;
        CData/*0:0*/ __Vclklast__TOP__clk_i;
        WData/*377:0*/ __Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[12];
        WData/*188:0*/ __Vchglast__TOP__soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[6];
        // Begin mtask footprint all: 45 
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[32];
        // Begin mtask footprint all: 48 
        CData/*1:0*/ __Vfunc_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__sv2v_cast_2__4__Vfuncout;
        CData/*1:0*/ __Vfunc_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__sv2v_cast_2__4__inp;
        // Begin mtask footprint all: 34 
        WData/*85:0*/ soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[10][3];
        // Begin mtask footprint all: 27 34 
        WData/*85:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[3];
        WData/*85:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[3];
        // Begin mtask footprint all: 28 34 
        WData/*85:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[3];
        WData/*85:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[3];
        // Begin mtask footprint all: 29 34 
        WData/*85:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[3];
        WData/*85:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[3];
        // Begin mtask footprint all: 30 34 
        WData/*85:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[3];
        WData/*85:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[3];
        // Begin mtask footprint all: 31 34 
        WData/*85:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[3];
        WData/*85:0*/ soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[3];
        // Begin mtask footprint all: 7 14 
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio9__q;
        // Begin mtask footprint all: 3 7 14 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_1__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_2__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_17__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_18__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_27__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_28__q;
    };
    struct {
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_29__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_30__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio0__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio1__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio2__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio3__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio4__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio5__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio6__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio12__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio13__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio14__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio16__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio29__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio30__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_4__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_5__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_6__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_22__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_23__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_26__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_27__q;
        // Begin mtask footprint all: 3 7 14 41 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_msip0__q;
        // Begin mtask footprint all: 3 14 
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio7__q;
        // Begin mtask footprint all: 3 8 14 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_19__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_26__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio8__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_2__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_3__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_7__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_8__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_9__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_10__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_11__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_12__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_13__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_14__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_15__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_16__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_17__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_18__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_19__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_20__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_21__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_24__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_25__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_28__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_29__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_30__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_31__q;
        // Begin mtask footprint all: 3 8 14 41 
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_threshold0__q;
        // Begin mtask footprint all: 3 11 14 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_0__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_7__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_8__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_20__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_21__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_22__q;
    };
    struct {
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_23__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_24__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_25__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_31__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_0__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_1__q;
        // Begin mtask footprint all: 3 6 14 
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_3__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_4__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_5__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_6__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_9__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_10__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_11__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_12__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_13__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_14__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_15__q;
        CData/*0:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_16__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q;
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q;
        // Begin mtask footprint all: 3 10 14 
        CData/*2:0*/ soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio10__q;
        // Begin mtask footprint all: 23 
        CData/*4:0*/ __Vtableidx6;
        // Begin mtask footprint all: 38 
        CData/*0:0*/ soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1;
        // Begin mtask footprint all: 21 
        CData/*5:0*/ __Vtableidx3;
        CData/*7:0*/ __Vtableidx4;
        CData/*5:0*/ __Vtableidx5;
        // Begin mtask footprint all: 22 
        CData/*5:0*/ __Vtableidx1;
        // Begin mtask footprint all: 19 
        CData/*5:0*/ __Vtableidx2;
        // Begin mtask footprint all: 20 
        WData/*127:0*/ soc_top__DOT__u_top__DOT____Vcellout__u_core__crash_dump_o[4];
        SData/*11:0*/ __Vfunc_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__sv2v_cast_12__2__Vfuncout;
        SData/*11:0*/ __Vfunc_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__sv2v_cast_12__2__inp;
        CData/*5:0*/ __Vfunc_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__sv2v_cast_6__3__Vfuncout;
        CData/*5:0*/ __Vfunc_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__sv2v_cast_6__3__inp;
        // Begin mtask footprint all: 6 
        SData/*12:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT____Vlvbound1;
        CData/*4:0*/ soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT____Vlvbound1;
        // Begin mtask footprint all: 5 
        QData/*32:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o;
        QData/*32:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT____Vlvbound1;
        SData/*12:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o;
        SData/*12:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT____Vlvbound1;
        SData/*11:0*/ __Vdlyvdim0__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0;
        SData/*11:0*/ __Vdlyvdim0__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1;
        SData/*11:0*/ __Vdlyvdim0__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2;
        SData/*11:0*/ __Vdlyvdim0__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3;
        CData/*4:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o;
        CData/*4:0*/ soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT____Vlvbound1;
        CData/*1:0*/ __Vdly__soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ __Vdly__soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ __Vdly__soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*4:0*/ __Vdlyvlsb__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0;
        CData/*7:0*/ __Vdlyvval__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0;
        CData/*0:0*/ __Vdlyvset__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0;
        CData/*4:0*/ __Vdlyvlsb__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1;
        CData/*7:0*/ __Vdlyvval__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1;
        CData/*0:0*/ __Vdlyvset__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1;
        CData/*4:0*/ __Vdlyvlsb__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2;
        CData/*7:0*/ __Vdlyvval__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2;
        CData/*0:0*/ __Vdlyvset__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2;
        CData/*4:0*/ __Vdlyvlsb__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3;
    };
    struct {
        CData/*7:0*/ __Vdlyvval__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3;
        CData/*0:0*/ __Vdlyvset__soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3;
        // Begin mtask footprint all: 4 5 
        IData/*31:0*/ __Vdly__soc_top__DOT__intr_controller__DOT__u_gateway__DOT__ia;
        // Begin mtask footprint all: 5 33 
        IData/*31:0*/ __Vdly__soc_top__DOT__gpio_32__DOT__cio_gpio_q;
        IData/*31:0*/ __Vdly__soc_top__DOT__gpio_32__DOT__cio_gpio_en_q;
        // Begin mtask footprint all: 5 8 44 
        IData/*31:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q;
        IData/*31:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q;
        IData/*31:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q;
        IData/*31:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q;
        IData/*31:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q;
        // Begin mtask footprint all: 5 10 44 
        IData/*31:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q;
        // Begin mtask footprint all: 5 43 44 
        IData/*31:0*/ soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q;
    };
    // Begin mtask footprint all: 22 
    static CData/*0:0*/ __Vtable1_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[64];
    static CData/*0:0*/ __Vtable1_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[64];
    static CData/*0:0*/ __Vtable1_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[64];
    static CData/*0:0*/ __Vtable1_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[64];
    static CData/*0:0*/ __Vtable1_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[64];
    static CData/*0:0*/ __Vtable1_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[64];
    // Begin mtask footprint all: 23 
    static CData/*3:0*/ __Vtable6_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be[32];
    // Begin mtask footprint all: 21 
    static CData/*0:0*/ __Vtable3_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[64];
    static CData/*0:0*/ __Vtable4_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[256];
    static CData/*0:0*/ __Vtable5_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[64];
    // Begin mtask footprint all: 19 
    static CData/*0:0*/ __Vtable2_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[64];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vsoc_top__Syms* __VlSymsp;  // Symbol table
  private:
    VlMTaskVertex __Vm_mt_15;
    VlMTaskVertex __Vm_mt_17;
    VlMTaskVertex __Vm_mt_19;
    VlMTaskVertex __Vm_mt_23;
    VlMTaskVertex __Vm_mt_4;
    VlMTaskVertex __Vm_mt_11;
    VlMTaskVertex __Vm_mt_22;
    VlMTaskVertex __Vm_mt_25;
    VlMTaskVertex __Vm_mt_27;
    VlMTaskVertex __Vm_mt_28;
    VlMTaskVertex __Vm_mt_29;
    VlMTaskVertex __Vm_mt_30;
    VlMTaskVertex __Vm_mt_31;
    VlMTaskVertex __Vm_mt_6;
    VlMTaskVertex __Vm_mt_8;
    VlMTaskVertex __Vm_mt_9;
    VlMTaskVertex __Vm_mt_14;
    VlMTaskVertex __Vm_mt_20;
    VlMTaskVertex __Vm_mt_21;
    VlMTaskVertex __Vm_mt_34;
    VlMTaskVertex __Vm_mt_35;
    VlMTaskVertex __Vm_mt_36;
    VlMTaskVertex __Vm_mt_39;
    VlMTaskVertex __Vm_mt_40;
    VlMTaskVertex __Vm_mt_41;
    VlMTaskVertex __Vm_mt_45;
    VlMTaskVertex __Vm_mt_47;
    VlMTaskVertex __Vm_mt_49;
    VlMTaskVertex __Vm_mt_50;
    VlMTaskVertex __Vm_mt_51;
    VlMTaskVertex __Vm_mt_52;
    VlMTaskVertex __Vm_mt_53;
    VlMTaskVertex __Vm_mt_54;
    VlMTaskVertex __Vm_mt_55;
    VlMTaskVertex __Vm_mt_56;
    VlMTaskVertex __Vm_mt_57;
    VlMTaskVertex __Vm_mt_58;
    VlMTaskVertex __Vm_mt_59;
    VlMTaskVertex __Vm_mt_60;
    VlMTaskVertex __Vm_mt_61;
    VlMTaskVertex __Vm_mt_62;
    VlMTaskVertex __Vm_mt_63;
    VlMTaskVertex __Vm_mt_64;
    VlMTaskVertex __Vm_mt_67;
    VlMTaskVertex __Vm_mt_68;
    VlMTaskVertex __Vm_mt_1;
    VlMTaskVertex __Vm_mt_2;
    VlMTaskVertex __Vm_mt_3;
    VlMTaskVertex __Vm_mt_5;
    VlMTaskVertex __Vm_mt_33;
    VlMTaskVertex __Vm_mt_44;
    VlMTaskVertex __Vm_mt_46;
    VlMTaskVertex __Vm_mt_48;
    VlMTaskVertex __Vm_mt_26;
    VlMTaskVertex __Vm_mt_32;
    VlMTaskVertex __Vm_mt_38;
    VlMTaskVertex __Vm_mt_42;
    VlMTaskVertex __Vm_mt_43;
    VlMTaskVertex __Vm_mt_69;
    VlMTaskVertex __Vm_mt_final;
    VlThreadPool* __Vm_threadPoolp;
    bool __Vm_even_cycle;
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsoc_top);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vsoc_top(VerilatedContext* contextp, const char* name = "TOP");
    Vsoc_top(const char* name = "TOP")
      : Vsoc_top(nullptr, name) {}
    /// Destroy the model; called (often implicitly) by application code
    ~Vsoc_top();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp();
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
    static void _eval_initial_loop(Vsoc_top__Syms* __restrict vlSymsp);
    void __Vconfigure(Vsoc_top__Syms* symsp, bool first);
  private:
    static QData _change_request(Vsoc_top__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vsoc_top__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__108(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__109(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__110(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__111(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__112(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__113(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__114(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__115(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__116(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__117(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__118(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__119(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__120(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__121(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__122(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__123(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__124(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__125(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__128(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__130(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__139(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__145(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__147(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__149(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__152(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__154(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__156(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__159(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__163(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__164(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__166(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__168(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__170(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__175(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__177(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__182(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__184(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__186(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__188(Vsoc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__4(Vsoc_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vsoc_top__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vsoc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vsoc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vsoc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__100(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__101(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__102(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__103(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__104(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__105(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__106(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__107(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__126(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__132(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__151(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__153(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__155(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__158(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__160(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__161(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__165(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__167(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__169(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__171(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__172(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__174(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__176(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__178(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__179(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__180(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__181(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__183(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__185(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__187(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__24(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__31(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__33(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__46(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__50(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__52(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__54(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__55(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__56(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__57(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__58(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__59(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__76(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__78(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__80(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__82(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__84(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__98(Vsoc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__99(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__11(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__127(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__129(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__131(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__133(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__134(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__135(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__136(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__137(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__14(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__140(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__141(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__142(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__143(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__144(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__146(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__148(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__15(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__150(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__157(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__162(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__173(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__19(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__20(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__21(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__22(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__23(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__25(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__28(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__29(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__32(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__34(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__35(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__36(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__40(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__41(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__43(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__44(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__45(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__48(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__49(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__51(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__53(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__62(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__63(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__64(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__65(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__66(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__67(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__70(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__71(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__73(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__75(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__77(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__79(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__81(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__83(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__85(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__86(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__87(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__88(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__89(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__90(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__91(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__93(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__94(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__95(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__96(Vsoc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__97(Vsoc_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vsoc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__3(Vsoc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullSub1(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub1(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void __Vmtask__12(bool even_cycle, void* symtab);
    static void __Vmtask__15(bool even_cycle, void* symtab);
    static void __Vmtask__17(bool even_cycle, void* symtab);
    static void __Vmtask__4(bool even_cycle, void* symtab);
    static void __Vmtask__final(bool even_cycle, void* symtab);
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
