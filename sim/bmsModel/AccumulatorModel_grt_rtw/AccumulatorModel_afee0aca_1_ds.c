/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'AccumulatorModel/Solver Configuration'.
 */
/* AccumulatorModel_afee0aca_1_ds.c - body for module AccumulatorModel_afee0aca_1_ds */

#include "ne_ds.h"
#include "AccumulatorModel_afee0aca_1_ds_zc.h"
#include "AccumulatorModel_afee0aca_1_ds_tdxy_p.h"
#include "AccumulatorModel_afee0aca_1_ds_dxy_p.h"
#include "AccumulatorModel_afee0aca_1_ds_obs_il.h"
#include "AccumulatorModel_afee0aca_1_ds_obs_all.h"
#include "AccumulatorModel_afee0aca_1_ds_obs_act.h"
#include "AccumulatorModel_afee0aca_1_ds_obs_exp.h"
#include "AccumulatorModel_afee0aca_1_ds_mode.h"
#include "AccumulatorModel_afee0aca_1_ds_vmm.h"
#include "AccumulatorModel_afee0aca_1_ds_dxm.h"
#include "AccumulatorModel_afee0aca_1_ds_m_p.h"
#include "AccumulatorModel_afee0aca_1_ds_dxm_p.h"
#include "AccumulatorModel_afee0aca_1_ds_log.h"
#include "AccumulatorModel_afee0aca_1_ds_tdxf_p.h"
#include "AccumulatorModel_afee0aca_1_ds_m.h"
#include "AccumulatorModel_afee0aca_1_ds_a_p.h"
#include "AccumulatorModel_afee0aca_1_ds_a.h"
#include "AccumulatorModel_afee0aca_1_ds_tduf_p.h"
#include "AccumulatorModel_afee0aca_1_ds_dxf_p.h"
#include "AccumulatorModel_afee0aca_1_ds_vmf.h"
#include "AccumulatorModel_afee0aca_1_ds_ic.h"
#include "AccumulatorModel_afee0aca_1_ds_dxf.h"
#include "AccumulatorModel_afee0aca_1_ds_f.h"
#include "AccumulatorModel_afee0aca_1_ds_duf.h"
#include "AccumulatorModel_afee0aca_1_ds_assert.h"
#include "AccumulatorModel_afee0aca_1_ds.h"
#include "ssc_ml_fun.h"
#include "AccumulatorModel_afee0aca_1_ds_external_struct.h"
#include "AccumulatorModel_afee0aca_1_ds_sys_struct.h"
#include "AccumulatorModel_afee0aca_1_ds_externals.h"

