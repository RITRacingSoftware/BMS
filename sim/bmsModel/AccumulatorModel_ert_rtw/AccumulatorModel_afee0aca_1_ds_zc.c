/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'AccumulatorModel/Solver Configuration'.
 */

#include "ne_ds.h"
#include "AccumulatorModel_afee0aca_1_ds_zc.h"
#include "AccumulatorModel_afee0aca_1_ds_sys_struct.h"
#include "AccumulatorModel_afee0aca_1_ds_externals.h"
#include "AccumulatorModel_afee0aca_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T AccumulatorModel_afee0aca_1_ds_zc(const NeDynamicSystem *t0, const
  NeDynamicSystemInput *t2, NeDsMethodOutput *t3)
{
  PmRealVector out;
  real_T t1[175];
  real_T X[325];
  int32_T b;
  real_T U_idx_4;
  real_T U_idx_3;
  real_T U_idx_5;
  real_T U_idx_1;
  real_T U_idx_2;
  (void)t0;
  U_idx_1 = t2->mU.mX[1];
  U_idx_2 = t2->mU.mX[2];
  U_idx_3 = t2->mU.mX[3];
  U_idx_4 = t2->mU.mX[4];
  U_idx_5 = t2->mU.mX[5];
  for (b = 0; b < 325; b++) {
    X[b] = t2->mX.mX[b];
  }

  out = t3->mZC;
  t1[0UL] = X[314UL];
  t1[1UL] = X[311UL];
  t1[2UL] = X[313UL];
  t1[3UL] = X[310UL];
  t1[4UL] = X[312UL];
  t1[5UL] = X[309UL];
  t1[6UL] = X[323UL] - 0.1;
  t1[7UL] = X[319UL];
  t1[8UL] = X[320UL];
  t1[9UL] = X[79UL];
  t1[10UL] = X[300UL];
  t1[11UL] = X[296UL];
  t1[12UL] = X[322UL] - 0.1;
  t1[13UL] = X[305UL];
  t1[14UL] = X[307UL];
  t1[15UL] = X[297UL];
  t1[16UL] = X[73UL];
  t1[17UL] = X[285UL];
  t1[18UL] = X[284UL];
  t1[19UL] = X[286UL];
  t1[20UL] = X[283UL];
  t1[21UL] = X[288UL];
  t1[22UL] = X[321UL] - 0.1;
  t1[23UL] = X[292UL];
  t1[24UL] = X[293UL];
  t1[25UL] = X[72UL];
  t1[26UL] = X[264UL];
  t1[27UL] = X[262UL];
  t1[28UL] = X[271UL];
  t1[29UL] = X[272UL];
  t1[30UL] = X[273UL];
  t1[31UL] = X[61UL];
  t1[32UL] = X[318UL];
  t1[33UL] = X[254UL];
  t1[34UL] = X[276UL] - 0.1;
  t1[35UL] = X[251UL];
  t1[36UL] = X[253UL];
  t1[37UL] = X[250UL];
  t1[38UL] = X[259UL];
  t1[39UL] = X[260UL];
  t1[40UL] = X[238UL];
  t1[41UL] = X[275UL] - 0.1;
  t1[42UL] = X[240UL];
  t1[43UL] = X[237UL];
  t1[44UL] = X[239UL];
  t1[45UL] = X[236UL];
  t1[46UL] = X[245UL];
  t1[47UL] = X[249UL];
  t1[48UL] = X[246UL];
  t1[49UL] = X[263UL];
  t1[50UL] = X[265UL];
  t1[51UL] = X[54UL];
  t1[52UL] = X[229UL] - 0.1;
  t1[53UL] = X[224UL];
  t1[54UL] = X[225UL];
  t1[55UL] = X[43UL];
  t1[56UL] = X[207UL];
  t1[57UL] = X[204UL];
  t1[58UL] = X[203UL];
  t1[59UL] = X[202UL];
  t1[60UL] = X[228UL] - 0.1;
  t1[61UL] = X[211UL];
  t1[62UL] = X[212UL];
  t1[63UL] = X[37UL];
  t1[64UL] = X[194UL];
  t1[65UL] = X[227UL] - 0.1;
  t1[66UL] = X[36UL];
  t1[67UL] = X[173UL];
  t1[68UL] = X[55UL];
  t1[69UL] = X[170UL];
  t1[70UL] = X[241UL];
  t1[71UL] = X[205UL];
  t1[72UL] = X[178UL];
  t1[73UL] = X[179UL];
  t1[74UL] = X[25UL];
  t1[75UL] = X[155UL];
  t1[76UL] = X[189UL];
  t1[77UL] = X[218UL];
  t1[78UL] = X[247UL];
  t1[79UL] = X[165UL];
  t1[80UL] = X[226UL];
  t1[81UL] = X[164UL];
  t1[82UL] = X[166UL];
  t1[83UL] = X[215UL];
  t1[84UL] = X[252UL];
  t1[85UL] = X[143UL];
  t1[86UL] = X[182UL] - 0.1;
  t1[87UL] = X[199UL];
  t1[88UL] = X[142UL];
  t1[89UL] = X[122UL];
  t1[90UL] = X[180UL] - 0.1;
  t1[91UL] = X[193UL];
  t1[92UL] = X[219UL];
  t1[93UL] = X[124UL];
  t1[94UL] = X[266UL];
  t1[95UL] = X[146UL];
  t1[96UL] = X[169UL];
  t1[97UL] = X[126UL];
  t1[98UL] = X[135UL] - 0.1;
  t1[99UL] = X[130UL];
  t1[100UL] = X[156UL];
  t1[101UL] = X[19UL];
  t1[102UL] = X[132UL];
  t1[103UL] = X[7UL];
  t1[104UL] = X[152UL];
  t1[105UL] = X[113UL];
  t1[106UL] = X[125UL];
  t1[107UL] = X[217UL];
  t1[108UL] = X[110UL];
  t1[109UL] = X[258UL];
  t1[110UL] = X[157UL];
  t1[111UL] = X[191UL];
  t1[112UL] = X[274UL] - 0.1;
  t1[113UL] = X[145UL];
  t1[114UL] = X[168UL];
  t1[115UL] = X[172UL];
  t1[116UL] = X[216UL];
  t1[117UL] = X[111UL];
  t1[118UL] = X[144UL];
  t1[119UL] = X[153UL];
  t1[120UL] = X[108UL];
  t1[121UL] = X[134UL] - 0.1;
  t1[122UL] = X[100UL];
  t1[123UL] = X[97UL];
  t1[124UL] = X[206UL];
  t1[125UL] = X[151UL];
  t1[126UL] = X[121UL];
  t1[127UL] = X[213UL];
  t1[128UL] = X[112UL];
  t1[129UL] = X[96UL];
  t1[130UL] = X[98UL];
  t1[131UL] = X[190UL];
  t1[132UL] = X[99UL];
  t1[133UL] = X[198UL];
  t1[134UL] = X[95UL];
  t1[135UL] = X[104UL];
  t1[136UL] = X[171UL];
  t1[137UL] = X[117UL];
  t1[138UL] = X[177UL];
  t1[139UL] = X[105UL];
  t1[140UL] = X[131UL];
  t1[141UL] = X[106UL];
  t1[142UL] = X[118UL];
  t1[143UL] = X[294UL];
  t1[144UL] = X[220UL];
  t1[145UL] = X[299UL];
  t1[146UL] = X[0UL];
  t1[147UL] = U_idx_4 - 2.0;
  t1[148UL] = X[1UL];
  t1[149UL] = X[301UL];
  t1[150UL] = X[306UL];
  t1[151UL] = X[158UL];
  t1[152UL] = X[267UL];
  t1[153UL] = X[109UL];
  t1[154UL] = ((-X[233UL] + -X[277UL]) + X[234UL]) - 0.6;
  t1[155UL] = X[147UL];
  t1[156UL] = U_idx_3 - 2.0;
  t1[157UL] = ((-X[186UL] + -X[230UL]) + X[187UL]) - 0.6;
  t1[158UL] = X[200UL];
  t1[159UL] = ((-X[139UL] + -X[183UL]) + X[140UL]) - 0.6;
  t1[160UL] = U_idx_5 - 2.0;
  t1[161UL] = X[159UL];
  t1[162UL] = U_idx_1 - 2.0;
  t1[163UL] = X[160UL];
  t1[164UL] = X[133UL] - 0.1;
  t1[165UL] = U_idx_2 - 2.0;
  t1[166UL] = X[181UL] - 0.1;
  t1[167UL] = X[287UL];
  t1[168UL] = X[18UL];
  t1[169UL] = X[123UL];
  t1[170UL] = ((-X[280UL] + -X[324UL]) + X[281UL]) - 0.6;
  t1[171UL] = X[298UL];
  t1[172UL] = ((-X[92UL] + -X[136UL]) + X[93UL]) - 0.6;
  t1[173UL] = X[192UL];
  t1[174UL] = X[119UL];
  for (b = 0; b < 175; b++) {
    out.mX[b] = t1[b];
  }

  (void)t0;
  (void)t3;
  return 0;
}
