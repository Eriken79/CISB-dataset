/* Type information for java/expr.c.
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

/* GC roots.  */

const struct ggc_root_tab gt_ggc_r_gt_java_expr_h[] = {
  {
    &class_ident,
    1,
    sizeof (class_ident),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &page_size,
    1,
    sizeof (page_size),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &quick_stack,
    1,
    sizeof (quick_stack),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &ncode_ident,
    1,
    sizeof (ncode_ident),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &methods_ident,
    1,
    sizeof (methods_ident),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &operand_type[0],
    1 * (59),
    sizeof (operand_type[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  LAST_GGC_ROOT_TAB
};

const struct ggc_root_tab gt_ggc_rd_gt_java_expr_h[] = {
  { &tree_list_free_list, 1, sizeof (tree_list_free_list), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