static int32_T ds_ddm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dum_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dum(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dtm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_b_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_b(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_c_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_c(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_vpf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_slf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_slf0(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_duf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_ddf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dwf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dwf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dnf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dnf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dnf_v_x(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_icr(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_icr_im(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icr_id(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icr_il(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxicr(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_ddicr(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_tduicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icrm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icrm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dxicrm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxicrm(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicrm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicrm(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_mduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_mdxy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_tduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_y(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_dxy(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_duy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_duy(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dty_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dty(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_cache_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_cache_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_update_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_update_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_update2_r(const NeDynamicSystem *ds, const
  NeDynamicSystemInput *in, NeDsMethodOutput *out);
static int32_T ds_update2_i(const NeDynamicSystem *ds, const
  NeDynamicSystemInput *in, NeDsMethodOutput *out);
static int32_T ds_lock_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lock_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lock2_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_lock2_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_sfo(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_sfp(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_init_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_init_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_passert(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_iassert(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_del_t(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_v(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_v0(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_tmax(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxdelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxdelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dudelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dudelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtdelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtdelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dp_l(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_j(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qx(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qu(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qt(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_q1(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qx_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qu_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_q1_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_var_tol(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_eq_tol(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lv(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_slv(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_imin(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_imax(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dum_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dum(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dtm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_a_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_c_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_c(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_f(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vpf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dwf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dwf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_il(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ddicr(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_tduicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_icrm_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ddicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dty_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dty(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mode(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_cache_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_cache_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_lock_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lock_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lock2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_lock2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_sfo(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_sfp(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_init_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_passert(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_iassert(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_del_t(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dudelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dudelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dtdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_obs_exp(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_l(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_j(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_q1(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qt_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_q1_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_imin(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_imax(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static void release_reference(NeDynamicSystem *ds);
static void get_reference(NeDynamicSystem *ds);
static NeDynamicSystem *diagnostics(NeDynamicSystem *ds);
static void expand(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                   PmRealVector *out);
static NeEquationData s_equation_data[325] = { { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 0U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1",
    2U, 1U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 2U, 3U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 5U, FALSE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1",
    1U, 6U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 1U, 7U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 8U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1",
    2U, 9U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 2U, 11U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 13U, FALSE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1",
    1U, 14U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 1U, 15U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 16U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1",
    2U, 17U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 2U, 19U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 21U, FALSE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1",
    1U, 22U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 1U, 23U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 24U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2",
    2U, 25U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 2U, 27U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 29U, FALSE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2",
    1U, 30U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 1U, 31U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 32U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2",
    2U, 33U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 2U, 35U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 37U, FALSE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2",
    1U, 38U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 1U, 39U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 40U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2",
    2U, 41U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 2U, 43U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 45U, FALSE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2",
    1U, 46U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 1U, 47U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 48U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3",
    2U, 49U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 2U, 51U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 53U, FALSE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3",
    1U, 54U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 1U, 55U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 56U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3",
    2U, 57U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 2U, 59U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 61U, FALSE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3",
    1U, 62U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 1U, 63U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 64U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3",
    2U, 65U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 2U, 67U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 69U, FALSE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3",
    1U, 70U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 1U, 71U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 72U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4",
    2U, 73U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 2U, 75U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 77U, FALSE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4",
    1U, 78U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 1U, 79U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 80U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4",
    2U, 81U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 2U, 83U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 85U, FALSE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4",
    1U, 86U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 1U, 87U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 88U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4",
    2U, 89U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 2U, 91U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 93U, FALSE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4",
    1U, 94U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 1U, 95U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 96U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5",
    2U, 97U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 2U, 99U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 101U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 102U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 103U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 104U, TRUE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 2U, 105U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5",
    2U, 107U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 109U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 110U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 111U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 112U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5",
    2U, 113U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 2U, 115U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 117U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 118U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 119U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 1U, 120U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 121U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 1U, 122U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 123U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 1U, 124U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 125U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 1U, 126U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 127U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 1U, 128U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 129U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 1U, 130U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 131U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 1U, 132U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 133U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 1U, 134U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 135U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 1U, 136U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 137U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 1U, 138U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 139U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 1U, 140U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 141U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 1U, 142U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 143U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 1U, 144U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 145U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 1U, 146U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 147U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 1U, 148U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 149U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 1U, 150U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 151U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 1U, 152U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 153U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 1U, 154U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 155U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 1U, 156U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 157U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 1U, 158U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 159U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 1U, 160U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 161U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 1U, 162U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 1U, 163U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell1", 1U, 164U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1", 3U, 165U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell1",
    3U, 168U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 1U, 171U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 172U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 1U, 173U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 174U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 1U, 175U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 176U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 1U, 177U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 178U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 1U, 179U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 180U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 1U, 181U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 182U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 1U, 183U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 184U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 1U, 185U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 186U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 1U, 187U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 188U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 1U, 189U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 190U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 1U, 191U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 192U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 1U, 193U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 194U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 1U, 195U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 196U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 1U, 197U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 198U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 1U, 199U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 200U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 1U, 201U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 202U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 1U, 203U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 204U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 1U, 205U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 206U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 1U, 207U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 208U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 1U, 209U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 210U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 1U, 211U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 212U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 1U, 213U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 1U, 214U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell2", 1U, 215U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2", 3U, 216U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell2",
    3U, 219U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 1U, 222U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 223U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 1U, 224U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 225U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 1U, 226U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 227U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 1U, 228U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 229U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 1U, 230U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 231U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 1U, 232U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 233U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 1U, 234U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 235U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 1U, 236U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 237U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 1U, 238U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 239U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 1U, 240U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 241U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 1U, 242U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 243U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 1U, 244U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 245U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 1U, 246U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 247U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 1U, 248U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 249U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 1U, 250U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 251U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 1U, 252U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 253U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 1U, 254U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 255U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 1U, 256U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 257U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 1U, 258U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 259U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 1U, 260U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 261U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 1U, 262U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 263U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 1U, 264U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 1U, 265U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell3", 1U, 266U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3", 3U, 267U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell3",
    3U, 270U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 1U, 273U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 274U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 1U, 275U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 276U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 1U, 277U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 278U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 1U, 279U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 280U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 1U, 281U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 282U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 1U, 283U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 284U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 1U, 285U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 286U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 1U, 287U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 288U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 1U, 289U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 290U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 1U, 291U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 292U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 1U, 293U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 294U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 1U, 295U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 296U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 1U, 297U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 298U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 1U, 299U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 300U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 1U, 301U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 302U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 1U, 303U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 304U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 1U, 305U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 306U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 1U, 307U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 308U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 1U, 309U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 310U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 1U, 311U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 312U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 1U, 313U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 314U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 1U, 315U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 1U, 316U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell4", 1U, 317U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4", 3U, 318U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell4",
    3U, 321U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 324U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 325U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 326U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 327U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 328U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 329U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 330U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 331U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 332U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 333U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 334U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 335U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 336U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 337U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 338U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 339U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 340U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 341U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 342U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 343U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 344U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 345U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 346U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 347U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 348U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 349U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 350U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 351U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 352U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 353U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 354U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 355U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 356U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 357U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 358U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 359U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 360U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 361U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 362U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 363U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 364U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 365U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 366U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 1U, 367U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "AccumulatorModel/Cells/Cell5", 1U, 368U, FALSE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5", 3U, 369U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "AccumulatorModel/Cells/Cell5",
    3U, 372U, TRUE, 1.0, "1", } };

static NeICRData s_icr_data[30] = { { "", 0U, 0, "AccumulatorModel/Cells/Cell1",
    1U, 0U, }, { "", 0U, 0, "AccumulatorModel/Cells/Cell1", 1U, 1U, }, { "", 0U,
    0, "AccumulatorModel/Cells/Cell1", 1U, 2U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell1", 1U, 3U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell1", 1U, 4U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell1", 1U, 5U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell2", 1U, 6U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell2", 1U, 7U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell2", 1U, 8U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell2", 1U, 9U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell2", 1U, 10U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell2", 1U, 11U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell3", 1U, 12U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell3", 1U, 13U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell3", 1U, 14U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell3", 1U, 15U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell3", 1U, 16U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell3", 1U, 17U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell4", 1U, 18U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell4", 1U, 19U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell4", 1U, 20U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell4", 1U, 21U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell4", 1U, 22U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell4", 1U, 23U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell5", 1U, 24U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell5", 1U, 25U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell5", 1U, 26U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell5", 1U, 27U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell5", 1U, 28U, }, { "", 0U, 0,
    "AccumulatorModel/Cells/Cell5", 1U, 29U, } };

static NeVariableData s_variable_data[325] = { { "Cells.Cell1.Bat1.temperature",
    0U, 0, "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Temperature", }, { "Cells.Cell1.Bat2.temperature",
    0U, 0, "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Temperature", }, { "Cells.Cell1.Bat1.charge", 0U, 0,
    "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Charge", }, { "Cells.Cell1.Bat1.num_cycles", 0U, 0,
    "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Discharge cycles", }, { "Cells.Cell1.Bat1.vrc1", 0U,
    0, "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc1", }, { "Cells.Cell1.Bat1.vrc2", 0U, 0,
    "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc2", }, { "Cells.Cell1.Bat1.vrc3", 0U, 0,
    "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc3", }, { "Cells.Cell1.Bat3.temperature", 0U, 0,
    "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Temperature", }, { "Cells.Cell1.Bat2.charge", 0U, 0,
    "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Charge", }, { "Cells.Cell1.Bat2.num_cycles", 0U, 0,
    "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Discharge cycles", }, { "Cells.Cell1.Bat2.vrc1", 0U,
    0, "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc1", }, { "Cells.Cell1.Bat2.vrc2", 0U, 0,
    "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc2", }, { "Cells.Cell1.Bat2.vrc3", 0U, 0,
    "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc3", }, { "Cells.Cell1.Bat3.charge", 0U, 0,
    "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Charge", }, { "Cells.Cell1.Bat3.num_cycles", 0U, 0,
    "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Discharge cycles", }, { "Cells.Cell1.Bat3.vrc1", 0U,
    0, "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc1", }, { "Cells.Cell1.Bat3.vrc2", 0U, 0,
    "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc2", }, { "Cells.Cell1.Bat3.vrc3", 0U, 0,
    "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc3", }, { "Cells.Cell2.Bat1.temperature", 0U, 0,
    "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Temperature", }, { "Cells.Cell2.Bat2.temperature",
    0U, 0, "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Temperature", }, { "Cells.Cell2.Bat1.charge", 0U, 0,
    "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Charge", }, { "Cells.Cell2.Bat1.num_cycles", 0U, 0,
    "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Discharge cycles", }, { "Cells.Cell2.Bat1.vrc1", 0U,
    0, "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc1", }, { "Cells.Cell2.Bat1.vrc2", 0U, 0,
    "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc2", }, { "Cells.Cell2.Bat1.vrc3", 0U, 0,
    "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc3", }, { "Cells.Cell2.Bat3.temperature", 0U, 0,
    "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Temperature", }, { "Cells.Cell2.Bat2.charge", 0U, 0,
    "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Charge", }, { "Cells.Cell2.Bat2.num_cycles", 0U, 0,
    "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Discharge cycles", }, { "Cells.Cell2.Bat2.vrc1", 0U,
    0, "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc1", }, { "Cells.Cell2.Bat2.vrc2", 0U, 0,
    "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc2", }, { "Cells.Cell2.Bat2.vrc3", 0U, 0,
    "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc3", }, { "Cells.Cell2.Bat3.charge", 0U, 0,
    "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Charge", }, { "Cells.Cell2.Bat3.num_cycles", 0U, 0,
    "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Discharge cycles", }, { "Cells.Cell2.Bat3.vrc1", 0U,
    0, "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc1", }, { "Cells.Cell2.Bat3.vrc2", 0U, 0,
    "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc2", }, { "Cells.Cell2.Bat3.vrc3", 0U, 0,
    "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc3", }, { "Cells.Cell3.Bat1.temperature", 0U, 0,
    "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Temperature", }, { "Cells.Cell3.Bat2.temperature",
    0U, 0, "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Temperature", }, { "Cells.Cell3.Bat1.charge", 0U, 0,
    "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Charge", }, { "Cells.Cell3.Bat1.num_cycles", 0U, 0,
    "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Discharge cycles", }, { "Cells.Cell3.Bat1.vrc1", 0U,
    0, "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc1", }, { "Cells.Cell3.Bat1.vrc2", 0U, 0,
    "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc2", }, { "Cells.Cell3.Bat1.vrc3", 0U, 0,
    "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc3", }, { "Cells.Cell3.Bat3.temperature", 0U, 0,
    "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Temperature", }, { "Cells.Cell3.Bat2.charge", 0U, 0,
    "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Charge", }, { "Cells.Cell3.Bat2.num_cycles", 0U, 0,
    "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Discharge cycles", }, { "Cells.Cell3.Bat2.vrc1", 0U,
    0, "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc1", }, { "Cells.Cell3.Bat2.vrc2", 0U, 0,
    "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc2", }, { "Cells.Cell3.Bat2.vrc3", 0U, 0,
    "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc3", }, { "Cells.Cell3.Bat3.charge", 0U, 0,
    "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Charge", }, { "Cells.Cell3.Bat3.num_cycles", 0U, 0,
    "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Discharge cycles", }, { "Cells.Cell3.Bat3.vrc1", 0U,
    0, "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc1", }, { "Cells.Cell3.Bat3.vrc2", 0U, 0,
    "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc2", }, { "Cells.Cell3.Bat3.vrc3", 0U, 0,
    "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc3", }, { "Cells.Cell4.Bat1.temperature", 0U, 0,
    "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Temperature", }, { "Cells.Cell4.Bat2.temperature",
    0U, 0, "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Temperature", }, { "Cells.Cell4.Bat1.charge", 0U, 0,
    "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Charge", }, { "Cells.Cell4.Bat1.num_cycles", 0U, 0,
    "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Discharge cycles", }, { "Cells.Cell4.Bat1.vrc1", 0U,
    0, "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc1", }, { "Cells.Cell4.Bat1.vrc2", 0U, 0,
    "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc2", }, { "Cells.Cell4.Bat1.vrc3", 0U, 0,
    "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc3", }, { "Cells.Cell4.Bat3.temperature", 0U, 0,
    "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Temperature", }, { "Cells.Cell4.Bat2.charge", 0U, 0,
    "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Charge", }, { "Cells.Cell4.Bat2.num_cycles", 0U, 0,
    "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Discharge cycles", }, { "Cells.Cell4.Bat2.vrc1", 0U,
    0, "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc1", }, { "Cells.Cell4.Bat2.vrc2", 0U, 0,
    "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc2", }, { "Cells.Cell4.Bat2.vrc3", 0U, 0,
    "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc3", }, { "Cells.Cell4.Bat3.charge", 0U, 0,
    "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Charge", }, { "Cells.Cell4.Bat3.num_cycles", 0U, 0,
    "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Discharge cycles", }, { "Cells.Cell4.Bat3.vrc1", 0U,
    0, "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc1", }, { "Cells.Cell4.Bat3.vrc2", 0U, 0,
    "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc2", }, { "Cells.Cell4.Bat3.vrc3", 0U, 0,
    "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc3", }, { "Cells.Cell5.Bat1.temperature", 0U, 0,
    "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Temperature", }, { "Cells.Cell5.Bat2.temperature",
    0U, 0, "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Temperature", }, { "Cells.Cell5.Bat1.charge", 0U, 0,
    "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Charge", }, { "Cells.Cell5.Bat1.num_cycles", 0U, 0,
    "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Discharge cycles", }, { "Cells.Cell5.Bat1.vrc1", 0U,
    0, "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc1", }, { "Cells.Cell5.Bat1.vrc2", 0U, 0,
    "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc2", }, { "Cells.Cell5.Bat1.vrc3", 0U, 0,
    "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc3", }, { "Cells.Cell5.Bat3.temperature", 0U, 0,
    "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Temperature", }, { "Cells.Cell5.Bat2.charge", 0U, 0,
    "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Charge", }, { "Cells.Cell5.Bat2.num_cycles", 0U, 0,
    "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Discharge cycles", }, { "Cells.Cell5.Bat2.vrc1", 0U,
    0, "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc1", }, { "Cells.Cell5.Bat2.vrc2", 0U, 0,
    "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc2", }, { "Cells.Cell5.Bat2.vrc3", 0U, 0,
    "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc3", }, { "Cells.Cell5.Bat3.charge", 0U, 0,
    "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Charge", }, { "Cells.Cell5.Bat3.num_cycles", 0U, 0,
    "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Discharge cycles", }, { "Cells.Cell5.Bat3.vrc1", 0U,
    0, "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc1", }, { "Cells.Cell5.Bat3.vrc2", 0U, 0,
    "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc2", }, { "Cells.Cell5.Bat3.vrc3", 0U, 0,
    "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "vrc3", }, { "Cells.Cell1.Bat2.i", 0U, 0,
    "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Current (positive in)", }, { "Cells.Cell1.Bat3.i", 0U, 0,
    "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Current (positive in)", }, {
    "Cells.Cell1.MOSFET_Ideal_Switching.S.v", 0U, 1,
    "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, { "Cells.Cell1.Bat1.p.v", 0U, 1,
    "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, { "Cells.Cell1.Bat1.power_dissipated", 0U,
    0, "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Power dissipated", }, { "Cells.Cell1.Bat1.private.xR1",
    0U, 0, "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell1.Bat1.private.xR2", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell1.Bat1.private.xR3", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell1.Bat1.private.xtau1", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell1.Bat1.private.xtau2", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell1.Bat1.private.xtau3", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell1.Bat1.xG1", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell1.Bat1.xG2", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell1.Bat1.xG3", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell1.Bat1.xR0", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell1.Bat1.xVint", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell1.Bat1.xqnom", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell1.Bat2.power_dissipated", 0U, 0, "AccumulatorModel/Cells/Cell1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Power dissipated",
  }, { "Cells.Cell1.Bat2.private.xR1", 0U, 0, "AccumulatorModel/Cells/Cell1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell1.Bat2.private.xR2", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell1.Bat2.private.xR3", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell1.Bat2.private.xtau1", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell1.Bat2.private.xtau2", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell1.Bat2.private.xtau3", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell1.Bat2.xG1", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell1.Bat2.xG2", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell1.Bat2.xG3", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell1.Bat2.xR0", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell1.Bat2.xVint", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell1.Bat2.xqnom", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell1.Bat3.power_dissipated", 0U, 0, "AccumulatorModel/Cells/Cell1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Power dissipated",
  }, { "Cells.Cell1.Bat3.private.xR1", 0U, 0, "AccumulatorModel/Cells/Cell1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell1.Bat3.private.xR2", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell1.Bat3.private.xR3", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell1.Bat3.private.xtau1", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell1.Bat3.private.xtau2", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell1.Bat3.private.xtau3", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell1.Bat3.xG1", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell1.Bat3.xG2", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell1.Bat3.xG3", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell1.Bat3.xR0", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell1.Bat3.xVint", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell1.Bat3.xqnom", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell1.Cell1StateOfCharge", 0U, 0, "AccumulatorModel/Cells/Cell1", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "stateOfCharge", },
    { "Cells.Cell1.Cell2StateOfCharge", 0U, 0, "AccumulatorModel/Cells/Cell1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "stateOfCharge",
  }, { "Cells.Cell1.Cell3StateOfCharge", 0U, 0, "AccumulatorModel/Cells/Cell1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "stateOfCharge",
  }, { "Cells.Cell1.MOSFET_Ideal_Switching.mosfet_equation.v", 0U, 0,
    "AccumulatorModel/Cells/Cell1", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "v", }, { "Cells.Cell2.Bat2.i", 0U, 0,
    "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Current (positive in)", }, { "Cells.Cell2.Bat3.i", 0U, 0,
    "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Current (positive in)", }, {
    "Cells.Cell2.MOSFET_Ideal_Switching.S.v", 0U, 1,
    "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, { "Cells.Cell2.Bat1.p.v", 0U, 1,
    "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, { "Cells.Cell2.Bat1.power_dissipated", 0U,
    0, "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Power dissipated", }, { "Cells.Cell2.Bat1.private.xR1",
    0U, 0, "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell2.Bat1.private.xR2", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell2.Bat1.private.xR3", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell2.Bat1.private.xtau1", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell2.Bat1.private.xtau2", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell2.Bat1.private.xtau3", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell2.Bat1.xG1", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell2.Bat1.xG2", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell2.Bat1.xG3", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell2.Bat1.xR0", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell2.Bat1.xVint", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell2.Bat1.xqnom", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell2.Bat2.power_dissipated", 0U, 0, "AccumulatorModel/Cells/Cell2",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Power dissipated",
  }, { "Cells.Cell2.Bat2.private.xR1", 0U, 0, "AccumulatorModel/Cells/Cell2",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell2.Bat2.private.xR2", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell2.Bat2.private.xR3", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell2.Bat2.private.xtau1", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell2.Bat2.private.xtau2", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell2.Bat2.private.xtau3", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell2.Bat2.xG1", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell2.Bat2.xG2", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell2.Bat2.xG3", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell2.Bat2.xR0", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell2.Bat2.xVint", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell2.Bat2.xqnom", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell2.Bat3.power_dissipated", 0U, 0, "AccumulatorModel/Cells/Cell2",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Power dissipated",
  }, { "Cells.Cell2.Bat3.private.xR1", 0U, 0, "AccumulatorModel/Cells/Cell2",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell2.Bat3.private.xR2", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell2.Bat3.private.xR3", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell2.Bat3.private.xtau1", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell2.Bat3.private.xtau2", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell2.Bat3.private.xtau3", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell2.Bat3.xG1", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell2.Bat3.xG2", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell2.Bat3.xG3", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell2.Bat3.xR0", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell2.Bat3.xVint", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell2.Bat3.xqnom", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell2.Cell1StateOfCharge", 0U, 0, "AccumulatorModel/Cells/Cell2", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "stateOfCharge", },
    { "Cells.Cell2.Cell2StateOfCharge", 0U, 0, "AccumulatorModel/Cells/Cell2",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "stateOfCharge",
  }, { "Cells.Cell2.Cell3StateOfCharge", 0U, 0, "AccumulatorModel/Cells/Cell2",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "stateOfCharge",
  }, { "Cells.Cell2.MOSFET_Ideal_Switching.mosfet_equation.v", 0U, 0,
    "AccumulatorModel/Cells/Cell2", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "v", }, { "Cells.Cell3.Bat2.i", 0U, 0,
    "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Current (positive in)", }, { "Cells.Cell3.Bat3.i", 0U, 0,
    "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Current (positive in)", }, {
    "Cells.Cell3.MOSFET_Ideal_Switching.S.v", 0U, 1,
    "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, { "Cells.Cell3.Bat1.p.v", 0U, 1,
    "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, { "Cells.Cell3.Bat1.power_dissipated", 0U,
    0, "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Power dissipated", }, { "Cells.Cell3.Bat1.private.xR1",
    0U, 0, "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell3.Bat1.private.xR2", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell3.Bat1.private.xR3", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell3.Bat1.private.xtau1", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell3.Bat1.private.xtau2", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell3.Bat1.private.xtau3", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell3.Bat1.xG1", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell3.Bat1.xG2", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell3.Bat1.xG3", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell3.Bat1.xR0", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell3.Bat1.xVint", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell3.Bat1.xqnom", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell3.Bat2.power_dissipated", 0U, 0, "AccumulatorModel/Cells/Cell3",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Power dissipated",
  }, { "Cells.Cell3.Bat2.private.xR1", 0U, 0, "AccumulatorModel/Cells/Cell3",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell3.Bat2.private.xR2", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell3.Bat2.private.xR3", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell3.Bat2.private.xtau1", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell3.Bat2.private.xtau2", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell3.Bat2.private.xtau3", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell3.Bat2.xG1", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell3.Bat2.xG2", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell3.Bat2.xG3", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell3.Bat2.xR0", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell3.Bat2.xVint", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell3.Bat2.xqnom", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell3.Bat3.power_dissipated", 0U, 0, "AccumulatorModel/Cells/Cell3",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Power dissipated",
  }, { "Cells.Cell3.Bat3.private.xR1", 0U, 0, "AccumulatorModel/Cells/Cell3",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell3.Bat3.private.xR2", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell3.Bat3.private.xR3", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell3.Bat3.private.xtau1", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell3.Bat3.private.xtau2", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell3.Bat3.private.xtau3", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell3.Bat3.xG1", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell3.Bat3.xG2", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell3.Bat3.xG3", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell3.Bat3.xR0", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell3.Bat3.xVint", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell3.Bat3.xqnom", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell3.Cell1StateOfCharge", 0U, 0, "AccumulatorModel/Cells/Cell3", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "stateOfCharge", },
    { "Cells.Cell3.Cell2StateOfCharge", 0U, 0, "AccumulatorModel/Cells/Cell3",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "stateOfCharge",
  }, { "Cells.Cell3.Cell3StateOfCharge", 0U, 0, "AccumulatorModel/Cells/Cell3",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "stateOfCharge",
  }, { "Cells.Cell3.MOSFET_Ideal_Switching.mosfet_equation.v", 0U, 0,
    "AccumulatorModel/Cells/Cell3", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "v", }, { "Cells.Cell4.Bat2.i", 0U, 0,
    "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Current (positive in)", }, { "Cells.Cell4.Bat3.i", 0U, 0,
    "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Current (positive in)", }, {
    "Cells.Cell4.MOSFET_Ideal_Switching.S.v", 0U, 1,
    "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, { "Cells.Cell4.Bat1.p.v", 0U, 1,
    "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, { "Cells.Cell4.Bat1.power_dissipated", 0U,
    0, "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Power dissipated", }, { "Cells.Cell4.Bat1.private.xR1",
    0U, 0, "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell4.Bat1.private.xR2", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell4.Bat1.private.xR3", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell4.Bat1.private.xtau1", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell4.Bat1.private.xtau2", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell4.Bat1.private.xtau3", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell4.Bat1.xG1", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell4.Bat1.xG2", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell4.Bat1.xG3", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell4.Bat1.xR0", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell4.Bat1.xVint", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell4.Bat1.xqnom", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell4.Bat2.power_dissipated", 0U, 0, "AccumulatorModel/Cells/Cell4",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Power dissipated",
  }, { "Cells.Cell4.Bat2.private.xR1", 0U, 0, "AccumulatorModel/Cells/Cell4",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell4.Bat2.private.xR2", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell4.Bat2.private.xR3", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell4.Bat2.private.xtau1", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell4.Bat2.private.xtau2", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell4.Bat2.private.xtau3", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell4.Bat2.xG1", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell4.Bat2.xG2", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell4.Bat2.xG3", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell4.Bat2.xR0", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell4.Bat2.xVint", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell4.Bat2.xqnom", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell4.Bat3.power_dissipated", 0U, 0, "AccumulatorModel/Cells/Cell4",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Power dissipated",
  }, { "Cells.Cell4.Bat3.private.xR1", 0U, 0, "AccumulatorModel/Cells/Cell4",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell4.Bat3.private.xR2", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell4.Bat3.private.xR3", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell4.Bat3.private.xtau1", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell4.Bat3.private.xtau2", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell4.Bat3.private.xtau3", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell4.Bat3.xG1", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell4.Bat3.xG2", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell4.Bat3.xG3", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell4.Bat3.xR0", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell4.Bat3.xVint", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell4.Bat3.xqnom", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell4.Cell1StateOfCharge", 0U, 0, "AccumulatorModel/Cells/Cell4", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "stateOfCharge", },
    { "Cells.Cell4.Cell2StateOfCharge", 0U, 0, "AccumulatorModel/Cells/Cell4",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "stateOfCharge",
  }, { "Cells.Cell4.Cell3StateOfCharge", 0U, 0, "AccumulatorModel/Cells/Cell4",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "stateOfCharge",
  }, { "Cells.Cell4.MOSFET_Ideal_Switching.mosfet_equation.v", 0U, 0,
    "AccumulatorModel/Cells/Cell4", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "v", }, { "Cells.Cell5.Bat2.i", 0U, 0,
    "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Current (positive in)", }, { "Cells.Cell5.Bat3.i", 0U, 0,
    "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Current (positive in)", }, {
    "Cells.Cell5.MOSFET_Ideal_Switching.S.v", 0U, 1,
    "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, { "Cells.Cell5.Bat1.p.v", 0U, 1,
    "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, { "Cells.Cell5.Bat1.power_dissipated", 0U,
    0, "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Power dissipated", }, { "Cells.Cell5.Bat1.private.xR1",
    0U, 0, "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell5.Bat1.private.xR2", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell5.Bat1.private.xR3", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell5.Bat1.private.xtau1", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell5.Bat1.private.xtau2", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell5.Bat1.private.xtau3", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell5.Bat1.xG1", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell5.Bat1.xG2", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell5.Bat1.xG3", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell5.Bat1.xR0", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell5.Bat1.xVint", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell5.Bat1.xqnom", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell5.Bat2.power_dissipated", 0U, 0, "AccumulatorModel/Cells/Cell5",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Power dissipated",
  }, { "Cells.Cell5.Bat2.private.xR1", 0U, 0, "AccumulatorModel/Cells/Cell5",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell5.Bat2.private.xR2", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell5.Bat2.private.xR3", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell5.Bat2.private.xtau1", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell5.Bat2.private.xtau2", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell5.Bat2.private.xtau3", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell5.Bat2.xG1", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell5.Bat2.xG2", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell5.Bat2.xG3", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell5.Bat2.xR0", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell5.Bat2.xVint", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell5.Bat2.xqnom", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell5.Bat3.power_dissipated", 0U, 0, "AccumulatorModel/Cells/Cell5",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Power dissipated",
  }, { "Cells.Cell5.Bat3.private.xR1", 0U, 0, "AccumulatorModel/Cells/Cell5",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell5.Bat3.private.xR2", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell5.Bat3.private.xR3", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell5.Bat3.private.xtau1", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell5.Bat3.private.xtau2", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell5.Bat3.private.xtau3", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell5.Bat3.xG1", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell5.Bat3.xG2", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell5.Bat3.xG3", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell5.Bat3.xR0", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell5.Bat3.xVint", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell5.Bat3.xqnom", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell5.Cell1StateOfCharge", 0U, 0, "AccumulatorModel/Cells/Cell5", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "stateOfCharge", },
    { "Cells.Cell5.Cell2StateOfCharge", 0U, 0, "AccumulatorModel/Cells/Cell5",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "stateOfCharge",
  }, { "Cells.Cell5.Cell3StateOfCharge", 0U, 0, "AccumulatorModel/Cells/Cell5",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "stateOfCharge",
  }, { "Cells.Cell5.MOSFET_Ideal_Switching.mosfet_equation.v", 0U, 0,
    "AccumulatorModel/Cells/Cell5", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "v", } };

static NeVariableData *s_discrete_data = NULL;
static NeObservableData s_observable_data[695] = { { "Cells.Cell1.Bat1.charge",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "hr*A", 1.0, "C",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Charge", }, { "Cells.Cell1.Bat1.i",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Cells.Cell1.Bat1.n.v", "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell1.Bat1.num_cycles", "AccumulatorModel/Cells/Cell1", 1U, 1U, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Cells.Cell1.Bat1.p.v", "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell1.Bat1.power_dissipated", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Cells.Cell1.Bat1.stateOfCharge", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Cells.Cell1.Bat1.v", "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell1.Bat1.vrc1",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc1", }, { "Cells.Cell1.Bat1.vrc2",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc2", }, { "Cells.Cell1.Bat1.vrc3",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc3", }, { "Cells.Cell1.Bat1.vrc4",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc4", }, { "Cells.Cell1.Bat1.vrc5",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc5", }, { "Cells.Cell1.Bat1.xG1",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "1/Ohm", 1.0, "s*C^2/m^2/kg",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell1.Bat1.xG2", "AccumulatorModel/Cells/Cell1", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell1.Bat1.xG3", "AccumulatorModel/Cells/Cell1", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell1.Bat1.xG4", "AccumulatorModel/Cells/Cell1", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R4(SOC,T,N)", }, {
    "Cells.Cell1.Bat1.xG5", "AccumulatorModel/Cells/Cell1", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R5(SOC,T,N)", }, {
    "Cells.Cell1.Bat1.xGsd", "AccumulatorModel/Cells/Cell1", 1U, 1U, "1/Ohm",
    1.0, "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/Rleak(T,N)", }, {
    "Cells.Cell1.Bat1.xR0", "AccumulatorModel/Cells/Cell1", 1U, 1U, "Ohm", 1.0,
    "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell1.Bat1.xVint", "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell1.Bat1.xqnom", "AccumulatorModel/Cells/Cell1", 1U, 1U, "hr*A",
    1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell1.Bat1.H.T", "AccumulatorModel/Cells/Cell1", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, { "Cells.Cell1.Bat1.Q",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow", }, {
    "Cells.Cell1.Bat1.temperature", "AccumulatorModel/Cells/Cell1", 1U, 1U, "K",
    1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell1.Bat1.private.xR1", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell1.Bat1.private.xR2", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell1.Bat1.private.xR3", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell1.Bat1.private.xtau1", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell1.Bat1.private.xtau2", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell1.Bat1.private.xtau3", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell1.Bat1.soc", "AccumulatorModel/Cells/Cell1", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, { "Cells.Cell1.Bat2.charge",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "hr*A", 1.0, "C",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Charge", }, { "Cells.Cell1.Bat2.i",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Cells.Cell1.Bat2.n.v", "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell1.Bat2.num_cycles", "AccumulatorModel/Cells/Cell1", 1U, 1U, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Cells.Cell1.Bat2.p.v", "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell1.Bat2.power_dissipated", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Cells.Cell1.Bat2.stateOfCharge", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Cells.Cell1.Bat2.v", "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell1.Bat2.vrc1",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc1", }, { "Cells.Cell1.Bat2.vrc2",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc2", }, { "Cells.Cell1.Bat2.vrc3",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc3", }, { "Cells.Cell1.Bat2.vrc4",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc4", }, { "Cells.Cell1.Bat2.vrc5",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc5", }, { "Cells.Cell1.Bat2.xG1",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "1/Ohm", 1.0, "s*C^2/m^2/kg",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell1.Bat2.xG2", "AccumulatorModel/Cells/Cell1", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell1.Bat2.xG3", "AccumulatorModel/Cells/Cell1", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell1.Bat2.xG4", "AccumulatorModel/Cells/Cell1", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R4(SOC,T,N)", }, {
    "Cells.Cell1.Bat2.xG5", "AccumulatorModel/Cells/Cell1", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R5(SOC,T,N)", }, {
    "Cells.Cell1.Bat2.xGsd", "AccumulatorModel/Cells/Cell1", 1U, 1U, "1/Ohm",
    1.0, "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/Rleak(T,N)", }, {
    "Cells.Cell1.Bat2.xR0", "AccumulatorModel/Cells/Cell1", 1U, 1U, "Ohm", 1.0,
    "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell1.Bat2.xVint", "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell1.Bat2.xqnom", "AccumulatorModel/Cells/Cell1", 1U, 1U, "hr*A",
    1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell1.Bat2.H.T", "AccumulatorModel/Cells/Cell1", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, { "Cells.Cell1.Bat2.Q",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow", }, {
    "Cells.Cell1.Bat2.temperature", "AccumulatorModel/Cells/Cell1", 1U, 1U, "K",
    1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell1.Bat2.private.xR1", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell1.Bat2.private.xR2", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell1.Bat2.private.xR3", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell1.Bat2.private.xtau1", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell1.Bat2.private.xtau2", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell1.Bat2.private.xtau3", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell1.Bat2.soc", "AccumulatorModel/Cells/Cell1", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, { "Cells.Cell1.Bat3.charge",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "hr*A", 1.0, "C",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Charge", }, { "Cells.Cell1.Bat3.i",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Cells.Cell1.Bat3.n.v", "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell1.Bat3.num_cycles", "AccumulatorModel/Cells/Cell1", 1U, 1U, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Cells.Cell1.Bat3.p.v", "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell1.Bat3.power_dissipated", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Cells.Cell1.Bat3.stateOfCharge", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Cells.Cell1.Bat3.v", "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell1.Bat3.vrc1",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc1", }, { "Cells.Cell1.Bat3.vrc2",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc2", }, { "Cells.Cell1.Bat3.vrc3",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc3", }, { "Cells.Cell1.Bat3.vrc4",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc4", }, { "Cells.Cell1.Bat3.vrc5",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc5", }, { "Cells.Cell1.Bat3.xG1",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "1/Ohm", 1.0, "s*C^2/m^2/kg",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell1.Bat3.xG2", "AccumulatorModel/Cells/Cell1", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell1.Bat3.xG3", "AccumulatorModel/Cells/Cell1", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell1.Bat3.xG4", "AccumulatorModel/Cells/Cell1", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R4(SOC,T,N)", }, {
    "Cells.Cell1.Bat3.xG5", "AccumulatorModel/Cells/Cell1", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R5(SOC,T,N)", }, {
    "Cells.Cell1.Bat3.xGsd", "AccumulatorModel/Cells/Cell1", 1U, 1U, "1/Ohm",
    1.0, "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/Rleak(T,N)", }, {
    "Cells.Cell1.Bat3.xR0", "AccumulatorModel/Cells/Cell1", 1U, 1U, "Ohm", 1.0,
    "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell1.Bat3.xVint", "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell1.Bat3.xqnom", "AccumulatorModel/Cells/Cell1", 1U, 1U, "hr*A",
    1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell1.Bat3.H.T", "AccumulatorModel/Cells/Cell1", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, { "Cells.Cell1.Bat3.Q",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow", }, {
    "Cells.Cell1.Bat3.temperature", "AccumulatorModel/Cells/Cell1", 1U, 1U, "K",
    1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell1.Bat3.private.xR1", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell1.Bat3.private.xR2", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell1.Bat3.private.xR3", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell1.Bat3.private.xtau1", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell1.Bat3.private.xtau2", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell1.Bat3.private.xtau3", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell1.Bat3.soc", "AccumulatorModel/Cells/Cell1", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, {
    "Cells.Cell1.Cell1StateOfCharge", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "stateOfCharge", }, {
    "Cells.Cell1.Cell2StateOfCharge", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "stateOfCharge", }, {
    "Cells.Cell1.Cell3StateOfCharge", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "stateOfCharge", }, {
    "Cells.Cell1.Convective_Heat_Transfer.A.T", "AccumulatorModel/Cells/Cell1",
    1U, 1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell1.Convective_Heat_Transfer.B.T", "AccumulatorModel/Cells/Cell1",
    1U, 1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell1.Convective_Heat_Transfer.Q", "AccumulatorModel/Cells/Cell1", 1U,
    1U, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Cells.Cell1.Convective_Heat_Transfer.T", "AccumulatorModel/Cells/Cell1", 1U,
    1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature difference", }, {
    "Cells.Cell1.Convective_Heat_Transfer1.A.T", "AccumulatorModel/Cells/Cell1",
    1U, 1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell1.Convective_Heat_Transfer1.B.T", "AccumulatorModel/Cells/Cell1",
    1U, 1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell1.Convective_Heat_Transfer1.Q", "AccumulatorModel/Cells/Cell1",
    1U, 1U, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Cells.Cell1.Convective_Heat_Transfer1.T", "AccumulatorModel/Cells/Cell1",
    1U, 1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature difference", }, {
    "Cells.Cell1.D1.i", "AccumulatorModel/Cells/Cell1", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "Cells.Cell1.D1.n.v",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell1.D1.p.v",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell1.D1.v",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell1.DischargeSig", "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "DischargeSig", }, {
    "Cells.Cell1.HeatConn.T", "AccumulatorModel/Cells/Cell1", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell1.InConn.v", "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell1.MOSFET_Ideal_Switching.D.v", "AccumulatorModel/Cells/Cell1", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell1.MOSFET_Ideal_Switching.G", "AccumulatorModel/Cells/Cell1", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "G", }, {
    "Cells.Cell1.MOSFET_Ideal_Switching.S.v", "AccumulatorModel/Cells/Cell1", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell1.MOSFET_Ideal_Switching.mosfet_equation.G",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Cells.Cell1.MOSFET_Ideal_Switching.mosfet_equation.i",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Cells.Cell1.MOSFET_Ideal_Switching.mosfet_equation.isOn",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "Cells.Cell1.MOSFET_Ideal_Switching.mosfet_equation.n.v",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell1.MOSFET_Ideal_Switching.mosfet_equation.p.v",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell1.MOSFET_Ideal_Switching.mosfet_equation.v",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Cells.Cell1.MOSFET_Ideal_Switching.mosfet_equation.power_dissipated",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Cells.Cell1.OutConn.v", "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell1.R1.i",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "Cells.Cell1.R1.n.v",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell1.R1.p.v",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell1.R1.v",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell1.VoltageSig",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "VoltageSig", }, {
    "Cells.Cell1.Voltage_Sensor.V", "AccumulatorModel/Cells/Cell1", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Cells.Cell1.Voltage_Sensor.i1",
    "AccumulatorModel/Cells/Cell1", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Cells.Cell1.Voltage_Sensor.n.v", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell1.Voltage_Sensor.p.v", "AccumulatorModel/Cells/Cell1", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell1.Voltage_Sensor.v1", "AccumulatorModel/Cells/Cell1", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell2.Bat1.charge",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "hr*A", 1.0, "C",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Charge", }, { "Cells.Cell2.Bat1.i",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Cells.Cell2.Bat1.n.v", "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell2.Bat1.num_cycles", "AccumulatorModel/Cells/Cell2", 1U, 1U, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Cells.Cell2.Bat1.p.v", "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell2.Bat1.power_dissipated", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Cells.Cell2.Bat1.stateOfCharge", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Cells.Cell2.Bat1.v", "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell2.Bat1.vrc1",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc1", }, { "Cells.Cell2.Bat1.vrc2",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc2", }, { "Cells.Cell2.Bat1.vrc3",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc3", }, { "Cells.Cell2.Bat1.vrc4",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc4", }, { "Cells.Cell2.Bat1.vrc5",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc5", }, { "Cells.Cell2.Bat1.xG1",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "1/Ohm", 1.0, "s*C^2/m^2/kg",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell2.Bat1.xG2", "AccumulatorModel/Cells/Cell2", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell2.Bat1.xG3", "AccumulatorModel/Cells/Cell2", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell2.Bat1.xG4", "AccumulatorModel/Cells/Cell2", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R4(SOC,T,N)", }, {
    "Cells.Cell2.Bat1.xG5", "AccumulatorModel/Cells/Cell2", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R5(SOC,T,N)", }, {
    "Cells.Cell2.Bat1.xGsd", "AccumulatorModel/Cells/Cell2", 1U, 1U, "1/Ohm",
    1.0, "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/Rleak(T,N)", }, {
    "Cells.Cell2.Bat1.xR0", "AccumulatorModel/Cells/Cell2", 1U, 1U, "Ohm", 1.0,
    "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell2.Bat1.xVint", "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell2.Bat1.xqnom", "AccumulatorModel/Cells/Cell2", 1U, 1U, "hr*A",
    1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell2.Bat1.H.T", "AccumulatorModel/Cells/Cell2", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, { "Cells.Cell2.Bat1.Q",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow", }, {
    "Cells.Cell2.Bat1.temperature", "AccumulatorModel/Cells/Cell2", 1U, 1U, "K",
    1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell2.Bat1.private.xR1", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell2.Bat1.private.xR2", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell2.Bat1.private.xR3", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell2.Bat1.private.xtau1", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell2.Bat1.private.xtau2", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell2.Bat1.private.xtau3", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell2.Bat1.soc", "AccumulatorModel/Cells/Cell2", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, { "Cells.Cell2.Bat2.charge",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "hr*A", 1.0, "C",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Charge", }, { "Cells.Cell2.Bat2.i",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Cells.Cell2.Bat2.n.v", "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell2.Bat2.num_cycles", "AccumulatorModel/Cells/Cell2", 1U, 1U, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Cells.Cell2.Bat2.p.v", "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell2.Bat2.power_dissipated", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Cells.Cell2.Bat2.stateOfCharge", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Cells.Cell2.Bat2.v", "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell2.Bat2.vrc1",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc1", }, { "Cells.Cell2.Bat2.vrc2",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc2", }, { "Cells.Cell2.Bat2.vrc3",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc3", }, { "Cells.Cell2.Bat2.vrc4",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc4", }, { "Cells.Cell2.Bat2.vrc5",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc5", }, { "Cells.Cell2.Bat2.xG1",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "1/Ohm", 1.0, "s*C^2/m^2/kg",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell2.Bat2.xG2", "AccumulatorModel/Cells/Cell2", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell2.Bat2.xG3", "AccumulatorModel/Cells/Cell2", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell2.Bat2.xG4", "AccumulatorModel/Cells/Cell2", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R4(SOC,T,N)", }, {
    "Cells.Cell2.Bat2.xG5", "AccumulatorModel/Cells/Cell2", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R5(SOC,T,N)", }, {
    "Cells.Cell2.Bat2.xGsd", "AccumulatorModel/Cells/Cell2", 1U, 1U, "1/Ohm",
    1.0, "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/Rleak(T,N)", }, {
    "Cells.Cell2.Bat2.xR0", "AccumulatorModel/Cells/Cell2", 1U, 1U, "Ohm", 1.0,
    "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell2.Bat2.xVint", "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell2.Bat2.xqnom", "AccumulatorModel/Cells/Cell2", 1U, 1U, "hr*A",
    1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell2.Bat2.H.T", "AccumulatorModel/Cells/Cell2", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, { "Cells.Cell2.Bat2.Q",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow", }, {
    "Cells.Cell2.Bat2.temperature", "AccumulatorModel/Cells/Cell2", 1U, 1U, "K",
    1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell2.Bat2.private.xR1", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell2.Bat2.private.xR2", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell2.Bat2.private.xR3", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell2.Bat2.private.xtau1", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell2.Bat2.private.xtau2", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell2.Bat2.private.xtau3", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell2.Bat2.soc", "AccumulatorModel/Cells/Cell2", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, { "Cells.Cell2.Bat3.charge",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "hr*A", 1.0, "C",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Charge", }, { "Cells.Cell2.Bat3.i",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Cells.Cell2.Bat3.n.v", "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell2.Bat3.num_cycles", "AccumulatorModel/Cells/Cell2", 1U, 1U, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Cells.Cell2.Bat3.p.v", "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell2.Bat3.power_dissipated", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Cells.Cell2.Bat3.stateOfCharge", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Cells.Cell2.Bat3.v", "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell2.Bat3.vrc1",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc1", }, { "Cells.Cell2.Bat3.vrc2",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc2", }, { "Cells.Cell2.Bat3.vrc3",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc3", }, { "Cells.Cell2.Bat3.vrc4",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc4", }, { "Cells.Cell2.Bat3.vrc5",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc5", }, { "Cells.Cell2.Bat3.xG1",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "1/Ohm", 1.0, "s*C^2/m^2/kg",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell2.Bat3.xG2", "AccumulatorModel/Cells/Cell2", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell2.Bat3.xG3", "AccumulatorModel/Cells/Cell2", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell2.Bat3.xG4", "AccumulatorModel/Cells/Cell2", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R4(SOC,T,N)", }, {
    "Cells.Cell2.Bat3.xG5", "AccumulatorModel/Cells/Cell2", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R5(SOC,T,N)", }, {
    "Cells.Cell2.Bat3.xGsd", "AccumulatorModel/Cells/Cell2", 1U, 1U, "1/Ohm",
    1.0, "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/Rleak(T,N)", }, {
    "Cells.Cell2.Bat3.xR0", "AccumulatorModel/Cells/Cell2", 1U, 1U, "Ohm", 1.0,
    "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell2.Bat3.xVint", "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell2.Bat3.xqnom", "AccumulatorModel/Cells/Cell2", 1U, 1U, "hr*A",
    1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell2.Bat3.H.T", "AccumulatorModel/Cells/Cell2", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, { "Cells.Cell2.Bat3.Q",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow", }, {
    "Cells.Cell2.Bat3.temperature", "AccumulatorModel/Cells/Cell2", 1U, 1U, "K",
    1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell2.Bat3.private.xR1", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell2.Bat3.private.xR2", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell2.Bat3.private.xR3", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell2.Bat3.private.xtau1", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell2.Bat3.private.xtau2", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell2.Bat3.private.xtau3", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell2.Bat3.soc", "AccumulatorModel/Cells/Cell2", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, {
    "Cells.Cell2.Cell1StateOfCharge", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "stateOfCharge", }, {
    "Cells.Cell2.Cell2StateOfCharge", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "stateOfCharge", }, {
    "Cells.Cell2.Cell3StateOfCharge", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "stateOfCharge", }, {
    "Cells.Cell2.Convective_Heat_Transfer.A.T", "AccumulatorModel/Cells/Cell2",
    1U, 1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell2.Convective_Heat_Transfer.B.T", "AccumulatorModel/Cells/Cell2",
    1U, 1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell2.Convective_Heat_Transfer.Q", "AccumulatorModel/Cells/Cell2", 1U,
    1U, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Cells.Cell2.Convective_Heat_Transfer.T", "AccumulatorModel/Cells/Cell2", 1U,
    1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature difference", }, {
    "Cells.Cell2.Convective_Heat_Transfer1.A.T", "AccumulatorModel/Cells/Cell2",
    1U, 1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell2.Convective_Heat_Transfer1.B.T", "AccumulatorModel/Cells/Cell2",
    1U, 1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell2.Convective_Heat_Transfer1.Q", "AccumulatorModel/Cells/Cell2",
    1U, 1U, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Cells.Cell2.Convective_Heat_Transfer1.T", "AccumulatorModel/Cells/Cell2",
    1U, 1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature difference", }, {
    "Cells.Cell2.D1.i", "AccumulatorModel/Cells/Cell2", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "Cells.Cell2.D1.n.v",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell2.D1.p.v",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell2.D1.v",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell2.DischargeSig", "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "DischargeSig", }, {
    "Cells.Cell2.HeatConn.T", "AccumulatorModel/Cells/Cell2", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell2.InConn.v", "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell2.MOSFET_Ideal_Switching.D.v", "AccumulatorModel/Cells/Cell2", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell2.MOSFET_Ideal_Switching.G", "AccumulatorModel/Cells/Cell2", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "G", }, {
    "Cells.Cell2.MOSFET_Ideal_Switching.S.v", "AccumulatorModel/Cells/Cell2", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell2.MOSFET_Ideal_Switching.mosfet_equation.G",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Cells.Cell2.MOSFET_Ideal_Switching.mosfet_equation.i",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Cells.Cell2.MOSFET_Ideal_Switching.mosfet_equation.isOn",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "Cells.Cell2.MOSFET_Ideal_Switching.mosfet_equation.n.v",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell2.MOSFET_Ideal_Switching.mosfet_equation.p.v",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell2.MOSFET_Ideal_Switching.mosfet_equation.v",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Cells.Cell2.MOSFET_Ideal_Switching.mosfet_equation.power_dissipated",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Cells.Cell2.OutConn.v", "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell2.R1.i",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "Cells.Cell2.R1.n.v",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell2.R1.p.v",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell2.R1.v",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell2.VoltageSig",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "VoltageSig", }, {
    "Cells.Cell2.Voltage_Sensor.V", "AccumulatorModel/Cells/Cell2", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Cells.Cell2.Voltage_Sensor.i1",
    "AccumulatorModel/Cells/Cell2", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Cells.Cell2.Voltage_Sensor.n.v", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell2.Voltage_Sensor.p.v", "AccumulatorModel/Cells/Cell2", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell2.Voltage_Sensor.v1", "AccumulatorModel/Cells/Cell2", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell3.Bat1.charge",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "hr*A", 1.0, "C",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Charge", }, { "Cells.Cell3.Bat1.i",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Cells.Cell3.Bat1.n.v", "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell3.Bat1.num_cycles", "AccumulatorModel/Cells/Cell3", 1U, 1U, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Cells.Cell3.Bat1.p.v", "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell3.Bat1.power_dissipated", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Cells.Cell3.Bat1.stateOfCharge", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Cells.Cell3.Bat1.v", "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell3.Bat1.vrc1",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc1", }, { "Cells.Cell3.Bat1.vrc2",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc2", }, { "Cells.Cell3.Bat1.vrc3",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc3", }, { "Cells.Cell3.Bat1.vrc4",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc4", }, { "Cells.Cell3.Bat1.vrc5",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc5", }, { "Cells.Cell3.Bat1.xG1",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "1/Ohm", 1.0, "s*C^2/m^2/kg",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell3.Bat1.xG2", "AccumulatorModel/Cells/Cell3", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell3.Bat1.xG3", "AccumulatorModel/Cells/Cell3", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell3.Bat1.xG4", "AccumulatorModel/Cells/Cell3", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R4(SOC,T,N)", }, {
    "Cells.Cell3.Bat1.xG5", "AccumulatorModel/Cells/Cell3", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R5(SOC,T,N)", }, {
    "Cells.Cell3.Bat1.xGsd", "AccumulatorModel/Cells/Cell3", 1U, 1U, "1/Ohm",
    1.0, "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/Rleak(T,N)", }, {
    "Cells.Cell3.Bat1.xR0", "AccumulatorModel/Cells/Cell3", 1U, 1U, "Ohm", 1.0,
    "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell3.Bat1.xVint", "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell3.Bat1.xqnom", "AccumulatorModel/Cells/Cell3", 1U, 1U, "hr*A",
    1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell3.Bat1.H.T", "AccumulatorModel/Cells/Cell3", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, { "Cells.Cell3.Bat1.Q",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow", }, {
    "Cells.Cell3.Bat1.temperature", "AccumulatorModel/Cells/Cell3", 1U, 1U, "K",
    1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell3.Bat1.private.xR1", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell3.Bat1.private.xR2", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell3.Bat1.private.xR3", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell3.Bat1.private.xtau1", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell3.Bat1.private.xtau2", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell3.Bat1.private.xtau3", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell3.Bat1.soc", "AccumulatorModel/Cells/Cell3", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, { "Cells.Cell3.Bat2.charge",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "hr*A", 1.0, "C",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Charge", }, { "Cells.Cell3.Bat2.i",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Cells.Cell3.Bat2.n.v", "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell3.Bat2.num_cycles", "AccumulatorModel/Cells/Cell3", 1U, 1U, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Cells.Cell3.Bat2.p.v", "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell3.Bat2.power_dissipated", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Cells.Cell3.Bat2.stateOfCharge", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Cells.Cell3.Bat2.v", "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell3.Bat2.vrc1",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc1", }, { "Cells.Cell3.Bat2.vrc2",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc2", }, { "Cells.Cell3.Bat2.vrc3",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc3", }, { "Cells.Cell3.Bat2.vrc4",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc4", }, { "Cells.Cell3.Bat2.vrc5",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc5", }, { "Cells.Cell3.Bat2.xG1",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "1/Ohm", 1.0, "s*C^2/m^2/kg",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell3.Bat2.xG2", "AccumulatorModel/Cells/Cell3", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell3.Bat2.xG3", "AccumulatorModel/Cells/Cell3", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell3.Bat2.xG4", "AccumulatorModel/Cells/Cell3", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R4(SOC,T,N)", }, {
    "Cells.Cell3.Bat2.xG5", "AccumulatorModel/Cells/Cell3", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R5(SOC,T,N)", }, {
    "Cells.Cell3.Bat2.xGsd", "AccumulatorModel/Cells/Cell3", 1U, 1U, "1/Ohm",
    1.0, "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/Rleak(T,N)", }, {
    "Cells.Cell3.Bat2.xR0", "AccumulatorModel/Cells/Cell3", 1U, 1U, "Ohm", 1.0,
    "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell3.Bat2.xVint", "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell3.Bat2.xqnom", "AccumulatorModel/Cells/Cell3", 1U, 1U, "hr*A",
    1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell3.Bat2.H.T", "AccumulatorModel/Cells/Cell3", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, { "Cells.Cell3.Bat2.Q",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow", }, {
    "Cells.Cell3.Bat2.temperature", "AccumulatorModel/Cells/Cell3", 1U, 1U, "K",
    1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell3.Bat2.private.xR1", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell3.Bat2.private.xR2", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell3.Bat2.private.xR3", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell3.Bat2.private.xtau1", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell3.Bat2.private.xtau2", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell3.Bat2.private.xtau3", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell3.Bat2.soc", "AccumulatorModel/Cells/Cell3", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, { "Cells.Cell3.Bat3.charge",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "hr*A", 1.0, "C",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Charge", }, { "Cells.Cell3.Bat3.i",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Cells.Cell3.Bat3.n.v", "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell3.Bat3.num_cycles", "AccumulatorModel/Cells/Cell3", 1U, 1U, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Cells.Cell3.Bat3.p.v", "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell3.Bat3.power_dissipated", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Cells.Cell3.Bat3.stateOfCharge", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Cells.Cell3.Bat3.v", "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell3.Bat3.vrc1",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc1", }, { "Cells.Cell3.Bat3.vrc2",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc2", }, { "Cells.Cell3.Bat3.vrc3",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc3", }, { "Cells.Cell3.Bat3.vrc4",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc4", }, { "Cells.Cell3.Bat3.vrc5",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc5", }, { "Cells.Cell3.Bat3.xG1",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "1/Ohm", 1.0, "s*C^2/m^2/kg",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell3.Bat3.xG2", "AccumulatorModel/Cells/Cell3", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell3.Bat3.xG3", "AccumulatorModel/Cells/Cell3", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell3.Bat3.xG4", "AccumulatorModel/Cells/Cell3", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R4(SOC,T,N)", }, {
    "Cells.Cell3.Bat3.xG5", "AccumulatorModel/Cells/Cell3", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R5(SOC,T,N)", }, {
    "Cells.Cell3.Bat3.xGsd", "AccumulatorModel/Cells/Cell3", 1U, 1U, "1/Ohm",
    1.0, "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/Rleak(T,N)", }, {
    "Cells.Cell3.Bat3.xR0", "AccumulatorModel/Cells/Cell3", 1U, 1U, "Ohm", 1.0,
    "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell3.Bat3.xVint", "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell3.Bat3.xqnom", "AccumulatorModel/Cells/Cell3", 1U, 1U, "hr*A",
    1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell3.Bat3.H.T", "AccumulatorModel/Cells/Cell3", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, { "Cells.Cell3.Bat3.Q",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow", }, {
    "Cells.Cell3.Bat3.temperature", "AccumulatorModel/Cells/Cell3", 1U, 1U, "K",
    1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell3.Bat3.private.xR1", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell3.Bat3.private.xR2", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell3.Bat3.private.xR3", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell3.Bat3.private.xtau1", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell3.Bat3.private.xtau2", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell3.Bat3.private.xtau3", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell3.Bat3.soc", "AccumulatorModel/Cells/Cell3", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, {
    "Cells.Cell3.Cell1StateOfCharge", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "stateOfCharge", }, {
    "Cells.Cell3.Cell2StateOfCharge", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "stateOfCharge", }, {
    "Cells.Cell3.Cell3StateOfCharge", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "stateOfCharge", }, {
    "Cells.Cell3.Convective_Heat_Transfer.A.T", "AccumulatorModel/Cells/Cell3",
    1U, 1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell3.Convective_Heat_Transfer.B.T", "AccumulatorModel/Cells/Cell3",
    1U, 1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell3.Convective_Heat_Transfer.Q", "AccumulatorModel/Cells/Cell3", 1U,
    1U, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Cells.Cell3.Convective_Heat_Transfer.T", "AccumulatorModel/Cells/Cell3", 1U,
    1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature difference", }, {
    "Cells.Cell3.Convective_Heat_Transfer1.A.T", "AccumulatorModel/Cells/Cell3",
    1U, 1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell3.Convective_Heat_Transfer1.B.T", "AccumulatorModel/Cells/Cell3",
    1U, 1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell3.Convective_Heat_Transfer1.Q", "AccumulatorModel/Cells/Cell3",
    1U, 1U, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Cells.Cell3.Convective_Heat_Transfer1.T", "AccumulatorModel/Cells/Cell3",
    1U, 1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature difference", }, {
    "Cells.Cell3.D1.i", "AccumulatorModel/Cells/Cell3", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "Cells.Cell3.D1.n.v",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell3.D1.p.v",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell3.D1.v",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell3.DischargeSig", "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "DischargeSig", }, {
    "Cells.Cell3.HeatConn.T", "AccumulatorModel/Cells/Cell3", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell3.InConn.v", "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell3.MOSFET_Ideal_Switching.D.v", "AccumulatorModel/Cells/Cell3", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell3.MOSFET_Ideal_Switching.G", "AccumulatorModel/Cells/Cell3", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "G", }, {
    "Cells.Cell3.MOSFET_Ideal_Switching.S.v", "AccumulatorModel/Cells/Cell3", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell3.MOSFET_Ideal_Switching.mosfet_equation.G",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Cells.Cell3.MOSFET_Ideal_Switching.mosfet_equation.i",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Cells.Cell3.MOSFET_Ideal_Switching.mosfet_equation.isOn",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "Cells.Cell3.MOSFET_Ideal_Switching.mosfet_equation.n.v",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell3.MOSFET_Ideal_Switching.mosfet_equation.p.v",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell3.MOSFET_Ideal_Switching.mosfet_equation.v",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Cells.Cell3.MOSFET_Ideal_Switching.mosfet_equation.power_dissipated",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Cells.Cell3.OutConn.v", "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell3.R1.i",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "Cells.Cell3.R1.n.v",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell3.R1.p.v",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell3.R1.v",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell3.VoltageSig",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "VoltageSig", }, {
    "Cells.Cell3.Voltage_Sensor.V", "AccumulatorModel/Cells/Cell3", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Cells.Cell3.Voltage_Sensor.i1",
    "AccumulatorModel/Cells/Cell3", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Cells.Cell3.Voltage_Sensor.n.v", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell3.Voltage_Sensor.p.v", "AccumulatorModel/Cells/Cell3", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell3.Voltage_Sensor.v1", "AccumulatorModel/Cells/Cell3", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell4.Bat1.charge",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "hr*A", 1.0, "C",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Charge", }, { "Cells.Cell4.Bat1.i",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Cells.Cell4.Bat1.n.v", "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell4.Bat1.num_cycles", "AccumulatorModel/Cells/Cell4", 1U, 1U, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Cells.Cell4.Bat1.p.v", "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell4.Bat1.power_dissipated", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Cells.Cell4.Bat1.stateOfCharge", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Cells.Cell4.Bat1.v", "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell4.Bat1.vrc1",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc1", }, { "Cells.Cell4.Bat1.vrc2",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc2", }, { "Cells.Cell4.Bat1.vrc3",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc3", }, { "Cells.Cell4.Bat1.vrc4",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc4", }, { "Cells.Cell4.Bat1.vrc5",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc5", }, { "Cells.Cell4.Bat1.xG1",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "1/Ohm", 1.0, "s*C^2/m^2/kg",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell4.Bat1.xG2", "AccumulatorModel/Cells/Cell4", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell4.Bat1.xG3", "AccumulatorModel/Cells/Cell4", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell4.Bat1.xG4", "AccumulatorModel/Cells/Cell4", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R4(SOC,T,N)", }, {
    "Cells.Cell4.Bat1.xG5", "AccumulatorModel/Cells/Cell4", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R5(SOC,T,N)", }, {
    "Cells.Cell4.Bat1.xGsd", "AccumulatorModel/Cells/Cell4", 1U, 1U, "1/Ohm",
    1.0, "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/Rleak(T,N)", }, {
    "Cells.Cell4.Bat1.xR0", "AccumulatorModel/Cells/Cell4", 1U, 1U, "Ohm", 1.0,
    "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell4.Bat1.xVint", "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell4.Bat1.xqnom", "AccumulatorModel/Cells/Cell4", 1U, 1U, "hr*A",
    1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell4.Bat1.H.T", "AccumulatorModel/Cells/Cell4", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, { "Cells.Cell4.Bat1.Q",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow", }, {
    "Cells.Cell4.Bat1.temperature", "AccumulatorModel/Cells/Cell4", 1U, 1U, "K",
    1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell4.Bat1.private.xR1", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell4.Bat1.private.xR2", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell4.Bat1.private.xR3", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell4.Bat1.private.xtau1", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell4.Bat1.private.xtau2", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell4.Bat1.private.xtau3", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell4.Bat1.soc", "AccumulatorModel/Cells/Cell4", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, { "Cells.Cell4.Bat2.charge",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "hr*A", 1.0, "C",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Charge", }, { "Cells.Cell4.Bat2.i",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Cells.Cell4.Bat2.n.v", "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell4.Bat2.num_cycles", "AccumulatorModel/Cells/Cell4", 1U, 1U, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Cells.Cell4.Bat2.p.v", "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell4.Bat2.power_dissipated", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Cells.Cell4.Bat2.stateOfCharge", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Cells.Cell4.Bat2.v", "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell4.Bat2.vrc1",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc1", }, { "Cells.Cell4.Bat2.vrc2",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc2", }, { "Cells.Cell4.Bat2.vrc3",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc3", }, { "Cells.Cell4.Bat2.vrc4",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc4", }, { "Cells.Cell4.Bat2.vrc5",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc5", }, { "Cells.Cell4.Bat2.xG1",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "1/Ohm", 1.0, "s*C^2/m^2/kg",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell4.Bat2.xG2", "AccumulatorModel/Cells/Cell4", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell4.Bat2.xG3", "AccumulatorModel/Cells/Cell4", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell4.Bat2.xG4", "AccumulatorModel/Cells/Cell4", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R4(SOC,T,N)", }, {
    "Cells.Cell4.Bat2.xG5", "AccumulatorModel/Cells/Cell4", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R5(SOC,T,N)", }, {
    "Cells.Cell4.Bat2.xGsd", "AccumulatorModel/Cells/Cell4", 1U, 1U, "1/Ohm",
    1.0, "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/Rleak(T,N)", }, {
    "Cells.Cell4.Bat2.xR0", "AccumulatorModel/Cells/Cell4", 1U, 1U, "Ohm", 1.0,
    "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell4.Bat2.xVint", "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell4.Bat2.xqnom", "AccumulatorModel/Cells/Cell4", 1U, 1U, "hr*A",
    1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell4.Bat2.H.T", "AccumulatorModel/Cells/Cell4", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, { "Cells.Cell4.Bat2.Q",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow", }, {
    "Cells.Cell4.Bat2.temperature", "AccumulatorModel/Cells/Cell4", 1U, 1U, "K",
    1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell4.Bat2.private.xR1", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell4.Bat2.private.xR2", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell4.Bat2.private.xR3", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell4.Bat2.private.xtau1", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell4.Bat2.private.xtau2", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell4.Bat2.private.xtau3", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell4.Bat2.soc", "AccumulatorModel/Cells/Cell4", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, { "Cells.Cell4.Bat3.charge",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "hr*A", 1.0, "C",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Charge", }, { "Cells.Cell4.Bat3.i",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Cells.Cell4.Bat3.n.v", "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell4.Bat3.num_cycles", "AccumulatorModel/Cells/Cell4", 1U, 1U, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Cells.Cell4.Bat3.p.v", "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell4.Bat3.power_dissipated", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Cells.Cell4.Bat3.stateOfCharge", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Cells.Cell4.Bat3.v", "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell4.Bat3.vrc1",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc1", }, { "Cells.Cell4.Bat3.vrc2",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc2", }, { "Cells.Cell4.Bat3.vrc3",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc3", }, { "Cells.Cell4.Bat3.vrc4",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc4", }, { "Cells.Cell4.Bat3.vrc5",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc5", }, { "Cells.Cell4.Bat3.xG1",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "1/Ohm", 1.0, "s*C^2/m^2/kg",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell4.Bat3.xG2", "AccumulatorModel/Cells/Cell4", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell4.Bat3.xG3", "AccumulatorModel/Cells/Cell4", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell4.Bat3.xG4", "AccumulatorModel/Cells/Cell4", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R4(SOC,T,N)", }, {
    "Cells.Cell4.Bat3.xG5", "AccumulatorModel/Cells/Cell4", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R5(SOC,T,N)", }, {
    "Cells.Cell4.Bat3.xGsd", "AccumulatorModel/Cells/Cell4", 1U, 1U, "1/Ohm",
    1.0, "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/Rleak(T,N)", }, {
    "Cells.Cell4.Bat3.xR0", "AccumulatorModel/Cells/Cell4", 1U, 1U, "Ohm", 1.0,
    "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell4.Bat3.xVint", "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell4.Bat3.xqnom", "AccumulatorModel/Cells/Cell4", 1U, 1U, "hr*A",
    1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell4.Bat3.H.T", "AccumulatorModel/Cells/Cell4", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, { "Cells.Cell4.Bat3.Q",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow", }, {
    "Cells.Cell4.Bat3.temperature", "AccumulatorModel/Cells/Cell4", 1U, 1U, "K",
    1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell4.Bat3.private.xR1", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell4.Bat3.private.xR2", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell4.Bat3.private.xR3", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell4.Bat3.private.xtau1", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell4.Bat3.private.xtau2", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell4.Bat3.private.xtau3", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell4.Bat3.soc", "AccumulatorModel/Cells/Cell4", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, {
    "Cells.Cell4.Cell1StateOfCharge", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "stateOfCharge", }, {
    "Cells.Cell4.Cell2StateOfCharge", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "stateOfCharge", }, {
    "Cells.Cell4.Cell3StateOfCharge", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "stateOfCharge", }, {
    "Cells.Cell4.Convective_Heat_Transfer.A.T", "AccumulatorModel/Cells/Cell4",
    1U, 1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell4.Convective_Heat_Transfer.B.T", "AccumulatorModel/Cells/Cell4",
    1U, 1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell4.Convective_Heat_Transfer.Q", "AccumulatorModel/Cells/Cell4", 1U,
    1U, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Cells.Cell4.Convective_Heat_Transfer.T", "AccumulatorModel/Cells/Cell4", 1U,
    1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature difference", }, {
    "Cells.Cell4.Convective_Heat_Transfer1.A.T", "AccumulatorModel/Cells/Cell4",
    1U, 1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell4.Convective_Heat_Transfer1.B.T", "AccumulatorModel/Cells/Cell4",
    1U, 1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell4.Convective_Heat_Transfer1.Q", "AccumulatorModel/Cells/Cell4",
    1U, 1U, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Cells.Cell4.Convective_Heat_Transfer1.T", "AccumulatorModel/Cells/Cell4",
    1U, 1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature difference", }, {
    "Cells.Cell4.D1.i", "AccumulatorModel/Cells/Cell4", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "Cells.Cell4.D1.n.v",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell4.D1.p.v",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell4.D1.v",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell4.DischargeSig", "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "DischargeSig", }, {
    "Cells.Cell4.HeatConn.T", "AccumulatorModel/Cells/Cell4", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell4.InConn.v", "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell4.MOSFET_Ideal_Switching.D.v", "AccumulatorModel/Cells/Cell4", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell4.MOSFET_Ideal_Switching.G", "AccumulatorModel/Cells/Cell4", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "G", }, {
    "Cells.Cell4.MOSFET_Ideal_Switching.S.v", "AccumulatorModel/Cells/Cell4", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell4.MOSFET_Ideal_Switching.mosfet_equation.G",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Cells.Cell4.MOSFET_Ideal_Switching.mosfet_equation.i",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Cells.Cell4.MOSFET_Ideal_Switching.mosfet_equation.isOn",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "Cells.Cell4.MOSFET_Ideal_Switching.mosfet_equation.n.v",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell4.MOSFET_Ideal_Switching.mosfet_equation.p.v",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell4.MOSFET_Ideal_Switching.mosfet_equation.v",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Cells.Cell4.MOSFET_Ideal_Switching.mosfet_equation.power_dissipated",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Cells.Cell4.OutConn.v", "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell4.R1.i",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "Cells.Cell4.R1.n.v",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell4.R1.p.v",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell4.R1.v",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell4.VoltageSig",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "VoltageSig", }, {
    "Cells.Cell4.Voltage_Sensor.V", "AccumulatorModel/Cells/Cell4", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Cells.Cell4.Voltage_Sensor.i1",
    "AccumulatorModel/Cells/Cell4", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Cells.Cell4.Voltage_Sensor.n.v", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell4.Voltage_Sensor.p.v", "AccumulatorModel/Cells/Cell4", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell4.Voltage_Sensor.v1", "AccumulatorModel/Cells/Cell4", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell5.Bat1.charge",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "hr*A", 1.0, "C",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Charge", }, { "Cells.Cell5.Bat1.i",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Cells.Cell5.Bat1.n.v", "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell5.Bat1.num_cycles", "AccumulatorModel/Cells/Cell5", 1U, 1U, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Cells.Cell5.Bat1.p.v", "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell5.Bat1.power_dissipated", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Cells.Cell5.Bat1.stateOfCharge", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Cells.Cell5.Bat1.v", "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell5.Bat1.vrc1",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc1", }, { "Cells.Cell5.Bat1.vrc2",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc2", }, { "Cells.Cell5.Bat1.vrc3",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc3", }, { "Cells.Cell5.Bat1.vrc4",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc4", }, { "Cells.Cell5.Bat1.vrc5",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc5", }, { "Cells.Cell5.Bat1.xG1",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "1/Ohm", 1.0, "s*C^2/m^2/kg",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell5.Bat1.xG2", "AccumulatorModel/Cells/Cell5", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell5.Bat1.xG3", "AccumulatorModel/Cells/Cell5", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell5.Bat1.xG4", "AccumulatorModel/Cells/Cell5", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R4(SOC,T,N)", }, {
    "Cells.Cell5.Bat1.xG5", "AccumulatorModel/Cells/Cell5", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R5(SOC,T,N)", }, {
    "Cells.Cell5.Bat1.xGsd", "AccumulatorModel/Cells/Cell5", 1U, 1U, "1/Ohm",
    1.0, "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/Rleak(T,N)", }, {
    "Cells.Cell5.Bat1.xR0", "AccumulatorModel/Cells/Cell5", 1U, 1U, "Ohm", 1.0,
    "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell5.Bat1.xVint", "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell5.Bat1.xqnom", "AccumulatorModel/Cells/Cell5", 1U, 1U, "hr*A",
    1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell5.Bat1.H.T", "AccumulatorModel/Cells/Cell5", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, { "Cells.Cell5.Bat1.Q",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow", }, {
    "Cells.Cell5.Bat1.temperature", "AccumulatorModel/Cells/Cell5", 1U, 1U, "K",
    1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell5.Bat1.private.xR1", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell5.Bat1.private.xR2", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell5.Bat1.private.xR3", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell5.Bat1.private.xtau1", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell5.Bat1.private.xtau2", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell5.Bat1.private.xtau3", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell5.Bat1.soc", "AccumulatorModel/Cells/Cell5", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, { "Cells.Cell5.Bat2.charge",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "hr*A", 1.0, "C",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Charge", }, { "Cells.Cell5.Bat2.i",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Cells.Cell5.Bat2.n.v", "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell5.Bat2.num_cycles", "AccumulatorModel/Cells/Cell5", 1U, 1U, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Cells.Cell5.Bat2.p.v", "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell5.Bat2.power_dissipated", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Cells.Cell5.Bat2.stateOfCharge", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Cells.Cell5.Bat2.v", "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell5.Bat2.vrc1",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc1", }, { "Cells.Cell5.Bat2.vrc2",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc2", }, { "Cells.Cell5.Bat2.vrc3",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc3", }, { "Cells.Cell5.Bat2.vrc4",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc4", }, { "Cells.Cell5.Bat2.vrc5",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc5", }, { "Cells.Cell5.Bat2.xG1",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "1/Ohm", 1.0, "s*C^2/m^2/kg",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell5.Bat2.xG2", "AccumulatorModel/Cells/Cell5", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell5.Bat2.xG3", "AccumulatorModel/Cells/Cell5", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell5.Bat2.xG4", "AccumulatorModel/Cells/Cell5", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R4(SOC,T,N)", }, {
    "Cells.Cell5.Bat2.xG5", "AccumulatorModel/Cells/Cell5", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R5(SOC,T,N)", }, {
    "Cells.Cell5.Bat2.xGsd", "AccumulatorModel/Cells/Cell5", 1U, 1U, "1/Ohm",
    1.0, "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/Rleak(T,N)", }, {
    "Cells.Cell5.Bat2.xR0", "AccumulatorModel/Cells/Cell5", 1U, 1U, "Ohm", 1.0,
    "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell5.Bat2.xVint", "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell5.Bat2.xqnom", "AccumulatorModel/Cells/Cell5", 1U, 1U, "hr*A",
    1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell5.Bat2.H.T", "AccumulatorModel/Cells/Cell5", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, { "Cells.Cell5.Bat2.Q",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow", }, {
    "Cells.Cell5.Bat2.temperature", "AccumulatorModel/Cells/Cell5", 1U, 1U, "K",
    1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell5.Bat2.private.xR1", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell5.Bat2.private.xR2", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell5.Bat2.private.xR3", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell5.Bat2.private.xtau1", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell5.Bat2.private.xtau2", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell5.Bat2.private.xtau3", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell5.Bat2.soc", "AccumulatorModel/Cells/Cell5", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, { "Cells.Cell5.Bat3.charge",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "hr*A", 1.0, "C",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Charge", }, { "Cells.Cell5.Bat3.i",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Cells.Cell5.Bat3.n.v", "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell5.Bat3.num_cycles", "AccumulatorModel/Cells/Cell5", 1U, 1U, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Cells.Cell5.Bat3.p.v", "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell5.Bat3.power_dissipated", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Cells.Cell5.Bat3.stateOfCharge", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Cells.Cell5.Bat3.v", "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell5.Bat3.vrc1",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc1", }, { "Cells.Cell5.Bat3.vrc2",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc2", }, { "Cells.Cell5.Bat3.vrc3",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc3", }, { "Cells.Cell5.Bat3.vrc4",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc4", }, { "Cells.Cell5.Bat3.vrc5",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc5", }, { "Cells.Cell5.Bat3.xG1",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "1/Ohm", 1.0, "s*C^2/m^2/kg",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R1(SOC,T,N)", }, {
    "Cells.Cell5.Bat3.xG2", "AccumulatorModel/Cells/Cell5", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R2(SOC,T,N)", }, {
    "Cells.Cell5.Bat3.xG3", "AccumulatorModel/Cells/Cell5", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R3(SOC,T,N)", }, {
    "Cells.Cell5.Bat3.xG4", "AccumulatorModel/Cells/Cell5", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R4(SOC,T,N)", }, {
    "Cells.Cell5.Bat3.xG5", "AccumulatorModel/Cells/Cell5", 1U, 1U, "1/Ohm", 1.0,
    "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R5(SOC,T,N)", }, {
    "Cells.Cell5.Bat3.xGsd", "AccumulatorModel/Cells/Cell5", 1U, 1U, "1/Ohm",
    1.0, "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/Rleak(T,N)", }, {
    "Cells.Cell5.Bat3.xR0", "AccumulatorModel/Cells/Cell5", 1U, 1U, "Ohm", 1.0,
    "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Cells.Cell5.Bat3.xVint", "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Cells.Cell5.Bat3.xqnom", "AccumulatorModel/Cells/Cell5", 1U, 1U, "hr*A",
    1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Cells.Cell5.Bat3.H.T", "AccumulatorModel/Cells/Cell5", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, { "Cells.Cell5.Bat3.Q",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow", }, {
    "Cells.Cell5.Bat3.temperature", "AccumulatorModel/Cells/Cell5", 1U, 1U, "K",
    1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell5.Bat3.private.xR1", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Cells.Cell5.Bat3.private.xR2", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Cells.Cell5.Bat3.private.xR3", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "Ohm", 1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Cells.Cell5.Bat3.private.xtau1", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first time constant", }, {
    "Cells.Cell5.Bat3.private.xtau2", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second time constant", }, {
    "Cells.Cell5.Bat3.private.xtau3", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third time constant", }, {
    "Cells.Cell5.Bat3.soc", "AccumulatorModel/Cells/Cell5", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, {
    "Cells.Cell5.Cell1StateOfCharge", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "stateOfCharge", }, {
    "Cells.Cell5.Cell2StateOfCharge", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "stateOfCharge", }, {
    "Cells.Cell5.Cell3StateOfCharge", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "stateOfCharge", }, {
    "Cells.Cell5.Convective_Heat_Transfer.A.T", "AccumulatorModel/Cells/Cell5",
    1U, 1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell5.Convective_Heat_Transfer.B.T", "AccumulatorModel/Cells/Cell5",
    1U, 1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell5.Convective_Heat_Transfer.Q", "AccumulatorModel/Cells/Cell5", 1U,
    1U, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Cells.Cell5.Convective_Heat_Transfer.T", "AccumulatorModel/Cells/Cell5", 1U,
    1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature difference", }, {
    "Cells.Cell5.Convective_Heat_Transfer1.A.T", "AccumulatorModel/Cells/Cell5",
    1U, 1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell5.Convective_Heat_Transfer1.B.T", "AccumulatorModel/Cells/Cell5",
    1U, 1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell5.Convective_Heat_Transfer1.Q", "AccumulatorModel/Cells/Cell5",
    1U, 1U, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Cells.Cell5.Convective_Heat_Transfer1.T", "AccumulatorModel/Cells/Cell5",
    1U, 1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature difference", }, {
    "Cells.Cell5.D1.i", "AccumulatorModel/Cells/Cell5", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "Cells.Cell5.D1.n.v",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell5.D1.p.v",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell5.D1.v",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell5.DischargeSig", "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "DischargeSig", }, {
    "Cells.Cell5.HeatConn.T", "AccumulatorModel/Cells/Cell5", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Cells.Cell5.InConn.v", "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell5.MOSFET_Ideal_Switching.D.v", "AccumulatorModel/Cells/Cell5", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell5.MOSFET_Ideal_Switching.G", "AccumulatorModel/Cells/Cell5", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "G", }, {
    "Cells.Cell5.MOSFET_Ideal_Switching.S.v", "AccumulatorModel/Cells/Cell5", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell5.MOSFET_Ideal_Switching.mosfet_equation.G",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Cells.Cell5.MOSFET_Ideal_Switching.mosfet_equation.i",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Cells.Cell5.MOSFET_Ideal_Switching.mosfet_equation.isOn",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "Cells.Cell5.MOSFET_Ideal_Switching.mosfet_equation.n.v",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell5.MOSFET_Ideal_Switching.mosfet_equation.p.v",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell5.MOSFET_Ideal_Switching.mosfet_equation.v",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Cells.Cell5.MOSFET_Ideal_Switching.mosfet_equation.power_dissipated",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Cells.Cell5.OutConn.v", "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell5.R1.i",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "Cells.Cell5.R1.n.v",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell5.R1.p.v",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell5.R1.v",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.Cell5.VoltageSig",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "VoltageSig", }, {
    "Cells.Cell5.Voltage_Sensor.V", "AccumulatorModel/Cells/Cell5", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Cells.Cell5.Voltage_Sensor.i1",
    "AccumulatorModel/Cells/Cell5", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Cells.Cell5.Voltage_Sensor.n.v", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell5.Voltage_Sensor.p.v", "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cells.Cell5.Voltage_Sensor.v1", "AccumulatorModel/Cells/Cell5", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Cells.HV0.v",
    "AccumulatorModel/Cells", 1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Voltage", }, { "Cells.HV1.v", "AccumulatorModel/Cells", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, { "Current_Sensor.I",
    "AccumulatorModel/Current Sensor", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, { "Current_Sensor.i1",
    "AccumulatorModel/Current Sensor", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "Current_Sensor.n.v",
    "AccumulatorModel/Current Sensor", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Current_Sensor.p.v",
    "AccumulatorModel/Current Sensor", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Current_Sensor.v1",
    "AccumulatorModel/Current Sensor", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Electrical_Reference.V.v", "AccumulatorModel/Electrical Reference", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Load.Controlled_Current_Source.head.v",
    "AccumulatorModel/Load/Controlled Current Source", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Load.Controlled_Current_Source.i",
    "AccumulatorModel/Load/Controlled Current Source", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Load.Controlled_Current_Source.iT",
    "AccumulatorModel/Load/Controlled Current Source", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "iT", }, {
    "Load.Controlled_Current_Source.tail.v",
    "AccumulatorModel/Load/Controlled Current Source", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Load.Controlled_Current_Source.v",
    "AccumulatorModel/Load/Controlled Current Source", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, { "Load.LoadIn.v",
    "AccumulatorModel/Load", 1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Voltage", }, { "Load.Load_Out.v", "AccumulatorModel/Load", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, { "Voltage_Sensor.V",
    "AccumulatorModel/Voltage Sensor", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Voltage_Sensor.i1",
    "AccumulatorModel/Voltage Sensor", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "Voltage_Sensor.n.v",
    "AccumulatorModel/Voltage Sensor", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Voltage_Sensor.p.v",
    "AccumulatorModel/Voltage Sensor", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Voltage_Sensor.v1",
    "AccumulatorModel/Voltage Sensor", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", } };

static NeModeData *s_major_mode_data = NULL;
static NeZCData s_zc_data[175] = { { "AccumulatorModel/Cells/Cell5", 1U, 0U,
    "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 1U,
    "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 2U,
    "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 3U,
    "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 4U,
    "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 5U,
    "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 6U,
    "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell5", 1U, 7U,
    "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell5", 1U, 8U,
    "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 9U,
    "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 10U,
    "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 11U,
    "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 12U,
    "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell5", 1U, 13U,
    "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 14U,
    "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 15U,
    "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 16U,
    "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 17U,
    "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 18U,
    "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 19U,
    "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 20U,
    "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 21U,
    "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 22U,
    "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell5", 1U, 23U,
    "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 24U,
    "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell5", 1U, 25U,
    "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 26U,
    "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 27U,
    "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 28U,
    "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 29U,
    "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell4", 1U, 30U,
    "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 31U,
    "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 32U,
    "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 33U,
    "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 34U,
    "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell4", 1U, 35U,
    "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 36U,
    "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 37U,
    "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 38U,
    "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell4", 1U, 39U,
    "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 40U,
    "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 41U,
    "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell4", 1U, 42U,
    "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 43U,
    "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 44U,
    "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 45U,
    "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 46U,
    "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 47U,
    "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 48U,
    "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell4", 1U, 49U,
    "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 50U,
    "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 51U,
    "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 52U,
    "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell3", 1U, 53U,
    "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 54U,
    "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell3", 1U, 55U,
    "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 56U,
    "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 57U,
    "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 58U,
    "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 59U,
    "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 60U,
    "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell3", 1U, 61U,
    "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 62U,
    "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell3", 1U, 63U,
    "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 64U,
    "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 65U,
    "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell3", 1U, 66U,
    "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 67U,
    "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 68U,
    "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 69U,
    "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 70U,
    "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 71U,
    "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 72U,
    "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell2", 1U, 73U,
    "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 74U,
    "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 75U,
    "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 76U,
    "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 77U,
    "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 78U,
    "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 79U,
    "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell3", 1U, 80U,
    "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 81U,
    "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 82U,
    "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 83U,
    "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 84U,
    "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 85U,
    "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 86U,
    "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell3", 1U, 87U,
    "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell2", 1U, 88U,
    "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 89U,
    "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 90U,
    "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell3", 1U, 91U,
    "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 92U,
    "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 93U,
    "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 94U,
    "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 95U,
    "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 96U,
    "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 97U,
    "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 98U,
    "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell1", 1U, 99U,
    "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 100U,
    "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 101U,
    "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 102U,
    "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 103U,
    "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 104U,
    "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell1", 1U, 105U,
    "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 106U,
    "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 107U,
    "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 108U,
    "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 109U,
    "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 110U,
    "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 111U,
    "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 112U,
    "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell2", 1U, 113U,
    "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 114U,
    "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 115U,
    "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 116U,
    "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 117U,
    "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 118U,
    "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 119U,
    "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 120U,
    "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 121U,
    "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell1", 1U, 122U,
    "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 123U,
    "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 124U,
    "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 125U,
    "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 126U,
    "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 127U,
    "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 128U,
    "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 129U,
    "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 130U,
    "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 131U,
    "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 132U,
    "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 133U,
    "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 134U,
    "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 135U,
    "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 136U,
    "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 137U,
    "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 138U,
    "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 139U,
    "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell1", 1U, 140U,
    "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell1", 1U, 141U,
    "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 142U,
    "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell5", 1U, 143U,
    "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 144U,
    "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 145U,
    "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 146U,
    "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 147U,
    "Cells.Cell4.MOSFET_Ideal_Switching.mosfet_equation",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 148U,
    "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 149U,
    "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 150U,
    "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell2", 1U, 151U,
    "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 152U,
    "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 153U,
    "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell4", 1U, 154U,
    "Cells.Cell4.D1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 155U,
    "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 156U,
    "Cells.Cell3.MOSFET_Ideal_Switching.mosfet_equation",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 157U,
    "Cells.Cell3.D1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 158U,
    "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 159U,
    "Cells.Cell2.D1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 160U,
    "Cells.Cell5.MOSFET_Ideal_Switching.mosfet_equation",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 161U,
    "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 162U,
    "Cells.Cell1.MOSFET_Ideal_Switching.mosfet_equation",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 163U,
    "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 164U,
    "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell2", 1U, 165U,
    "Cells.Cell2.MOSFET_Ideal_Switching.mosfet_equation",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 166U,
    "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_TRUE, }, { "AccumulatorModel/Cells/Cell5", 1U, 167U,
    "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell2", 1U, 168U,
    "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 169U,
    "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 170U,
    "Cells.Cell5.D1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell5", 1U, 171U,
    "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 172U,
    "Cells.Cell1.D1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell3", 1U, 173U,
    "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, }, { "AccumulatorModel/Cells/Cell1", 1U, 174U,
    "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    NE_ZC_TYPE_FALSE, } };

static NeRange s_range[175] = { {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    25U, 8U, 25U, 14U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    25U, 8U, 25U, 14U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    25U, 8U, 25U, 14U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    25U, 8U, 25U, 14U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    25U, 8U, 25U, 14U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData s_assert_data[475] = { { "AccumulatorModel/Cells/Cell1", 2U,
    0U, "Cells.Cell1.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE, "Temperature must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 2U, "Cells.Cell1.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted ampere-hour rating must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 4U, "Cells.Cell1.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted no-load voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 6U, "Cells.Cell1.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 8U, "Cells.Cell1.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "State of charge must be greater than or equal to minimum value of the Vector of state-of-charge values, SOC.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqual", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 10U, "Cells.Cell1.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 12U, "Cells.Cell1.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 14U, "Cells.Cell1.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 16U, "Cells.Cell1.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 18U, "Cells.Cell1.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 20U, "Cells.Cell1.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 22U, "Cells.Cell1.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE, "Temperature must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 24U, "Cells.Cell1.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted ampere-hour rating must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 26U, "Cells.Cell1.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted no-load voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 28U, "Cells.Cell1.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 30U, "Cells.Cell1.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "State of charge must be greater than or equal to minimum value of the Vector of state-of-charge values, SOC.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqual", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 32U, "Cells.Cell1.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 34U, "Cells.Cell1.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 36U, "Cells.Cell1.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 38U, "Cells.Cell1.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 40U, "Cells.Cell1.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 42U, "Cells.Cell1.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 44U, "Cells.Cell1.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE, "Temperature must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 46U, "Cells.Cell1.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted ampere-hour rating must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 48U, "Cells.Cell1.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted no-load voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 50U, "Cells.Cell1.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 52U, "Cells.Cell1.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "State of charge must be greater than or equal to minimum value of the Vector of state-of-charge values, SOC.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqual", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 54U, "Cells.Cell1.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 56U, "Cells.Cell1.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 58U, "Cells.Cell1.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 60U, "Cells.Cell1.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 62U, "Cells.Cell1.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 2U, 64U, "Cells.Cell1.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 66U, "Cells.Cell2.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE, "Temperature must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 68U, "Cells.Cell2.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted ampere-hour rating must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 70U, "Cells.Cell2.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted no-load voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 72U, "Cells.Cell2.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 74U, "Cells.Cell2.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "State of charge must be greater than or equal to minimum value of the Vector of state-of-charge values, SOC.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqual", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 76U, "Cells.Cell2.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 78U, "Cells.Cell2.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 80U, "Cells.Cell2.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 82U, "Cells.Cell2.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 84U, "Cells.Cell2.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 86U, "Cells.Cell2.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 88U, "Cells.Cell2.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE, "Temperature must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 90U, "Cells.Cell2.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted ampere-hour rating must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 92U, "Cells.Cell2.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted no-load voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 94U, "Cells.Cell2.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 96U, "Cells.Cell2.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "State of charge must be greater than or equal to minimum value of the Vector of state-of-charge values, SOC.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqual", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 98U, "Cells.Cell2.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 100U, "Cells.Cell2.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 102U, "Cells.Cell2.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 104U, "Cells.Cell2.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 106U, "Cells.Cell2.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 108U, "Cells.Cell2.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 110U, "Cells.Cell2.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE, "Temperature must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 112U, "Cells.Cell2.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted ampere-hour rating must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 114U, "Cells.Cell2.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted no-load voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 116U, "Cells.Cell2.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 118U, "Cells.Cell2.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "State of charge must be greater than or equal to minimum value of the Vector of state-of-charge values, SOC.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqual", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 120U, "Cells.Cell2.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 122U, "Cells.Cell2.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 124U, "Cells.Cell2.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 126U, "Cells.Cell2.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 128U, "Cells.Cell2.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell2", 2U, 130U, "Cells.Cell2.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 132U, "Cells.Cell3.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE, "Temperature must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 134U, "Cells.Cell3.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted ampere-hour rating must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 136U, "Cells.Cell3.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted no-load voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 138U, "Cells.Cell3.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 140U, "Cells.Cell3.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "State of charge must be greater than or equal to minimum value of the Vector of state-of-charge values, SOC.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqual", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 142U, "Cells.Cell3.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 144U, "Cells.Cell3.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 146U, "Cells.Cell3.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 148U, "Cells.Cell3.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 150U, "Cells.Cell3.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 152U, "Cells.Cell3.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 154U, "Cells.Cell3.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE, "Temperature must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 156U, "Cells.Cell3.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted ampere-hour rating must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 158U, "Cells.Cell3.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted no-load voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 160U, "Cells.Cell3.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 162U, "Cells.Cell3.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "State of charge must be greater than or equal to minimum value of the Vector of state-of-charge values, SOC.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqual", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 164U, "Cells.Cell3.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 166U, "Cells.Cell3.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 168U, "Cells.Cell3.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 170U, "Cells.Cell3.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 172U, "Cells.Cell3.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 174U, "Cells.Cell3.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 176U, "Cells.Cell3.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE, "Temperature must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 178U, "Cells.Cell3.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted ampere-hour rating must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 180U, "Cells.Cell3.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted no-load voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 182U, "Cells.Cell3.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 184U, "Cells.Cell3.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "State of charge must be greater than or equal to minimum value of the Vector of state-of-charge values, SOC.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqual", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 186U, "Cells.Cell3.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 188U, "Cells.Cell3.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 190U, "Cells.Cell3.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 192U, "Cells.Cell3.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 194U, "Cells.Cell3.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell3", 2U, 196U, "Cells.Cell3.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 198U, "Cells.Cell4.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE, "Temperature must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 200U, "Cells.Cell4.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted ampere-hour rating must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 202U, "Cells.Cell4.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted no-load voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 204U, "Cells.Cell4.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 206U, "Cells.Cell4.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "State of charge must be greater than or equal to minimum value of the Vector of state-of-charge values, SOC.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqual", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 208U, "Cells.Cell4.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 210U, "Cells.Cell4.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 212U, "Cells.Cell4.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 214U, "Cells.Cell4.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 216U, "Cells.Cell4.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 218U, "Cells.Cell4.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 220U, "Cells.Cell4.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE, "Temperature must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 222U, "Cells.Cell4.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted ampere-hour rating must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 224U, "Cells.Cell4.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted no-load voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 226U, "Cells.Cell4.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 228U, "Cells.Cell4.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "State of charge must be greater than or equal to minimum value of the Vector of state-of-charge values, SOC.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqual", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 230U, "Cells.Cell4.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 232U, "Cells.Cell4.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 234U, "Cells.Cell4.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 236U, "Cells.Cell4.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 238U, "Cells.Cell4.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 240U, "Cells.Cell4.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 242U, "Cells.Cell4.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE, "Temperature must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 244U, "Cells.Cell4.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted ampere-hour rating must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 246U, "Cells.Cell4.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted no-load voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 248U, "Cells.Cell4.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 250U, "Cells.Cell4.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "State of charge must be greater than or equal to minimum value of the Vector of state-of-charge values, SOC.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqual", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 252U, "Cells.Cell4.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 254U, "Cells.Cell4.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 256U, "Cells.Cell4.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 258U, "Cells.Cell4.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 260U, "Cells.Cell4.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell4", 2U, 262U, "Cells.Cell4.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 264U, "Cells.Cell5.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE, "Temperature must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 266U, "Cells.Cell5.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted ampere-hour rating must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 268U, "Cells.Cell5.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted no-load voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 270U, "Cells.Cell5.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 272U, "Cells.Cell5.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "State of charge must be greater than or equal to minimum value of the Vector of state-of-charge values, SOC.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqual", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 274U, "Cells.Cell5.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 276U, "Cells.Cell5.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 278U, "Cells.Cell5.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 280U, "Cells.Cell5.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 282U, "Cells.Cell5.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 284U, "Cells.Cell5.Bat1",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 286U, "Cells.Cell5.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE, "Temperature must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 288U, "Cells.Cell5.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted ampere-hour rating must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 290U, "Cells.Cell5.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted no-load voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 292U, "Cells.Cell5.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 294U, "Cells.Cell5.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "State of charge must be greater than or equal to minimum value of the Vector of state-of-charge values, SOC.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqual", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 296U, "Cells.Cell5.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 298U, "Cells.Cell5.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 300U, "Cells.Cell5.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 302U, "Cells.Cell5.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 304U, "Cells.Cell5.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 306U, "Cells.Cell5.Bat2",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 308U, "Cells.Cell5.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE, "Temperature must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 310U, "Cells.Cell5.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted ampere-hour rating must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 312U, "Cells.Cell5.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted no-load voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 314U, "Cells.Cell5.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 316U, "Cells.Cell5.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "State of charge must be greater than or equal to minimum value of the Vector of state-of-charge values, SOC.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqual", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 318U, "Cells.Cell5.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 320U, "Cells.Cell5.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted first time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 322U, "Cells.Cell5.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 324U, "Cells.Cell5.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted second time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 326U, "Cells.Cell5.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell5", 2U, 328U, "Cells.Cell5.Bat3",
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    FALSE,
    "Faded and temperature adjusted third time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 330U, "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 331U, "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 332U, "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 333U, "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 334U, "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 335U, "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 336U, "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 337U, "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 338U, "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 339U, "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 340U, "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 341U, "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 342U, "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 343U, "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 344U, "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 345U, "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 346U, "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 347U, "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 348U, "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 349U, "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 350U, "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 351U, "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 352U, "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 353U, "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 354U, "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 355U, "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 356U, "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 357U, "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 358U, "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 359U, "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 360U, "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 361U, "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 362U, "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 363U, "Cells.Cell1.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 364U, "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 365U, "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 366U, "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 367U, "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 368U, "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 369U, "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 370U, "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 371U, "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 372U, "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 373U, "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 374U, "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 375U, "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 376U, "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 377U, "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 378U, "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 379U, "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 380U, "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 381U, "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 382U, "Cells.Cell1.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 383U, "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 384U, "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 385U, "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 386U, "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 387U, "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 388U, "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 389U, "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 390U, "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 391U, "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 392U, "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 393U, "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 394U, "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 395U, "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 396U, "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 397U, "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 398U, "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 399U, "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 400U, "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 401U, "Cells.Cell1.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 402U, "Cells.Cell1.D1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell1", 1U, 403U,
    "Cells.Cell1.MOSFET_Ideal_Switching.mosfet_equation",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 404U, "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 405U, "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 406U, "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 407U, "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 408U, "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 409U, "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 410U, "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 411U, "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 412U, "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 413U, "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 414U, "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 415U, "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 416U, "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 417U, "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 418U, "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 419U, "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 420U, "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 421U, "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 422U, "Cells.Cell2.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 423U, "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 424U, "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 425U, "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 426U, "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 427U, "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 428U, "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 429U, "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 430U, "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 431U, "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 432U, "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 433U, "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 434U, "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 435U, "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 436U, "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 437U, "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 438U, "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 439U, "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 440U, "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 441U, "Cells.Cell2.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 442U, "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 443U, "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 444U, "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 445U, "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 446U, "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 447U, "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 448U, "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 449U, "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 450U, "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 451U, "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 452U, "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 453U, "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 454U, "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 455U, "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 456U, "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 457U, "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 458U, "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 459U, "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 460U, "Cells.Cell2.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 461U, "Cells.Cell2.D1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell2", 1U, 462U,
    "Cells.Cell2.MOSFET_Ideal_Switching.mosfet_equation",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 463U, "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 464U, "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 465U, "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 466U, "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 467U, "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 468U, "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 469U, "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 470U, "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 471U, "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 472U, "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 473U, "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 474U, "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 475U, "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 476U, "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 477U, "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 478U, "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 479U, "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 480U, "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 481U, "Cells.Cell3.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 482U, "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 483U, "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 484U, "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 485U, "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 486U, "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 487U, "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 488U, "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 489U, "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 490U, "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 491U, "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 492U, "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 493U, "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 494U, "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 495U, "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 496U, "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 497U, "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 498U, "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 499U, "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 500U, "Cells.Cell3.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 501U, "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 502U, "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 503U, "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 504U, "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 505U, "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 506U, "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 507U, "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 508U, "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 509U, "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 510U, "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 511U, "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 512U, "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 513U, "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 514U, "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 515U, "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 516U, "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 517U, "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 518U, "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 519U, "Cells.Cell3.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 520U, "Cells.Cell3.D1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell3", 1U, 521U,
    "Cells.Cell3.MOSFET_Ideal_Switching.mosfet_equation",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 522U, "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 523U, "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 524U, "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 525U, "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 526U, "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 527U, "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 528U, "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 529U, "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 530U, "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 531U, "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 532U, "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 533U, "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 534U, "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 535U, "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 536U, "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 537U, "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 538U, "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 539U, "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 540U, "Cells.Cell4.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 541U, "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 542U, "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 543U, "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 544U, "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 545U, "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 546U, "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 547U, "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 548U, "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 549U, "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 550U, "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 551U, "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 552U, "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 553U, "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 554U, "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 555U, "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 556U, "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 557U, "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 558U, "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 559U, "Cells.Cell4.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 560U, "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 561U, "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 562U, "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 563U, "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 564U, "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 565U, "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 566U, "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 567U, "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 568U, "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 569U, "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 570U, "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 571U, "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 572U, "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 573U, "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 574U, "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 575U, "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 576U, "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 577U, "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 578U, "Cells.Cell4.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 579U, "Cells.Cell4.D1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell4", 1U, 580U,
    "Cells.Cell4.MOSFET_Ideal_Switching.mosfet_equation",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 581U, "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 582U, "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 583U, "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 584U, "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 585U, "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 586U, "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 587U, "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 588U, "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 589U, "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 590U, "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 591U, "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 592U, "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 593U, "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 594U, "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 595U, "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 596U, "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 597U, "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 598U, "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 599U, "Cells.Cell5.Bat1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 600U, "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 601U, "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 602U, "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 603U, "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 604U, "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 605U, "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 606U, "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 607U, "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 608U, "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 609U, "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 610U, "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 611U, "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 612U, "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 613U, "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 614U, "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 615U, "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 616U, "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 617U, "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 618U, "Cells.Cell5.Bat2",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 619U, "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 620U, "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 621U, "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 622U, "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 623U, "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 624U, "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 625U, "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 626U, "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 627U, "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 628U, "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 629U, "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 630U, "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 631U, "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 632U, "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 633U, "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 634U, "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 635U, "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 636U, "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 637U, "Cells.Cell5.Bat3",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 638U, "Cells.Cell5.D1",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "AccumulatorModel/Cells/Cell5", 1U, 639U,
    "Cells.Cell5.MOSFET_Ideal_Switching.mosfet_equation",
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", } };

static NeRange s_assert_range[640] = { {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    36U, 12U, 37U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    34U, 12U, 35U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/home/sean/Documents/Formula/F29/f29bms/sim/bmsModel/+LibGen/CellGroup1.ssc",
    32U, 12U, 33U, 1861U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    26U, 34U, 26U, 37U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    26U, 34U, 26U, 37U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    26U, 34U, 26U, 37U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    26U, 34U, 26U, 37U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    26U, 34U, 26U, 37U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData *s_param_assert_data = NULL;
static NeRange *s_param_assert_range = NULL;
static NeAssertData *s_initial_assert_data = NULL;
static NeRange *s_initial_assert_range = NULL;
static NeRange s_equation_range[375] = { {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    25U, 8U, 25U, 14U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    26U, 7U, 26U, 37U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    28U, 7U, 28U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    25U, 8U, 25U, 14U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    26U, 7U, 26U, 37U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    28U, 7U, 28U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    25U, 8U, 25U, 14U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    26U, 7U, 26U, 37U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    28U, 7U, 28U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    25U, 8U, 25U, 14U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    26U, 7U, 26U, 37U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    28U, 7U, 28U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    25U, 8U, 25U, 14U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    26U, 7U, 26U, 37U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    28U, 7U, 28U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeRange s_icr_range[30] = { {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "/usr/local/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeParameterData *s_logical_parameter_data = NULL;
static NeParameterData *s_integer_parameter_data = NULL;
static NeParameterData *s_index_parameter_data = NULL;
static NeParameterData *s_real_parameter_data = NULL;
static real_T s_constant_table0[30] = { 3.4840719487585261, 3.5541808071614907,
  3.6044040443122967, 3.6432148930494721, 3.6850217784711932, 3.7442260589008889,
  3.8296786735067085, 3.9431591703396216, 4.059438125776726, 4.1904902947708216,
  3.4937390625363172, 3.5525957055851949, 3.6141023090205424, 3.6489665968008391,
  3.6886419277998765, 3.7439892163394637, 3.83940080415011, 3.9485431270276239,
  4.0609482828153656, 4.1903018129097145, 3.50592874552606, 3.5550831211284448,
  3.6151536038373764, 3.6568570389621371, 3.6963967948473613, 3.7510578428807242,
  3.85325138336218, 3.9560833530956043, 4.0656563290498289, 4.1879923115457895 };

static real_T s_constant_table1[30] = { 0.016402552035383777,
  0.011960095659784205, 0.011985306861082618, 0.011133064332470535,
  0.011822289585725038, 0.011674834293905348, 0.011276858001519346,
  0.011893379599669541, 0.012032134824206179, 0.012409815648205699,
  0.0099139159391777934, 0.0087504363523834075, 0.00832297953681552,
  0.0087206185025328828, 0.0079590944496018539, 0.0085654805692620319,
  0.00843330788647423, 0.0085033418616249478, 0.00846602435735512,
  0.0084653975322956619, 0.0093316843716886189, 0.00956154423893035,
  0.0085445518215522317, 0.0095613937499368189, 0.0088075479017960968,
  0.00938193010301517, 0.0099664909196451688, 0.0096001965919407725,
  0.00963753251603531, 0.00929821710866923 };

static real_T s_constant_table2[30] = { 0.0047051793700029921,
  0.0029027505072525372, 0.0017388475746617222, 0.0016686773918573833,
  0.00092241716945825887, 0.0012060131519643219, 0.0013410701441833462,
  0.0010272832361552405, 0.0010711264474030965, 0.0010976291115986786,
  0.00029363839472916682, 0.00090641529499803, 0.0012650813888549967,
  0.00031462182386742877, 0.0011525474020772362, 0.00048449643184857741,
  0.000722662778209487, 0.00078859356589136944, 0.00080896464588571136,
  0.00079463216317268042, 0.00094854667830626183, 0.00028712754393183146,
  0.0011835504769640961, 0.00026919402319708851, 0.00061595796224651954,
  0.00026371910508476005, 4.8444093793910883e-5, 0.00028748237598431994,
  0.0002074259913330535, 0.00010686400469049681 };

static real_T s_constant_table3[30] = { 13.587160558130032, 12.548173543530547,
  7.4833701048738552, 9.445424497196484, 9.24780665009956, 13.019370645009339,
  11.269404905207718, 10.584947916059184, 9.253757496562546, 10.018955095019622,
  9.7154404345833729, 12.120019211778336, 12.037071085656127, 10.905474514472562,
  9.2513145813230935, 13.4646058128269, 10.252335712000312, 10.042183908695579,
  9.6507722670345863, 10.084883411377689, 4.31542721208131, 22.764023395501695,
  8.29042934523224, 9.5111359209729986, 4.6869487846894815, 7.7306550639128986,
  10.843035339480794, 10.967897183948233, 11.697551614479334, 9.8777442533331 };

static real_T s_constant_table4[30] = { 0.00068406469430505883,
  0.0025199126996687977, 0.0014606856212607548, 0.0016983061951401459,
  0.0016703114392231898, 0.00094097870705892148, 0.00098717155280686865,
  0.0010502339493068458, 0.0010404049070893244, 0.00090603223051019814,
  0.00097942088657254015, 0.000998429425096649, 0.0010142182617924743,
  0.0010868338649932367, 0.00098061852990599468, 0.00087800547076535439,
  0.00089384200319863574, 0.0009926137355423094, 0.00086808136350591085,
  0.0009133697684427371, 0.0005101717874381079, 0.00014351407310096351,
  0.0005706555331997221, 0.00020842313400595188, 0.00065126300355661259,
  0.00032711532133810765, 9.2539435402250755e-5, 0.00010735027786625632,
  9.6028207109201313e-5, 0.0004767537191694884 };

static real_T s_constant_table5[30] = { 50.088642920436634, 74.689019832308716,
  97.343745624912941, 69.588391726420426, 84.227445772795434, 85.667939876446752,
  91.054201736484572, 105.40195152174527, 96.597797487210585, 93.399333196235531,
  61.445389898166106, 50.465934546173145, 84.585060762599724, 54.864790959058794,
  55.660369812490785, 66.795537291117327, 92.003741154370175, 81.040400723659658,
  90.833520923092564, 104.58287980958707, 145.884876037851, 86.137630438182129,
  46.765995034705121, 95.825988247003579, 49.888718171285554, 100.65873771186422,
  98.728616865143366, 142.45956812463, 115.40102217052508, 83.788605470384709 };

static real_T s_constant_table6[30] = { 0.0064772810728472947,
  0.0036173797700476775, 0.0034458561966910577, 0.0031534659782466107,
  0.0020941069241121003, 0.0019150938645515364, 0.00057283461914822242,
  0.0011388683546271047, 0.0010107248830160123, 0.0010933855476763627,
  0.0026530187581644839, 0.0011198167603976494, 0.0016175281362590607,
  0.0013015328075959092, 0.001754713894370799, 0.000370366587789619,
  0.00092513868701939487, 0.000867792101494099, 0.000662353437832612,
  0.00032988823885868269, 0.0038243734112198323, 0.0033508445801703436,
  6.9954092190303231e-5, 0.0012866080749013007, 0.000316666511381357,
  0.00033579353662584676, 0.00033009152698130258, 0.00080128429130555594,
  1.7682748651359931e-5, 7.9358906657779285e-5 };

static real_T s_constant_table7[30] = { 701.99464322560914, 925.82342907183158,
  789.33322992338685, 654.59456412769441, 541.309382097595, 689.28903184601734,
  601.673035616931, 466.37791157338773, 329.01251163460944, 499.96091184880009,
  650.00733425682779, 649.85494090550014, 938.72527379567055, 349.41904495125544,
  983.44426979427271, 958.5700325644483, 962.08855665504416, 402.22093059874783,
  405.71260099344164, 568.25988658272433, 4085.7982543884395, 4973.41475833222,
  279.00219852150224, 894.4408244452444, 2138.1858138024504, 882.67811194764306,
  358.86776083167649, 253.37395679925945, 527.02625672599629, 628.42296933896 };

static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM_P.mNumCol = 325;
  out->mM_P.mNumRow = 325;
  out->mM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    326);
  out->mM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    90);
  return out;
}

static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM.mN = 90;
  out->mM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 90);
  return out;
}

static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMM.mN = 90;
  out->mVMM.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    90);
  return out;
}

static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM_P.mNumCol = 325;
  out->mDXM_P.mNumRow = 90;
  out->mDXM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    326);
  out->mDXM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    90);
  return out;
}

static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM.mN = 90;
  out->mDXM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 90);
  return out;
}

static NeDsMethodOutput *ds_output_ddm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDM_P.mNumCol = 0;
  out->mDDM_P.mNumRow = 90;
  out->mDDM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDDM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDM.mN = 0;
  out->mDDM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dum_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUM_P.mNumCol = 6;
  out->mDUM_P.mNumRow = 90;
  out->mDUM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  out->mDUM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dum(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUM.mN = 0;
  out->mDUM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTM_P.mNumCol = 1;
  out->mDTM_P.mNumRow = 90;
  out->mDTM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTM.mN = 0;
  out->mDTM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_a_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA_P.mNumCol = 325;
  out->mA_P.mNumRow = 325;
  out->mA_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    326);
  out->mA_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    478);
  return out;
}

static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA.mN = 478;
  out->mA.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 478);
  return out;
}

static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB_P.mNumCol = 6;
  out->mB_P.mNumRow = 325;
  out->mB_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  out->mB_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    20);
  return out;
}

static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB.mN = 20;
  out->mB.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 20);
  return out;
}

static NeDsMethodOutput *ds_output_c_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mC_P.mNumCol = 1;
  out->mC_P.mNumRow = 325;
  out->mC_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mC_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_c(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mC.mN = 0;
  out->mC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_f(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mF.mN = 325;
  out->mF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 325);
  return out;
}

static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMF.mN = 325;
  out->mVMF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    325);
  return out;
}

static NeDsMethodOutput *ds_output_vpf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVPF.mN = 325;
  out->mVPF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    325);
  return out;
}

static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF.mN = 325;
  out->mSLF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    325);
  return out;
}

static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF0.mN = 325;
  out->mSLF0.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 325);
  return out;
}

static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF_P.mNumCol = 325;
  out->mDXF_P.mNumRow = 325;
  out->mDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    326);
  out->mDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    780);
  return out;
}

static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF.mN = 780;
  out->mDXF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 780);
  return out;
}

static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF_P.mNumCol = 6;
  out->mDUF_P.mNumRow = 325;
  out->mDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  out->mDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    15);
  return out;
}

static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF.mN = 15;
  out->mDUF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 15);
  return out;
}

static NeDsMethodOutput *ds_output_dtf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF_P.mNumCol = 1;
  out->mDTF_P.mNumRow = 325;
  out->mDTF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF.mN = 0;
  out->mDTF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF_P.mNumCol = 0;
  out->mDDF_P.mNumRow = 325;
  out->mDDF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDDF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF.mN = 0;
  out->mDDF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dwf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDWF_P.mNumCol = 0;
  out->mDWF_P.mNumRow = 325;
  out->mDWF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDWF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dwf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDWF.mN = 0;
  out->mDWF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUF_P.mNumCol = 6;
  out->mTDUF_P.mNumRow = 325;
  out->mTDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  out->mTDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    40);
  return out;
}

static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXF_P.mNumCol = 325;
  out->mTDXF_P.mNumRow = 325;
  out->mTDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    326);
  out->mTDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1299);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_P.mNumCol = 5;
  out->mDNF_P.mNumRow = 325;
  out->mDNF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
  out->mDNF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF.mN = 0;
  out->mDNF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_V_X.mN = 325;
  out->mDNF_V_X.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 325);
  return out;
}

static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIC.mN = 325;
  out->mIC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 325);
  return out;
}

static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR.mN = 30;
  out->mICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 30);
  return out;
}

static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IM.mN = 30;
  out->mICR_IM.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
  return out;
}

static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_ID.mN = 30;
  out->mICR_ID.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 30);
  return out;
}

static NeDsMethodOutput *ds_output_icr_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IL.mN = 30;
  out->mICR_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 30);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR.mN = 0;
  out->mDXICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR_P.mNumCol = 325;
  out->mDXICR_P.mNumRow = 30;
  out->mDXICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 326);
  out->mDXICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicr(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICR.mN = 0;
  out->mDDICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICR_P.mNumCol = 0;
  out->mDDICR_P.mNumRow = 30;
  out->mDDICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mDDICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_tduicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUICR_P.mNumCol = 6;
  out->mTDUICR_P.mNumRow = 30;
  out->mTDUICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 7);
  out->mTDUICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_icrm_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICRM_P.mNumCol = 325;
  out->mICRM_P.mNumRow = 30;
  out->mICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    326);
  out->mICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_icrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICRM.mN = 0;
  out->mICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICRM_P.mNumCol = 325;
  out->mDXICRM_P.mNumRow = 0;
  out->mDXICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 326);
  out->mDXICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICRM.mN = 0;
  out->mDXICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICRM_P.mNumCol = 0;
  out->mDDICRM_P.mNumRow = 0;
  out->mDDICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mDDICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICRM.mN = 0;
  out->mDDICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_mduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDUY_P.mNumCol = 6;
  out->mMDUY_P.mNumRow = 7;
  out->mMDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  out->mMDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDXY_P.mNumCol = 325;
  out->mMDXY_P.mNumRow = 7;
  out->mMDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    326);
  out->mMDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_tduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUY_P.mNumCol = 6;
  out->mTDUY_P.mNumRow = 7;
  out->mTDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  out->mTDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  return out;
}

static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXY_P.mNumCol = 325;
  out->mTDXY_P.mNumRow = 7;
  out->mTDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    326);
  out->mTDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    10);
  return out;
}

static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mY.mN = 7;
  out->mY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 7);
  return out;
}

static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY_P.mNumCol = 325;
  out->mDXY_P.mNumRow = 7;
  out->mDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    326);
  out->mDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    10);
  return out;
}

static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY.mN = 10;
  out->mDXY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 10);
  return out;
}

static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY_P.mNumCol = 6;
  out->mDUY_P.mNumRow = 7;
  out->mDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  out->mDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  return out;
}

static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY.mN = 1;
  out->mDUY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 1);
  return out;
}

static NeDsMethodOutput *ds_output_dty_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTY_P.mNumCol = 1;
  out->mDTY_P.mNumRow = 7;
  out->mDTY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dty(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTY.mN = 0;
  out->mDTY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_mode(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMODE.mN = 175;
  out->mMODE.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    175);
  return out;
}

static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mZC.mN = 175;
  out->mZC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 175);
  return out;
}

static NeDsMethodOutput *ds_output_cache_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCACHE_R.mN = 0;
  out->mCACHE_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_cache_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCACHE_I.mN = 0;
  out->mCACHE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_R.mN = 0;
  out->mUPDATE_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_I.mN = 0;
  out->mUPDATE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_update2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE2_R.mN = 0;
  out->mUPDATE2_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE2_I.mN = 0;
  out->mUPDATE2_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK_R.mN = 0;
  out->mLOCK_R.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK_I.mN = 0;
  out->mLOCK_I.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK2_R.mN = 0;
  out->mLOCK2_R.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK2_I.mN = 0;
  out->mLOCK2_I.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_sfo(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSFO.mN = 0;
  out->mSFO.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_sfp(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSFP.mN = 0;
  out->mSFP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_init_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_R.mN = 0;
  out->mINIT_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_I.mN = 0;
  out->mINIT_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOG.mN = 695;
  out->mLOG.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 695);
  return out;
}

static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mASSERT.mN = 475;
  out->mASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    475);
  return out;
}

