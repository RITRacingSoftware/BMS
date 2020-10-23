/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'AccumulatorModel/Solver Configuration'.
 */

#include "ne_ds.h"
#include "AccumulatorModel_afee0aca_1_ds_dxm_p.h"
#include "AccumulatorModel_afee0aca_1_ds_sys_struct.h"
#include "AccumulatorModel_afee0aca_1_ds_externals.h"
#include "AccumulatorModel_afee0aca_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T AccumulatorModel_afee0aca_1_ds_dxm_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  static int32_T _cg_const_1[326] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6, 6, 7, 8, 9, 10, 11,
    12, 12, 12, 12, 12, 12, 12, 12, 13, 14, 15, 16, 17, 18, 18, 18, 18, 18, 18,
    18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 19, 20, 21, 22, 23, 24, 24, 24, 24,
    24, 24, 24, 24, 25, 26, 27, 28, 29, 30, 30, 30, 30, 30, 30, 30, 30, 31, 32,
    33, 34, 35, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
    37, 38, 39, 40, 41, 42, 42, 42, 42, 42, 42, 42, 42, 43, 44, 45, 46, 47, 48,
    48, 48, 48, 48, 48, 48, 48, 49, 50, 51, 52, 53, 54, 54, 54, 54, 54, 54, 54,
    54, 54, 54, 54, 54, 54, 54, 54, 54, 55, 56, 57, 58, 59, 60, 60, 60, 60, 60,
    60, 60, 60, 61, 62, 63, 64, 65, 66, 66, 66, 66, 66, 66, 66, 66, 67, 68, 69,
    70, 71, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 73,
    74, 75, 76, 77, 78, 78, 78, 78, 78, 78, 78, 78, 79, 80, 81, 82, 83, 84, 84,
    84, 84, 84, 84, 84, 84, 85, 86, 87, 88, 89, 90, 90, 90, 90, 90, 90, 90, 90 };

  (void)t1;
  out = t2->mDXM_P;
  out.mNumCol = 325UL;
  out.mNumRow = 90UL;
  for (b = 0; b < 326; b++) {
    out.mJc[b] = _cg_const_1[b];
  }

  out.mIr[0] = 4;
  out.mIr[1] = 5;
  out.mIr[2] = 6;
  out.mIr[3] = 4;
  out.mIr[4] = 5;
  out.mIr[5] = 6;
  out.mIr[6] = 10;
  out.mIr[7] = 11;
  out.mIr[8] = 12;
  out.mIr[9] = 10;
  out.mIr[10] = 11;
  out.mIr[11] = 12;
  out.mIr[12] = 15;
  out.mIr[13] = 16;
  out.mIr[14] = 17;
  out.mIr[15] = 15;
  out.mIr[16] = 16;
  out.mIr[17] = 17;
  out.mIr[18] = 22;
  out.mIr[19] = 23;
  out.mIr[20] = 24;
  out.mIr[21] = 22;
  out.mIr[22] = 23;
  out.mIr[23] = 24;
  out.mIr[24] = 28;
  out.mIr[25] = 29;
  out.mIr[26] = 30;
  out.mIr[27] = 28;
  out.mIr[28] = 29;
  out.mIr[29] = 30;
  out.mIr[30] = 33;
  out.mIr[31] = 34;
  out.mIr[32] = 35;
  out.mIr[33] = 33;
  out.mIr[34] = 34;
  out.mIr[35] = 35;
  out.mIr[36] = 40;
  out.mIr[37] = 41;
  out.mIr[38] = 42;
  out.mIr[39] = 40;
  out.mIr[40] = 41;
  out.mIr[41] = 42;
  out.mIr[42] = 46;
  out.mIr[43] = 47;
  out.mIr[44] = 48;
  out.mIr[45] = 46;
  out.mIr[46] = 47;
  out.mIr[47] = 48;
  out.mIr[48] = 51;
  out.mIr[49] = 52;
  out.mIr[50] = 53;
  out.mIr[51] = 51;
  out.mIr[52] = 52;
  out.mIr[53] = 53;
  out.mIr[54] = 58;
  out.mIr[55] = 59;
  out.mIr[56] = 60;
  out.mIr[57] = 58;
  out.mIr[58] = 59;
  out.mIr[59] = 60;
  out.mIr[60] = 64;
  out.mIr[61] = 65;
  out.mIr[62] = 66;
  out.mIr[63] = 64;
  out.mIr[64] = 65;
  out.mIr[65] = 66;
  out.mIr[66] = 69;
  out.mIr[67] = 70;
  out.mIr[68] = 71;
  out.mIr[69] = 69;
  out.mIr[70] = 70;
  out.mIr[71] = 71;
  out.mIr[72] = 76;
  out.mIr[73] = 77;
  out.mIr[74] = 78;
  out.mIr[75] = 76;
  out.mIr[76] = 77;
  out.mIr[77] = 78;
  out.mIr[78] = 82;
  out.mIr[79] = 83;
  out.mIr[80] = 84;
  out.mIr[81] = 82;
  out.mIr[82] = 83;
  out.mIr[83] = 84;
  out.mIr[84] = 87;
  out.mIr[85] = 88;
  out.mIr[86] = 89;
  out.mIr[87] = 87;
  out.mIr[88] = 88;
  out.mIr[89] = 89;
  (void)sys;
  (void)t2;
  return 0;
}
