/* Generated automatically by the program `genextract'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "toplev.h"

static rtx junk ATTRIBUTE_UNUSED;
void
insn_extract (rtx insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED;

  switch (INSN_CODE (insn))
    {
    case -1:
      fatal_insn_not_found (insn);

    case 1143:  /* sync_xordi */
    case 1142:  /* sync_xorsi */
    case 1141:  /* sync_xorhi */
    case 1140:  /* sync_xorqi */
    case 1139:  /* sync_anddi */
    case 1138:  /* sync_andsi */
    case 1137:  /* sync_andhi */
    case 1136:  /* sync_andqi */
    case 1135:  /* sync_iordi */
    case 1134:  /* sync_iorsi */
    case 1133:  /* sync_iorhi */
    case 1132:  /* sync_iorqi */
    case 1131:  /* sync_subdi */
    case 1130:  /* sync_subsi */
    case 1129:  /* sync_subhi */
    case 1128:  /* sync_subqi */
    case 1127:  /* sync_adddi */
    case 1126:  /* sync_addsi */
    case 1125:  /* sync_addhi */
    case 1124:  /* sync_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1123:  /* sync_lock_test_and_setdi */
    case 1122:  /* sync_lock_test_and_setsi */
    case 1121:  /* sync_lock_test_and_sethi */
    case 1120:  /* sync_lock_test_and_setqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1119:  /* sync_old_adddi */
    case 1118:  /* sync_old_addsi */
    case 1117:  /* sync_old_addhi */
    case 1116:  /* sync_old_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 1115:  /* *sync_compare_and_swap_ccdi */
    case 1114:  /* *sync_compare_and_swap_ccsi */
    case 1113:  /* *sync_compare_and_swap_cchi */
    case 1112:  /* *sync_compare_and_swap_ccqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 1;
      break;

    case 1111:  /* sync_compare_and_swapdi */
    case 1110:  /* sync_compare_and_swapsi */
    case 1109:  /* sync_compare_and_swaphi */
    case 1108:  /* sync_compare_and_swapqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 1023:  /* mmx_pi2fw */
    case 1022:  /* mmx_pf2iw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 995:  /* sse3_monitor */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 994:  /* sse3_mwait */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 993:  /* *sse2_lfence */
    case 992:  /* *sse2_mfence */
    case 990:  /* *sse_sfence */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1105:  /* *mmx_maskmovq_rex */
    case 1104:  /* *mmx_maskmovq */
    case 987:  /* *sse2_maskmovdqu_rex64 */
    case 986:  /* *sse2_maskmovdqu */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1101:  /* mmx_uavgv4hi3 */
    case 1100:  /* mmx_uavgv8qi3 */
    case 1050:  /* mmx_pmulhrwv4hi3 */
    case 981:  /* sse2_uavgv8hi3 */
    case 980:  /* sse2_uavgv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 970:  /* sse2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 1093:  /* mmx_pshufw_1 */
    case 969:  /* sse2_pshuflw_1 */
    case 968:  /* sse2_pshufd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 1092:  /* mmx_pextrw */
    case 967:  /* sse2_pextrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 1091:  /* *mmx_pinsrw */
    case 966:  /* *sse2_pinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1084:  /* mmx_packuswb */
    case 1083:  /* mmx_packssdw */
    case 1082:  /* mmx_packsswb */
    case 957:  /* sse2_packuswb */
    case 956:  /* sse2_packssdw */
    case 955:  /* sse2_packsswb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1049:  /* mmx_pmaddwd */
    case 918:  /* sse2_pmaddwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1051:  /* sse2_umulsidi3 */
    case 917:  /* sse2_umulv2siv2di3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 1048:  /* mmx_umulv4hi3_highpart */
    case 1047:  /* mmx_smulv4hi3_highpart */
    case 916:  /* sse2_umulv8hi3_highpart */
    case 915:  /* sse2_smulv8hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 896:  /* *vec_concatv2df_sse3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 888:  /* sse2_shufpd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 1016:  /* mmx_hsubv2sf3 */
    case 1015:  /* mmx_haddv2sf3 */
    case 856:  /* sse3_hsubv2df3 */
    case 855:  /* sse3_haddv2df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 971:  /* sse2_loadld */
    case 834:  /* *vec_setv4sf_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 893:  /* sse2_movsd */
    case 830:  /* sse_movss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 892:  /* sse2_loadlpd */
    case 829:  /* sse_loadlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 825:  /* sse_shufps_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 886:  /* *sse3_movddup */
    case 824:  /* sse3_movsldup */
    case 823:  /* sse3_movshdup */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1090:  /* mmx_punpckldq */
    case 1089:  /* mmx_punpckhdq */
    case 1088:  /* mmx_punpcklwd */
    case 1087:  /* mmx_punpckhwd */
    case 1086:  /* mmx_punpcklbw */
    case 1085:  /* mmx_punpckhbw */
    case 965:  /* sse2_punpcklqdq */
    case 964:  /* sse2_punpckhqdq */
    case 963:  /* sse2_punpckldq */
    case 962:  /* sse2_punpckhdq */
    case 961:  /* sse2_punpcklwd */
    case 960:  /* sse2_punpckhwd */
    case 959:  /* sse2_punpcklbw */
    case 958:  /* sse2_punpckhbw */
    case 887:  /* sse2_unpcklpd */
    case 885:  /* sse2_unpckhpd */
    case 822:  /* sse_unpcklps */
    case 821:  /* sse_unpckhps */
    case 820:  /* sse_movlhps */
    case 819:  /* sse_movhlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 808:  /* sse_cvtps2pi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 882:  /* sse2_cvtss2sd */
    case 881:  /* sse2_cvtsd2ss */
    case 873:  /* sse2_cvtsi2sdq */
    case 872:  /* sse2_cvtsi2sd */
    case 811:  /* sse_cvtsi2ssq */
    case 810:  /* sse_cvtsi2ss */
    case 807:  /* sse_cvtpi2ps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 860:  /* sse2_ucomi */
    case 859:  /* sse2_comi */
    case 798:  /* sse_ucomi */
    case 797:  /* sse_comi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 858:  /* sse2_vmmaskcmpv2df3 */
    case 796:  /* sse_vmmaskcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 794:  /* sse3_hsubv4sf3 */
    case 793:  /* sse3_haddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1017:  /* mmx_addsubv2sf3 */
    case 854:  /* sse3_addsubv2df3 */
    case 792:  /* sse3_addsubv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 879:  /* *sse2_cvtpd2dq */
    case 777:  /* sse_vmrsqrtv4sf2 */
    case 775:  /* sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 853:  /* sse2_vmsminv2df3 */
    case 852:  /* *sse2_vmsminv2df3_finite */
    case 849:  /* sse2_vmsmaxv2df3 */
    case 848:  /* *sse2_vmsmaxv2df3_finite */
    case 843:  /* sse2_vmdivv2df3 */
    case 841:  /* sse2_vmmulv2df3 */
    case 839:  /* sse2_vmsubv2df3 */
    case 837:  /* sse2_vmaddv2df3 */
    case 787:  /* sse_vmsminv4sf3 */
    case 786:  /* *sse_vmsminv4sf3_finite */
    case 783:  /* sse_vmsmaxv4sf3 */
    case 782:  /* *sse_vmsmaxv4sf3_finite */
    case 773:  /* sse_vmdivv4sf3 */
    case 771:  /* sse_vmmulv4sf3 */
    case 769:  /* sse_vmsubv4sf3 */
    case 767:  /* sse_vmaddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 751:  /* stack_tls_protect_test_di */
    case 750:  /* stack_tls_protect_test_si */
    case 749:  /* stack_protect_test_di */
    case 748:  /* stack_protect_test_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 741:  /* *prefetch_sse_rex */
    case 740:  /* *prefetch_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 2));
      break;

    case 739:  /* *sse_prologue_save_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 1));
      break;

    case 737:  /* *sibcall_value_1_rex64_v */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1075:  /* mmx_nandv2si3 */
    case 1074:  /* mmx_nandv4hi3 */
    case 1073:  /* mmx_nandv8qi3 */
    case 946:  /* sse2_nandv2di3 */
    case 945:  /* sse2_nandv4si3 */
    case 944:  /* sse2_nandv8hi3 */
    case 943:  /* sse2_nandv16qi3 */
    case 891:  /* sse2_loadhpd */
    case 883:  /* *sse2_cvtpd2ps */
    case 880:  /* *sse2_cvttpd2dq */
    case 866:  /* *nanddf3 */
    case 862:  /* sse2_nandv2df3 */
    case 845:  /* sse2_vmsqrtv2df2 */
    case 827:  /* sse_loadhps */
    case 804:  /* *nandsf3 */
    case 800:  /* sse_nandv4sf3 */
    case 779:  /* sse_vmsqrtv4sf2 */
    case 736:  /* *sibcall_value_1_rex64 */
    case 735:  /* *call_value_1_rex64 */
    case 734:  /* *sibcall_value_1 */
    case 733:  /* *call_value_1 */
    case 732:  /* *call_value_0_rex64 */
    case 731:  /* *call_value_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 730:  /* *call_value_pop_1 */
    case 729:  /* *call_value_pop_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 728:  /* allocate_stack_worker_rex64 */
    case 727:  /* allocate_stack_worker_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 726:  /* pro_epilogue_adjust_stack_rex64_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1102:  /* mmx_psadbw */
    case 1014:  /* mmx_rsqit1v2sf3 */
    case 1012:  /* mmx_rcpit2v2sf3 */
    case 1011:  /* mmx_rcpit1v2sf3 */
    case 982:  /* sse2_psadbw */
    case 791:  /* *ieee_smaxv2df3 */
    case 790:  /* *ieee_sminv2df3 */
    case 789:  /* *ieee_smaxv4sf3 */
    case 788:  /* *ieee_sminv4sf3 */
    case 723:  /* *ieee_smaxdf3 */
    case 722:  /* *ieee_smindf3 */
    case 721:  /* *ieee_smaxsf3 */
    case 720:  /* *ieee_sminsf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1097:  /* *mmx_concatv2si */
    case 1081:  /* mmx_xorv2si3 */
    case 1080:  /* mmx_xorv4hi3 */
    case 1079:  /* mmx_xorv8qi3 */
    case 1078:  /* mmx_iorv2si3 */
    case 1077:  /* mmx_iorv4hi3 */
    case 1076:  /* mmx_iorv8qi3 */
    case 1072:  /* mmx_andv2si3 */
    case 1071:  /* mmx_andv4hi3 */
    case 1070:  /* mmx_andv8qi3 */
    case 1069:  /* mmx_gtv2si3 */
    case 1068:  /* mmx_gtv4hi3 */
    case 1067:  /* mmx_gtv8qi3 */
    case 1066:  /* mmx_eqv2si3 */
    case 1065:  /* mmx_eqv4hi3 */
    case 1064:  /* mmx_eqv8qi3 */
    case 1062:  /* mmx_ashlv2si3 */
    case 1061:  /* mmx_ashlv4hi3 */
    case 1059:  /* mmx_lshrv2si3 */
    case 1058:  /* mmx_lshrv4hi3 */
    case 1057:  /* mmx_ashrv2si3 */
    case 1056:  /* mmx_ashrv4hi3 */
    case 1055:  /* mmx_sminv4hi3 */
    case 1054:  /* mmx_uminv8qi3 */
    case 1053:  /* mmx_smaxv4hi3 */
    case 1052:  /* mmx_umaxv8qi3 */
    case 1046:  /* mmx_mulv4hi3 */
    case 1045:  /* mmx_ussubv4hi3 */
    case 1044:  /* mmx_ussubv8qi3 */
    case 1043:  /* mmx_sssubv4hi3 */
    case 1042:  /* mmx_sssubv8qi3 */
    case 1040:  /* mmx_subv2si3 */
    case 1039:  /* mmx_subv4hi3 */
    case 1038:  /* mmx_subv8qi3 */
    case 1037:  /* mmx_usaddv4hi3 */
    case 1036:  /* mmx_usaddv8qi3 */
    case 1035:  /* mmx_ssaddv4hi3 */
    case 1034:  /* mmx_ssaddv8qi3 */
    case 1032:  /* mmx_addv2si3 */
    case 1031:  /* mmx_addv4hi3 */
    case 1030:  /* mmx_addv8qi3 */
    case 1027:  /* *mmx_concatv2sf */
    case 1020:  /* mmx_eqv2sf3 */
    case 1019:  /* mmx_gev2sf3 */
    case 1018:  /* mmx_gtv2sf3 */
    case 1009:  /* mmx_sminv2sf3 */
    case 1008:  /* mmx_smaxv2sf3 */
    case 1007:  /* mmx_mulv2sf3 */
    case 1006:  /* mmx_subv2sf3 */
    case 1005:  /* mmx_addv2sf3 */
    case 979:  /* *vec_concatv2di */
    case 978:  /* *vec_concatv4si_1 */
    case 977:  /* *sse1_concatv2si */
    case 976:  /* *sse2_concatv2si */
    case 954:  /* *xorv2di3 */
    case 953:  /* *xorv4si3 */
    case 952:  /* *xorv8hi3 */
    case 951:  /* *xorv16qi3 */
    case 950:  /* *iorv2di3 */
    case 949:  /* *iorv4si3 */
    case 948:  /* *iorv8hi3 */
    case 947:  /* *iorv16qi3 */
    case 942:  /* *andv2di3 */
    case 941:  /* *andv4si3 */
    case 940:  /* *andv8hi3 */
    case 939:  /* *andv16qi3 */
    case 938:  /* sse2_gtv4si3 */
    case 937:  /* sse2_gtv8hi3 */
    case 936:  /* sse2_gtv16qi3 */
    case 935:  /* sse2_eqv4si3 */
    case 934:  /* sse2_eqv8hi3 */
    case 933:  /* sse2_eqv16qi3 */
    case 932:  /* *sminv8hi3 */
    case 931:  /* *uminv16qi3 */
    case 930:  /* *smaxv8hi3 */
    case 929:  /* *umaxv16qi3 */
    case 928:  /* sse2_lshrti3 */
    case 927:  /* sse2_ashlti3 */
    case 926:  /* ashlv2di3 */
    case 925:  /* ashlv4si3 */
    case 924:  /* ashlv8hi3 */
    case 923:  /* lshrv2di3 */
    case 922:  /* lshrv4si3 */
    case 921:  /* lshrv8hi3 */
    case 920:  /* ashrv4si3 */
    case 919:  /* ashrv8hi3 */
    case 914:  /* *mulv8hi3 */
    case 913:  /* sse2_ussubv8hi3 */
    case 912:  /* sse2_ussubv16qi3 */
    case 911:  /* sse2_sssubv8hi3 */
    case 910:  /* sse2_sssubv16qi3 */
    case 909:  /* *subv2di3 */
    case 908:  /* *subv4si3 */
    case 907:  /* *subv8hi3 */
    case 906:  /* *subv16qi3 */
    case 905:  /* sse2_usaddv8hi3 */
    case 904:  /* sse2_usaddv16qi3 */
    case 903:  /* sse2_ssaddv8hi3 */
    case 902:  /* sse2_ssaddv16qi3 */
    case 901:  /* *addv2di3 */
    case 900:  /* *addv4si3 */
    case 899:  /* *addv8hi3 */
    case 898:  /* *addv16qi3 */
    case 897:  /* *vec_concatv2df */
    case 868:  /* *xordf3 */
    case 867:  /* *iordf3 */
    case 865:  /* *anddf3 */
    case 864:  /* *xorv2df3 */
    case 863:  /* *iorv2df3 */
    case 861:  /* *andv2df3 */
    case 851:  /* *sminv2df3 */
    case 850:  /* *sminv2df3_finite */
    case 847:  /* *smaxv2df3 */
    case 846:  /* *smaxv2df3_finite */
    case 842:  /* *divv2df3 */
    case 840:  /* *mulv2df3 */
    case 838:  /* *subv2df3 */
    case 836:  /* *addv2df3 */
    case 833:  /* *sse_concatv4sf */
    case 832:  /* *sse_concatv2sf */
    case 806:  /* *xorsf3 */
    case 805:  /* *iorsf3 */
    case 803:  /* *andsf3 */
    case 802:  /* *xorv4sf3 */
    case 801:  /* *iorv4sf3 */
    case 799:  /* *andv4sf3 */
    case 785:  /* *sminv4sf3 */
    case 784:  /* *sminv4sf3_finite */
    case 781:  /* *smaxv4sf3 */
    case 780:  /* *smaxv4sf3_finite */
    case 772:  /* *divv4sf3 */
    case 770:  /* *mulv4sf3 */
    case 768:  /* *subv4sf3 */
    case 766:  /* *addv4sf3 */
    case 719:  /* smaxdf3 */
    case 718:  /* smindf3 */
    case 717:  /* smaxsf3 */
    case 716:  /* sminsf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 711:  /* *movqicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 715:  /* *movxfcc_1 */
    case 714:  /* *movdfcc_1_rex64 */
    case 713:  /* *movdfcc_1 */
    case 712:  /* *movsfcc_1_387 */
    case 710:  /* *movhicc_noc */
    case 709:  /* *movsicc_noc */
    case 707:  /* *movdicc_c_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 705:  /* *strlenqi_rex_1 */
    case 704:  /* *strlenqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 703:  /* *cmpstrnqi_rex_1 */
    case 702:  /* *cmpstrnqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 6), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 701:  /* *cmpstrnqi_nz_rex_1 */
    case 700:  /* *cmpstrnqi_nz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 6), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 699:  /* *rep_stosqi_rex64 */
    case 698:  /* *rep_stosqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 697:  /* *rep_stossi_rex64 */
    case 696:  /* *rep_stossi */
    case 695:  /* *rep_stosdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 694:  /* *strsetqi_rex_1 */
    case 693:  /* *strsetqi_1 */
    case 692:  /* *strsethi_rex_1 */
    case 691:  /* *strsethi_1 */
    case 690:  /* *strsetsi_rex_1 */
    case 689:  /* *strsetsi_1 */
    case 688:  /* *strsetdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 687:  /* *rep_movqi_rex64 */
    case 686:  /* *rep_movqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 5;
      break;

    case 685:  /* *rep_movsi_rex64 */
    case 684:  /* *rep_movsi */
    case 683:  /* *rep_movdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      break;

    case 682:  /* *strmovqi_rex_1 */
    case 681:  /* *strmovqi_1 */
    case 680:  /* *strmovhi_rex_1 */
    case 679:  /* *strmovhi_1 */
    case 678:  /* *strmovsi_rex_1 */
    case 677:  /* *strmovsi_1 */
    case 676:  /* *strmovdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 666:  /* fistdi2_ceil_with_temp */
    case 655:  /* fistdi2_floor_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 670:  /* fistsi2_ceil_with_temp */
    case 669:  /* fisthi2_ceil_with_temp */
    case 665:  /* fistdi2_ceil */
    case 659:  /* fistsi2_floor_with_temp */
    case 658:  /* fisthi2_floor_with_temp */
    case 654:  /* fistdi2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 673:  /* frndintxf2_mask_pm */
    case 671:  /* frndintxf2_trunc */
    case 664:  /* *fistdi2_ceil_1 */
    case 663:  /* *fistsi2_ceil_1 */
    case 662:  /* *fisthi2_ceil_1 */
    case 660:  /* frndintxf2_ceil */
    case 653:  /* *fistdi2_floor_1 */
    case 652:  /* *fistsi2_floor_1 */
    case 651:  /* *fisthi2_floor_1 */
    case 649:  /* frndintxf2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 674:  /* frndintxf2_mask_pm_i387 */
    case 672:  /* frndintxf2_trunc_i387 */
    case 668:  /* fistsi2_ceil */
    case 667:  /* fisthi2_ceil */
    case 661:  /* frndintxf2_ceil_i387 */
    case 657:  /* fistsi2_floor */
    case 656:  /* fisthi2_floor */
    case 650:  /* frndintxf2_floor_i387 */
    case 642:  /* fistdi2_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 747:  /* stack_tls_protect_set_di */
    case 746:  /* stack_tls_protect_set_si */
    case 745:  /* stack_protect_set_di */
    case 744:  /* stack_protect_set_si */
    case 648:  /* fistsi2_with_temp */
    case 647:  /* fisthi2_with_temp */
    case 641:  /* fistdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 635:  /* fyl2xp1_xf3 */
    case 634:  /* fyl2x_xf3 */
    case 633:  /* atan2xf3_1 */
    case 632:  /* atan2sf3_1 */
    case 631:  /* atan2df3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 626:  /* *sincosextendsfdf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 636:  /* *fxtractxf3 */
    case 630:  /* *tanxf3_1 */
    case 629:  /* *tansf3_1 */
    case 628:  /* *tandf3_1 */
    case 627:  /* sincosxf3 */
    case 625:  /* sincossf3 */
    case 624:  /* sincosdf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 875:  /* sse2_cvtsd2siq */
    case 874:  /* sse2_cvtsd2si */
    case 813:  /* sse_cvtss2siq */
    case 812:  /* sse_cvtss2si */
    case 622:  /* *cosextendsfdf2 */
    case 618:  /* *sinextendsfdf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 1103:  /* mmx_pmovmskb */
    case 1013:  /* mmx_rsqrtv2sf2 */
    case 1010:  /* mmx_rcpv2sf2 */
    case 1004:  /* sse_movntdi */
    case 985:  /* sse2_pmovmskb */
    case 984:  /* sse2_movmskpd */
    case 983:  /* sse_movmskps */
    case 870:  /* sse2_cvtpd2pi */
    case 817:  /* sse2_cvtps2dq */
    case 776:  /* sse_rsqrtv4sf2 */
    case 774:  /* sse_rcpv4sf2 */
    case 765:  /* sse3_lddqu */
    case 764:  /* sse2_movntsi */
    case 763:  /* sse2_movntv2di */
    case 762:  /* sse2_movntv2df */
    case 761:  /* sse_movntv4sf */
    case 760:  /* sse2_movdqu */
    case 759:  /* sse2_movupd */
    case 758:  /* sse_movups */
    case 646:  /* fistsi2 */
    case 645:  /* fisthi2 */
    case 644:  /* *fistsi2_1 */
    case 643:  /* *fisthi2_1 */
    case 640:  /* *fistdi2_1 */
    case 639:  /* frndintxf2 */
    case 637:  /* *f2xm1xf2 */
    case 623:  /* *cosxf2 */
    case 621:  /* *cossf2 */
    case 620:  /* *cosdf2 */
    case 619:  /* *sinxf2 */
    case 617:  /* *sinsf2 */
    case 616:  /* *sindf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 638:  /* *fscalexf4 */
    case 615:  /* fprem1xf4 */
    case 614:  /* fpremxf4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      break;

    case 603:  /* *fop_xf_6_i387 */
    case 594:  /* *fop_df_6_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 602:  /* *fop_xf_5_i387 */
    case 600:  /* *fop_xf_3si_i387 */
    case 599:  /* *fop_xf_3hi_i387 */
    case 593:  /* *fop_df_5_i387 */
    case 591:  /* *fop_df_3si_i387 */
    case 590:  /* *fop_df_3hi_i387 */
    case 581:  /* *fop_sf_3si_i387 */
    case 580:  /* *fop_sf_3hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 601:  /* *fop_xf_4_i387 */
    case 598:  /* *fop_xf_2si_i387 */
    case 597:  /* *fop_xf_2hi_i387 */
    case 592:  /* *fop_df_4_i387 */
    case 589:  /* *fop_df_2si_i387 */
    case 588:  /* *fop_df_2hi_i387 */
    case 579:  /* *fop_sf_2si_i387 */
    case 578:  /* *fop_sf_2hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 857:  /* sse2_maskcmpv2df3 */
    case 795:  /* sse_maskcmpv4sf3 */
    case 596:  /* *fop_xf_1_i387 */
    case 595:  /* *fop_xf_comm_i387 */
    case 587:  /* *fop_df_1_i387 */
    case 586:  /* *fop_df_1_sse */
    case 585:  /* *fop_df_1_mixed */
    case 584:  /* *fop_df_comm_i387 */
    case 583:  /* *fop_df_comm_sse */
    case 582:  /* *fop_df_comm_mixed */
    case 577:  /* *fop_sf_1_i387 */
    case 576:  /* *fop_sf_1_sse */
    case 575:  /* *fop_sf_1_mixed */
    case 574:  /* *fop_sf_comm_i387 */
    case 573:  /* *fop_sf_comm_sse */
    case 572:  /* *fop_sf_comm_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 571:  /* *add_tp_di */
    case 569:  /* *add_tp_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 567:  /* *tls_local_dynamic_32_once */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 565:  /* *tls_local_dynamic_base_32_sun */
    case 564:  /* *tls_local_dynamic_base_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 563:  /* *tls_global_dynamic_64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 562:  /* *tls_global_dynamic_32_sun */
    case 561:  /* *tls_global_dynamic_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 560:  /* *bsr_rex64 */
    case 559:  /* *bsr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 556:  /* *ffsdi_1 */
    case 554:  /* *ffssi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 543:  /* return_indirect_internal */
    case 542:  /* return_pop_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1107:  /* mmx_femms */
    case 1106:  /* mmx_emms */
    case 738:  /* trap */
    case 675:  /* cld */
    case 551:  /* leave_rex64 */
    case 550:  /* leave */
    case 544:  /* nop */
    case 541:  /* return_internal_long */
    case 540:  /* return_internal */
      break;

    case 991:  /* sse2_clflush */
    case 988:  /* sse_ldmxcsr */
    case 545:  /* align */
    case 539:  /* blockage */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 532:  /* *call_pop_1 */
    case 531:  /* *call_pop_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 530:  /* *tablejump_1_rtx64 */
    case 529:  /* *tablejump_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 538:  /* *sibcall_1_rex64_v */
    case 528:  /* *indirect_jump_rtx64 */
    case 527:  /* *indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 526:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 525:  /* *fp_jcc_8si_387 */
    case 524:  /* *fp_jcc_8hi_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 522:  /* *fp_jcc_6_387 */
    case 520:  /* *fp_jcc_4_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 523:  /* *fp_jcc_7_387 */
    case 521:  /* *fp_jcc_5_387 */
    case 519:  /* *fp_jcc_3_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 518:  /* *fp_jcc_2_387 */
    case 517:  /* *fp_jcc_2_sse */
    case 516:  /* *fp_jcc_2_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      break;

    case 515:  /* *fp_jcc_1_387 */
    case 514:  /* *fp_jcc_1_sse */
    case 513:  /* *fp_jcc_1_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 512:  /* *jcc_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 511:  /* *jcc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 510:  /* *sse_setccdf */
    case 509:  /* *sse_setccsf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 506:  /* *btcq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2);
      recog_data.dup_num[1] = 1;
      break;

    case 505:  /* *btrq */
    case 504:  /* *btsq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      break;

    case 491:  /* ix86_rotrdi3 */
    case 478:  /* ix86_rotldi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 432:  /* x86_shrd_1 */
    case 425:  /* x86_64_shrd */
    case 412:  /* x86_shld_1 */
    case 408:  /* x86_64_shld */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 453:  /* lshrti3_1 */
    case 423:  /* ashrti3_1 */
    case 406:  /* ashlti3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 401:  /* *one_cmplsi2_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 382:  /* copysigndf3_var */
    case 377:  /* copysignsf3_var */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      break;

    case 381:  /* copysigndf3_const */
    case 376:  /* copysignsf3_const */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 383:  /* *absnegxf2_i387 */
    case 380:  /* *absnegdf2_i387 */
    case 379:  /* *absnegdf2_sse */
    case 378:  /* *absnegdf2_mixed */
    case 375:  /* *absnegsf2_i387 */
    case 374:  /* *absnegsf2_sse */
    case 373:  /* *absnegsf2_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 368:  /* *negsi2_cmpz_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 366:  /* *negsi2_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 405:  /* *one_cmplqi2_2 */
    case 403:  /* *one_cmplhi2_2 */
    case 400:  /* *one_cmplsi2_2 */
    case 397:  /* *one_cmpldi2_2_rex64 */
    case 372:  /* *negqi2_cmpz */
    case 370:  /* *neghi2_cmpz */
    case 367:  /* *negsi2_cmpz */
    case 364:  /* *negdi2_cmpz_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 467:  /* *lshrsi3_cmp_zext */
    case 465:  /* *lshrsi3_cmp_one_bit_zext */
    case 345:  /* *xorsi_2_zext_imm */
    case 323:  /* *iorsi_2_zext_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 566:  /* *tls_local_dynamic_base_64 */
    case 461:  /* *lshrsi3_1_one_bit_zext */
    case 342:  /* *xorsi_1_zext_imm */
    case 320:  /* *iorsi_1_zext_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 360:  /* *xorqi_cc_ext_1_rex64 */
    case 359:  /* *xorqi_cc_ext_1 */
    case 311:  /* *andqi_ext_0_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 357:  /* *xorqi_2_slp */
    case 331:  /* *iorqi_2_slp */
    case 309:  /* *andqi_2_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 296:  /* *testqi_ext_3_rex64 */
    case 295:  /* *testqi_ext_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 294:  /* *testqi_ext_2 */
    case 293:  /* *testqi_ext_1_rex64 */
    case 292:  /* *testqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 291:  /* *testqi_ext_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 284:  /* *udivmodsi4_noext */
    case 282:  /* *udivmoddi4_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 283:  /* udivmodsi4 */
    case 281:  /* udivmoddi4 */
    case 280:  /* divmodhi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 285:  /* *udivmodhi_noext */
    case 279:  /* *divmodsi_noext */
    case 276:  /* *divmoddi_noext_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 278:  /* *divmodsi4_cltd */
    case 277:  /* *divmodsi4_nocltd */
    case 275:  /* *divmoddi4_cltd_rex64 */
    case 274:  /* *divmoddi4_nocltd_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 271:  /* *smulsi3_highpart_zext */
    case 268:  /* *umulsi3_highpart_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 270:  /* *smulsi3_highpart_insn */
    case 269:  /* *smuldi3_highpart_rex64 */
    case 267:  /* *umulsi3_highpart_insn */
    case 266:  /* *umuldi3_highpart_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 265:  /* *mulsidi3_insn */
    case 264:  /* *mulditi3_insn */
    case 263:  /* *umulsidi3_insn */
    case 262:  /* *umulditi3_insn */
    case 261:  /* *mulqihi3_insn */
    case 260:  /* *umulqihi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 247:  /* *subsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 241:  /* subsi3_carry_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      break;

    case 254:  /* *subqi_3 */
    case 250:  /* *subhi_3 */
    case 246:  /* *subsi_3 */
    case 237:  /* *subdi_3_rex63 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 240:  /* subsi3_carry */
    case 239:  /* subhi3_carry */
    case 238:  /* subqi3_carry */
    case 234:  /* subdi3_carry_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 355:  /* *xorqi_ext_2 */
    case 354:  /* *xorqi_ext_1_rex64 */
    case 353:  /* *xorqi_ext_1 */
    case 336:  /* *iorqi_ext_2 */
    case 335:  /* *iorqi_ext_1_rex64 */
    case 334:  /* *iorqi_ext_1 */
    case 314:  /* *andqi_ext_2 */
    case 313:  /* *andqi_ext_1_rex64 */
    case 312:  /* *andqi_ext_1 */
    case 231:  /* *addqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 352:  /* xorqi_ext_0 */
    case 333:  /* iorqi_ext_0 */
    case 310:  /* andqi_ext_0 */
    case 230:  /* *addqi_ext_1_rex64 */
    case 229:  /* addqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 503:  /* *rotrqi3_1_slp */
    case 501:  /* *rotrqi3_1_one_bit_slp */
    case 489:  /* *rotlqi3_1_slp */
    case 487:  /* *rotlqi3_1_one_bit_slp */
    case 475:  /* *lshrqi3_1_slp */
    case 473:  /* *lshrqi3_1_one_bit_slp */
    case 450:  /* *ashrqi3_1_slp */
    case 448:  /* *ashrqi3_1_one_bit_slp */
    case 351:  /* *xorqi_1_slp */
    case 329:  /* *iorqi_1_slp */
    case 306:  /* *andqi_1_slp */
    case 252:  /* *subqi_1_slp */
    case 224:  /* *addqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 213:  /* *addsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 442:  /* *ashrsi3_cmp_zext */
    case 440:  /* *ashrsi3_one_bit_cmp_zext */
    case 416:  /* *ashlsi3_cmp_zext */
    case 344:  /* *xorsi_2_zext */
    case 322:  /* *iorsi_2_zext */
    case 302:  /* *andsi_2_zext */
    case 245:  /* *subsi_2_zext */
    case 211:  /* *addsi_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 497:  /* *rotrsi3_1_zext */
    case 495:  /* *rotrsi3_1_one_bit_zext */
    case 484:  /* *rotlsi3_1_zext */
    case 482:  /* *rotlsi3_1_one_bit_zext */
    case 463:  /* *lshrsi3_1_zext */
    case 438:  /* *ashrsi3_1_zext */
    case 436:  /* *ashrsi3_1_one_bit_zext */
    case 434:  /* *ashrsi3_31_zext */
    case 414:  /* *ashlsi3_1_zext */
    case 341:  /* *xorsi_1_zext */
    case 319:  /* *iorsi_1_zext */
    case 300:  /* *andsi_1_zext */
    case 257:  /* *mulsi3_1_zext */
    case 243:  /* *subsi_1_zext */
    case 209:  /* addsi_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 358:  /* *xorqi_cc_2 */
    case 349:  /* *xorhi_3 */
    case 346:  /* *xorsi_3 */
    case 339:  /* *xordi_3_rex64 */
    case 332:  /* *iorqi_3 */
    case 327:  /* *iorhi_3 */
    case 324:  /* *iorsi_3 */
    case 317:  /* *iordi_3_rex64 */
    case 228:  /* *addqi_5 */
    case 221:  /* *addhi_5 */
    case 215:  /* *addsi_5 */
    case 207:  /* *adddi_5_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 227:  /* *addqi_4 */
    case 220:  /* *addhi_4 */
    case 214:  /* *addsi_4 */
    case 206:  /* *adddi_4_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 226:  /* *addqi_3 */
    case 219:  /* *addhi_3 */
    case 212:  /* *addsi_3 */
    case 205:  /* *adddi_3_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 477:  /* *lshrqi2_cmp */
    case 476:  /* *lshrqi2_one_bit_cmp */
    case 471:  /* *lshrhi3_cmp */
    case 470:  /* *lshrhi3_one_bit_cmp */
    case 466:  /* *lshrsi3_cmp */
    case 464:  /* *lshrsi3_one_bit_cmp */
    case 458:  /* *lshrdi3_cmp_rex64 */
    case 457:  /* *lshrdi3_cmp_one_bit_rex64 */
    case 452:  /* *ashrqi3_cmp */
    case 451:  /* *ashrqi3_one_bit_cmp */
    case 446:  /* *ashrhi3_cmp */
    case 445:  /* *ashrhi3_one_bit_cmp */
    case 441:  /* *ashrsi3_cmp */
    case 439:  /* *ashrsi3_one_bit_cmp */
    case 430:  /* *ashrdi3_cmp_rex64 */
    case 429:  /* *ashrdi3_one_bit_cmp_rex64 */
    case 422:  /* *ashlqi3_cmp */
    case 419:  /* *ashlhi3_cmp */
    case 415:  /* *ashlsi3_cmp */
    case 410:  /* *ashldi3_cmp_rex64 */
    case 356:  /* *xorqi_cc_1 */
    case 348:  /* *xorhi_2 */
    case 343:  /* *xorsi_2 */
    case 338:  /* *xordi_2_rex64 */
    case 330:  /* *iorqi_2 */
    case 326:  /* *iorhi_2 */
    case 321:  /* *iorsi_2 */
    case 316:  /* *iordi_2_rex64 */
    case 308:  /* *andqi_2 */
    case 307:  /* *andqi_2_maybe_si */
    case 304:  /* *andhi_2 */
    case 301:  /* *andsi_2 */
    case 298:  /* *anddi_2 */
    case 253:  /* *subqi_2 */
    case 249:  /* *subhi_2 */
    case 244:  /* *subsi_2 */
    case 236:  /* *subdi_2_rex64 */
    case 225:  /* *addqi_2 */
    case 218:  /* *addhi_2 */
    case 210:  /* *addsi_2 */
    case 204:  /* *adddi_2_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 202:  /* *lea_general_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 201:  /* *lea_general_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 200:  /* *lea_general_2_zext */
    case 198:  /* *lea_general_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 199:  /* *lea_general_2 */
    case 197:  /* *lea_general_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 190:  /* *addsi3_carry_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 192:  /* addqi3_cc */
    case 191:  /* *addsi3_cc */
    case 186:  /* *adddi3_cc_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 189:  /* addsi3_carry */
    case 188:  /* addhi3_carry */
    case 187:  /* addqi3_carry */
    case 185:  /* adddi3_carry_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 725:  /* pro_epilogue_adjust_stack_rex64 */
    case 724:  /* pro_epilogue_adjust_stack_1 */
    case 502:  /* *rotrqi3_1 */
    case 500:  /* *rotrqi3_1_one_bit */
    case 499:  /* *rotrhi3 */
    case 498:  /* *rotrhi3_one_bit */
    case 496:  /* *rotrsi3_1 */
    case 494:  /* *rotrsi3_1_one_bit */
    case 493:  /* *rotrdi3_1_rex64 */
    case 492:  /* *rotrdi3_1_one_bit_rex64 */
    case 490:  /* *rotlqi3_1 */
    case 488:  /* *rotlqi3_1_one_bit */
    case 486:  /* *rotlhi3_1 */
    case 485:  /* *rotlhi3_1_one_bit */
    case 483:  /* *rotlsi3_1 */
    case 481:  /* *rotlsi3_1_one_bit */
    case 480:  /* *rotldi3_1_rex64 */
    case 479:  /* *rotlsi3_1_one_bit_rex64 */
    case 474:  /* *lshrqi3_1 */
    case 472:  /* *lshrqi3_1_one_bit */
    case 469:  /* *lshrhi3_1 */
    case 468:  /* *lshrhi3_1_one_bit */
    case 462:  /* *lshrsi3_1 */
    case 460:  /* *lshrsi3_1_one_bit */
    case 459:  /* *lshrdi3_1 */
    case 456:  /* *lshrdi3_1_rex64 */
    case 455:  /* *lshrdi3_1_one_bit_rex64 */
    case 454:  /* *lshrti3_2 */
    case 449:  /* *ashrqi3_1 */
    case 447:  /* *ashrqi3_1_one_bit */
    case 444:  /* *ashrhi3_1 */
    case 443:  /* *ashrhi3_1_one_bit */
    case 437:  /* *ashrsi3_1 */
    case 435:  /* *ashrsi3_1_one_bit */
    case 433:  /* ashrsi3_31 */
    case 431:  /* *ashrdi3_1 */
    case 428:  /* *ashrdi3_1_rex64 */
    case 427:  /* *ashrdi3_1_one_bit_rex64 */
    case 426:  /* *ashrdi3_63_rex64 */
    case 424:  /* *ashrti3_2 */
    case 421:  /* *ashlqi3_1 */
    case 420:  /* *ashlqi3_1_lea */
    case 418:  /* *ashlhi3_1 */
    case 417:  /* *ashlhi3_1_lea */
    case 413:  /* *ashlsi3_1 */
    case 411:  /* *ashldi3_1 */
    case 409:  /* *ashldi3_1_rex64 */
    case 407:  /* *ashlti3_2 */
    case 350:  /* *xorqi_1 */
    case 347:  /* *xorhi_1 */
    case 340:  /* *xorsi_1 */
    case 337:  /* *xordi_1_rex64 */
    case 328:  /* *iorqi_1 */
    case 325:  /* *iorhi_1 */
    case 318:  /* *iorsi_1 */
    case 315:  /* *iordi_1_rex64 */
    case 305:  /* *andqi_1 */
    case 303:  /* *andhi_1 */
    case 299:  /* *andsi_1 */
    case 297:  /* *anddi_1_rex64 */
    case 273:  /* udivqi3 */
    case 272:  /* divqi3 */
    case 259:  /* *mulqi3_1 */
    case 258:  /* *mulhi3_1 */
    case 256:  /* *mulsi3_1 */
    case 255:  /* *muldi3_1_rex64 */
    case 251:  /* *subqi_1 */
    case 248:  /* *subhi_1 */
    case 242:  /* *subsi_1 */
    case 235:  /* *subdi_1_rex64 */
    case 233:  /* *subdi3_1 */
    case 232:  /* *subti3_1 */
    case 223:  /* *addqi_1 */
    case 222:  /* *addqi_1_lea */
    case 217:  /* *addhi_1 */
    case 216:  /* *addhi_1_lea */
    case 208:  /* *addsi_1 */
    case 203:  /* *adddi_1_rex64 */
    case 184:  /* *adddi3_1 */
    case 183:  /* *addti3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 159:  /* fix_truncdi_i387_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 163:  /* fix_truncsi_i387_with_temp */
    case 162:  /* fix_trunchi_i387_with_temp */
    case 158:  /* fix_truncdi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 161:  /* fix_truncsi_i387 */
    case 160:  /* fix_trunchi_i387 */
    case 154:  /* fix_truncdi_i387_fisttp_with_temp */
    case 153:  /* fix_truncsi_i387_fisttp_with_temp */
    case 152:  /* fix_trunchi_i387_fisttp_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 555:  /* *ffs_rex64 */
    case 553:  /* *ffs_no_cmove */
    case 552:  /* *ffs_cmove */
    case 151:  /* fix_truncdi_i387_fisttp */
    case 150:  /* fix_truncsi_i387_fisttp */
    case 149:  /* fix_trunchi_i387_fisttp */
    case 140:  /* *truncxfdf2_i387 */
    case 138:  /* *truncxfdf2_mixed */
    case 136:  /* *truncxfsf2_i387 */
    case 134:  /* *truncxfsf2_mixed */
    case 132:  /* *truncdfsf_i387 */
    case 131:  /* *truncdfsf_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 114:  /* *extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 708:  /* x86_movsicc_0_m1 */
    case 706:  /* x86_movdicc_0_m1_rex64 */
    case 558:  /* ctzdi2 */
    case 557:  /* ctzsi2 */
    case 371:  /* *negqi2_1 */
    case 369:  /* *neghi2_1 */
    case 365:  /* *negsi2_1 */
    case 363:  /* *negdi2_1_rex64 */
    case 362:  /* *negdi2_1 */
    case 361:  /* *negti2_1 */
    case 157:  /* *fix_truncdi_i387_1 */
    case 156:  /* *fix_truncsi_i387_1 */
    case 155:  /* *fix_trunchi_i387_1 */
    case 110:  /* zero_extendsidi2_32 */
    case 108:  /* *zero_extendqisi2_movzbw_and */
    case 107:  /* *zero_extendqisi2_and */
    case 105:  /* *zero_extendqihi2_movzbw_and */
    case 104:  /* *zero_extendqihi2_and */
    case 102:  /* zero_extendhisi2_and */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 72:  /* *movqi_insv_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1095:  /* *vec_dupv4hi */
    case 884:  /* sse2_cvtps2pd */
    case 878:  /* sse2_cvtdq2pd */
    case 877:  /* sse2_cvttsd2siq */
    case 876:  /* sse2_cvttsd2si */
    case 815:  /* sse_cvttss2siq */
    case 814:  /* sse_cvttss2si */
    case 809:  /* sse_cvttps2pi */
    case 613:  /* *sqrtextenddfxf2_i387 */
    case 612:  /* *sqrtextendsfxf2_i387 */
    case 610:  /* *sqrtextendsfdf2_i387 */
    case 399:  /* *one_cmplsi2_1_zext */
    case 395:  /* *absextendsfxf2 */
    case 394:  /* *absextenddfxf2 */
    case 393:  /* *absextendsfdf2 */
    case 392:  /* *negextendsfxf2 */
    case 391:  /* *negextenddfxf2 */
    case 390:  /* *negextendsfdf2 */
    case 195:  /* *lea_1_zext */
    case 122:  /* *extendqisi2_zext */
    case 119:  /* *extendhisi2_zext */
    case 69:  /* *movqi_extzv_2_rex64 */
    case 68:  /* *movqi_extzv_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 59:  /* *movstrictqi_xor */
    case 52:  /* *movstricthi_xor */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 100:  /* swapxf */
    case 95:  /* *swapdf */
    case 90:  /* *swapsf */
    case 84:  /* *swapdi_rex64 */
    case 57:  /* *swapqi_2 */
    case 56:  /* *swapqi_1 */
    case 50:  /* *swaphi_2 */
    case 49:  /* *swaphi_1 */
    case 43:  /* *swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 1099:  /* *vec_extractv2si_1 */
    case 1098:  /* *vec_extractv2si_0 */
    case 1096:  /* *vec_dupv2si */
    case 1094:  /* mmx_pswapdv2si2 */
    case 1029:  /* *vec_extractv2sf_1 */
    case 1028:  /* *vec_extractv2sf_0 */
    case 1026:  /* *vec_dupv2sf */
    case 1025:  /* mmx_pswapdv2sf2 */
    case 1024:  /* mmx_floatv2si2 */
    case 1021:  /* mmx_pf2id */
    case 975:  /* *vec_dupv2di */
    case 974:  /* *vec_dupv4si */
    case 973:  /* *sse2_storeq */
    case 972:  /* sse2_stored */
    case 895:  /* *vec_dupv2df */
    case 894:  /* *vec_dupv2df_sse3 */
    case 890:  /* sse2_storelpd */
    case 889:  /* sse2_storehpd */
    case 871:  /* sse2_cvttpd2pi */
    case 869:  /* sse2_cvtpi2pd */
    case 844:  /* sqrtv2df2 */
    case 835:  /* *vec_extractv4sf_0 */
    case 831:  /* *vec_dupv4sf */
    case 828:  /* sse_storelps */
    case 826:  /* sse_storehps */
    case 818:  /* sse2_cvttps2dq */
    case 816:  /* sse2_cvtdq2ps */
    case 778:  /* sqrtv4sf2 */
    case 611:  /* sqrtxf2 */
    case 609:  /* *sqrtdf2_i387 */
    case 608:  /* *sqrtdf2_sse */
    case 607:  /* *sqrtdf2_mixed */
    case 606:  /* *sqrtsf2_i387 */
    case 605:  /* *sqrtsf2_sse */
    case 604:  /* *sqrtsf2_mixed */
    case 404:  /* *one_cmplqi2_1 */
    case 402:  /* *one_cmplhi2_1 */
    case 398:  /* *one_cmplsi2_1 */
    case 396:  /* *one_cmpldi2_1_rex64 */
    case 389:  /* *absxf2_1 */
    case 388:  /* *absdf2_1 */
    case 387:  /* *abssf2_1 */
    case 386:  /* *negxf2_1 */
    case 385:  /* *negdf2_1 */
    case 384:  /* *negsf2_1 */
    case 194:  /* *lea_1_rex64 */
    case 182:  /* floatdixf2 */
    case 181:  /* floatsixf2 */
    case 180:  /* floathixf2 */
    case 179:  /* *floatdidf2_i387 */
    case 178:  /* *floatdidf2_sse */
    case 177:  /* *floatdidf2_mixed */
    case 176:  /* *floatsidf2_i387 */
    case 175:  /* *floatsidf2_sse */
    case 174:  /* *floatsidf2_mixed */
    case 173:  /* *floathidf2_i387 */
    case 172:  /* *floatdisf2_i387 */
    case 171:  /* *floatdisf2_sse */
    case 170:  /* *floatdisf2_mixed */
    case 169:  /* *floatsisf2_i387 */
    case 168:  /* *floatsisf2_sse */
    case 167:  /* *floatsisf2_mixed */
    case 166:  /* *floathisf2_i387 */
    case 148:  /* fix_truncdi_fisttp_i387_1 */
    case 147:  /* fix_truncsi_fisttp_i387_1 */
    case 146:  /* fix_trunchi_fisttp_i387_1 */
    case 145:  /* fix_truncdfsi_sse */
    case 144:  /* fix_truncsfsi_sse */
    case 143:  /* fix_truncdfdi_sse */
    case 142:  /* fix_truncsfdi_sse */
    case 141:  /* *truncxfdf2_i387_1 */
    case 139:  /* truncxfdf2_i387_noop */
    case 137:  /* *truncxfsf2_i387_1 */
    case 135:  /* truncxfsf2_i387_noop */
    case 133:  /* *truncdfsf2_i387_1 */
    case 130:  /* *truncdfsf_fast_i387 */
    case 129:  /* *truncdfsf_fast_sse */
    case 128:  /* *truncdfsf_fast_mixed */
    case 127:  /* *extenddfxf2_i387 */
    case 126:  /* *extendsfxf2_i387 */
    case 125:  /* *extendsfdf2_i387 */
    case 124:  /* *extendsfdf2_sse */
    case 123:  /* *extendsfdf2_mixed */
    case 121:  /* extendqisi2 */
    case 120:  /* extendqihi2 */
    case 118:  /* extendhisi2 */
    case 117:  /* extendqidi2 */
    case 116:  /* extendhidi2 */
    case 115:  /* extendsidi2_rex64 */
    case 113:  /* zero_extendqidi2 */
    case 112:  /* zero_extendhidi2 */
    case 111:  /* zero_extendsidi2_rex64 */
    case 109:  /* *zero_extendqisi2_movzbw */
    case 106:  /* *zero_extendqihi2_movzbw */
    case 103:  /* *zero_extendhisi2_movzwl */
    case 83:  /* *movabsdi_2_rex64 */
    case 67:  /* *movsi_extzv_1 */
    case 66:  /* *movdi_extzv_1 */
    case 65:  /* *movabsqi_2_rex64 */
    case 63:  /* *movqi_extv_1_rex64 */
    case 62:  /* *movqi_extv_1 */
    case 61:  /* *movhi_extv_1 */
    case 60:  /* *movsi_extv_1 */
    case 48:  /* *movabshi_2_rex64 */
    case 42:  /* *movabssi_2_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 537:  /* *sibcall_1_rex64 */
    case 536:  /* *call_1_rex64 */
    case 535:  /* *sibcall_1 */
    case 534:  /* *call_1 */
    case 533:  /* *call_0 */
    case 508:  /* *setcc_2 */
    case 82:  /* *movabsdi_1_rex64 */
    case 71:  /* movdi_insv_1_rex64 */
    case 70:  /* movsi_insv_1 */
    case 64:  /* *movabsqi_1_rex64 */
    case 58:  /* *movstrictqi_1 */
    case 51:  /* *movstricthi_1 */
    case 47:  /* *movabshi_1_rex64 */
    case 41:  /* *movabssi_1_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 546:  /* set_got */
    case 77:  /* popdi1 */
    case 76:  /* *popdi1_epilogue_rex64 */
    case 37:  /* popsi1 */
    case 36:  /* *popsi1_epilogue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 79:  /* *movdi_or_rex64 */
    case 78:  /* *movdi_xor_rex64 */
    case 75:  /* *pushdi2_prologue_rex64 */
    case 39:  /* *movsi_or */
    case 38:  /* *movsi_xor */
    case 35:  /* *pushsi2_prologue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 1003:  /* *movv2sf_internal */
    case 1002:  /* *movv2sf_internal_rex64 */
    case 1001:  /* *movv2si_internal */
    case 1000:  /* *movv4hi_internal */
    case 999:  /* *movv8qi_internal */
    case 998:  /* *movv2si_internal_rex64 */
    case 997:  /* *movv4hi_internal_rex64 */
    case 996:  /* *movv8qi_internal_rex64 */
    case 757:  /* *movv2df_internal */
    case 756:  /* *movv4sf_internal */
    case 755:  /* *movv2di_internal */
    case 754:  /* *movv4si_internal */
    case 753:  /* *movv8hi_internal */
    case 752:  /* *movv16qi_internal */
    case 743:  /* *prefetch_3dnow_rex */
    case 742:  /* *prefetch_3dnow */
    case 507:  /* *setcc_1 */
    case 196:  /* *lea_2_rex64 */
    case 193:  /* *lea_1 */
    case 101:  /* *movtf_internal */
    case 99:  /* *movxf_integer */
    case 98:  /* *movxf_nointeger */
    case 97:  /* *pushxf_integer */
    case 96:  /* *pushxf_nointeger */
    case 94:  /* *movdf_integer */
    case 93:  /* *movdf_nointeger */
    case 92:  /* *pushdf_integer */
    case 91:  /* *pushdf_nointeger */
    case 89:  /* *movsf_1 */
    case 88:  /* *pushsf_rex64 */
    case 87:  /* *pushsf */
    case 86:  /* *movti_rex64 */
    case 85:  /* *movti_internal */
    case 81:  /* *movdi_1_rex64 */
    case 80:  /* *movdi_2 */
    case 74:  /* *pushdi2_rex64 */
    case 73:  /* *pushdi */
    case 55:  /* *movqi_1 */
    case 54:  /* *pushqi2_rex64 */
    case 53:  /* *pushqi2 */
    case 46:  /* *movhi_1 */
    case 45:  /* *pushhi2_rex64 */
    case 44:  /* *pushhi2 */
    case 40:  /* *movsi_1 */
    case 34:  /* *pushsi2_rex64 */
    case 33:  /* *pushsi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 549:  /* eh_return_di */
    case 548:  /* eh_return_si */
    case 165:  /* x86_fldcw_1 */
    case 26:  /* x86_sahf_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 989:  /* sse_stmxcsr */
    case 570:  /* *load_tp_di */
    case 568:  /* *load_tp_si */
    case 547:  /* set_got_rex64 */
    case 164:  /* x86_fnstcw_1 */
    case 25:  /* x86_fnstsw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 24:  /* *cmpfp_si */
    case 23:  /* *cmpfp_hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 1063:  /* mmx_ashldi3 */
    case 1060:  /* mmx_lshrdi3 */
    case 1041:  /* mmx_subdi3 */
    case 1033:  /* mmx_adddi3 */
    case 22:  /* *cmpfp_u */
    case 21:  /* *cmpfp_xf */
    case 20:  /* *cmpfp_df */
    case 19:  /* *cmpfp_sf */
    case 18:  /* *cmpfp_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 17:  /* *cmpqi_ext_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 16:  /* cmpqi_ext_3_insn_rex64 */
    case 15:  /* cmpqi_ext_3_insn */
    case 14:  /* *cmpqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 13:  /* *cmpqi_ext_1_rex64 */
    case 12:  /* *cmpqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 290:  /* *testqi_1 */
    case 289:  /* *testqi_1_maybe_si */
    case 288:  /* *testhi_1 */
    case 287:  /* testsi_1 */
    case 286:  /* *testdi_1_rex64 */
    case 11:  /* *cmpqi_minus_1 */
    case 7:  /* *cmphi_minus_1 */
    case 4:  /* *cmpsi_minus_1 */
    case 1:  /* *cmpdi_minus_1_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 32:  /* *cmpfp_iu_387 */
    case 31:  /* *cmpfp_iu_sse */
    case 30:  /* *cmpfp_iu_mixed */
    case 29:  /* *cmpfp_i_i387 */
    case 28:  /* *cmpfp_i_sse */
    case 27:  /* *cmpfp_i_mixed */
    case 10:  /* *cmpqi_1 */
    case 9:  /* *cmpqi_ccno_1 */
    case 8:  /* *cmphi_1 */
    case 6:  /* *cmphi_ccno_1 */
    case 5:  /* *cmpsi_1_insn */
    case 3:  /* *cmpsi_ccno_1 */
    case 2:  /* cmpdi_1_insn_rex64 */
    case 0:  /* cmpdi_ccno_1_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    default:
      gcc_unreachable ();
    }
}
