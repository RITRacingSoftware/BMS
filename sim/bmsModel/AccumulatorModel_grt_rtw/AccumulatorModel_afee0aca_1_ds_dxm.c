/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'AccumulatorModel/Solver Configuration'.
 */

#include "ne_ds.h"
#include "AccumulatorModel_afee0aca_1_ds_dxm.h"
#include "AccumulatorModel_afee0aca_1_ds_sys_struct.h"
#include "AccumulatorModel_afee0aca_1_ds_externals.h"
#include "AccumulatorModel_afee0aca_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T AccumulatorModel_afee0aca_1_ds_dxm(const NeDynamicSystem *t0, const
  NeDynamicSystemInput *t2, NeDsMethodOutput *t3)
{
  PmRealVector out;
  real_T X[325];
  int32_T b;
  (void)t0;
  for (b = 0; b < 325; b++) {
    X[b] = t2->mX.mX[b];
  }

  out = t3->mDXM;
  out.mX[0] = X[101UL];
  out.mX[1] = X[102UL];
  out.mX[2] = X[103UL];
  out.mX[3] = X[98UL];
  out.mX[4] = X[99UL];
  out.mX[5] = X[100UL];
  out.mX[6] = X[114UL];
  out.mX[7] = X[115UL];
  out.mX[8] = X[116UL];
  out.mX[9] = X[111UL];
  out.mX[10] = X[112UL];
  out.mX[11] = X[113UL];
  out.mX[12] = X[127UL];
  out.mX[13] = X[128UL];
  out.mX[14] = X[129UL];
  out.mX[15] = X[124UL];
  out.mX[16] = X[125UL];
  out.mX[17] = X[126UL];
  out.mX[18] = X[148UL];
  out.mX[19] = X[149UL];
  out.mX[20] = X[150UL];
  out.mX[21] = X[145UL];
  out.mX[22] = X[146UL];
  out.mX[23] = X[147UL];
  out.mX[24] = X[161UL];
  out.mX[25] = X[162UL];
  out.mX[26] = X[163UL];
  out.mX[27] = X[158UL];
  out.mX[28] = X[159UL];
  out.mX[29] = X[160UL];
  out.mX[30] = X[174UL];
  out.mX[31] = X[175UL];
  out.mX[32] = X[176UL];
  out.mX[33] = X[171UL];
  out.mX[34] = X[172UL];
  out.mX[35] = X[173UL];
  out.mX[36] = X[195UL];
  out.mX[37] = X[196UL];
  out.mX[38] = X[197UL];
  out.mX[39] = X[192UL];
  out.mX[40] = X[193UL];
  out.mX[41] = X[194UL];
  out.mX[42] = X[208UL];
  out.mX[43] = X[209UL];
  out.mX[44] = X[210UL];
  out.mX[45] = X[205UL];
  out.mX[46] = X[206UL];
  out.mX[47] = X[207UL];
  out.mX[48] = X[221UL];
  out.mX[49] = X[222UL];
  out.mX[50] = X[223UL];
  out.mX[51] = X[218UL];
  out.mX[52] = X[219UL];
  out.mX[53] = X[220UL];
  out.mX[54] = X[242UL];
  out.mX[55] = X[243UL];
  out.mX[56] = X[244UL];
  out.mX[57] = X[239UL];
  out.mX[58] = X[240UL];
  out.mX[59] = X[241UL];
  out.mX[60] = X[255UL];
  out.mX[61] = X[256UL];
  out.mX[62] = X[257UL];
  out.mX[63] = X[252UL];
  out.mX[64] = X[253UL];
  out.mX[65] = X[254UL];
  out.mX[66] = X[268UL];
  out.mX[67] = X[269UL];
  out.mX[68] = X[270UL];
  out.mX[69] = X[265UL];
  out.mX[70] = X[266UL];
  out.mX[71] = X[267UL];
  out.mX[72] = X[289UL];
  out.mX[73] = X[290UL];
  out.mX[74] = X[291UL];
  out.mX[75] = X[286UL];
  out.mX[76] = X[287UL];
  out.mX[77] = X[288UL];
  out.mX[78] = X[302UL];
  out.mX[79] = X[303UL];
  out.mX[80] = X[304UL];
  out.mX[81] = X[299UL];
  out.mX[82] = X[300UL];
  out.mX[83] = X[301UL];
  out.mX[84] = X[315UL];
  out.mX[85] = X[316UL];
  out.mX[86] = X[317UL];
  out.mX[87] = X[312UL];
  out.mX[88] = X[313UL];
  out.mX[89] = X[314UL];
  (void)t0;
  (void)t3;
  return 0;
}
