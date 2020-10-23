/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'AccumulatorModel/Solver Configuration'.
 */

#include "ne_ds.h"
#include "AccumulatorModel_afee0aca_1_ds_tduf_p.h"
#include "AccumulatorModel_afee0aca_1_ds_sys_struct.h"
#include "AccumulatorModel_afee0aca_1_ds_externals.h"
#include "AccumulatorModel_afee0aca_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T AccumulatorModel_afee0aca_1_ds_tduf_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDUF_P;
  out.mNumCol = 6UL;
  out.mNumRow = 325UL;
  out.mJc[0] = 0;
  out.mJc[1] = 35;
  out.mJc[2] = 36;
  out.mJc[3] = 37;
  out.mJc[4] = 38;
  out.mJc[5] = 39;
  out.mJc[6] = 40;
  out.mIr[0] = 1;
  out.mIr[1] = 2;
  out.mIr[2] = 3;
  out.mIr[3] = 4;
  out.mIr[4] = 5;
  out.mIr[5] = 19;
  out.mIr[6] = 20;
  out.mIr[7] = 21;
  out.mIr[8] = 22;
  out.mIr[9] = 23;
  out.mIr[10] = 37;
  out.mIr[11] = 38;
  out.mIr[12] = 39;
  out.mIr[13] = 40;
  out.mIr[14] = 41;
  out.mIr[15] = 55;
  out.mIr[16] = 56;
  out.mIr[17] = 57;
  out.mIr[18] = 58;
  out.mIr[19] = 59;
  out.mIr[20] = 73;
  out.mIr[21] = 74;
  out.mIr[22] = 75;
  out.mIr[23] = 76;
  out.mIr[24] = 77;
  out.mIr[25] = 90;
  out.mIr[26] = 91;
  out.mIr[27] = 137;
  out.mIr[28] = 138;
  out.mIr[29] = 184;
  out.mIr[30] = 185;
  out.mIr[31] = 231;
  out.mIr[32] = 232;
  out.mIr[33] = 278;
  out.mIr[34] = 279;
  out.mIr[35] = 136;
  out.mIr[36] = 183;
  out.mIr[37] = 230;
  out.mIr[38] = 277;
  out.mIr[39] = 324;
  (void)sys;
  (void)t2;
  return 0;
}
