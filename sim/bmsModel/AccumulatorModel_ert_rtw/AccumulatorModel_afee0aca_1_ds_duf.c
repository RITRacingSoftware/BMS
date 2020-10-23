/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'AccumulatorModel/Solver Configuration'.
 */

#include "ne_ds.h"
#include "AccumulatorModel_afee0aca_1_ds_duf.h"
#include "AccumulatorModel_afee0aca_1_ds_sys_struct.h"
#include "AccumulatorModel_afee0aca_1_ds_externals.h"
#include "AccumulatorModel_afee0aca_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T AccumulatorModel_afee0aca_1_ds_duf(const NeDynamicSystem *t0, const
  NeDynamicSystemInput *t7, NeDsMethodOutput *t8)
{
  PmRealVector out;
  real_T Cells_Cell1_Bat1_i;
  real_T Cells_Cell2_Bat1_i;
  real_T Cells_Cell3_Bat1_i;
  real_T Cells_Cell4_Bat1_i;
  real_T X[325];
  int32_T b;
  real_T U_idx_0;
  (void)t0;
  U_idx_0 = t7->mU.mX[0];
  for (b = 0; b < 325; b++) {
    X[b] = t7->mX.mX[b];
  }

  out = t8->mDUF;
  Cells_Cell1_Bat1_i = ((-X[90UL] + -X[91UL]) + X[92UL] * -0.05) + -U_idx_0;
  Cells_Cell2_Bat1_i = (((X[93UL] * 0.05 + -X[137UL]) + -X[138UL]) + X[139UL] *
                        -0.05) + -U_idx_0;
  Cells_Cell3_Bat1_i = (((X[140UL] * 0.05 + -X[184UL]) + -X[185UL]) + X[186UL] *
                        -0.05) + -U_idx_0;
  Cells_Cell4_Bat1_i = (((X[187UL] * 0.05 + -X[231UL]) + -X[232UL]) + X[233UL] *
                        -0.05) + -U_idx_0;
  U_idx_0 = (((X[234UL] * 0.05 + -X[278UL]) + -X[279UL]) + X[280UL] * -0.05) +
    -U_idx_0;
  out.mX[0] = 1.0 / (X[106UL] == 0.0 ? 1.0E-16 : X[106UL]) * (real_T)
    (Cells_Cell1_Bat1_i < 0.0);
  out.mX[1] = 1.0 / (X[153UL] == 0.0 ? 1.0E-16 : X[153UL]) * (real_T)
    (Cells_Cell2_Bat1_i < 0.0);
  out.mX[2] = 1.0 / (X[200UL] == 0.0 ? 1.0E-16 : X[200UL]) * (real_T)
    (Cells_Cell3_Bat1_i < 0.0);
  out.mX[3] = 1.0 / (X[247UL] == 0.0 ? 1.0E-16 : X[247UL]) * (real_T)
    (Cells_Cell4_Bat1_i < 0.0);
  out.mX[4] = 1.0 / (X[294UL] == 0.0 ? 1.0E-16 : X[294UL]) * (real_T)(U_idx_0 <
    0.0);
  out.mX[5] = X[104UL];
  out.mX[6] = -(-(Cells_Cell1_Bat1_i * X[104UL]) * 0.002);
  out.mX[7] = X[151UL];
  out.mX[8] = -(-(Cells_Cell2_Bat1_i * X[151UL]) * 0.002);
  out.mX[9] = X[198UL];
  out.mX[10] = -(-(Cells_Cell3_Bat1_i * X[198UL]) * 0.002);
  out.mX[11] = X[245UL];
  out.mX[12] = -(-(Cells_Cell4_Bat1_i * X[245UL]) * 0.002);
  out.mX[13] = X[292UL];
  out.mX[14] = -(-(U_idx_0 * X[292UL]) * 0.002);
  (void)t0;
  (void)t8;
  return 0;
}
