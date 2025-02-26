/* Generated automatically by the program 'build/genpreds'
   from the machine description file '../../gcc-4.1.1/gcc/config/i386/i386.md'.  */

#ifndef GCC_TM_PREDS_H
#define GCC_TM_PREDS_H

#ifdef HAVE_MACHINE_MODES
extern int general_operand (rtx, enum machine_mode);
extern int address_operand (rtx, enum machine_mode);
extern int register_operand (rtx, enum machine_mode);
extern int pmode_register_operand (rtx, enum machine_mode);
extern int scratch_operand (rtx, enum machine_mode);
extern int immediate_operand (rtx, enum machine_mode);
extern int const_int_operand (rtx, enum machine_mode);
extern int const_double_operand (rtx, enum machine_mode);
extern int nonimmediate_operand (rtx, enum machine_mode);
extern int nonmemory_operand (rtx, enum machine_mode);
extern int push_operand (rtx, enum machine_mode);
extern int pop_operand (rtx, enum machine_mode);
extern int memory_operand (rtx, enum machine_mode);
extern int indirect_operand (rtx, enum machine_mode);
extern int comparison_operator (rtx, enum machine_mode);
extern int any_fp_register_operand (rtx, enum machine_mode);
extern int fp_register_operand (rtx, enum machine_mode);
extern int register_and_not_any_fp_reg_operand (rtx, enum machine_mode);
extern int register_and_not_fp_reg_operand (rtx, enum machine_mode);
extern int mmx_reg_operand (rtx, enum machine_mode);
extern int q_regs_operand (rtx, enum machine_mode);
extern int non_q_regs_operand (rtx, enum machine_mode);
extern int ext_register_operand (rtx, enum machine_mode);
extern int flags_reg_operand (rtx, enum machine_mode);
extern int x86_64_immediate_operand (rtx, enum machine_mode);
extern int x86_64_zext_immediate_operand (rtx, enum machine_mode);
extern int x86_64_general_operand (rtx, enum machine_mode);
extern int x86_64_szext_general_operand (rtx, enum machine_mode);
extern int x86_64_nonmemory_operand (rtx, enum machine_mode);
extern int x86_64_szext_nonmemory_operand (rtx, enum machine_mode);
extern int pic_32bit_operand (rtx, enum machine_mode);
extern int x86_64_movabs_operand (rtx, enum machine_mode);
extern int symbolic_operand (rtx, enum machine_mode);
extern int pic_symbolic_operand (rtx, enum machine_mode);
extern int local_symbolic_operand (rtx, enum machine_mode);
extern int tls_symbolic_operand (rtx, enum machine_mode);
extern int constant_call_address_operand (rtx, enum machine_mode);
extern int register_no_elim_operand (rtx, enum machine_mode);
extern int index_register_operand (rtx, enum machine_mode);
extern int general_no_elim_operand (rtx, enum machine_mode);
extern int nonmemory_no_elim_operand (rtx, enum machine_mode);
extern int call_insn_operand (rtx, enum machine_mode);
extern int sibcall_insn_operand (rtx, enum machine_mode);
extern int const0_operand (rtx, enum machine_mode);
extern int const1_operand (rtx, enum machine_mode);
extern int const8_operand (rtx, enum machine_mode);
extern int const248_operand (rtx, enum machine_mode);
extern int const_0_to_1_operand (rtx, enum machine_mode);
extern int const_0_to_3_operand (rtx, enum machine_mode);
extern int const_0_to_7_operand (rtx, enum machine_mode);
extern int const_0_to_15_operand (rtx, enum machine_mode);
extern int const_0_to_63_operand (rtx, enum machine_mode);
extern int const_0_to_255_operand (rtx, enum machine_mode);
extern int const_0_to_255_mul_8_operand (rtx, enum machine_mode);
extern int const_1_to_31_operand (rtx, enum machine_mode);
extern int const_2_to_3_operand (rtx, enum machine_mode);
extern int const_4_to_7_operand (rtx, enum machine_mode);
extern int const_pow2_1_to_8_operand (rtx, enum machine_mode);
extern int const_pow2_1_to_128_operand (rtx, enum machine_mode);
extern int incdec_operand (rtx, enum machine_mode);
extern int reg_or_pm1_operand (rtx, enum machine_mode);
extern int shiftdi_operand (rtx, enum machine_mode);
extern int ashldi_input_operand (rtx, enum machine_mode);
extern int zero_extended_scalar_load_operand (rtx, enum machine_mode);
extern int vector_move_operand (rtx, enum machine_mode);
extern int reg_or_0_operand (rtx, enum machine_mode);
extern int no_seg_address_operand (rtx, enum machine_mode);
extern int aligned_operand (rtx, enum machine_mode);
extern int memory_displacement_operand (rtx, enum machine_mode);
extern int long_memory_operand (rtx, enum machine_mode);
extern int fcmov_comparison_operator (rtx, enum machine_mode);
extern int sse_comparison_operator (rtx, enum machine_mode);
extern int ix86_comparison_operator (rtx, enum machine_mode);
extern int ix86_carry_flag_operator (rtx, enum machine_mode);
extern int cmp_fp_expander_operand (rtx, enum machine_mode);
extern int binary_fp_operator (rtx, enum machine_mode);
extern int mult_operator (rtx, enum machine_mode);
extern int div_operator (rtx, enum machine_mode);
extern int float_operator (rtx, enum machine_mode);
extern int arith_or_logical_operator (rtx, enum machine_mode);
extern int promotable_binary_operator (rtx, enum machine_mode);
extern int cmpsi_operand_1 (rtx, enum machine_mode);
extern int cmpsi_operand (rtx, enum machine_mode);
extern int compare_operator (rtx, enum machine_mode);
extern int absneg_operator (rtx, enum machine_mode);
#endif /* HAVE_MACHINE_MODES */
#endif /* tm-preds.h */