static NeDsMethodOutput *ds_output_passert(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mPASSERT.mN = 0;
  out->mPASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_iassert(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIASSERT.mN = 0;
  out->mIASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_del_t(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_T.mN = 0;
  out->mDEL_T.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V.mN = 0;
  out->mDEL_V.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V0.mN = 0;
  out->mDEL_V0.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_TMAX.mN = 0;
  out->mDEL_TMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT_P.mNumCol = 325;
  out->mDXDELT_P.mNumRow = 0;
  out->mDXDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 326);
  out->mDXDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT.mN = 0;
  out->mDXDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dudelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUDELT_P.mNumCol = 6;
  out->mDUDELT_P.mNumRow = 0;
  out->mDUDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 7);
  out->mDUDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dudelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUDELT.mN = 0;
  out->mDUDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTDELT_P.mNumCol = 1;
  out->mDTDELT_P.mNumRow = 0;
  out->mDTDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 2);
  out->mDTDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTDELT.mN = 0;
  out->mDTDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_obs_exp(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_EXP.mN = 695;
  out->mOBS_EXP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    695);
  return out;
}

static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ACT.mN = 695;
  out->mOBS_ACT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    695);
  return out;
}

static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ALL.mN = 695;
  out->mOBS_ALL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    695);
  return out;
}

