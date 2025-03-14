/* Type information for fortran.
   Copyright (C) 2004 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 2, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING.  If not, write to the Free
Software Foundation, 51 Franklin Street, Fifth Floor, Boston, MA
02110-1301, USA.  */

/* This file is machine generated.  Do not edit.  */

void
gt_ggc_mx_lang_decl (void *x_p)
{
  struct lang_decl * const x = (struct lang_decl *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).saved_descriptor);
      gt_ggc_m_9tree_node ((*x).stringlen);
      gt_ggc_m_9tree_node ((*x).addr);
    }
}

void
gt_ggc_mx_lang_type (void *x_p)
{
  struct lang_type * const x = (struct lang_type *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(GFC_MAX_DIMENSIONS); i0++) {
          gt_ggc_m_9tree_node ((*x).lbound[i0]);
        }
      }
      {
        size_t i1;
        for (i1 = 0; i1 != (size_t)(GFC_MAX_DIMENSIONS); i1++) {
          gt_ggc_m_9tree_node ((*x).ubound[i1]);
        }
      }
      {
        size_t i2;
        for (i2 = 0; i2 != (size_t)(GFC_MAX_DIMENSIONS); i2++) {
          gt_ggc_m_9tree_node ((*x).stride[i2]);
        }
      }
      gt_ggc_m_9tree_node ((*x).size);
      gt_ggc_m_9tree_node ((*x).offset);
      gt_ggc_m_9tree_node ((*x).dtype);
      gt_ggc_m_9tree_node ((*x).dataptr_type);
    }
}

void
gt_pch_nx_lang_decl (void *x_p)
{
  struct lang_decl * const x = (struct lang_decl *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_9lang_decl, gt_ggc_e_9lang_decl))
    {
      gt_pch_n_9tree_node ((*x).saved_descriptor);
      gt_pch_n_9tree_node ((*x).stringlen);
      gt_pch_n_9tree_node ((*x).addr);
    }
}

void
gt_pch_nx_lang_type (void *x_p)
{
  struct lang_type * const x = (struct lang_type *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_9lang_type, gt_ggc_e_9lang_type))
    {
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(GFC_MAX_DIMENSIONS); i0++) {
          gt_pch_n_9tree_node ((*x).lbound[i0]);
        }
      }
      {
        size_t i1;
        for (i1 = 0; i1 != (size_t)(GFC_MAX_DIMENSIONS); i1++) {
          gt_pch_n_9tree_node ((*x).ubound[i1]);
        }
      }
      {
        size_t i2;
        for (i2 = 0; i2 != (size_t)(GFC_MAX_DIMENSIONS); i2++) {
          gt_pch_n_9tree_node ((*x).stride[i2]);
        }
      }
      gt_pch_n_9tree_node ((*x).size);
      gt_pch_n_9tree_node ((*x).offset);
      gt_pch_n_9tree_node ((*x).dtype);
      gt_pch_n_9tree_node ((*x).dataptr_type);
    }
}

void
gt_pch_p_9lang_decl (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct lang_decl * const x ATTRIBUTE_UNUSED = (struct lang_decl *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).saved_descriptor), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).stringlen), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).addr), cookie);
}

void
gt_pch_p_9lang_type (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct lang_type * const x ATTRIBUTE_UNUSED = (struct lang_type *)x_p;
  {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(GFC_MAX_DIMENSIONS); i0++) {
      if ((void *)(x) == this_obj)
        op (&((*x).lbound[i0]), cookie);
    }
  }
  {
    size_t i1;
    for (i1 = 0; i1 != (size_t)(GFC_MAX_DIMENSIONS); i1++) {
      if ((void *)(x) == this_obj)
        op (&((*x).ubound[i1]), cookie);
    }
  }
  {
    size_t i2;
    for (i2 = 0; i2 != (size_t)(GFC_MAX_DIMENSIONS); i2++) {
      if ((void *)(x) == this_obj)
        op (&((*x).stride[i2]), cookie);
    }
  }
  if ((void *)(x) == this_obj)
    op (&((*x).size), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).offset), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).dtype), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).dataptr_type), cookie);
}

/* GC roots.  */

