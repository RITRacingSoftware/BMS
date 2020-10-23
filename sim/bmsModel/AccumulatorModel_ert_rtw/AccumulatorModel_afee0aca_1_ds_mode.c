/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'AccumulatorModel/Solver Configuration'.
 */

#include "ne_ds.h"
#include "AccumulatorModel_afee0aca_1_ds_mode.h"
#include "AccumulatorModel_afee0aca_1_ds_sys_struct.h"
#include "AccumulatorModel_afee0aca_1_ds_externals.h"
#include "AccumulatorModel_afee0aca_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T AccumulatorModel_afee0aca_1_ds_mode(const NeDynamicSystem *t0, const
  NeDynamicSystemInput *t2, NeDsMethodOutput *t3)
{
  PmIntVector out;
  int32_T t1[175];
  real_T X[325];
  int32_T b;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T U_idx_3;
  real_T U_idx_4;
  real_T U_idx_5;
  (void)t0;
  U_idx_1 = t2->mU.mX[1];
  U_idx_2 = t2->mU.mX[2];
  U_idx_3 = t2->mU.mX[3];
  U_idx_4 = t2->mU.mX[4];
  U_idx_5 = t2->mU.mX[5];
  for (b = 0; b < 325; b++) {
    X[b] = t2->mX.mX[b];
  }

  out = t3->mMODE;
  t1[0UL] = (int32_T)((-X[92UL] + -X[136UL]) + X[93UL] > 0.6);
  t1[1UL] = (int32_T)(U_idx_1 > 2.0);
  t1[2UL] = (int32_T)(X[0UL] > 0.0);
  t1[3UL] = (int32_T)(X[225UL] >= 0.0);
  t1[4UL] = (int32_T)(X[224UL] > 0.0);
  t1[5UL] = (int32_T)(X[229UL] >= 0.1);
  t1[6UL] = (int32_T)(X[215UL] > 0.0);
  t1[7UL] = (int32_T)(X[218UL] > 0.0);
  t1[8UL] = (int32_T)(X[216UL] > 0.0);
  t1[9UL] = (int32_T)(X[219UL] > 0.0);
  t1[10UL] = (int32_T)(X[217UL] > 0.0);
  t1[11UL] = (int32_T)(X[220UL] > 0.0);
  t1[12UL] = (int32_T)(X[54UL] > 0.0);
  t1[13UL] = (int32_T)(X[106UL] > 0.0);
  t1[14UL] = (int32_T)(X[247UL] > 0.0);
  t1[15UL] = (int32_T)(X[246UL] >= 0.0);
  t1[16UL] = (int32_T)(X[245UL] > 0.0);
  t1[17UL] = (int32_T)(X[274UL] >= 0.1);
  t1[18UL] = (int32_T)(X[236UL] > 0.0);
  t1[19UL] = (int32_T)(X[239UL] > 0.0);
  t1[20UL] = (int32_T)(X[237UL] > 0.0);
  t1[21UL] = (int32_T)(X[240UL] > 0.0);
  t1[22UL] = (int32_T)(X[238UL] > 0.0);
  t1[23UL] = (int32_T)(X[241UL] > 0.0);
  t1[24UL] = (int32_T)(X[105UL] >= 0.0);
  t1[25UL] = (int32_T)(X[55UL] > 0.0);
  t1[26UL] = (int32_T)(X[260UL] > 0.0);
  t1[27UL] = (int32_T)(X[259UL] >= 0.0);
  t1[28UL] = (int32_T)(X[258UL] > 0.0);
  t1[29UL] = (int32_T)(X[275UL] >= 0.1);
  t1[30UL] = (int32_T)(X[249UL] > 0.0);
  t1[31UL] = (int32_T)(X[252UL] > 0.0);
  t1[32UL] = (int32_T)(X[250UL] > 0.0);
  t1[33UL] = (int32_T)(X[253UL] > 0.0);
  t1[34UL] = (int32_T)(X[251UL] > 0.0);
  t1[35UL] = (int32_T)(X[104UL] > 0.0);
  t1[36UL] = (int32_T)(X[254UL] > 0.0);
  t1[37UL] = (int32_T)(X[61UL] > 0.0);
  t1[38UL] = (int32_T)(X[273UL] > 0.0);
  t1[39UL] = (int32_T)(X[272UL] >= 0.0);
  t1[40UL] = (int32_T)(X[271UL] > 0.0);
  t1[41UL] = (int32_T)(X[276UL] >= 0.1);
  t1[42UL] = (int32_T)(X[262UL] > 0.0);
  t1[43UL] = (int32_T)(X[265UL] > 0.0);
  t1[44UL] = (int32_T)(X[263UL] > 0.0);
  t1[45UL] = (int32_T)(X[266UL] > 0.0);
  t1[46UL] = (int32_T)(X[133UL] >= 0.1);
  t1[47UL] = (int32_T)(X[264UL] > 0.0);
  t1[48UL] = (int32_T)(X[267UL] > 0.0);
  t1[49UL] = (int32_T)(X[72UL] > 0.0);
  t1[50UL] = (int32_T)(X[294UL] > 0.0);
  t1[51UL] = (int32_T)(X[293UL] >= 0.0);
  t1[52UL] = (int32_T)(X[292UL] > 0.0);
  t1[53UL] = (int32_T)(X[321UL] >= 0.1);
  t1[54UL] = (int32_T)(X[283UL] > 0.0);
  t1[55UL] = (int32_T)(X[286UL] > 0.0);
  t1[56UL] = (int32_T)(X[284UL] > 0.0);
  t1[57UL] = (int32_T)(X[95UL] > 0.0);
  t1[58UL] = (int32_T)(X[287UL] > 0.0);
  t1[59UL] = (int32_T)(X[285UL] > 0.0);
  t1[60UL] = (int32_T)(X[288UL] > 0.0);
  t1[61UL] = (int32_T)(X[73UL] > 0.0);
  t1[62UL] = (int32_T)(X[307UL] > 0.0);
  t1[63UL] = (int32_T)(X[306UL] >= 0.0);
  t1[64UL] = (int32_T)(X[305UL] > 0.0);
  t1[65UL] = (int32_T)(X[322UL] >= 0.1);
  t1[66UL] = (int32_T)(X[296UL] > 0.0);
  t1[67UL] = (int32_T)(X[299UL] > 0.0);
  t1[68UL] = (int32_T)(X[98UL] > 0.0);
  t1[69UL] = (int32_T)(X[297UL] > 0.0);
  t1[70UL] = (int32_T)(X[300UL] > 0.0);
  t1[71UL] = (int32_T)(X[298UL] > 0.0);
  t1[72UL] = (int32_T)(X[301UL] > 0.0);
  t1[73UL] = (int32_T)(X[79UL] > 0.0);
  t1[74UL] = (int32_T)(X[320UL] > 0.0);
  t1[75UL] = (int32_T)(X[319UL] >= 0.0);
  t1[76UL] = (int32_T)(X[318UL] > 0.0);
  t1[77UL] = (int32_T)(X[323UL] >= 0.1);
  t1[78UL] = (int32_T)(X[309UL] > 0.0);
  t1[79UL] = (int32_T)(X[96UL] > 0.0);
  t1[80UL] = (int32_T)(X[312UL] > 0.0);
  t1[81UL] = (int32_T)(X[310UL] > 0.0);
  t1[82UL] = (int32_T)(X[313UL] > 0.0);
  t1[83UL] = (int32_T)(X[311UL] > 0.0);
  t1[84UL] = (int32_T)(X[314UL] > 0.0);
  t1[85UL] = (int32_T)(X[99UL] > 0.0);
  t1[86UL] = (int32_T)(X[97UL] > 0.0);
  t1[87UL] = (int32_T)((-X[139UL] + -X[183UL]) + X[140UL] > 0.6);
  t1[88UL] = (int32_T)(X[100UL] > 0.0);
  t1[89UL] = (int32_T)(X[1UL] > 0.0);
  t1[90UL] = (int32_T)(X[119UL] > 0.0);
  t1[91UL] = (int32_T)(X[118UL] >= 0.0);
  t1[92UL] = (int32_T)(X[117UL] > 0.0);
  t1[93UL] = (int32_T)(X[134UL] >= 0.1);
  t1[94UL] = (int32_T)(X[108UL] > 0.0);
  t1[95UL] = (int32_T)(X[111UL] > 0.0);
  t1[96UL] = (int32_T)(X[109UL] > 0.0);
  t1[97UL] = (int32_T)(X[112UL] > 0.0);
  t1[98UL] = (int32_T)(U_idx_2 > 2.0);
  t1[99UL] = (int32_T)(X[110UL] > 0.0);
  t1[100UL] = (int32_T)(X[113UL] > 0.0);
  t1[101UL] = (int32_T)(X[7UL] > 0.0);
  t1[102UL] = (int32_T)(X[132UL] > 0.0);
  t1[103UL] = (int32_T)(X[131UL] >= 0.0);
  t1[104UL] = (int32_T)(X[130UL] > 0.0);
  t1[105UL] = (int32_T)(X[135UL] >= 0.1);
  t1[106UL] = (int32_T)(X[121UL] > 0.0);
  t1[107UL] = (int32_T)(X[124UL] > 0.0);
  t1[108UL] = (int32_T)(X[122UL] > 0.0);
  t1[109UL] = (int32_T)((-X[186UL] + -X[230UL]) + X[187UL] > 0.6);
  t1[110UL] = (int32_T)(X[125UL] > 0.0);
  t1[111UL] = (int32_T)(X[123UL] > 0.0);
  t1[112UL] = (int32_T)(X[126UL] > 0.0);
  t1[113UL] = (int32_T)(X[18UL] > 0.0);
  t1[114UL] = (int32_T)(X[153UL] > 0.0);
  t1[115UL] = (int32_T)(X[152UL] >= 0.0);
  t1[116UL] = (int32_T)(X[151UL] > 0.0);
  t1[117UL] = (int32_T)(X[180UL] >= 0.1);
  t1[118UL] = (int32_T)(X[142UL] > 0.0);
  t1[119UL] = (int32_T)(X[145UL] > 0.0);
  t1[120UL] = (int32_T)(U_idx_3 > 2.0);
  t1[121UL] = (int32_T)(X[143UL] > 0.0);
  t1[122UL] = (int32_T)(X[146UL] > 0.0);
  t1[123UL] = (int32_T)(X[144UL] > 0.0);
  t1[124UL] = (int32_T)(X[147UL] > 0.0);
  t1[125UL] = (int32_T)(X[19UL] > 0.0);
  t1[126UL] = (int32_T)(X[166UL] > 0.0);
  t1[127UL] = (int32_T)(X[165UL] >= 0.0);
  t1[128UL] = (int32_T)(X[164UL] > 0.0);
  t1[129UL] = (int32_T)(X[181UL] >= 0.1);
  t1[130UL] = (int32_T)(X[155UL] > 0.0);
  t1[131UL] = (int32_T)((-X[233UL] + -X[277UL]) + X[234UL] > 0.6);
  t1[132UL] = (int32_T)(X[158UL] > 0.0);
  t1[133UL] = (int32_T)(X[156UL] > 0.0);
  t1[134UL] = (int32_T)(X[159UL] > 0.0);
  t1[135UL] = (int32_T)(X[157UL] > 0.0);
  t1[136UL] = (int32_T)(X[160UL] > 0.0);
  t1[137UL] = (int32_T)(X[25UL] > 0.0);
  t1[138UL] = (int32_T)(X[179UL] > 0.0);
  t1[139UL] = (int32_T)(X[178UL] >= 0.0);
  t1[140UL] = (int32_T)(X[177UL] > 0.0);
  t1[141UL] = (int32_T)(X[182UL] >= 0.1);
  t1[142UL] = (int32_T)(U_idx_4 > 2.0);
  t1[143UL] = (int32_T)(X[168UL] > 0.0);
  t1[144UL] = (int32_T)(X[171UL] > 0.0);
  t1[145UL] = (int32_T)(X[169UL] > 0.0);
  t1[146UL] = (int32_T)(X[172UL] > 0.0);
  t1[147UL] = (int32_T)(X[170UL] > 0.0);
  t1[148UL] = (int32_T)(X[173UL] > 0.0);
  t1[149UL] = (int32_T)(X[36UL] > 0.0);
  t1[150UL] = (int32_T)(X[200UL] > 0.0);
  t1[151UL] = (int32_T)(X[199UL] >= 0.0);
  t1[152UL] = (int32_T)(X[198UL] > 0.0);
  t1[153UL] = (int32_T)((-X[280UL] + -X[324UL]) + X[281UL] > 0.6);
  t1[154UL] = (int32_T)(X[227UL] >= 0.1);
  t1[155UL] = (int32_T)(X[189UL] > 0.0);
  t1[156UL] = (int32_T)(X[192UL] > 0.0);
  t1[157UL] = (int32_T)(X[190UL] > 0.0);
  t1[158UL] = (int32_T)(X[193UL] > 0.0);
  t1[159UL] = (int32_T)(X[191UL] > 0.0);
  t1[160UL] = (int32_T)(X[194UL] > 0.0);
  t1[161UL] = (int32_T)(X[37UL] > 0.0);
  t1[162UL] = (int32_T)(X[213UL] > 0.0);
  t1[163UL] = (int32_T)(X[212UL] >= 0.0);
  t1[164UL] = (int32_T)(U_idx_5 > 2.0);
  t1[165UL] = (int32_T)(X[211UL] > 0.0);
  t1[166UL] = (int32_T)(X[228UL] >= 0.1);
  t1[167UL] = (int32_T)(X[202UL] > 0.0);
  t1[168UL] = (int32_T)(X[205UL] > 0.0);
  t1[169UL] = (int32_T)(X[203UL] > 0.0);
  t1[170UL] = (int32_T)(X[206UL] > 0.0);
  t1[171UL] = (int32_T)(X[204UL] > 0.0);
  t1[172UL] = (int32_T)(X[207UL] > 0.0);
  t1[173UL] = (int32_T)(X[43UL] > 0.0);
  t1[174UL] = (int32_T)(X[226UL] > 0.0);
  for (b = 0; b < 175; b++) {
    out.mX[b] = t1[b];
  }

  (void)t0;
  (void)t3;
  return 0;
}