static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_IL.mN = 695;
  out->mOBS_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 695);
  return out;
}

static NeDsMethodOutput *ds_output_dp_l(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_L.mN = 0;
  out->mDP_L.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_I.mN = 0;
  out->mDP_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_j(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_J.mN = 0;
  out->mDP_J.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_R.mN = 0;
  out->mDP_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX.mN = 0;
  out->mQX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU.mN = 0;
  out->mQU.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQT.mN = 0;
  out->mQT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_q1(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQ1.mN = 0;
  out->mQ1.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX_P.mNumCol = 325;
  out->mQX_P.mNumRow = 325;
  out->mQX_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    326);
  out->mQX_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU_P.mNumCol = 6;
  out->mQU_P.mNumRow = 325;
  out->mQU_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  out->mQU_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_qt_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQT_P.mNumCol = 1;
  out->mQT_P.mNumRow = 325;
  out->mQT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_q1_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQ1_P.mNumCol = 1;
  out->mQ1_P.mNumRow = 325;
  out->mQ1_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQ1_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVAR_TOL.mN = 325;
  out->mVAR_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    325);
  return out;
}

static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mEQ_TOL.mN = 325;
  out->mEQ_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    325);
  return out;
}

static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLV.mN = 325;
  out->mLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    325);
  return out;
}