const struct ggc_root_tab gt_ggc_r_gtype_fortran_h[] = {
  {
    &gfc_rank_cst[0],
    1 * (GFC_MAX_DIMENSIONS + 1),
    sizeof (gfc_rank_cst[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfc_strconst_wrong_return,
    1,
    sizeof (gfc_strconst_wrong_return),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfc_strconst_fault,
    1,
    sizeof (gfc_strconst_fault),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfc_strconst_bounds,
    1,
    sizeof (gfc_strconst_bounds),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfc_strconst_current_filename,
    1,
    sizeof (gfc_strconst_current_filename),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_sr_kind,
    1,
    sizeof (gfor_fndecl_sr_kind),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_si_kind,
    1,
    sizeof (gfor_fndecl_si_kind),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_iargc,
    1,
    sizeof (gfor_fndecl_iargc),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_size1,
    1,
    sizeof (gfor_fndecl_size1),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_size0,
    1,
    sizeof (gfor_fndecl_size0),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_adjustr,
    1,
    sizeof (gfor_fndecl_adjustr),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_adjustl,
    1,
    sizeof (gfor_fndecl_adjustl),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_string_repeat,
    1,
    sizeof (gfor_fndecl_string_repeat),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_string_trim,
    1,
    sizeof (gfor_fndecl_string_trim),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_string_verify,
    1,
    sizeof (gfor_fndecl_string_verify),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_string_scan,
    1,
    sizeof (gfor_fndecl_string_scan),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_string_index,
    1,
    sizeof (gfor_fndecl_string_index),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_string_len_trim,
    1,
    sizeof (gfor_fndecl_string_len_trim),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_concat_string,
    1,
    sizeof (gfor_fndecl_concat_string),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_compare_string,
    1,
    sizeof (gfor_fndecl_compare_string),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_copy_string,
    1,
    sizeof (gfor_fndecl_copy_string),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_math_exponent16,
    1,
    sizeof (gfor_fndecl_math_exponent16),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_math_exponent10,
    1,
    sizeof (gfor_fndecl_math_exponent10),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_math_exponent8,
    1,
    sizeof (gfor_fndecl_math_exponent8),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_math_exponent4,
    1,
    sizeof (gfor_fndecl_math_exponent4),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_math_ishftc16,
    1,
    sizeof (gfor_fndecl_math_ishftc16),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_math_ishftc8,
    1,
    sizeof (gfor_fndecl_math_ishftc8),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_math_ishftc4,
    1,
    sizeof (gfor_fndecl_math_ishftc4),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_math_cpowl16,
    1,
    sizeof (gfor_fndecl_math_cpowl16),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_math_cpowl10,
    1,
    sizeof (gfor_fndecl_math_cpowl10),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_math_cpow,
    1,
    sizeof (gfor_fndecl_math_cpow),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_math_cpowf,
    1,
    sizeof (gfor_fndecl_math_cpowf),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_math_powi[0][0].integer,
    1 * (4) * (3),
    sizeof (gfor_fndecl_math_powi[0][0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_math_powi[0][0].real,
    1 * (4) * (3),
    sizeof (gfor_fndecl_math_powi[0][0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_math_powi[0][0].cmplx,
    1 * (4) * (3),
    sizeof (gfor_fndecl_math_powi[0][0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_associated,
    1,
    sizeof (gfor_fndecl_associated),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_in_unpack,
    1,
    sizeof (gfor_fndecl_in_unpack),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_in_pack,
    1,
    sizeof (gfor_fndecl_in_pack),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_fdate,
    1,
    sizeof (gfor_fndecl_fdate),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_ctime,
    1,
    sizeof (gfor_fndecl_ctime),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_ttynam,
    1,
    sizeof (gfor_fndecl_ttynam),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_set_std,
    1,
    sizeof (gfor_fndecl_set_std),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_set_fpe,
    1,
    sizeof (gfor_fndecl_set_fpe),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_runtime_error,
    1,
    sizeof (gfor_fndecl_runtime_error),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_select_string,
    1,
    sizeof (gfor_fndecl_select_string),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_stop_string,
    1,
    sizeof (gfor_fndecl_stop_string),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_stop_numeric,
    1,
    sizeof (gfor_fndecl_stop_numeric),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_pause_string,
    1,
    sizeof (gfor_fndecl_pause_string),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_pause_numeric,
    1,
    sizeof (gfor_fndecl_pause_numeric),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_deallocate,
    1,
    sizeof (gfor_fndecl_deallocate),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_allocate64_array,
    1,
    sizeof (gfor_fndecl_allocate64_array),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_allocate_array,
    1,
    sizeof (gfor_fndecl_allocate_array),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_allocate64,
    1,
    sizeof (gfor_fndecl_allocate64),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_allocate,
    1,
    sizeof (gfor_fndecl_allocate),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_internal_free,
    1,
    sizeof (gfor_fndecl_internal_free),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_internal_realloc64,
    1,
    sizeof (gfor_fndecl_internal_realloc64),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_internal_realloc,
    1,
    sizeof (gfor_fndecl_internal_realloc),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_internal_malloc64,
    1,
    sizeof (gfor_fndecl_internal_malloc64),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfor_fndecl_internal_malloc,
    1,
    sizeof (gfor_fndecl_internal_malloc),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfc_static_ctors,
    1,
    sizeof (gfc_static_ctors),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfc_charlen_type_node,
    1,
    sizeof (gfc_charlen_type_node),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &pchar_type_node,
    1,
    sizeof (pchar_type_node),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &pvoid_type_node,
    1,
    sizeof (pvoid_type_node),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &ppvoid_type_node,
    1,
    sizeof (ppvoid_type_node),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfc_character1_type_node,
    1,
    sizeof (gfc_character1_type_node),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfc_array_range_type,
    1,
    sizeof (gfc_array_range_type),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfc_array_index_type,
    1,
    sizeof (gfc_array_index_type),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  LAST_GGC_ROOT_TAB
};

extern const struct ggc_root_tab gt_ggc_r_gt_coverage_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_alias_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_cselib_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_cgraph_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_dbxout_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_dwarf2out_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_dwarf2asm_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_dojump_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_profile_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_emit_rtl_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_except_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_explow_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_expr_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_function_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_gcse_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_optabs_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_regclass_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_reg_stack_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_cfglayout_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_sdbout_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_stor_layout_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_stringpool_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_varasm_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_mudflap_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_ssanames_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_ssa_address_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_ssa_propagate_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_gimplify_h[];
extern const struct ggc_root_tab gt_ggc_r_gtype_desc_c[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_vect_generic_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_ssa_operands_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_nested_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_ipa_reference_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_targhooks_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_i386_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_fortran_f95_lang_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_fortran_trans_decl_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_fortran_trans_intrinsic_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_fortran_trans_io_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_fortran_trans_types_h[];
extern const struct ggc_root_tab gt_ggc_r_gtype_fortran_h[];
const struct ggc_root_tab * const gt_ggc_rtab[] = {
  gt_ggc_r_gt_coverage_h,
  gt_ggc_r_gt_alias_h,
  gt_ggc_r_gt_cselib_h,
  gt_ggc_r_gt_cgraph_h,
  gt_ggc_r_gt_dbxout_h,
  gt_ggc_r_gt_dwarf2out_h,
  gt_ggc_r_gt_dwarf2asm_h,
  gt_ggc_r_gt_dojump_h,
  gt_ggc_r_gt_tree_profile_h,
  gt_ggc_r_gt_emit_rtl_h,
  gt_ggc_r_gt_except_h,
  gt_ggc_r_gt_explow_h,
  gt_ggc_r_gt_expr_h,
  gt_ggc_r_gt_function_h,
  gt_ggc_r_gt_gcse_h,
  gt_ggc_r_gt_optabs_h,
  gt_ggc_r_gt_regclass_h,
  gt_ggc_r_gt_reg_stack_h,
  gt_ggc_r_gt_cfglayout_h,
  gt_ggc_r_gt_sdbout_h,
  gt_ggc_r_gt_stor_layout_h,
  gt_ggc_r_gt_stringpool_h,
  gt_ggc_r_gt_tree_h,
  gt_ggc_r_gt_varasm_h,
  gt_ggc_r_gt_tree_mudflap_h,
  gt_ggc_r_gt_tree_ssanames_h,
  gt_ggc_r_gt_tree_ssa_address_h,
  gt_ggc_r_gt_tree_ssa_propagate_h,
  gt_ggc_r_gt_gimplify_h,
  gt_ggc_r_gtype_desc_c,
  gt_ggc_r_gt_tree_vect_generic_h,
  gt_ggc_r_gt_tree_ssa_operands_h,
  gt_ggc_r_gt_tree_nested_h,
  gt_ggc_r_gt_ipa_reference_h,
  gt_ggc_r_gt_targhooks_h,
  gt_ggc_r_gt_i386_h,
  gt_ggc_r_gt_fortran_f95_lang_h,
  gt_ggc_r_gt_fortran_trans_decl_h,
  gt_ggc_r_gt_fortran_trans_intrinsic_h,
  gt_ggc_r_gt_fortran_trans_io_h,
  gt_ggc_r_gt_fortran_trans_types_h,
  gt_ggc_r_gtype_fortran_h,
  NULL
};
extern const struct ggc_root_tab gt_ggc_rd_gt_alias_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_bitmap_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_emit_rtl_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_lists_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_tree_phinodes_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_tree_iterator_h[];
const struct ggc_root_tab * const gt_ggc_deletable_rtab[] = {
  gt_ggc_rd_gt_alias_h,
  gt_ggc_rd_gt_bitmap_h,
  gt_ggc_rd_gt_emit_rtl_h,
  gt_ggc_rd_gt_lists_h,
  gt_ggc_rd_gt_tree_phinodes_h,
  gt_ggc_rd_gt_tree_iterator_h,
  NULL
};
extern const struct ggc_cache_tab gt_ggc_rc_gt_emit_rtl_h[];
extern const struct ggc_cache_tab gt_ggc_rc_gt_tree_h[];
extern const struct ggc_cache_tab gt_ggc_rc_gt_tree_ssa_structalias_h[];
const struct ggc_cache_tab * const gt_ggc_cache_rtab[] = {
  gt_ggc_rc_gt_emit_rtl_h,
  gt_ggc_rc_gt_tree_h,
  gt_ggc_rc_gt_tree_ssa_structalias_h,
  NULL
};
extern const struct ggc_root_tab gt_pch_rc_gt_emit_rtl_h[];
extern const struct ggc_root_tab gt_pch_rc_gt_tree_h[];
extern const struct ggc_root_tab gt_pch_rc_gt_tree_ssa_structalias_h[];
const struct ggc_root_tab * const gt_pch_cache_rtab[] = {
  gt_pch_rc_gt_emit_rtl_h,
  gt_pch_rc_gt_tree_h,
  gt_pch_rc_gt_tree_ssa_structalias_h,
  NULL
};
const struct ggc_root_tab gt_pch_rs_gtype_fortran_h[] = {
  { &gfor_fndecl_math_powi, 1, sizeof (gfor_fndecl_math_powi), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

extern const struct ggc_root_tab gt_pch_rs_gt_alias_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_dbxout_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_dwarf2out_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_dwarf2asm_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_emit_rtl_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_except_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_function_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_sdbout_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_tree_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_varasm_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_tree_ssa_address_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_gimplify_h[];
extern const struct ggc_root_tab gt_pch_rs_gtype_desc_c[];
extern const struct ggc_root_tab gt_pch_rs_gt_tree_vect_generic_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_fortran_trans_intrinsic_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_fortran_trans_io_h[];
extern const struct ggc_root_tab gt_pch_rs_gtype_fortran_h[];
const struct ggc_root_tab * const gt_pch_scalar_rtab[] = {
  gt_pch_rs_gt_alias_h,
  gt_pch_rs_gt_dbxout_h,
  gt_pch_rs_gt_dwarf2out_h,
  gt_pch_rs_gt_dwarf2asm_h,
  gt_pch_rs_gt_emit_rtl_h,
  gt_pch_rs_gt_except_h,
  gt_pch_rs_gt_function_h,
  gt_pch_rs_gt_sdbout_h,
  gt_pch_rs_gt_tree_h,
  gt_pch_rs_gt_varasm_h,
  gt_pch_rs_gt_tree_ssa_address_h,
  gt_pch_rs_gt_gimplify_h,
  gt_pch_rs_gtype_desc_c,
  gt_pch_rs_gt_tree_vect_generic_h,
  gt_pch_rs_gt_fortran_trans_intrinsic_h,
  gt_pch_rs_gt_fortran_trans_io_h,
  gt_pch_rs_gtype_fortran_h,
  NULL
};
