/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'AccumulatorModel/Solver Configuration'.
 */

#include "ne_ds.h"
#include "AccumulatorModel_afee0aca_1_ds_m.h"
#include "AccumulatorModel_afee0aca_1_ds_sys_struct.h"
#include "AccumulatorModel_afee0aca_1_ds_externals.h"
#include "AccumulatorModel_afee0aca_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T AccumulatorModel_afee0aca_1_ds_m(const NeDynamicSystem *t0, const
  NeDynamicSystemInput *t2, NeDsMethodOutput *t3)
{
  PmRealVector out;
  real_T X[325];
  int32_T b;
  (void)t0;
  for (b = 0; b < 325; b++) {
    X[b] = t2->mX.mX[b];
  }

  out = t3->mM;
  out.mX[0] = 0.0429624;
  out.mX[1] = 0.0429624;
  out.mX[2] = 1.0;
  out.mX[3] = 1.0;
  out.mX[4] = X[98UL] * X[101UL];
  out.mX[5] = X[99UL] * X[102UL];
  out.mX[6] = X[100UL] * X[103UL];
  out.mX[7] = 0.0429624;
  out.mX[8] = 1.0;
  out.mX[9] = 1.0;
  out.mX[10] = X[111UL] * X[114UL];
  out.mX[11] = X[112UL] * X[115UL];
  out.mX[12] = X[113UL] * X[116UL];
  out.mX[13] = 1.0;
  out.mX[14] = 1.0;
  out.mX[15] = X[124UL] * X[127UL];
  out.mX[16] = X[125UL] * X[128UL];
  out.mX[17] = X[126UL] * X[129UL];
  out.mX[18] = 0.0429624;
  out.mX[19] = 0.0429624;
  out.mX[20] = 1.0;
  out.mX[21] = 1.0;
  out.mX[22] = X[145UL] * X[148UL];
  out.mX[23] = X[146UL] * X[149UL];
  out.mX[24] = X[147UL] * X[150UL];
  out.mX[25] = 0.0429624;
  out.mX[26] = 1.0;
  out.mX[27] = 1.0;
  out.mX[28] = X[158UL] * X[161UL];
  out.mX[29] = X[159UL] * X[162UL];
  out.mX[30] = X[160UL] * X[163UL];
  out.mX[31] = 1.0;
  out.mX[32] = 1.0;
  out.mX[33] = X[171UL] * X[174UL];
  out.mX[34] = X[172UL] * X[175UL];
  out.mX[35] = X[173UL] * X[176UL];
  out.mX[36] = 0.0429624;
  out.mX[37] = 0.0429624;
  out.mX[38] = 1.0;
  out.mX[39] = 1.0;
  out.mX[40] = X[192UL] * X[195UL];
  out.mX[41] = X[193UL] * X[196UL];
  out.mX[42] = X[194UL] * X[197UL];
  out.mX[43] = 0.0429624;
  out.mX[44] = 1.0;
  out.mX[45] = 1.0;
  out.mX[46] = X[205UL] * X[208UL];
  out.mX[47] = X[206UL] * X[209UL];
  out.mX[48] = X[207UL] * X[210UL];
  out.mX[49] = 1.0;
  out.mX[50] = 1.0;
  out.mX[51] = X[218UL] * X[221UL];
  out.mX[52] = X[219UL] * X[222UL];
  out.mX[53] = X[220UL] * X[223UL];
  out.mX[54] = 0.0429624;
  out.mX[55] = 0.0429624;
  out.mX[56] = 1.0;
  out.mX[57] = 1.0;
  out.mX[58] = X[239UL] * X[242UL];
  out.mX[59] = X[240UL] * X[243UL];
  out.mX[60] = X[241UL] * X[244UL];
  out.mX[61] = 0.0429624;
  out.mX[62] = 1.0;
  out.mX[63] = 1.0;
  out.mX[64] = X[252UL] * X[255UL];
  out.mX[65] = X[253UL] * X[256UL];
  out.mX[66] = X[254UL] * X[257UL];
  out.mX[67] = 1.0;
  out.mX[68] = 1.0;
  out.mX[69] = X[265UL] * X[268UL];
  out.mX[70] = X[266UL] * X[269UL];
  out.mX[71] = X[267UL] * X[270UL];
  out.mX[72] = 0.0429624;
  out.mX[73] = 0.0429624;
  out.mX[74] = 1.0;
  out.mX[75] = 1.0;
  out.mX[76] = X[286UL] * X[289UL];
  out.mX[77] = X[287UL] * X[290UL];
  out.mX[78] = X[288UL] * X[291UL];
  out.mX[79] = 0.0429624;
  out.mX[80] = 1.0;
  out.mX[81] = 1.0;
  out.mX[82] = X[299UL] * X[302UL];
  out.mX[83] = X[300UL] * X[303UL];
  out.mX[84] = X[301UL] * X[304UL];
  out.mX[85] = 1.0;
  out.mX[86] = 1.0;
  out.mX[87] = X[312UL] * X[315UL];
  out.mX[88] = X[313UL] * X[316UL];
  out.mX[89] = X[314UL] * X[317UL];
  (void)t0;
  (void)t3;
  return 0;
}