static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLV.mN = 325;
  out->mSLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    325);
  return out;
}

static NeDsMethodOutput *ds_output_imin(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIMIN.mN = 325;
  out->mIMIN.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    325);
  return out;
}

static NeDsMethodOutput *ds_output_imax(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIMAX.mN = 325;
  out->mIMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    325);
  return out;
}

static void release_reference(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds;
  _ds = (_NeDynamicSystem *)ds;
  if (--_ds->mRefCnt == 0) {
    _ds->mAlloc.mFreeFcn(&_ds->mAlloc, _ds);
  }
}

static void get_reference(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds;
  _ds = (_NeDynamicSystem *)ds;
  ++_ds->mRefCnt;
}

static NeDynamicSystem *diagnostics(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds = (_NeDynamicSystem *)ds;
  ne_ds_get_reference(&_ds->mBase);
  return &_ds->mBase;
}

static void expand(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                   PmRealVector *out)
{
  (void)ds;
  memcpy(out->mX, in->mX.mX, sizeof(real_T)*out->mN);
}

NeDynamicSystem *AccumulatorModel_afee0aca_1_dae_ds(PmAllocator *allocator)
{
  NeDynamicSystem *ds;
  _NeDynamicSystem *_ds;
  static NeDsIoInfo input_info[6];
  static NeDsIoInfo output_info[7];

  /* allocate dynamic system data and extended data */
  _ds = (_NeDynamicSystem *)allocator->mCallocFcn( allocator, sizeof
    (_NeDynamicSystem), 1);
  _ds->mAlloc = *allocator;
  _ds->mRefCnt = 1;
  ds = &_ds->mBase;

  /* setup sizes */
  ds->mNumVariables = 325;
  ds->mNumDiscreteRealVariables = 0;
  ds->mNumDifferentialVariables = 90;
  ds->mNumEquations = 325;
  ds->mNumICResiduals = 30;
  ds->mNumModes = 175;
  ds->mNumMajorModes = 0;
  ds->mNumRealCache = 0;
  ds->mNumIntCache = 0;
  ds->mNumObservables = 695;
  ds->mNumObservableElements = 695;
  ds->mNumZcs = 175;
  ds->mNumAsserts = 475;
  ds->mNumAssertRanges = 640;
  ds->mNumParamAsserts = 0;
  ds->mNumParamAssertRanges = 0;
  ds->mNumInitialAsserts = 0;
  ds->mNumInitialAssertRanges = 0;
  ds->mNumRanges = 175;
  ds->mNumEquationRanges = 375;
  ds->mNumICRRanges = 30;
  ds->mNumFundamentalSamples = 0;
  ds->mNumDelays = 0;
  ds->mNumLogicalParameters = 0;
  ds->mNumIntegerParameters = 0;
  ds->mNumIndexParameters = 0;
  ds->mNumRealParameters = 0;
  ds->mNumLogicalDerivedParameters = 0;
  ds->mNumIntegerDerivedParameters = 0;
  ds->mNumIndexDerivedParameters = 0;
  ds->mNumRealDerivedParameters = 0;
  ds->mIsOutputLinear = TRUE;
  ds->mIsOutputSwitchedLinear = TRUE;

  /* setup ios */
  ds->mNumIo[NE_INPUT_IO_TYPE] = 6;
  input_info[0].mIdentifier = "Load.Controlled_Current_Source.iT";
  input_info[0].mM = 1;
  input_info[0].mN = 1;
  input_info[0].mName = "Load.Controlled_Current_Source.iT";
  input_info[0].mUnit = "A";
  input_info[1].mIdentifier = "Cells.Cell1.DischargeSig";
  input_info[1].mM = 1;
  input_info[1].mN = 1;
  input_info[1].mName = "Cells.Cell1.DischargeSig";
  input_info[1].mUnit = "V";
  input_info[2].mIdentifier = "Cells.Cell2.DischargeSig";
  input_info[2].mM = 1;
  input_info[2].mN = 1;
  input_info[2].mName = "Cells.Cell2.DischargeSig";
  input_info[2].mUnit = "V";
  input_info[3].mIdentifier = "Cells.Cell3.DischargeSig";
  input_info[3].mM = 1;
  input_info[3].mN = 1;
  input_info[3].mName = "Cells.Cell3.DischargeSig";
  input_info[3].mUnit = "V";
  input_info[4].mIdentifier = "Cells.Cell4.DischargeSig";
  input_info[4].mM = 1;
  input_info[4].mN = 1;
  input_info[4].mName = "Cells.Cell4.DischargeSig";
  input_info[4].mUnit = "V";
  input_info[5].mIdentifier = "Cells.Cell5.DischargeSig";
  input_info[5].mM = 1;
  input_info[5].mN = 1;
  input_info[5].mName = "Cells.Cell5.DischargeSig";
  input_info[5].mUnit = "V";
  ds->mIo[NE_INPUT_IO_TYPE] = input_info;
  ds->mNumIo[NE_OUTPUT_IO_TYPE] = 7;
  output_info[0].mIdentifier = "Cells.Cell1.VoltageSig";
  output_info[0].mM = 1;
  output_info[0].mN = 1;
  output_info[0].mName = "Cells.Cell1.VoltageSig";
  output_info[0].mUnit = "V";
  output_info[1].mIdentifier = "Cells.Cell2.VoltageSig";
  output_info[1].mM = 1;
  output_info[1].mN = 1;
  output_info[1].mName = "Cells.Cell2.VoltageSig";
  output_info[1].mUnit = "V";
  output_info[2].mIdentifier = "Cells.Cell3.VoltageSig";
  output_info[2].mM = 1;
  output_info[2].mN = 1;
  output_info[2].mName = "Cells.Cell3.VoltageSig";
  output_info[2].mUnit = "V";
  output_info[3].mIdentifier = "Cells.Cell4.VoltageSig";
  output_info[3].mM = 1;
  output_info[3].mN = 1;
  output_info[3].mName = "Cells.Cell4.VoltageSig";
  output_info[3].mUnit = "V";
  output_info[4].mIdentifier = "Cells.Cell5.VoltageSig";
  output_info[4].mM = 1;
  output_info[4].mN = 1;
  output_info[4].mName = "Cells.Cell5.VoltageSig";
  output_info[4].mUnit = "V";
  output_info[5].mIdentifier = "Current_Sensor.I";
  output_info[5].mM = 1;
  output_info[5].mN = 1;
  output_info[5].mName = "Current_Sensor.I";
  output_info[5].mUnit = "A";
  output_info[6].mIdentifier = "Voltage_Sensor.V";
  output_info[6].mM = 1;
  output_info[6].mN = 1;
  output_info[6].mName = "Voltage_Sensor.V";
  output_info[6].mUnit = "V";
  ds->mIo[NE_OUTPUT_IO_TYPE] = output_info;

  /* setup administration methods */
  ds->mReleaseReference = release_reference;
  ds->mGetReference = get_reference;
  ds->mDiagnosticsDsFcn = diagnostics;
  ds->mExpandFcn = expand;
  ds->mMethods[NE_DS_METHOD_M_P] = AccumulatorModel_afee0aca_1_ds_m_p;
  ds->mMakeOutput[NE_DS_METHOD_M_P] = ds_output_m_p;
  ds->mMethods[NE_DS_METHOD_M] = AccumulatorModel_afee0aca_1_ds_m;
  ds->mMakeOutput[NE_DS_METHOD_M] = ds_output_m;
  ds->mMethods[NE_DS_METHOD_VMM] = AccumulatorModel_afee0aca_1_ds_vmm;
  ds->mMakeOutput[NE_DS_METHOD_VMM] = ds_output_vmm;
  ds->mMethods[NE_DS_METHOD_DXM_P] = AccumulatorModel_afee0aca_1_ds_dxm_p;
  ds->mMakeOutput[NE_DS_METHOD_DXM_P] = ds_output_dxm_p;
  ds->mMethods[NE_DS_METHOD_DXM] = AccumulatorModel_afee0aca_1_ds_dxm;
  ds->mMakeOutput[NE_DS_METHOD_DXM] = ds_output_dxm;
  ds->mMethods[NE_DS_METHOD_DDM_P] = ds_ddm_p;
  ds->mMakeOutput[NE_DS_METHOD_DDM_P] = ds_output_ddm_p;
  ds->mMethods[NE_DS_METHOD_DDM] = ds_ddm;
  ds->mMakeOutput[NE_DS_METHOD_DDM] = ds_output_ddm;
  ds->mMethods[NE_DS_METHOD_DUM_P] = ds_dum_p;
  ds->mMakeOutput[NE_DS_METHOD_DUM_P] = ds_output_dum_p;
  ds->mMethods[NE_DS_METHOD_DUM] = ds_dum;
  ds->mMakeOutput[NE_DS_METHOD_DUM] = ds_output_dum;
  ds->mMethods[NE_DS_METHOD_DTM_P] = ds_dtm_p;
  ds->mMakeOutput[NE_DS_METHOD_DTM_P] = ds_output_dtm_p;
  ds->mMethods[NE_DS_METHOD_DTM] = ds_dtm;
  ds->mMakeOutput[NE_DS_METHOD_DTM] = ds_output_dtm;
  ds->mMethods[NE_DS_METHOD_A_P] = AccumulatorModel_afee0aca_1_ds_a_p;
  ds->mMakeOutput[NE_DS_METHOD_A_P] = ds_output_a_p;
  ds->mMethods[NE_DS_METHOD_A] = AccumulatorModel_afee0aca_1_ds_a;
  ds->mMakeOutput[NE_DS_METHOD_A] = ds_output_a;
  ds->mMethods[NE_DS_METHOD_B_P] = ds_b_p;
  ds->mMakeOutput[NE_DS_METHOD_B_P] = ds_output_b_p;
  ds->mMethods[NE_DS_METHOD_B] = ds_b;
  ds->mMakeOutput[NE_DS_METHOD_B] = ds_output_b;
  ds->mMethods[NE_DS_METHOD_C_P] = ds_c_p;
  ds->mMakeOutput[NE_DS_METHOD_C_P] = ds_output_c_p;
  ds->mMethods[NE_DS_METHOD_C] = ds_c;
  ds->mMakeOutput[NE_DS_METHOD_C] = ds_output_c;
  ds->mMethods[NE_DS_METHOD_F] = AccumulatorModel_afee0aca_1_ds_f;
  ds->mMakeOutput[NE_DS_METHOD_F] = ds_output_f;
  ds->mMethods[NE_DS_METHOD_VMF] = AccumulatorModel_afee0aca_1_ds_vmf;
  ds->mMakeOutput[NE_DS_METHOD_VMF] = ds_output_vmf;
  ds->mMethods[NE_DS_METHOD_VPF] = ds_vpf;
  ds->mMakeOutput[NE_DS_METHOD_VPF] = ds_output_vpf;
  ds->mMethods[NE_DS_METHOD_SLF] = ds_slf;
  ds->mMakeOutput[NE_DS_METHOD_SLF] = ds_output_slf;
  ds->mMethods[NE_DS_METHOD_SLF0] = ds_slf0;
  ds->mMakeOutput[NE_DS_METHOD_SLF0] = ds_output_slf0;
  ds->mMethods[NE_DS_METHOD_DXF_P] = AccumulatorModel_afee0aca_1_ds_dxf_p;
  ds->mMakeOutput[NE_DS_METHOD_DXF_P] = ds_output_dxf_p;
  ds->mMethods[NE_DS_METHOD_DXF] = AccumulatorModel_afee0aca_1_ds_dxf;
  ds->mMakeOutput[NE_DS_METHOD_DXF] = ds_output_dxf;
  ds->mMethods[NE_DS_METHOD_DUF_P] = ds_duf_p;
  ds->mMakeOutput[NE_DS_METHOD_DUF_P] = ds_output_duf_p;
  ds->mMethods[NE_DS_METHOD_DUF] = AccumulatorModel_afee0aca_1_ds_duf;
  ds->mMakeOutput[NE_DS_METHOD_DUF] = ds_output_duf;
  ds->mMethods[NE_DS_METHOD_DTF_P] = ds_dtf_p;
  ds->mMakeOutput[NE_DS_METHOD_DTF_P] = ds_output_dtf_p;
  ds->mMethods[NE_DS_METHOD_DTF] = ds_dtf;
  ds->mMakeOutput[NE_DS_METHOD_DTF] = ds_output_dtf;
  ds->mMethods[NE_DS_METHOD_DDF_P] = ds_ddf_p;
  ds->mMakeOutput[NE_DS_METHOD_DDF_P] = ds_output_ddf_p;
  ds->mMethods[NE_DS_METHOD_DDF] = ds_ddf;
  ds->mMakeOutput[NE_DS_METHOD_DDF] = ds_output_ddf;
  ds->mMethods[NE_DS_METHOD_DWF_P] = ds_dwf_p;
  ds->mMakeOutput[NE_DS_METHOD_DWF_P] = ds_output_dwf_p;
  ds->mMethods[NE_DS_METHOD_DWF] = ds_dwf;
  ds->mMakeOutput[NE_DS_METHOD_DWF] = ds_output_dwf;
  ds->mMethods[NE_DS_METHOD_TDUF_P] = AccumulatorModel_afee0aca_1_ds_tduf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUF_P] = ds_output_tduf_p;
  ds->mMethods[NE_DS_METHOD_TDXF_P] = AccumulatorModel_afee0aca_1_ds_tdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXF_P] = ds_output_tdxf_p;
  ds->mMethods[NE_DS_METHOD_DNF_P] = ds_dnf_p;
  ds->mMakeOutput[NE_DS_METHOD_DNF_P] = ds_output_dnf_p;
  ds->mMethods[NE_DS_METHOD_DNF] = ds_dnf;
  ds->mMakeOutput[NE_DS_METHOD_DNF] = ds_output_dnf;
  ds->mMethods[NE_DS_METHOD_DNF_V_X] = ds_dnf_v_x;
  ds->mMakeOutput[NE_DS_METHOD_DNF_V_X] = ds_output_dnf_v_x;
  ds->mMethods[NE_DS_METHOD_IC] = AccumulatorModel_afee0aca_1_ds_ic;
  ds->mMakeOutput[NE_DS_METHOD_IC] = ds_output_ic;
  ds->mMethods[NE_DS_METHOD_ICR] = ds_icr;
  ds->mMakeOutput[NE_DS_METHOD_ICR] = ds_output_icr;
  ds->mMethods[NE_DS_METHOD_ICR_IM] = ds_icr_im;
  ds->mMakeOutput[NE_DS_METHOD_ICR_IM] = ds_output_icr_im;
  ds->mMethods[NE_DS_METHOD_ICR_ID] = ds_icr_id;
  ds->mMakeOutput[NE_DS_METHOD_ICR_ID] = ds_output_icr_id;
  ds->mMethods[NE_DS_METHOD_ICR_IL] = ds_icr_il;
  ds->mMakeOutput[NE_DS_METHOD_ICR_IL] = ds_output_icr_il;
  ds->mMethods[NE_DS_METHOD_DXICR] = ds_dxicr;
  ds->mMakeOutput[NE_DS_METHOD_DXICR] = ds_output_dxicr;
  ds->mMethods[NE_DS_METHOD_DXICR_P] = ds_dxicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DXICR_P] = ds_output_dxicr_p;
  ds->mMethods[NE_DS_METHOD_DDICR] = ds_ddicr;
  ds->mMakeOutput[NE_DS_METHOD_DDICR] = ds_output_ddicr;
  ds->mMethods[NE_DS_METHOD_DDICR_P] = ds_ddicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DDICR_P] = ds_output_ddicr_p;
  ds->mMethods[NE_DS_METHOD_TDUICR_P] = ds_tduicr_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUICR_P] = ds_output_tduicr_p;
  ds->mMethods[NE_DS_METHOD_ICRM_P] = ds_icrm_p;
  ds->mMakeOutput[NE_DS_METHOD_ICRM_P] = ds_output_icrm_p;
  ds->mMethods[NE_DS_METHOD_ICRM] = ds_icrm;
  ds->mMakeOutput[NE_DS_METHOD_ICRM] = ds_output_icrm;
  ds->mMethods[NE_DS_METHOD_DXICRM_P] = ds_dxicrm_p;
  ds->mMakeOutput[NE_DS_METHOD_DXICRM_P] = ds_output_dxicrm_p;
  ds->mMethods[NE_DS_METHOD_DXICRM] = ds_dxicrm;
  ds->mMakeOutput[NE_DS_METHOD_DXICRM] = ds_output_dxicrm;
  ds->mMethods[NE_DS_METHOD_DDICRM_P] = ds_ddicrm_p;
  ds->mMakeOutput[NE_DS_METHOD_DDICRM_P] = ds_output_ddicrm_p;
  ds->mMethods[NE_DS_METHOD_DDICRM] = ds_ddicrm;
  ds->mMakeOutput[NE_DS_METHOD_DDICRM] = ds_output_ddicrm;
  ds->mMethods[NE_DS_METHOD_MDUY_P] = ds_mduy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDUY_P] = ds_output_mduy_p;
  ds->mMethods[NE_DS_METHOD_MDXY_P] = ds_mdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDXY_P] = ds_output_mdxy_p;
  ds->mMethods[NE_DS_METHOD_TDUY_P] = ds_tduy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUY_P] = ds_output_tduy_p;
  ds->mMethods[NE_DS_METHOD_TDXY_P] = AccumulatorModel_afee0aca_1_ds_tdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXY_P] = ds_output_tdxy_p;
  ds->mMethods[NE_DS_METHOD_Y] = ds_y;
  ds->mMakeOutput[NE_DS_METHOD_Y] = ds_output_y;
  ds->mMethods[NE_DS_METHOD_DXY_P] = AccumulatorModel_afee0aca_1_ds_dxy_p;
  ds->mMakeOutput[NE_DS_METHOD_DXY_P] = ds_output_dxy_p;
  ds->mMethods[NE_DS_METHOD_DXY] = ds_dxy;
  ds->mMakeOutput[NE_DS_METHOD_DXY] = ds_output_dxy;
  ds->mMethods[NE_DS_METHOD_DUY_P] = ds_duy_p;
  ds->mMakeOutput[NE_DS_METHOD_DUY_P] = ds_output_duy_p;
  ds->mMethods[NE_DS_METHOD_DUY] = ds_duy;
  ds->mMakeOutput[NE_DS_METHOD_DUY] = ds_output_duy;
  ds->mMethods[NE_DS_METHOD_DTY_P] = ds_dty_p;
  ds->mMakeOutput[NE_DS_METHOD_DTY_P] = ds_output_dty_p;
  ds->mMethods[NE_DS_METHOD_DTY] = ds_dty;
  ds->mMakeOutput[NE_DS_METHOD_DTY] = ds_output_dty;
  ds->mMethods[NE_DS_METHOD_MODE] = AccumulatorModel_afee0aca_1_ds_mode;
  ds->mMakeOutput[NE_DS_METHOD_MODE] = ds_output_mode;
  ds->mMethods[NE_DS_METHOD_ZC] = AccumulatorModel_afee0aca_1_ds_zc;
  ds->mMakeOutput[NE_DS_METHOD_ZC] = ds_output_zc;
  ds->mMethods[NE_DS_METHOD_CACHE_R] = ds_cache_r;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_R] = ds_output_cache_r;
  ds->mMethods[NE_DS_METHOD_CACHE_I] = ds_cache_i;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_I] = ds_output_cache_i;
  ds->mMethods[NE_DS_METHOD_UPDATE_R] = ds_update_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_R] = ds_output_update_r;
  ds->mMethods[NE_DS_METHOD_UPDATE_I] = ds_update_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_I] = ds_output_update_i;
  ds->mMethods[NE_DS_METHOD_UPDATE2_R] = ds_update2_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE2_R] = ds_output_update2_r;
  ds->mMethods[NE_DS_METHOD_UPDATE2_I] = ds_update2_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE2_I] = ds_output_update2_i;
  ds->mMethods[NE_DS_METHOD_LOCK_R] = ds_lock_r;
  ds->mMakeOutput[NE_DS_METHOD_LOCK_R] = ds_output_lock_r;
  ds->mMethods[NE_DS_METHOD_LOCK_I] = ds_lock_i;
  ds->mMakeOutput[NE_DS_METHOD_LOCK_I] = ds_output_lock_i;
  ds->mMethods[NE_DS_METHOD_LOCK2_R] = ds_lock2_r;
  ds->mMakeOutput[NE_DS_METHOD_LOCK2_R] = ds_output_lock2_r;
  ds->mMethods[NE_DS_METHOD_LOCK2_I] = ds_lock2_i;
  ds->mMakeOutput[NE_DS_METHOD_LOCK2_I] = ds_output_lock2_i;
  ds->mMethods[NE_DS_METHOD_SFO] = ds_sfo;
  ds->mMakeOutput[NE_DS_METHOD_SFO] = ds_output_sfo;
  ds->mMethods[NE_DS_METHOD_SFP] = ds_sfp;
  ds->mMakeOutput[NE_DS_METHOD_SFP] = ds_output_sfp;
  ds->mMethods[NE_DS_METHOD_INIT_R] = ds_init_r;
  ds->mMakeOutput[NE_DS_METHOD_INIT_R] = ds_output_init_r;
  ds->mMethods[NE_DS_METHOD_INIT_I] = ds_init_i;
  ds->mMakeOutput[NE_DS_METHOD_INIT_I] = ds_output_init_i;
  ds->mMethods[NE_DS_METHOD_LOG] = AccumulatorModel_afee0aca_1_ds_log;
  ds->mMakeOutput[NE_DS_METHOD_LOG] = ds_output_log;
  ds->mMethods[NE_DS_METHOD_ASSERT] = AccumulatorModel_afee0aca_1_ds_assert;
  ds->mMakeOutput[NE_DS_METHOD_ASSERT] = ds_output_assert;
  ds->mMethods[NE_DS_METHOD_PASSERT] = ds_passert;
  ds->mMakeOutput[NE_DS_METHOD_PASSERT] = ds_output_passert;
  ds->mMethods[NE_DS_METHOD_IASSERT] = ds_iassert;
  ds->mMakeOutput[NE_DS_METHOD_IASSERT] = ds_output_iassert;
  ds->mMethods[NE_DS_METHOD_DEL_T] = ds_del_t;
  ds->mMakeOutput[NE_DS_METHOD_DEL_T] = ds_output_del_t;
  ds->mMethods[NE_DS_METHOD_DEL_V] = ds_del_v;
  ds->mMakeOutput[NE_DS_METHOD_DEL_V] = ds_output_del_v;
  ds->mMethods[NE_DS_METHOD_DEL_V0] = ds_del_v0;
  ds->mMakeOutput[NE_DS_METHOD_DEL_V0] = ds_output_del_v0;
  ds->mMethods[NE_DS_METHOD_DEL_TMAX] = ds_del_tmax;
  ds->mMakeOutput[NE_DS_METHOD_DEL_TMAX] = ds_output_del_tmax;
  ds->mMethods[NE_DS_METHOD_DXDELT_P] = ds_dxdelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DXDELT_P] = ds_output_dxdelt_p;
  ds->mMethods[NE_DS_METHOD_DXDELT] = ds_dxdelt;
  ds->mMakeOutput[NE_DS_METHOD_DXDELT] = ds_output_dxdelt;
  ds->mMethods[NE_DS_METHOD_DUDELT_P] = ds_dudelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DUDELT_P] = ds_output_dudelt_p;
  ds->mMethods[NE_DS_METHOD_DUDELT] = ds_dudelt;
  ds->mMakeOutput[NE_DS_METHOD_DUDELT] = ds_output_dudelt;
  ds->mMethods[NE_DS_METHOD_DTDELT_P] = ds_dtdelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DTDELT_P] = ds_output_dtdelt_p;
  ds->mMethods[NE_DS_METHOD_DTDELT] = ds_dtdelt;
  ds->mMakeOutput[NE_DS_METHOD_DTDELT] = ds_output_dtdelt;
  ds->mMethods[NE_DS_METHOD_OBS_EXP] = AccumulatorModel_afee0aca_1_ds_obs_exp;
  ds->mMakeOutput[NE_DS_METHOD_OBS_EXP] = ds_output_obs_exp;
  ds->mMethods[NE_DS_METHOD_OBS_ACT] = AccumulatorModel_afee0aca_1_ds_obs_act;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ACT] = ds_output_obs_act;
  ds->mMethods[NE_DS_METHOD_OBS_ALL] = AccumulatorModel_afee0aca_1_ds_obs_all;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ALL] = ds_output_obs_all;
  ds->mMethods[NE_DS_METHOD_OBS_IL] = AccumulatorModel_afee0aca_1_ds_obs_il;
  ds->mMakeOutput[NE_DS_METHOD_OBS_IL] = ds_output_obs_il;
  ds->mMethods[NE_DS_METHOD_DP_L] = ds_dp_l;
  ds->mMakeOutput[NE_DS_METHOD_DP_L] = ds_output_dp_l;
  ds->mMethods[NE_DS_METHOD_DP_I] = ds_dp_i;
  ds->mMakeOutput[NE_DS_METHOD_DP_I] = ds_output_dp_i;
  ds->mMethods[NE_DS_METHOD_DP_J] = ds_dp_j;
  ds->mMakeOutput[NE_DS_METHOD_DP_J] = ds_output_dp_j;
  ds->mMethods[NE_DS_METHOD_DP_R] = ds_dp_r;
  ds->mMakeOutput[NE_DS_METHOD_DP_R] = ds_output_dp_r;
  ds->mMethods[NE_DS_METHOD_QX] = ds_qx;
  ds->mMakeOutput[NE_DS_METHOD_QX] = ds_output_qx;
  ds->mMethods[NE_DS_METHOD_QU] = ds_qu;
  ds->mMakeOutput[NE_DS_METHOD_QU] = ds_output_qu;
  ds->mMethods[NE_DS_METHOD_QT] = ds_qt;
  ds->mMakeOutput[NE_DS_METHOD_QT] = ds_output_qt;
  ds->mMethods[NE_DS_METHOD_Q1] = ds_q1;
  ds->mMakeOutput[NE_DS_METHOD_Q1] = ds_output_q1;
  ds->mMethods[NE_DS_METHOD_QX_P] = ds_qx_p;
  ds->mMakeOutput[NE_DS_METHOD_QX_P] = ds_output_qx_p;
  ds->mMethods[NE_DS_METHOD_QU_P] = ds_qu_p;
  ds->mMakeOutput[NE_DS_METHOD_QU_P] = ds_output_qu_p;
  ds->mMethods[NE_DS_METHOD_QT_P] = ds_qt_p;
  ds->mMakeOutput[NE_DS_METHOD_QT_P] = ds_output_qt_p;
  ds->mMethods[NE_DS_METHOD_Q1_P] = ds_q1_p;
  ds->mMakeOutput[NE_DS_METHOD_Q1_P] = ds_output_q1_p;
  ds->mMethods[NE_DS_METHOD_VAR_TOL] = ds_var_tol;
  ds->mMakeOutput[NE_DS_METHOD_VAR_TOL] = ds_output_var_tol;
  ds->mMethods[NE_DS_METHOD_EQ_TOL] = ds_eq_tol;
  ds->mMakeOutput[NE_DS_METHOD_EQ_TOL] = ds_output_eq_tol;
  ds->mMethods[NE_DS_METHOD_LV] = ds_lv;
  ds->mMakeOutput[NE_DS_METHOD_LV] = ds_output_lv;
  ds->mMethods[NE_DS_METHOD_SLV] = ds_slv;
  ds->mMakeOutput[NE_DS_METHOD_SLV] = ds_output_slv;
  ds->mMethods[NE_DS_METHOD_IMIN] = ds_imin;
  ds->mMakeOutput[NE_DS_METHOD_IMIN] = ds_output_imin;
  ds->mMethods[NE_DS_METHOD_IMAX] = ds_imax;
  ds->mMakeOutput[NE_DS_METHOD_IMAX] = ds_output_imax;

  /* equation data */
  ds->mEquationData = s_equation_data;

  /* icr data */
  ds->mICRData = s_icr_data;

  /* continuous variable data */
  ds->mVariableData = s_variable_data;

  /* discrete variable data */
  ds->mDiscreteData = s_discrete_data;

  /* observable data */
  ds->mObservableData = s_observable_data;

  /* major mode data */
  ds->mMajorModeData = s_major_mode_data;

  /* zc data */
  ds->mZCData = s_zc_data;

  /* ranges */
  ds->mRanges = s_range;

  /* assert data */
  ds->mAssertData = s_assert_data;

  /* assert ranges */
  ds->mAssertRanges = s_assert_range;

  /* param assert data */
  ds->mParamAssertData = s_param_assert_data;

  /* param assert ranges */
  ds->mParamAssertRanges = s_param_assert_range;

  /* initial assert data */
  ds->mInitialAssertData = s_initial_assert_data;

  /* initial assert ranges */
  ds->mInitialAssertRanges = s_initial_assert_range;

  /* equation ranges */
  ds->mEquationRanges = s_equation_range;

  /* icr ranges */
  ds->mICRRanges = s_icr_range;

  /* parameters */
  ds->mLogicalParameters = s_logical_parameter_data;
  ds->mIntegerParameters = s_integer_parameter_data;
  ds->mIndexParameters = s_index_parameter_data;
  ds->mRealParameters = s_real_parameter_data;

  /* constant tables */
  _ds->mTable0 = s_constant_table0;
  _ds->mTable1 = s_constant_table1;
  _ds->mTable2 = s_constant_table2;
  _ds->mTable3 = s_constant_table3;
  _ds->mTable4 = s_constant_table4;
  _ds->mTable5 = s_constant_table5;
  _ds->mTable6 = s_constant_table6;
  _ds->mTable7 = s_constant_table7;
  return (NeDynamicSystem *)_ds;
}

