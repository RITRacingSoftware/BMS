/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'AccumulatorModel/Solver Configuration'.
 */

#include "ne_ds.h"
#include "AccumulatorModel_afee0aca_1_ds_vmm.h"
#include "AccumulatorModel_afee0aca_1_ds_sys_struct.h"
#include "AccumulatorModel_afee0aca_1_ds_externals.h"
#include "AccumulatorModel_afee0aca_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T AccumulatorModel_afee0aca_1_ds_vmm(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mVMM;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = true;
  out.mX[5] = true;
  out.mX[6] = true;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = true;
  out.mX[11] = true;
  out.mX[12] = true;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = true;
  out.mX[16] = true;
  out.mX[17] = true;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = true;
  out.mX[23] = true;
  out.mX[24] = true;
  out.mX[25] = false;
  out.mX[26] = false;
  out.mX[27] = false;
  out.mX[28] = true;
  out.mX[29] = true;
  out.mX[30] = true;
  out.mX[31] = false;
  out.mX[32] = false;
  out.mX[33] = true;
  out.mX[34] = true;
  out.mX[35] = true;
  out.mX[36] = false;
  out.mX[37] = false;
  out.mX[38] = false;
  out.mX[39] = false;
  out.mX[40] = true;
  out.mX[41] = true;
  out.mX[42] = true;
  out.mX[43] = false;
  out.mX[44] = false;
  out.mX[45] = false;
  out.mX[46] = true;
  out.mX[47] = true;
  out.mX[48] = true;
  out.mX[49] = false;
  out.mX[50] = false;
  out.mX[51] = true;
  out.mX[52] = true;
  out.mX[53] = true;
  out.mX[54] = false;
  out.mX[55] = false;
  out.mX[56] = false;
  out.mX[57] = false;
  out.mX[58] = true;
  out.mX[59] = true;
  out.mX[60] = true;
  out.mX[61] = false;
  out.mX[62] = false;
  out.mX[63] = false;
  out.mX[64] = true;
  out.mX[65] = true;
  out.mX[66] = true;
  out.mX[67] = false;
  out.mX[68] = false;
  out.mX[69] = true;
  out.mX[70] = true;
  out.mX[71] = true;
  out.mX[72] = false;
  out.mX[73] = false;
  out.mX[74] = false;
  out.mX[75] = false;
  out.mX[76] = true;
  out.mX[77] = true;
  out.mX[78] = true;
  out.mX[79] = false;
  out.mX[80] = false;
  out.mX[81] = false;
  out.mX[82] = true;
  out.mX[83] = true;
  out.mX[84] = true;
  out.mX[85] = false;
  out.mX[86] = false;
  out.mX[87] = true;
  out.mX[88] = true;
  out.mX[89] = true;
  (void)sys;
  (void)t2;
  return 0;
}
