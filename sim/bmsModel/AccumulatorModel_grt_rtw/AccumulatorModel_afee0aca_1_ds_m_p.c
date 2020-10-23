/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'AccumulatorModel/Solver Configuration'.
 */

#include "ne_ds.h"
#include "AccumulatorModel_afee0aca_1_ds_m_p.h"
#include "AccumulatorModel_afee0aca_1_ds_sys_struct.h"
#include "AccumulatorModel_afee0aca_1_ds_externals.h"
#include "AccumulatorModel_afee0aca_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T AccumulatorModel_afee0aca_1_ds_m_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  static int32_T _cg_const_1[326] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
    13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
    32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
    51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69,
    70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88,
    89, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
    90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
    90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
    90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
    90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
    90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
    90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
    90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
    90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
    90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
    90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
    90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
    90, 90, 90, 90, 90, 90, 90, 90, 90 };

  (void)t1;
  out = t2->mM_P;
  out.mNumCol = 325UL;
  out.mNumRow = 325UL;
  for (b = 0; b < 326; b++) {
    out.mJc[b] = _cg_const_1[b];
  }

  out.mIr[0] = 0;
  out.mIr[1] = 6;
  out.mIr[2] = 1;
  out.mIr[3] = 2;
  out.mIr[4] = 3;
  out.mIr[5] = 4;
  out.mIr[6] = 5;
  out.mIr[7] = 12;
  out.mIr[8] = 7;
  out.mIr[9] = 8;
  out.mIr[10] = 9;
  out.mIr[11] = 10;
  out.mIr[12] = 11;
  out.mIr[13] = 13;
  out.mIr[14] = 14;
  out.mIr[15] = 15;
  out.mIr[16] = 16;
  out.mIr[17] = 17;
  out.mIr[18] = 18;
  out.mIr[19] = 24;
  out.mIr[20] = 19;
  out.mIr[21] = 20;
  out.mIr[22] = 21;
  out.mIr[23] = 22;
  out.mIr[24] = 23;
  out.mIr[25] = 30;
  out.mIr[26] = 25;
  out.mIr[27] = 26;
  out.mIr[28] = 27;
  out.mIr[29] = 28;
  out.mIr[30] = 29;
  out.mIr[31] = 31;
  out.mIr[32] = 32;
  out.mIr[33] = 33;
  out.mIr[34] = 34;
  out.mIr[35] = 35;
  out.mIr[36] = 36;
  out.mIr[37] = 42;
  out.mIr[38] = 37;
  out.mIr[39] = 38;
  out.mIr[40] = 39;
  out.mIr[41] = 40;
  out.mIr[42] = 41;
  out.mIr[43] = 48;
  out.mIr[44] = 43;
  out.mIr[45] = 44;
  out.mIr[46] = 45;
  out.mIr[47] = 46;
  out.mIr[48] = 47;
  out.mIr[49] = 49;
  out.mIr[50] = 50;
  out.mIr[51] = 51;
  out.mIr[52] = 52;
  out.mIr[53] = 53;
  out.mIr[54] = 54;
  out.mIr[55] = 60;
  out.mIr[56] = 55;
  out.mIr[57] = 56;
  out.mIr[58] = 57;
  out.mIr[59] = 58;
  out.mIr[60] = 59;
  out.mIr[61] = 66;
  out.mIr[62] = 61;
  out.mIr[63] = 62;
  out.mIr[64] = 63;
  out.mIr[65] = 64;
  out.mIr[66] = 65;
  out.mIr[67] = 67;
  out.mIr[68] = 68;
  out.mIr[69] = 69;
  out.mIr[70] = 70;
  out.mIr[71] = 71;
  out.mIr[72] = 72;
  out.mIr[73] = 78;
  out.mIr[74] = 73;
  out.mIr[75] = 74;
  out.mIr[76] = 75;
  out.mIr[77] = 76;
  out.mIr[78] = 77;
  out.mIr[79] = 84;
  out.mIr[80] = 79;
  out.mIr[81] = 80;
  out.mIr[82] = 81;
  out.mIr[83] = 82;
  out.mIr[84] = 83;
  out.mIr[85] = 85;
  out.mIr[86] = 86;
  out.mIr[87] = 87;
  out.mIr[88] = 88;
  out.mIr[89] = 89;
  (void)sys;
  (void)t2;
  return 0;
}