static int32_T ds_passert (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_iassert (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_del_v (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_del_v0 (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_del_tmax (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_del_t (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxdelt (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxdelt_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  out = t2->mDXDELT_P;
  out.mNumCol = 325UL;
  out.mNumRow = 0UL;
  for (b = 0; b < 326; b++) {
    out.mJc[b] = 0;
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dudelt (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dudelt_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUDELT_P;
  out.mNumCol = 6UL;
  out.mNumRow = 0UL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtdelt (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtdelt_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTDELT_P;
  out.mNumCol = 1UL;
  out.mNumRow = 0UL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_cache_r (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_init_r (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_update_r (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_lock_r (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_cache_i (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_init_i (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_update_i (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_lock_i (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_update2_r (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_lock2_r (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_update2_i (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_lock2_i (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_sfp (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_sfo (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_duf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUF_P;
  out.mNumCol = 6UL;
  out.mNumRow = 325UL;
  out.mJc[0] = 0;
  out.mJc[1] = 15;
  out.mJc[2] = 15;
  out.mJc[3] = 15;
  out.mJc[4] = 15;
  out.mJc[5] = 15;
  out.mJc[6] = 15;
  out.mIr[0] = 2;
  out.mIr[1] = 20;
  out.mIr[2] = 38;
  out.mIr[3] = 56;
  out.mIr[4] = 74;
  out.mIr[5] = 90;
  out.mIr[6] = 91;
  out.mIr[7] = 137;
  out.mIr[8] = 138;
  out.mIr[9] = 184;
  out.mIr[10] = 185;
  out.mIr[11] = 231;
  out.mIr[12] = 232;
  out.mIr[13] = 278;
  out.mIr[14] = 279;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTF_P;
  out.mNumCol = 1UL;
  out.mNumRow = 325UL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDDF_P;
  out.mNumCol = 0UL;
  out.mNumRow = 325UL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_b (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mB;
  out.mX[0] = -1.0;
  out.mX[1] = -1.0;
  out.mX[2] = -1.0;
  out.mX[3] = -1.0;
  out.mX[4] = -1.0;
  out.mX[5] = -1.0;
  out.mX[6] = -1.0;
  out.mX[7] = -1.0;
  out.mX[8] = -1.0;
  out.mX[9] = -1.0;
  out.mX[10] = -1.0;
  out.mX[11] = -1.0;
  out.mX[12] = -1.0;
  out.mX[13] = -1.0;
  out.mX[14] = -1.0;
  out.mX[15] = -1.0;
  out.mX[16] = -1.0;
  out.mX[17] = -1.0;
  out.mX[18] = -1.0;
  out.mX[19] = -1.0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_b_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mB_P;
  out.mNumCol = 6UL;
  out.mNumRow = 325UL;
  out.mJc[0] = 0;
  out.mJc[1] = 20;
  out.mJc[2] = 20;
  out.mJc[3] = 20;
  out.mJc[4] = 20;
  out.mJc[5] = 20;
  out.mJc[6] = 20;
  out.mIr[0] = 1;
  out.mIr[1] = 3;
  out.mIr[2] = 4;
  out.mIr[3] = 5;
  out.mIr[4] = 19;
  out.mIr[5] = 21;
  out.mIr[6] = 22;
  out.mIr[7] = 23;
  out.mIr[8] = 37;
  out.mIr[9] = 39;
  out.mIr[10] = 40;
  out.mIr[11] = 41;
  out.mIr[12] = 55;
  out.mIr[13] = 57;
  out.mIr[14] = 58;
  out.mIr[15] = 59;
  out.mIr[16] = 73;
  out.mIr[17] = 75;
  out.mIr[18] = 76;
  out.mIr[19] = 77;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_c (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_c_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mC_P;
  out.mNumCol = 1UL;
  out.mNumRow = 325UL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dwf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dwf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDWF_P;
  out.mNumCol = 0UL;
  out.mNumRow = 325UL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_slf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  boolean_T t0[325];
  int32_T b;
  (void)t1;
  out = t2->mSLF;
  for (b = 0; b < 325; b++) {
    t0[b] = false;
  }

  for (b = 0; b < 325; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dnf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dnf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDNF_P;
  out.mNumCol = 5UL;
  out.mNumRow = 325UL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dnf_v_x (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  boolean_T t0[325];
  int32_T b;
  (void)t1;
  out = t2->mDNF_V_X;
  for (b = 0; b < 325; b++) {
    t0[b] = true;
  }

  for (b = 0; b < 325; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_slf0 (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  boolean_T t0[325];
  int32_T b;
  (void)t1;
  out = t2->mSLF0;
  for (b = 0; b < 325; b++) {
    t0[b] = false;
  }

  for (b = 0; b < 325; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_vpf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  boolean_T t0[325];
  int32_T b;
  (void)t1;
  out = t2->mVPF;
  for (b = 0; b < 325; b++) {
    t0[b] = false;
  }

  for (b = 0; b < 325; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icr (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mICR;
  out.mX[0] = 0.0;
  out.mX[1] = 0.0;
  out.mX[2] = 0.0;
  out.mX[3] = 0.0;
  out.mX[4] = 0.0;
  out.mX[5] = 0.0;
  out.mX[6] = 0.0;
  out.mX[7] = 0.0;
  out.mX[8] = 0.0;
  out.mX[9] = 0.0;
  out.mX[10] = 0.0;
  out.mX[11] = 0.0;
  out.mX[12] = 0.0;
  out.mX[13] = 0.0;
  out.mX[14] = 0.0;
  out.mX[15] = 0.0;
  out.mX[16] = 0.0;
  out.mX[17] = 0.0;
  out.mX[18] = 0.0;
  out.mX[19] = 0.0;
  out.mX[20] = 0.0;
  out.mX[21] = 0.0;
  out.mX[22] = 0.0;
  out.mX[23] = 0.0;
  out.mX[24] = 0.0;
  out.mX[25] = 0.0;
  out.mX[26] = 0.0;
  out.mX[27] = 0.0;
  out.mX[28] = 0.0;
  out.mX[29] = 0.0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icr_im (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmIntVector out;
  (void)t1;
  out = t2->mICR_IM;
  out.mX[0] = 3;
  out.mX[1] = 3;
  out.mX[2] = 3;
  out.mX[3] = 3;
  out.mX[4] = 3;
  out.mX[5] = 3;
  out.mX[6] = 3;
  out.mX[7] = 3;
  out.mX[8] = 3;
  out.mX[9] = 3;
  out.mX[10] = 3;
  out.mX[11] = 3;
  out.mX[12] = 3;
  out.mX[13] = 3;
  out.mX[14] = 3;
  out.mX[15] = 3;
  out.mX[16] = 3;
  out.mX[17] = 3;
  out.mX[18] = 3;
  out.mX[19] = 3;
  out.mX[20] = 3;
  out.mX[21] = 3;
  out.mX[22] = 3;
  out.mX[23] = 3;
  out.mX[24] = 3;
  out.mX[25] = 3;
  out.mX[26] = 3;
  out.mX[27] = 3;
  out.mX[28] = 3;
  out.mX[29] = 3;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icr_id (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mICR_ID;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = false;
  out.mX[26] = false;
  out.mX[27] = false;
  out.mX[28] = false;
  out.mX[29] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icr_il (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mICR_IL;
  out.mX[0] = true;
  out.mX[1] = true;
  out.mX[2] = true;
  out.mX[3] = true;
  out.mX[4] = true;
  out.mX[5] = true;
  out.mX[6] = true;
  out.mX[7] = true;
  out.mX[8] = true;
  out.mX[9] = true;
  out.mX[10] = true;
  out.mX[11] = true;
  out.mX[12] = true;
  out.mX[13] = true;
  out.mX[14] = true;
  out.mX[15] = true;
  out.mX[16] = true;
  out.mX[17] = true;
  out.mX[18] = true;
  out.mX[19] = true;
  out.mX[20] = true;
  out.mX[21] = true;
  out.mX[22] = true;
  out.mX[23] = true;
  out.mX[24] = true;
  out.mX[25] = true;
  out.mX[26] = true;
  out.mX[27] = true;
  out.mX[28] = true;
  out.mX[29] = true;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxicr (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxicr_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  out = t2->mDXICR_P;
  out.mNumCol = 325UL;
  out.mNumRow = 30UL;
  for (b = 0; b < 326; b++) {
    out.mJc[b] = 0;
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddicr (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddicr_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDDICR_P;
  out.mNumCol = 0UL;
  out.mNumRow = 30UL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_tduicr_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDUICR_P;
  out.mNumCol = 6UL;
  out.mNumRow = 30UL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icrm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icrm_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  out = t2->mICRM_P;
  out.mNumCol = 325UL;
  out.mNumRow = 30UL;
  for (b = 0; b < 326; b++) {
    out.mJc[b] = 0;
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxicrm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxicrm_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  out = t2->mDXICRM_P;
  out.mNumCol = 325UL;
  out.mNumRow = 0UL;
  for (b = 0; b < 326; b++) {
    out.mJc[b] = 0;
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddicrm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddicrm_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDDICRM_P;
  out.mNumCol = 0UL;
  out.mNumRow = 0UL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_imin (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T t0[325];
  int32_T b;
  (void)t1;
  out = t2->mIMIN;
  for (b = 0; b < 325; b++) {
    t0[b] = -pmf_get_inf();
  }

  for (b = 0; b < 325; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_imax (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T t0[325];
  int32_T b;
  (void)t1;
  out = t2->mIMAX;
  for (b = 0; b < 325; b++) {
    t0[b] = pmf_get_inf();
  }

  for (b = 0; b < 325; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddm_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDDM_P;
  out.mNumCol = 0UL;
  out.mNumRow = 90UL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dum (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dum_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUM_P;
  out.mNumCol = 6UL;
  out.mNumRow = 90UL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtm_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTM_P;
  out.mNumCol = 1UL;
  out.mNumRow = 90UL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dp_l (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dp_i (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dp_j (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dp_r (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qx (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qu (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qt (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_q1 (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qx_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  out = t2->mQX_P;
  out.mNumCol = 325UL;
  out.mNumRow = 325UL;
  for (b = 0; b < 326; b++) {
    out.mJc[b] = 0;
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qu_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQU_P;
  out.mNumCol = 6UL;
  out.mNumRow = 325UL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qt_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQT_P;
  out.mNumCol = 1UL;
  out.mNumRow = 325UL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_q1_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQ1_P;
  out.mNumCol = 1UL;
  out.mNumRow = 325UL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_var_tol (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T t0[325];
  int32_T b;
  (void)t1;
  out = t2->mVAR_TOL;
  for (b = 0; b < 325; b++) {
    t0[b] = 0.001;
  }

  for (b = 0; b < 325; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_eq_tol (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T t0[325];
  int32_T b;
  (void)t1;
  out = t2->mEQ_TOL;
  for (b = 0; b < 325; b++) {
    t0[b] = 0.001;
  }

  for (b = 0; b < 325; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_lv (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  PmBoolVector out;
  boolean_T t0[325];
  int32_T b;
  (void)t1;
  out = t2->mLV;
  for (b = 0; b < 325; b++) {
    t0[b] = false;
  }

  for (b = 0; b < 325; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_slv (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  boolean_T t0[325];
  int32_T b;
  (void)t1;
  out = t2->mSLV;
  for (b = 0; b < 325; b++) {
    t0[b] = false;
  }

  for (b = 0; b < 325; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_y (const NeDynamicSystem *t0, const NeDynamicSystemInput *t8,
                     NeDsMethodOutput *t9)
{
  PmRealVector out;
  real_T X[325];
  int32_T b;
  real_T U_idx_0;
  (void)t0;
  U_idx_0 = t8->mU.mX[0];
  for (b = 0; b < 325; b++) {
    X[b] = t8->mX.mX[b];
  }

  out = t9->mY;
  out.mX[0] = -X[93UL] / -1.0;
  out.mX[1] = -(X[140UL] - X[93UL]) / -1.0;
  out.mX[2] = -(X[187UL] - X[140UL]) / -1.0;
  out.mX[3] = -(X[234UL] - X[187UL]) / -1.0;
  out.mX[4] = -(X[281UL] - X[234UL]) / -1.0;
  out.mX[5] = U_idx_0;
  out.mX[6] = -X[281UL] / -1.0;
  (void)t0;
  (void)t9;
  return 0;
}

static int32_T ds_dxy (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mDXY;
  out.mX[0] = 1.0;
  out.mX[1] = -1.0;
  out.mX[2] = 1.0;
  out.mX[3] = -1.0;
  out.mX[4] = 1.0;
  out.mX[5] = -1.0;
  out.mX[6] = 1.0;
  out.mX[7] = -1.0;
  out.mX[8] = 1.0;
  out.mX[9] = 1.0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_duy (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mDUY;
  out.mX[0] = 1.0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_duy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUY_P;
  out.mNumCol = 6UL;
  out.mNumRow = 7UL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 1;
  out.mJc[3] = 1;
  out.mJc[4] = 1;
  out.mJc[5] = 1;
  out.mJc[6] = 1;
  out.mIr[0] = 5;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_mduy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mMDUY_P;
  out.mNumCol = 6UL;
  out.mNumRow = 7UL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_mdxy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  out = t2->mMDXY_P;
  out.mNumCol = 325UL;
  out.mNumRow = 7UL;
  for (b = 0; b < 326; b++) {
    out.mJc[b] = 0;
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_tduy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDUY_P;
  out.mNumCol = 6UL;
  out.mNumRow = 7UL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 1;
  out.mJc[3] = 1;
  out.mJc[4] = 1;
  out.mJc[5] = 1;
  out.mJc[6] = 1;
  out.mIr[0] = 5;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dty (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dty_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTY_P;
  out.mNumCol = 1UL;
  out.mNumRow = 7UL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}
